#include<iostream>
using namespace std;

class Circle
{
	private:
		double r;
	public:
		void setRadius(double radius)
		{
			r = radius;
		}
		double getArea()
		{
			return 3.14159*r*r;
		}
};

double sum(Circle circleArray[],int size)
{
	double total = 0;
	for(int i=0;i<size;i++)
	{
		total = total+circleArray[i].getArea();
	}
	return total;
}

int main()
{
    int n;

    cout << "请输入圆的个数：";
    cin >> n;
    Circle circleArray[100];
    for (int i = 0; i < n; i++)
    {
        double r;

        cout << "请输入第" << i + 1 << "个圆的半径：";
        cin >> r;

        circleArray[i].setRadius(r);
    }
    double total = sum(circleArray, n);
    cout << "总面积为：" << total << endl;
    return 0;
}