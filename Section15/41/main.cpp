#include "TextQuery.h"
#include "Query_inheritance.h"
#include <iostream>
using namespace std;


string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr == 1)?word:word + ending;
}

void print_results(const set<TextQuery::line_no>& locs,const Query& q, const TextQuery& tq)
{
    cout << "Executed Query for: ";
    q.display(cout) << endl << "Match occurs " << locs.size() << " " 
                    << make_plural(locs.size(),"times","s") << endl;
    for(set<TextQuery::line_no>::const_iterator s_iter = locs.begin(); s_iter!=locs.end(); ++s_iter)
    {
        cout << "\t(line " << (*s_iter) + 1 << ")" 
             << tq.text_line(*s_iter) << endl;
    }
}

ifstream& open_file(ifstream &in, const string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
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
    Query q = Query("fiery") & Query("bird") | Query("wind");
    set<TextQuery::line_no> locs = q.eval(tq);
    print_results(locs,q,tq);
}
