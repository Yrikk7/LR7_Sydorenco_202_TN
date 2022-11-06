#include <iostream>

using namespace std;

double Area(int a, int b, int c) {
    double p;
    double s;
     p = (a + b + c) / 2;
    if (a > p && b > p && c > p)
    {
        throw "the sides of the triangle are irregular";
    }
    else(a < p && b < p && c < p);
    {          
          s = pow(p * (p - a) * (p - b) * (p - c), 0.5);
    }
    return  s;
    
}

int main()
{
    int a = 6, b = 4, c = 8;
    double y = 0;

    try {
        y = Area(a, b, c);
        cout << y << endl;
    }
    catch (const char* hoj) {
        cout << hoj << endl;
    }
    system("pause");
}