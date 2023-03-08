int gcd(int a , int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -a;
	if (b == 0) return a;
	a %= b;
	return gcd(b, a);
}

class Rational {
    private:
    int n;
    int m;

    public:

    friend Rational operator - (Rational &ths, Rational &other);
    friend Rational operator - (Rational &ths, int &other);

    Rational();
    Rational(int _n, int _m);
    void set(int _n, int _m);
    void show();
    Rational operator + (Rational other);
    Rational operator + (int other);
    Rational operator * (Rational other);
    Rational operator * (int other);
    Rational operator / (Rational other);
    Rational operator / (int other);

    bool operator > (Rational other);
    bool operator < (Rational other);
    bool operator == (Rational other);
    bool operator != (Rational other);
    Rational& operator = (Rational other);
    Rational& operator += (Rational other);
    Rational& operator -= (Rational other);
    Rational& operator ++();
};
