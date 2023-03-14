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

void multiply_point(Complex_number *x, double number);
void multiply_ref(Complex_number &x, double number);

void multiply_point(Complex_number *x, double y) {
    x->real *= y;
    x->img *= y;
}

void multiply_ref(Complex_number &x, double y) {
    x.real *= y;
    x.img *= y;
}