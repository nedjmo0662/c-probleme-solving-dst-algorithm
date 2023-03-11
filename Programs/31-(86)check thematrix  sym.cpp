#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int mat[3][3],mat2[3][3];
int r=0;
cout << "enet the number of the matrix:\n";
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){

cin >> mat[i][j];

}
}
cout << "the shap of the matrix:\n\n";
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){

cout << mat[i][j] << " ";

}
cout << endl;
}
cout << "transpose of the given matrix:\n\n";
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){

mat2[j][i]=mat[j][i];

cout << mat2[j][i]<<" ";
if(mat2[j][i]==mat[i][j]){
r+=1;
}

}
cout << endl;
}
if(r==9){
cout << "the matrix it's symmetric";
}
else {
cout << "the matrix is not symmetric";
}

    return 0;
    
}