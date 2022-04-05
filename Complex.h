#pragma once
#include<iostream>
class TComplex 
{
public:
	TComplex(double re_ = 0, double im_ = 0);
	TComplex(const TComplex& c);
	double GetRe();
	double GetIm();
	void SetRe(double re_);
	void SetIm(double im_);
	TComplex Add(TComplex& b);
	TComplex Mult(TComplex& b);

	TComplex operator + (TComplex& p);
		TComplex operator - (TComplex& p);
		TComplex operator * (TComplex& p);
		TComplex operator / (TComplex& p);
		TComplex& operator = (TComplex& p);
		bool operator == (TComplex& p);
		bool operator != (TComplex& p);

		friend std::istream& operator >>(std::istream& istr, TComplex& p);
private:
	double re;
	double im;
};
std::ostream& operator <<(std::ostream& ostr, TComplex& p);