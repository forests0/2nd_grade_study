#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0): xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& p)
{
	os << '[' << p.xpos << ", " << p.ypos << ']' << endl;
	return os;
}

int main(void)
{
	Point p(1, 2);
	p.ShowPosition();
	cout << p << endl;
	return 0;
}