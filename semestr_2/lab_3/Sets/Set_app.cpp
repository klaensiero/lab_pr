#include "Set_app.h"

int App_set::start() {

    Subset s1{1, 3, 5};
    Subset s2{2, 4, 6};
    Subset s3 = s1 + s2;
    Subset s4{1, 3, 5, 7};
    bool equal = (s1 == s2);
    bool not_equal = (s1 != s2);
    s1 += 7;
    s1 -= 5;

    cout << "s1: ";
    for (int i = 0; i < 10; ++i) {
        if (s1 += i) {
            cout << i << ' ';
        }
    }   
    cout << endl;

    cout << "s2: ";
    for (int i = 0; i < 10; ++i) {
        if (s2 += i) {
            cout << i << ' ';
        }
    }
    cout << endl;

    cout << "s3: ";
    for (int i = 0; i < 10; ++i) {
        if (s3 += i) {
            cout << i << ' ';
        }
    }
    cout << endl;

    cout << "s4: ";
    for (int i = 0; i < 10; ++i) {
        if (s4 += i) {
            cout << i << ' ';
        }
    }
    cout << endl;

    cout << "s1 == s2: " << equal << endl;
    cout << "s1 != s2: " << not_equal << endl;

    return 0;
    
    }