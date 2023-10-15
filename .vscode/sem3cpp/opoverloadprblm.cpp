// #include<iostream>
// using namespace std;
// class abc{
//     int x;
//     int y;
//     int z;
//     public:
//     abc(int a,int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     void display(){
//         cout<<x;
//         cout<<y;
//         cout<<z;
//     }
//     void operator-(){
//         x=-x;
//         y=-y;
//         z=-z;
//     }
// };
// int main(){
//     abc s(10,20,30);
//     cout<<"S:"<<endl;
//     s.display();
//     -s;
//     cout<<"S:"<<endl;
//     s.display();
//     return 0;

// }


// #include<iostream>
// using namespace std;
// class point{
//     int x,y;
//     public:
//     point(){
//         x=0;
//         y=0;
//     }
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void operator-();
//     void display(){
//         cout<<x<<"\t"<<y;
//     }

// };
// point point::operator-(){
//     x=-x;
//     y=-y;
// }
// int main(){
//     point o1(10,10);
//     -o1;
//     o1.display();
// }
// #include<iostream>
// using namespace std;
// class score{
//     private:
//     int val;
//     public:
//     score(){
//         val=0;
//     }
//     void operator++(){
//         val = val+1;
//     }
//     int show(){
//         return (val);
//     }
// };
// int main(){
//     score s1,s2;
//     cout<<"s1"<<s1.show();
//     cout<<"s2"<<s2.show();
//     ++s1;
//     ++s2;
//     cout<<"final s1:"<<s1.show();
//     cout<<"final s2:"<<s2.show();
//     return 0;

// }
/*binary operators a-b,a+b,.......a<=b,a==b*/
// #include<iostream>
// using namespace std;
// class sum{
//     public:
//     int b,a;
//     sum(){
//         b=50;
//     }
//     void set_data(){
//         cout<<"enter a:";
//         cin>>a;
//     }
//     int operator+(sum s1){
//         return(a+s1.b);
//     }
// };
// int main(){
//     int d;
//     sum s,t;
//     s.set_data();
//     d=s+t;
//     cout<<"SUM IS:"<<d;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     int x,y;
//     public:
//     complex(){
//         x=10;
//         y=20;
//     }
//     complex(int a,int b){
//         x=a;
//         y=b;
//     }
//     complex operator+(complex c){
//         complex temp;
//         temp.x=x+c.x;
//         temp.y=y+c.y;
//         return(temp);
//     }
//     void show(){
//         cout<<x<<"+i"<<y;
//     }
// };
// int main(){
//     complex C1(2,3),C2(4,5),C3;
//     C3=C1+C2;
//     C3.show();
//     return 0;
// }
#include <iostream>
using namespace std;

class Complex {
public:
    int a, b;


    Complex operator+(const Complex& other) {
        Complex result;
        result.a = this->a + other.a;
        result.b = this->b + other.b;
        return result;
    }
};


ostream& operator<<(ostream& os, const Complex& c) {
    os << c.a << "+i" << c.b;
    return os;
}

int main() {
    Complex c1, c2, c3;

    
    char plus, imaginary_i;
    cin >> c1.a >> plus >> imaginary_i >> c1.b;
    cin >> c2.a >> plus >> imaginary_i >> c2.b;

    c3 = c1 + c2;
    cout << c3 << endl;
    return 0;
}
