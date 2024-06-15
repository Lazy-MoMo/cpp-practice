#include<iostream>
using namespace std;
class complex{
	
	float real , img;
	public:
	complex()
	{
		real = 0;
		img = 0;
	}
	complex(int a , int b)
	{
		real = a;
		img = b;
	}

	void display()
	{
		cout <<real<<"+"<<img<<"i"<<endl;

	}
	
	complex operator + (complex x)
	{
		return complex(real +x,real,img+x,img);
	}

	complex operator - (complex)
	{
		real -= x.real;
		img-= x.img;
		return *this;
	}
	


};
int main()
{
	complext c1(1,2),c2(3,4),c3;
	c3 = c1 + c2;

	if (c1 > c2)
	{
		cout<<"c1 is greater"<<endl;
	}
	else
	{
		cout<<"c2 is greater"<<endl;
	}

	c1.display();
	c2.display();

}


