#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int h,m,s,a,err;
    err=a=0;
    while (err==0)
    {
        cout << " enter the hour :\n";
        cin >> h;

        cout << " enter the minutes :\n";
         cin >> m;

        cout << " enter the seconds :\n";
        cin >> s;
        if(h<24&&m<60&&s<60)

            err++;

        else

            system("cls");

    }
    while (a==0){
            system("cls");
      cout <<h<<":" << m << ":" << s << endl;
Sleep(1000);
       s++;
    if (s>59){
        s=00;
        m++;
    }
     if (m>59){
        m=00;
        h++;
     }
       if (h>23){
        h=00;
       }



    }
    return 0;
}
