#include <iostream>

using namespace std;

struct P{
    int x, y;

    bool operator<(const P &p){
        if(x!=p.x) return x<p.x;
        else return y<p.y;
    }

};
int msain()
{
    P n,m;
    n.x=2;
    n.y=3;
     m.x=1;
    m.y=4;

    cout<<(n<m);

    return 0;
}
