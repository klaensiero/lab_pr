void swap_ref (int &x, int &y);
void trunc_ref(double& num);
void swap_ptr (int *x, int *y);
void trunc_point(double* num);

void swap_ptr (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_ref (int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void trunc_point(double* num) {
     *num = int(*num);
}

void trunc_ref(double& num) {
     num = int(num);
}
