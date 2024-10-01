#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double h(const double x);

int main()
{
    double gp, gk, z;
    int n;

    cout << "gp = "; cin >> gp;
    cout << "gk = "; cin >> gk;
    cout << "n = "; cin >> n;

    double dg = (gk - gp) / n;
    double g = gp;

    cout << fixed;

    cout << "----------------------------" << endl;
    cout << "|" << setw(8) << "g" << " |"
        << setw(15) << "z" << " |" << endl;
    cout << "----------------------------" << endl;


    while (g <= gk)
    {
        z = h(g * g + 1) + h(g + h(1)) + 1;

        cout << "|" << setw(8) << setprecision(2) << g << " |"
            << setw(15) << setprecision(4) << z << " |" << endl;

        g += dg;

        cout << "----------------------------" << endl;

    }

return 0;

}

double h(const double x)
{
    if (abs(x) >= 1)
    {
        return (sin(x) + 1) / (1 + cos(x));
    }
    else
    {
        double S = 0;
        int i = 0;
        double a = 1;
        S = a;

        do
        {
            i++;
            double R = x / ((2 * i) * (2 * i - 1));
            a *= R;
            S += a;
        } while (i < 5);

        return S;
    }
}