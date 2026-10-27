/*#include <iostream>
using namespace std;
class box
{
public:
    int x,y,z;
    void print_volume();
};
void box :: print_volume()
{
    cout << "Volume of this box is:"<<x*y*z<< " Cube-meters.";
}
int main()
{
    box ob;
    ob.x=10;
    ob.y=10;
    ob.z=10;
    ob.print_volume();
    return 0;
}*/
#include <iostream>
using namespace std;

class Box
{
    int x, y, z;

public:
    void get_data();
    void print_volume();
};

void Box::get_data()
{
    cout << "Enter the three sides of rectangular:";
    cin >> x >> y >> z;
}

void Box::print_volume()
{
    get_data(); // Call get_data to get user input
    cout << "Volume of this box: " << x * y * z << " cubic-meters." << endl;
}

int main()
{
    Box ob;
    ob.print_volume();
    return 0;
}












