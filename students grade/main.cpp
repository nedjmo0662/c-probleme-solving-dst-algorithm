#include <iostream>
#include <string>
using namespace std;

int main()
{
    string grade1[2]={"wlex" , "aouzen"};
     string grade2[2]={ "zeineb","bob"};
      string grade3[2]={"jack" , "meri"};
       string grade4[2]={"lyo" , "say"};
        int order;
    string order2;
 string order3;
  string order4;
   string order5;
       /*int i1;
       if(order2=="whos student that enrolled in this school"){
            while(i<2){
        cout << grade1[i] << "  ";


       }*/
       cout << "their is 4 grade enter the grade :";
        cin >> order;

      int i=0;
      int j =0;
while(j<2){
       //while(i<2){
       if(order==1){
            if(grade1[j][0]>grade1[j+1][0])
            {
                string re=grade1[j];
                grade1[j]=grade1[j+1];
                 grade1[j+1]=re;
        }
        cout << "we have only :";
        while(i<2){

        cout << grade1[j]<< endl ;

          i++;
          j++;
       }

       }

         if(order==2){
            if(grade2[j][0]>grade2[j+1][0])
            {
                string re=grade2[j];
                grade2[j]=grade2[j+1];
                 grade2[j+1]=re;
        }
        cout << "we have only :";
        while(i<2){
        cout << grade2[j]<< endl ;
        i++;
        j++;
       }
       }
        if(order==3){
            if(grade3[j][0]>grade3[j+1][0])
            {
                string re=grade3[j];
                grade3[j]=grade3[j+1];
                 grade3[j+1]=re;
        }
        cout << "we have only :";
        while(i<2){
        cout << grade3[j]<< endl ;
        i++;
        j++;
       }
       }
        if(order==4){
            if(grade4[j][0]>grade4[j+1][0])
            {
                string re=grade4[j];
                grade4[j]=grade4[j+1];
                 grade4[j+1]=re;
        }
        cout << "we have only :";
        while(i<2){
        cout << grade4[j]<< endl ;
        i++;
        j++;
       }
       }
       else {
        cout << "error\n";
j+=2;
       }
       }
  j=0;
   cin >> order2;

       if(order2=="whos"){
            while(j<2){
        cout << grade1[j] << "  ";
        j++;
            }
            cout << "\n";
            j=0;
    while(j<2) {
        cout << grade2[j]<< "  ";
        j++;
    }
    cout << "\n";
    j=0;
    while(j<2){
         cout << grade3[j]<< "  ";
         j++;
    }
    cout << "\n";
    j=0;
    while(j<2){
          cout << grade4[j]<< "  ";

          j++;
       }

       }

       if(order3=="add" && order5=="grade1")
       {
         grade1[3]=order4;

       }
       cout << grade1[3];
    return 0;
}
