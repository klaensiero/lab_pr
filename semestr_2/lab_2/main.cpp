#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include "file_main.cpp"
#include "app_main.cpp"

int main() {
    return (new App())->start();
}
