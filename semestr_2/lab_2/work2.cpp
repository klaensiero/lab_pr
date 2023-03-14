#include <iostream>
#include <fstream>
#include <string>
#include <exception>

namespace myNamespace {
    class File {
    private:
        std::string filename; 
        std::ofstream file;
    public:
        File(std::string name) {
            this->filename = name;
        }
        
        bool open() {
            file.open(filename);
            if (!file.is_open()) {
                throw std::runtime_error("Failed to open file");
            }
            std::cout << "File opened successfully!" << "\n";
            return true;
        }
        
        void closeFile() { 
            if (file.is_open()) {
                file.close();
                std::cout << "File closed successfully!" << "\n";
            }
            else {
                throw std::runtime_error("File is not open");
            }
        }
        
        std::string getFileName() {
            return filename;
        }
        
        bool check() {
            return file.good(); 
        }
        
        void writeString(std::string s) {
            file << s;
        }
      
        void writeInt(int n) {
            file << n;
        }
        
        void writeFloat(float f) {
            file << f;
        } 
    };

class App {
    public:
        int start() {
            auto file = new File("myfile.txt");

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
    };
}

int main() {
    return (new myNamespace::App())->start();
}
