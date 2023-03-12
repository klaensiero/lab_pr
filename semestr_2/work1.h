struct Point {
    int x;
    int y;
};

class Complex_number {
    public:
        double real;
        double img;
};
class ComplexNumber {
   public:
      double real_part, img_part;
      ComplexNumber(): real_part(0), img_part(0) {}
      ComplexNumber(double r, double i) {
         this->real_part = r;
         this->img_part = i;
      }

      void multiply(ComplexNumber &comp2);
      
};


void ComplexNumber::multiply(ComplexNumber &comp2) {
      this->real_part = (this->real_part * comp2.real_part) - (this->img_part * comp2.img_part);
      this->img_part = (this->real_part * comp2.img_part) + (this->img_part * comp2.real_part);
}

void swap_ref (int &x, int &y);
void multiply_ref(Complex_number &x, double number);
void shift_ref(Point &c, int x, int y);
void trunc_ref(double& num);

void swap_ptr (int *x, int *y);
void shift_point(Point *c, int x, int y);
void multiply_point(Complex_number *x, double number);
void trunc_point(double* num);