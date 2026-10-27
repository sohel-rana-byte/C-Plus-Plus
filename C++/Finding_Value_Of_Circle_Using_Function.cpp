/*#include <iostream>
using namespace std;
float area_circle(float x)
{
   float area=3.1416*x*x;

    return area;
}
int main()
{
    float r;
    cout << "Enter the radius of the circle:";
    cin>>r;
    float result=area_circle(r);
    cout << "Area of this circle is:"<< result<< " Square-meters/.";
    return 0;

}*/
#include <iostream>
using namespace std;

void area(float r)
{
    cout << "Area of this circle is:"<< 3.1416*r*r << " meter-square.";
}
int main()
{
    float x;
    cout << "Enter the radius of the circle:";
    cin>> x;
    area(x);
    return 0;
}
