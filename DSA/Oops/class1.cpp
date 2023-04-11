#include <iostream>
using namespace std;

class Animal{
private:
int weight;
public:
//properties
int age;
string name;
//default constructor
Animal(){
    this ->weight=0;
    this->age=0;
    this->name="";
    cout<<"constructor called"<<endl;
}
//parametarise
Animal(int age){

    this->age=age;
    cout<<"Parameterise constractor called"<<endl;
}
Animal(int age,int weight){
  
    this->weight=weight;
    this->age=age;
    cout<<"Parameterise constractor2 called"<<endl;
}
//copy constructor
Animal(Animal &obj){
    this->age=obj.age;
    this->weight=obj.weight;
    cout <<"I am in side copy constructor"<<endl;
}

//behaviour
void sleep(){
cout<<"sleeping"<<endl;
}

void run(){
cout<<"runing"<<endl;
}
int getWeight(){
return weight;
}
void setweight(int w){
this->weight=weight;}
void print(){
cout<<this->age<<" "<<this->weight<<" "<<
this->name<<" "<<endl;

}
~Animal(){
    cout<<"i am in destractor"<<endl;
}
};


int main(){
//object creation


//static
// Animal ramesh;
// ramesh.age=12;
// ramesh.name="Lion";
// cout << ramesh.age<<endl;
// cout<< ramesh.name;

// ramesh.run();

// ramesh.setweight(65);
// cout<<"weight "<<ramesh.getWeight()<<endl;
//Dynamic Memory
// Animal* suresh=new Animal;
// suresh->name="billi";
// suresh->sleep();
//obeject
Animal a;
a.age=20;
a.setweight(102);
a.name="babbar";
Animal b=a;
a.print();
b.print();
a.name[0]='G';
cout<<"a-> ";
a.print();
cout<<"b-> ";
b.print();
    return 0;
}