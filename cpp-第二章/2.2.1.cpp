#include<iostream>
using namespace std;
class TestClass
{
public:
	TestClass()
	{
		aa = a;
		cout << a << "Coutstucted!\n";
	}
	~TestClass()
	{
		cout << "Destructed!\n";
	}
private:
	int aa;
};
TestClass AA(3);
int main()
{
	cout << "In MainFuction." << endl;
	TestClass BB(5);
	return 0;
}