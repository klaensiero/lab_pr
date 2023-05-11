#include "App.h"
using namespace std;

int App::start() {
    try {
        Array <5, int> arr;
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
        arr[3] = 40;
        arr[4] = 50;

        int value = arr[5]; // ошибка

        cout << "Value at index 5: " << value << "\n";
    } catch (exception const &ex) {
        cerr << "Error: " << ex.what() << "\n";
        return 1;
    }

    return 0;
}
