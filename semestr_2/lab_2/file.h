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

}