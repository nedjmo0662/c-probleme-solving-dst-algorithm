#include<iostream>
#include <string>
//this is a program wich you enter a input like Success == )())()) if the char is duplicated it will return ) else (

std::string duplicate_encoder( std::string word){

  int n = word.size();
  char ch[15];

  for (int i = 0 ; i < n; i++){

 ch[i] = '(';

  }

    for (int i = 0 ; i < n; i++){

    for (int j=(i+1); j<n ; j++){

             if  (word[i]==word[j] )
                {

            ch[i]=')';
            ch[j]=')';

                 }


 else if( word[i]>=char(65)&& word[i]<=char(90)&& word[i]==word[j]-32|| word[i]>=char(97)&& word[i]<=char(122)&& word[i]==word[j]+32) //|| word[i]==word[j]+32 )
         {

 ch[i]=')';
            ch[j]=')';

           }

    }
    }

for (int i = 0 ; i < n; i++){

  word[i]=ch[i];

  }

  return word;

}
int main()
{

std::cout<<duplicate_encoder("(( @");



    return 0;

}




















/*
std ::string disemvowel(std::string str){

    for(auto letter : "aeiuoAIEUO"){
 str.erase(std::remove(str.begin(), str.end(),letter ),str.end()); //remove A from

         }

       return  str;
}


int main()
{
    int i =0;
    for(auto mohi : "jhjhjhjhjh"){


        std::cout<<i;
        i++;

    }

//auto mohi = "nedjmou";




   std::cout << disemvowel("this bitch");
//std::cout<<"\n"<< mohi;

    return 0;

}*/
