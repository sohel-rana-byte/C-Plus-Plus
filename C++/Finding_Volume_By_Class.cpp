#include <iostream>
using namespace std;
class box
{
public:
    int x,y,z;

    int print_volume()
    {

        cout << "Volume of this box is:"<< x*y*z << " Cube-meters."<<endl;
    }
};
int main()
{
    box ob1,ob2;
    ob1.x=10;
    ob1.y=20;
    ob1.z=10;
    ob1.print_volume();
}
