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

//     fout.open<<("capital.txt");
//     fout<<"Delhi"<<endl;
//     fout<<"Washington"<<endl;
//     fout<<"Londan"<<endl;
//     fout.close();

//     fin.open("country.txt");
//     while (fin)
//     {
//         fin.getline(s,n);
//         cout<<s<<endl;
//     }
//     fin.open("capital.txt");
//     while (fin)
//     {
//         cout<<s<<endl;
//     }
//     fin.close();
    
    
// }

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream of;
//     of.open("result.txt",ios::trunc);
//     of<<"I am LEGEND";
//     cout<<"Data Append";
//     of.close();
// }
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     char s[30];
//     ofstream fileout;
//     fstream file;
//     fileout.open("hello",ios::out);
//     fileout<<"hello world";
//     fileout.close();
//     file.open("hello",ios::in|ios::out);
//     cout<<file.tellg()<<endl;
//     cout<<file.tellp()<<endl;
//     file.seekp(6);
//     file.seekg(6);
//     cout<<file.tellg()<<endl;
//     cout<<file.tellp()<<endl;
//     file>>s;
//     cout<<s;
//     file.close();
// }
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream of("result.txt");
of<<"hello";
of.close();
cout<<"data saved\n";
}