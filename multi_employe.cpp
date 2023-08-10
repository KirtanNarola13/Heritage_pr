#include<iostream>
using namespace std;

class A{
    public:
    int id;
    string name;
    string role;
    int salary;
    int experiance;
    string com_name;
    string address;
    string email;
    int contact;
    
    public:
    void setA(){
        cout << "Enter Id : ";
        cin >> this->id;
        cout << "Enter Name : ";
        cin >> this->name;
        cout << "Enter Role : ";
        cin >> this->role;
    }
};
class B : public A{
    public:
    void setB(){
        cout << "Enter salary : ";
        cin >> salary;
        cout << "Enter Experiance : ";
        cin >> experiance;
    }
};
class C : public B{
    public:
    void setC(){
        cout << "Enter Company Name : ";
        cin >> com_name;
        cout << "Enter Address : ";
        cin >> address;
    }
};
class D : public C{
    public:
    void setD(){
        cout << "Enter Email : ";
        cin >> email;
        cout << "Enter contact : ";
        cin >> contact;
    }
    void getData(){
        cout << "Name :- " << name << endl;
        cout << "Id :- " << id << endl;
        cout << "Role :- " << role << endl;
        cout << "Salary :- " << salary << endl;
        cout << "Experiance :- " << experiance << endl;
        cout << "Company name :- " << com_name << endl;
        cout << "Address :- " << address << endl;
        cout << "Email :- " << email << endl;
        cout << "Contact :- " << contact << endl;
    }
};

int main (){
    D d;
    d.setA();
    d.setB();
    d.setC();
    d.setD();
    d.getData();
    
    return 0;
}