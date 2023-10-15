/*program to initialize an array to zero using loop*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n[10];
//     int i;
//     for(i=0; i<10; i++){
//         n[i]=0;
//     }
//     cout<<"element"<<"\tValue"<<endl;
//     for(int i=0; i<10; i++){
//         cout<<i<<"\t"<<n[i];
        
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n[10];
    for(int i=0; i<10; i++){
        n[i]=0;
    }
    cout<<"element"<<"\tvalue"<<endl;
    for(int i=0; i<10; i++){
        cout<<i<<"\t"<<n[i];
    }
}