#include "TextQuery.h"
#include <stdexcept>
#include <sstream>
#include <cctype>
using namespace std;

void TextQuery::store_file(ifstream& is){
    string textlines;
    while(getline(is,textlines))
        lines_of_text.push_back(textlines);
}

set<TextQuery::line_no> TextQuery::run_query(const string& query_word) const
{
    map<string, set<line_no> >::const_iterator m_iter = word_map.find(query_word);
    if(m_iter != word_map.end())
        return m_iter->second;
    return set<line_no>();
}

string TextQuery::text_line(TextQuery::line_no line) const
{
    if(line < lines_of_text.size())
        return lines_of_text[line];
    throw std::out_of_range("The line number is out of range!");
}

void TextQuery::build_map()
{
    for(line_no v_no=0;v_no != lines_of_text.size(); ++v_no){
        istringstream line(lines_of_text[v_no]);
        string word;
        while(line >> word){
            for(string::size_type ss=0; ss!=word.size(); ++ss)
                word[ss] = tolower(word[ss]);
            word_map[word].insert(v_no);
        }
    }
}




