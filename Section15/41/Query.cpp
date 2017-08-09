#include "Query_inheritance.h"
#include <iterator>
#include <algorithm>
using namespace std;



Query::Query(const std::string &s): q(new WordQuery(s)), use(new std::size_t(1)){ }

Query& Query::operator=(const Query &right) {
    ++*right.use;
    decr_use();
    q = right.q;
    use = right.use;
    return *this;
}


std::set<TextQuery::line_no> OrQuery::eval(const TextQuery& file) const {
    set<line_no> right = rhs.eval(file);
    set<line_no> left = lhs.eval(file);
    right.insert(left.begin(),left.end());
    return right;
}

std::set<TextQuery::line_no> AndQuery::eval(const TextQuery& file) const{
    set<line_no> right = rhs.eval(file), left = lhs.eval(file);
    set<line_no> ret_lines;
    set_intersection(left.begin(),left.end(),right.begin(),right.end(),inserter(ret_lines,ret_lines.begin()));
    return ret_lines;
}

std::set<TextQuery::line_no> NotQuery::eval(const TextQuery& file) const {
    set<line_no> has_val = query.eval(file);
    set<line_no> ret_lines;
    for(line_no n=0; n != file.size(); ++n ){
        if(has_val.find(n) == has_val.end()){
            ret_lines.insert(n);
        }
    }
    return ret_lines;
}





