// #include<iostream>
// using namespace std;
// class Engine{
//     public:
//     void start(){
//         cout<<"Car Start";
//     }
// };
// class Car{
//     public:
//     Car() : engine(new Engine()){}
//         void startCar(){
//             engine->satrt();
//         }
//         private:
//         Engine* engine;
//     };
//     int main(){
//         Car car;
//         car.startCar;
//     }
/*abbrivation is a weak relationship and composition is a strong relationship*/
#include<iostream>
using namespace std;
class Address{
    public:
    Address(string street,string city, string stste,string zip):street(street),city(city),state(state),zip(zip){}
    private:
    string street;
    string city;
    string state;
    string zip;
};
class person{
    public:
    person(string name):name(name),address(nullptr){}
    void setAddress(Address* address){
        this->address=address;
    }
    private:
    string name;
    Address* address;
};
int main(){
    Address* address=new Address("123 Main st.","Anytown","CA","12345");
    Person person("john DOe");
    person.setAddress(address);
}