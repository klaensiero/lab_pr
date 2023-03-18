#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

namespace myNamespace {
    class File {
    private:
        std::string filename; 
        std::ofstream file;
    public:
        File(std::string name);
        bool open();
        void closeFile();
        std::string getFileName();
        bool check();
        void writeString(std::string s);
        void writeInt(int n);
        void writeFloat(float f);
    };
}