#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    double x, y;  

public:
    void setPoint(double a, double b)
    {
        x = a;
        y = b;
    }
    double distance(const Point &p)
    {
        double dx = x - p.x;
        double dy = y - p.y;

        return sqrt(dx * dx + dy * dy);
    }
};

int main()
{
    double x1, y1;
    double x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    Point p1, p2;
    p1.setPoint(x1, y1);
    p2.setPoint(x2, y2);
    cout << "Á½µã¾àÀëÎª£º" << p1.distance(p2) << endl;

    return 0;
}
