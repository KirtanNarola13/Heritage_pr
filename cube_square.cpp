#include<iostream>
using namespace std;

class User{
	public:
		int number;
		user_input(){
			cout << "Enter any number ";
			cin >> number;
		}
};
class Squ : public User{
	public:
		int squa;
		this->squa = number * number ;
		dispSqu(){
			cout << endl << "Square is :- " << squa << endl;
		}
};
class Cube : public User{
	public:
		int cube;
		this->cube = number * number * number;
		dispCube(){
			cout << endl << "Cube is :- " << cube << endl;
		}
};

int main (){
	Cube c;
	
	c.user_input();
	c.dispCube();
	
	return 0;
}
