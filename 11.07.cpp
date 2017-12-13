#include <iostream>					// 预处理命令
using namespace std;					// 使用标准命名空间std

// 直角坐标类
class Point
{
private:
// 数据成员:
	int x, y;							// 横坐标与纵坐标

public:
//  公有函数:
	Point(int a, int b): x(a), y(b){ }	// 构造函数
	void Set(int a, int b);				// 设置坐标值
	int GetX() const{ return x; }		// 返回横坐标
	int GetY() const{ return y; }		// 返回纵坐标
};

// 直角坐标类及相关函数的实现部分
void Point::Set(int a, int b)				// 设置坐标值
{
	x = a;							// 横坐标
	y = b;							// 纵坐标
}

void Show(const Point &pt)				// 显示坐标值
{ cout << pt.GetX() << "  " << pt.GetY() << endl; }

int main(void)							// 主函数main(void)
{
	Point a[5] = {Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4)}; // 由对象组成的数组
	Point *p = a;						// p指向数组a
	p->Set(5, 9);						// 设置坐标值
	a[3].Set(6, 8);					// 设置坐标值
	for (int i = 0; i < 5; i++)
	{	// 依次显示各对象的坐标值
		Show(*p++);
	}

    system("PAUSE");            		// 调用库函数system( )，输出系统提示信息
    return 0;                    			// 返回值0,返回操作系统
}
