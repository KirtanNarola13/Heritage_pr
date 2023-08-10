#include <iostream>
using namespace std;

class Mother{
  public:
    void getdata(){
      cout << "This massage from mother class...." << endl;
    }
};
class Douther : public Mother{
  public:
      void getData(){
      cout << "This massage from douther class..... " << endl;
        }
};

int main() {
    Douther d;
      d.getdata();
      d.getdata();
  return 0;
}