#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
    double a, b, c;

public:
    bool exst_tr ();
    void set (double a1, double b1, double c1);
    void show ();
    double perimetr();
    double square();
};

#endif // TRIANGLE_H
