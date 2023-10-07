// Lab_03_3.cpp
// Равлик Роман
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double R;
    double p = atan(1.0) * 4;
    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;
    //  розгалуження в повній формі
    
    if (x <= -7 - R)
        y = R;
    else
        if (x > -7 - R && x <= -7 + R)
            y = R - pow(R, 2) - pow((x - 7), 2);
        else
            if ( x > - 7 + R && x <= -4)
                y = R;
            else
                if (x > 4 &&  x <= 0)
                    y = R + sqrt((R * R) - ((x + 7) * (x + 7)));
                else
                    if (x > 0 && x <= p) {
                        y = sin(x);
                    }
                    else
                        y = x - p;
    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;

}