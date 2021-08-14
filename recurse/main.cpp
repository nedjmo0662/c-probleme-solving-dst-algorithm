#include <iostream>

using namespace std;


int ned(int a){
int r=a;
if(a>1){

r=r+ned(a-1);
}


return r;
}




int main()
{

cout << ned(4);

    return 0;

}
