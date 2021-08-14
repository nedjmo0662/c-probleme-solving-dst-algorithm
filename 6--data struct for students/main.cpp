#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct date {
int year;
int month;
int day;

};
struct students {
string name;
int num;
int age;
string address;
int phone;
string nationality;

date birthday;
};

int main()
{

   students stud[5];

    for(int i=0 ; i<4;i++){

     stud[i].num=i+1;
     cout <<"STUDENT NUMBER =" <<i+1<<endl;
     cout << "------------\n\n";

    cout << "STUDENT NAME =";
    cin >>stud[i].name;

     cout << "STUDENT AGE =";
    cin >> stud[i].age;
cout << "date of birth=";
    cin >> stud[i].birthday.year >>stud[i].birthday.month>>stud[i].birthday.day;

      cout << "STUDENT PHONE =";
   cin >> stud[i].phone;

      cout << "STUDENT ADDRESS =";
     cin >> stud[i].address;

      cout << "STUDENT NATIONALITY =";
    cin >> stud[i].nationality;



system("cls");

    }

   for(int i=0; i<4 ;i++){

    cout << i + 1 <<"\n\n";

    cout << stud[i].name << endl;
    cout << stud[i].age << endl;
    cout << stud[i].birthday.year << "\\" << stud[i].birthday.month << "\\" << stud[i].birthday.day << endl;
    cout << stud[i].phone << endl;
    cout << stud[i].address << endl;
    cout << stud[i].nationality << endl<<endl;




   }



    return 0;
}
