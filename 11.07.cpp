#include <iostream>					// Ԥ��������
using namespace std;					// ʹ�ñ�׼�����ռ�std

// ֱ��������
class Point
{
private:
// ���ݳ�Ա:
	int x, y;							// ��������������

public:
//  ���к���:
	Point(int a, int b): x(a), y(b){ }	// ���캯��
	void Set(int a, int b);				// ��������ֵ
	int GetX() const{ return x; }		// ���غ�����
	int GetY() const{ return y; }		// ����������
};

// ֱ�������༰��غ�����ʵ�ֲ���
void Point::Set(int a, int b)				// ��������ֵ
{
	x = a;							// ������
	y = b;							// ������
}

void Show(const Point &pt)				// ��ʾ����ֵ
{ cout << pt.GetX() << "  " << pt.GetY() << endl; }

int main(void)							// ������main(void)
{
	Point a[5] = {Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4)}; // �ɶ�����ɵ�����
	Point *p = a;						// pָ������a
	p->Set(5, 9);						// ��������ֵ
	a[3].Set(6, 8);					// ��������ֵ
	for (int i = 0; i < 5; i++)
	{	// ������ʾ�����������ֵ
		Show(*p++);
	}

    system("PAUSE");            		// ���ÿ⺯��system( )�����ϵͳ��ʾ��Ϣ
    return 0;                    			// ����ֵ0,���ز���ϵͳ
}
