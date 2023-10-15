// #include<iostream>
// using namespace std;
// class M{
//     protected:
//     int m;
//     public:
//     void get_m(int);
// };
// class N{
//     protected:
//     int n;
//     public:
//     void get_n(int);
// };
// class P:public M,public N{
//     public:
//     void display(void);
// };
// void M::get_m(int x){
//     m=x;
// }
// void N::get_n(int y){
//     n=y;
// }
// void P::display(void){
//     cout<<"m="<<m<<endl;
//     cout<<"n="<<n<<endl;
//     cout<<"m*n="<<m*n<<endl;
// }
// int main(){
//     P p;
//     p.get_m(10);
//     p.get_n(20);
//     p.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student
// {
// protected:
//     int roll_no;

// public:
//     void get_no(int);
//     void put_no(void);
// };

// void student::get_no(int a)
// {
//     roll_no = a;
// }

// void student::put_no()
// {
//     cout << "Roll number is: " << roll_no << endl;
// }

// class test : public student
// {
// protected:
//     float sub1, sub2;

// public:
//     void get_marks(float, float);
//     void put_marks(void);
// };

// void test::get_marks(float x, float y)
// {
//     sub1 = x;
//     sub2 = y;
// }

// void test::put_marks()
// {
//     cout << "Marks in sub1: " << sub1 << endl;
//     cout << "Marks in sub2: " << sub2 << endl;
// }

// class result : public test
// {
//     float total;

// public:
//     void calculate_total();
//     void display(void);
// };

// void result::calculate_total()
// {
//     total = sub1 + sub2;
// }

// void result::display()
// {
//     cout << "Roll number: " << roll_no << endl;
//     cout << "Marks in sub1: " << sub1 << endl;
//     cout << "Marks in sub2: " << sub2 << endl;
//     cout << "Total marks: " << total << endl;
// }

// int main()
// {
//     result r;
//     r.get_no(1);
//     r.get_marks(90.5, 85.0);
//     r.calculate_total();
//     r.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class M{
//     protected:
//     int x;
//     public:
//     void set(int a){
//         x=a;
//     }
// };
// class N:public M{
//     public:
//     void display(){
//         cout<<"\n x:"<<x<<"accessed in derived class N"<<endl;
//     }
// };
// class O:public M{
//     public:
//     void display(){
//         cout<<"\n x:"<<x<<"accessed in derived class O"<<endl;
//     }
// };
// int main(){
//     N obj;
//     O obj2;
//     obj.set(12);
//     obj.display();
//     obj2.set(19);
//     obj2.display();
//     return 0;

// }


#include<iostream>
using namespace std;
class B1{
    public:
    void show_data(){
        cout<<"in base class1"<<endl;
    }
};
class B2{
    public:
    void show_data(){
        cout<<"in the base class2"<<endl;
    }
};
class D:public B1,public B2{
    public:
    void display(){
        B1::show_data();
        B2::show_data();
    }
};
int main(){
    D obj;
    obj.B1::show_data();
    obj.B2::show_data();
    obj.display();
}