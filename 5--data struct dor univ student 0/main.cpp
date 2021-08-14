#include <iostream>

using namespace std;

struct students
{
   string name;
   int num;
    int age;
    string address;
    int phone;
    string nationality;

};


int main()
{
students stud[5];

    for (int i = 0 ; i<2;i++){


cout << "enter ur name = ";
cin >> stud[i].name;
cout << "--------------\n";
cout << "enter ur num = ";
cin >> stud[i].num;

cout << "enter ur age = ";
cin >> stud[i].age;

cout << "enter ur address = ";
cin >> stud[i].address;

cout << "enter ur phone = ";
cin >> stud[i].phone;
if (stud[i].phone==0){
    cout << "there is no phone number \n";}

cout << "enter ur nationality = ";
cin >> stud[i].nationality;
cout << "\n\n\n";
    }
for (int i=0;i<2;i++){

   cout << stud[i].name ;


}
    return 0;
}
