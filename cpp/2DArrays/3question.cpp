//WAP to store roll number and marks obtained by 4 students side by side in a matrix.

#include <iostream>
using namespace std;
int main(){
   int arr[4][2] = {{ 2,67},{4,54},{12,99},{10,87}};
   
cout<<"rollno"<<" "<<"marks"<<endl;

   for( int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        cout<<arr[i][j]<<"      ";
    }

    cout<<endl;
   }

}





