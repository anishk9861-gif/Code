#include <bits/stdc++.h>
using namespace std;
int main(){
    //vector<data type> name

    vector<int> v1; //empty vector size = 0 
    //vector<int> v2 = {1,2,3,4,5};
    vector<int> v3(10); //10 size garbage values
    vector<int> v4(10,7);

    ///capacity aur size

    vector<int> v2 = {1,2,3,4,5};  //lets say our capacity is 5 and size = 5
   cout<<v2.capacity()<<endl;
    for(int i = 0  ; i<(int)v2.size();i++){
        cout<<v2[i]<<" ";
}
cout<<endl;

v2.push_back(6);    //pushback adds a new value at the last
v2.push_back(7);
v2.push_back(8);
v2.push_back(9);

cout<<v2.capacity()<<endl;
for(int i = 0;i<(int)v2.size();i++){
    cout<<v2[i]<<" ";
}


//.clear();
v2.clear();
cout<<endl<<v2.size()<<endl;
for(int i = 0;i<(int)v2.size();i++){
    cout<<v2[i]<<" ";
}

cout<<endl<<v2.capacity();
}

