#include <iostream>
using namespace std ;

int main()
{
int n,b ;
printf("sabon : ");
scanf("%d",&n);
int total_s = n*27;
printf("total sabon : %d",total_s);
printf("\njavel : ");
scanf("%d",&b);
int total_j = b*10;
printf("total jafel:%d",total_j);
int total_klch = total_j + total_s ;
printf("\ntotal sel3a : %d",total_klch);

return 0 ;
}