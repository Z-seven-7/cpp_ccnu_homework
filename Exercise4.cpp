#include<iostream>
using namespace std;

int main()
{
	int a,b;
	printf("玩家1出拳：0石头，1剪刀，2布");
	scanf("%d",&a) ;
	if(a < 0 || a > 2)
    {
        printf("玩家1输入错误！只能输入0、1、2！\n");
        return 0;
    }
    
	printf("玩家2出拳：0石头，1剪刀，2布");
	scanf("%d",&b) ;
	if(b < 0 || b > 2)
    {
        printf("玩家2输入错误！只能输入0、1、2！\n");
        return 0;
    }
	
        switch(a-b)
        {
	        case 0:
		        cout<<"平局";
		        break;
	        case 1:
		        cout<<"2 win";
		        break;
	        case 2:
		        cout<<"1 win";
		        break;
	        case -1:
		        cout<<"1 win";
		        break;
	        case -2:
		        cout<<"2 win";
		        break;
        }
	return 0;
}
