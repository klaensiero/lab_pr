struct Point {
    int x;
    int y;
};

class Complex_number {
    public:
        double real;
        double img;
};

class Complex_nums { 
public: 
    double real; 
    double imaginary; 

public: 
    Complex(int r = 0, int i = 0) 
    { 
        real = r;
        imaginary = i;
    }
    void multiply(Complex &c2, Complex &c3) { 
       c3.real = (real*c2.real - imaginary*c2.imaginary); 
       c3.imaginary = (real*c2.imaginary + imaginary*c2.real); 
    }
};
void swap_ref (int &x, int &y);
void multiply_ref(Complex_number &x, double number);
void shift_ref(Point &c, int x, int y);
void trunc_ref(double& num);

void swap_ptr (int *x, int *y);
void shift_point(Point *c, int x, int y);
void multiply_point(Complex_number *x, double number);
void trunc_point(double* num);