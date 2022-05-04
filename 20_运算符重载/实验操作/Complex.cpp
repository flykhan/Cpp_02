#include "Complex.h"
Complex::Complex(double r, double i) : real(r), image(i)
{
    cout << "Complex(double r, double i)" << endl;
}
Complex::Complex(const Complex &c)
{
    cout << "Complex(const Complex &c)" << endl;
    this->real = c.real;
    this->image = c.image;
}

Complex::~Complex()
{
    cout << "~Complex()" << endl;
}

// 重载 cout
ostream &operator<<(ostream &out, const Complex &c)
{
    out << "Complex(" << c.real << ", " << c.image << ")" << endl;
    return out;
}

// 重载 =
Complex &Complex::operator=(const Complex &c)
{
    if (this != &c)
    {
        this->real = c.real;
        this->image = c.image;
    }
    return *this;
}

// 重载 前置++
Complex &Complex::operator++()
{
    ++this->real;
    ++this->image;
    return *this;
}

// 重载 后置++
Complex Complex::operator++(int)
{
    // 创造一个临时变量并返回
    Complex temp(*this);
    // 对原数执行 ++ 操作
    operator++();
    // 返回临时变量
    return temp;
}

// 重载 前置++
Complex &Complex::operator--()
{
    --this->real;
    --this->image;
    return *this;
}

// 重载 后置--
Complex Complex::operator--(int)
{
    Complex temp(*this);
    operator--();
    return temp;
}

// 重载 负号
Complex &Complex::operator-()
{
    this->real = -this->real;
    this->image = -this->image;
    return *this;
}

// 重载 加号
Complex operator+(const Complex &a, const Complex &b)
{
    return Complex(a.real + b.real, a.image + b.image);
}

// 重载 +=
Complex &operator+=(Complex &a, const Complex &b)
{
    a.real += b.real;
    a.image += b.image;
    return a;
}

// 重载 减号
Complex operator-(const Complex &a, const Complex &b)
{
    return Complex(a.real - b.real, a.image - b.image);
}

// 重载 -=
Complex &operator-=(Complex &a, const Complex &b)
{
    a.real -= b.real;
    a.image -= b.image;
    return a;
}

// 重载 乘号
Complex operator*(const Complex &a, const Complex &b)
{
    return Complex(a.real * b.real, a.image * b.image);
}

// 重载 *=
Complex &operator*=(Complex &a, const Complex &b)
{
    a.real *= b.real;
    a.image *= b.image;
    return a;
}

// 重载 除号
Complex operator/(const Complex &a, const Complex &b)
{
    return Complex(a.real / b.real, a.image / b.image);
}

// 重载 /=
Complex &operator/=(Complex &a, const Complex &b)
{
    a.real /= b.real;
    a.image /= b.image;
    return a;
}