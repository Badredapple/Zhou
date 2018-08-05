//funtemp.cpp -----using a function temp
#include <iostream>

//function template prototype
template <typename T>
void Swap(T &a, T &b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i ,j ="<< i <<","<<j<<endl;
	cout<<"Using compiler-generated int swaper:\n"<<endl;
	Swap(i,j);
	cout <<"Now i ,j ="<< i <<","<<j <<endl;
	
	double x = 24.5;
	double y = 81.7;
	cout<<"x,y = "<<x <<","<<y<<endl;
	cout<<"Using compiler-generated double swap :\n"<<endl;
	Swap(x,y);
	cout <<"Now x, y is "<<x<< ","<<y<<endl;
	cin.get();
	return 0;
}

template <typename T>
void Swap(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
