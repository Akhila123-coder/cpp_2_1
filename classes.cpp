#include<iostream>
using namespace std;
class sample
{
	public:
	int a , b;
	sample()
	{
		int a = 20;
		int b = 10;
	}
};
int main()
{
	sample s;
	cout<< " a = " << s.a << endl;
	cout << "b = " << s.b << endl;
	return 0;

}
