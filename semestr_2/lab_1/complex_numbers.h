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

void multiply_point(ComplexNumber *x, double number);
void multiply_ref(ComplexNumber &x, double number);
