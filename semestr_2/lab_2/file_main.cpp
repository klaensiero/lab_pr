#include "file.h"

namespace myNamespace {
    File::File(std::string name) {
        this->filename = name;
    }

    bool File::open() {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
        std::cout << "File opened successfully!" << "\n";
        return true;
    }

    void File::closeFile() { 
        if (file.is_open()) {
            file.close();
            std::cout << "File closed successfully!" << "\n";
        }
        else {
            throw std::runtime_error("File is not open");
        }
    }

    std::string File::getFileName() {
        return filename;
    }

    bool File::check() {
        return file.good(); 
    }

    void File::writeString(std::string s) {
        file << s;
    }

    void File::writeInt(int n) {
        file << n;
    }

    void File::writeFloat(float f) {
        file << f;
    } 
}
