#include <iostream>

using namespace std;

template <class T>
T add(T a,T b)
{
    return a+b;
}



int main() {
	int x=10;
	int y=25;
	int z=x+y;

	cout<<"Sum of x+y = " << z;
	cout<<"Call Me"<<add(22,33)<<endl;
	cout<<"Call Me"<<add(33.55,33.44)<<endl;
		cout<<"Call Me"<<add('a','b')<<endl;
}
