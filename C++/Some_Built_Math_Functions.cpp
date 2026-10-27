#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float  x,y,z;
    cout << "Enter your three numbers:";
    cin >> x >> y >> z;

    cout << "Square of "<< x << " to the power "<<y << " is:"<< pow(x,y) << endl;

    cout << "Absolute value of "<< x << " is:"<< fabs(x) <<endl;

    cout << "Square root of "<< z << " is :"<< sqrt(z)<< endl;

    cout << "Value of sin "<< x << " is:"<< sin(x)<< endl;

    cout << "Exponential of "<< y<< " is:"<< exp(y)<< endl;

    cout << "Natural log of "<< z << " is :"<< log(z)<< endl;

    cout << "Ceil and floor of "<< x << " are:"<< ceil(x) << ","<< floor (x)<< endl;

    cout << "Remainder of "<< x << " of "<< y<< " is:"<< fmod(x,y)<<endl;

    return 0;
}
