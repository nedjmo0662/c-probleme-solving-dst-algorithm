#include <iostream>
#include <vector>

using namespace std;

int  prime_m (int x){

    int r=x;

    bool prime = true;

    for(int i=2; i<x; i++){
      if (x%i==0){

        prime = false;

   }
}

if (prime==true){
     return x;
}
else {
   return prime_m(x+1);

}

}
//class kprimes{

//public:

/*void dotest(int k, long long start, long long nd, std::vector<long long> jojo)
      {
        int a=0;
   int b=0;
  for (int i=start; i<=nd ; i++){
    b=0;
    a=i;

    while (a>1){
    if(a%2==0){
      a=a/2;

    }
    else if(a%3==0){

      a=a/3;

    }
    else {
      a=a/a;
      }
      b++;

    }

  if(b==k){
   jojo.push_back(i);

    }


    }
cout << jojo;
  }

//}ne;*/
int main()
{
   // cout<<prime_m(2)<< endl;;

int k=5;
 long long start=500;
 long long nd=600;

       int a;
       int m=2;
   int b;

 vector<long long> jojo;

  for (int i=start; i<=nd ; i++){

    a=i;
  b=0;
    while (a>1){


if (a%3==0){

   a=a/3;
}
else if (a%5==0){


   a=a/5;

}
else if (a%7==0){

   a=a/7;


}
/*else if(b==(k-1)){

    a=a/a;
}

    else {
         m++;
     // a=a/a;

      }

  b++;
 m=2;

    }
*/
  if(b==k){
   jojo.push_back(i);

    }

    }
jojo.shrink_to_fit();
cout << "size" << jojo.size()<< endl;


    for (int i=0; i<jojo.size(); i++){

        cout << jojo[i]<< endl;
    }


}

    return 0;
}
