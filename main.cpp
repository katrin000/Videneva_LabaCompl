#include<iostream>
#include"Complex.h"
int main()
{
	TComplex a;
	TComplex b(8,9);

	TComplex c(2, 3);
	TComplex d = c;
	a.SetIm(10);
	a.SetRe(25);
	c = a.Add(d);
	b = b.Mult(a);
	c = a + b;
	b = b * a;
	c = b / a;
	
	//std::cin >> a;
	
	
	std::cout << "A=" << a << std::endl;
	std::cout << "B=" << b << std::endl;
	std::cout << "C=A+B=" << a <<"+"<<b<<"="<<c<< std::endl;
	std::cout << "D=" << d << std::endl;
	
    return 0;
}