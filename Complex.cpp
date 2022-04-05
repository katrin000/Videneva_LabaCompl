#include "Complex.h"

TComplex::TComplex(double re_, double im_)
{
    re = re_;
    im = im_;

}

TComplex::TComplex(const TComplex& c)
{
    re = c.re;
    im = c.im;
}

double TComplex::GetRe()
{
    return 0.0;
}

double TComplex::GetIm()
{
    return 0.0;
}

void TComplex::SetRe(double re_)
{
    re = re_;
}

void TComplex::SetIm(double im_)
{
    im = im_;
}

TComplex TComplex::Add(TComplex& b)
{
    TComplex res(*this); //копия самого себя 
    res.re += b.re;
    res.im += b.im;
    return res;
}

TComplex TComplex::Mult(TComplex& b)
{
    TComplex res; 
    res.re += re * b.re - im * b.im;
        res.im += re * b.im - im * b.re;
    return res;
}

TComplex TComplex::operator+(TComplex& p)
{
    TComplex res(*this); 
    res.re += p.re;
    res.im += p.im;
    return res;
}

TComplex TComplex::operator-(TComplex& p)
{
    TComplex res(*this);
    res.re -= p.re;
    res.im -= p.im;
    return res;
}

TComplex TComplex::operator*(TComplex& p)
{
    TComplex res;
    res.re += re * p.re - im * p.im;
    res.im += re * p.im - im * p.re;
    return res;
}

TComplex TComplex::operator/(TComplex& p)
{
   
    
       TComplex res;
        double r = p.re * p.re + p.im * p.im;
        res.re = (re * p.re + im * p.im) / r;
        res.im = (im * p.re - re * p.im) / r;
        return res;
   
}

TComplex& TComplex::operator=(TComplex& p)
{
    if (this != &p)
    {
        re = p.re;
        im = p.im;
    }
    return *this;
}

bool TComplex::operator==(TComplex& p)
{
    return (re == p.re) && (im == p.im);
}

bool TComplex::operator!=(TComplex& p)
{
    return !(this->operator==(p));
}



std::istream& operator>>(std::istream& istr, TComplex& p)
{
    std::cout << "Re= " << std::endl;
    istr >> p.re;
    std::cout << "Im= " << std::endl;
    istr >> p.im;

    return istr;
}

std::ostream& operator<<(std::ostream& ostr, TComplex& p)
{
    ostr << p.GetRe() << "+i*" << p.GetIm();
   
    return ostr;
}
