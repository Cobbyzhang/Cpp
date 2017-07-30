#include "TextQuery.h"
#include <iostream>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr == 1)?word:word + ending;
}

ifstream& open_file(ifstream &in, const string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

void print_results(const set<TextQuery::line_no>& locs, const string& sought, const TextQuery& file)
{
    cout << "\n \"" << sought << "\" occurs " << locs.size() << " " << make_plural(locs.size(),"time","s") << endl;
    for(set<TextQuery::line_no>::const_iterator s_iter = locs.begin(); s_iter!=locs.end(); ++s_iter)
    {
        cout << "\t(line " << (*s_iter) + 1 << ")" 
             << file.text_line(*s_iter) << endl;
    }
}


int main(int argc, char** argv)
{
    ifstream infile;
    if(argc < 2 || !open_file(infile,argv[1])){
        cerr << "No input file!" << endl;
        return EXIT_FAILURE;
    }
    TextQuery tq;
    tq.read_file(infile);
    while(true){
        cout << "enter a word to look for, or q/Q to quit: " << endl;
        string s;
        cin >> s;
        if(!cin || s == "q" || s == "Q") break;
        set<TextQuery::line_no> locs = tq.run_query(s);
        print_results(locs, s, tq);
    }
    return 0;
}

