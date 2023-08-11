#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;

public:
    void set_value(string animal_name, int animal_age) {
        name = animal_name;
        age = animal_age;
    }
};

class Zebra : public Animal {
public:
    void display_info() {
   		cout << "Zebra Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin : public Animal {
public:
    void display_info() {
       cout << "Dolphin Information:" << endl;
       cout << "Name: " << name << endl;
       cout << "Age: " << age << " years" << endl;
       cout << "Place of Origin: Oceans" << endl;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    z.set_value("Stripes", 5);
    d.set_value("Flipper", 10);

    z.display_info();
    cout << endl;
    d.display_info();

    return 0;
}
