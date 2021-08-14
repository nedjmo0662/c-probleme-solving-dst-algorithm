#include <iostream>

using namespace std;


class car {
private:
    int model;
    string maker;
    string colore;

public:
    void set_model(int m){
       model = m;

    }
    int get_model(){

      return model;

    }




};
int main()
{
  car bmw;
  bmw.set_model(2019);
  cout<< bmw.get_model();

    return 0;
}
