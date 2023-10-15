// #include<iostream>
// using namespace std;
// class teacher{
//     int a=10;
//     protected:
//     int b=20;
//     public:
//     int c=30;
// };
// class student: public teacher{

// };
// int main(){
//     student s;
//     // cout<<s.a<<endl;
//     // cout<<s.b<<endl;
//     cout<<s.c<<endl;
//     return 0;

// }
/*ambigous error comng because we have two value of c*/
// #include<iostream>
// using namespace std;
// class teacher{
//     int a=10;
//     protected:
//     int b=20;
//     public:
//     int c=30;
// };
// class parent{
//     int a=20;
//     protected:
//     int b=50;
//     public:
//     int c=30;

// };
// class student:public teacher,public parent{

// };
// int main(){
//     student s;
//     // cout<<s.a<<endl;hy
//     // cout<<s.b<<endl;
//     cout<<s.c<<endl;
//     return 0;

// }


// #include<iostream>
// using namespace std;
// class teacher{
//     int a=10;
//     protected:
//     int b=20;
//     public:
//     int c=30;
// };
// class parent{
//     int a=20;
//     protected:
//     int b=50;
//     public:
//     int c=30;

// };
// class student:public teacher,public parent{

// };
// int main(){
//     student s;
//     // cout<<s.a<<endl;hy
//     // cout<<s.b<<endl;
//     cout<<s.parent::c<<endl;
//     return 0;

// }

#include<iostream>
using namespace std;
class student{
    public:
    string name;


};
class test : public student{
    public:
    string subject;
    float marks;
};
class result:public test{

};
int main(){
    result s;
    cout<<"enter detais:"<<endl;
    cout<<"Name:"<<endl;
    getline(cin,s.name);
    cout<<"subject:"<<endl;
    getline(cin,s.subject);
    cin>>s.marks;
    cout<S.marks<<endl;
    if (s.marks>50)
    {
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }
    

}