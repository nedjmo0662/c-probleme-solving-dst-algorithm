#include <iostream>
#include <string>

using namespace std;
/*string password () {
    string pass;
cin >> pass;
return pass;
}*/
int main()
{
    string password[2]={"nedjmo","mohi"};
    string confirmpassword[2];
    string signin[2];
    string signin1[2];
    cout << "DID YOU HAVE AN ACCOUNT ? WRITE (1) IF YES , if NOT WRITE (0) ? : ";
    bool ansewr;
    cin >> ansewr;
    if(ansewr==0){
   cout << "ENTER A PASSWORD :" ;
 cin >> password[0];

    cout << "\n\nCONFIRM YOUR PASSWORD :";
    cin >> confirmpassword[0];
    while(password[0]!=confirmpassword[0]){
     cout << "YOUR CONFIRM PASSWORD ARE NOT EQUAL TO YOUR PASSWORD,TRY AGAIN\n";
     cout << "rewrite your password :";
     cin >> password[0] ;
     cout << "\nconfirm your password :";
     cin >> confirmpassword[0];
    }
        cout <<"enter your password in order of sign in :";

        cin >> signin[0];
        while  (signin[0]!=password[0]){
          cout <<  "your password is wrong,try again \n";
          cin >> signin[0];
        }
        cout << "your password is right\n\n";
        }
        else if (ansewr==1){
  cout << "enter a password =";

cin >> signin1[0];

 while(signin1[0]!=password[0]) {

 cout << "you are wrong\n";

}
cout << "you are in\n";
        }

         cout << "enter a numbers =";
         int num1;
         int num2;
         cin >> num1 >> num2;
         cout << num1+num2 << "\n" << num1*num2 << "\n " << num1/num2;




    return 0;
}
