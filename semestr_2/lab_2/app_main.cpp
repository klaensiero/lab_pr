#include "app.h"

int App::start() {
    auto file = new myNamespace::File("myfile.txt");

    try {
        if (!file->open()) {
            throw std::exception();
        }
        if (file->check()) {
            file->writeString("Hello World!\n");
            file->writeInt(20);
            file->writeString("\n");
            file->writeFloat(19.87);
            file->closeFile();
        }
        else {
            throw std::runtime_error("Failed to work with the file");
        }
    } catch (std::exception const &ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }
    
    return 0;
}
