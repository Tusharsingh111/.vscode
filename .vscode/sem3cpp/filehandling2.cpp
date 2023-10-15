// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     string s;
//     ofstream of("D://result.txt");
//     of<<"hello world";
//     of.close();
//     ifstream inf("result.txt");
//     getline(inf,s);
//     cout<<s;
//     inf.close();
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     const int n=80;
//     char s[n];
//     ofstream fout;
//     ifstream fin;
//     fout.open("country.txt");
//     fout<<"India"<<endl;
//     fout<<"USA"<<endl;
//     fout<<"UK"<<endl;
//     fout.close();
//     fout.open("capital.txt");
//     fout<<"Delhi"<<endl;
//     fout<<"Washington"<<endl;
//     fout<<"London"<<endl;
//     fout.close();
//     fin.open("country.txt");
//     while (fin)
//     {
//         fin.getline(s,n);
//         cout<<s<<endl;
//     }
//     fin.close();
//     fin.open("capital.txt");
//     while (fin)
//     {
//         fin.getline(s,n);
//         cout<<s<<endl;
//     }
//     fin.close();
    
    
// }
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    ofstream of;
    of.open("tushar.txt",ios::app);
    of<<"I am from Haryana";
    of.close();
    ifstream inf("tushar.txt");
    getline(inf,s);
    cout<<s;
    inf.close();
}