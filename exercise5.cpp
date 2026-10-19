#include<iostream>
using namespace std;
#include <cmath>

class Ctriangle
{
	private:
		double a,b,c;
	public:
			Ctriangle(double x,double y,double z)
			{
				a = x;
				b = y;
				c = z;
			}
			double getPerimter()
			{
				return a+b+c;
			}
			double getArea()
			{
				double p = getPerimter() / 2;
				double area = sqrt(p*(p-a)*(p-b)*(p-c));
				return area;
			}
};

int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	Ctriangle triangle(a,b,c);
	cout << "三角形的周长为：" << triangle.getPerimter() << endl;
    cout << "三角形的面积为：" << triangle.getArea() << endl;
    return 0;
}