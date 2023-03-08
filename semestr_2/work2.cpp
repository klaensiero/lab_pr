#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class File {
    private:
        string filename; 
        ofstream file;
    public:
        File(string name) {
            this->filename = name;
        }
        
        bool openFile() {
            file.open(filename);
            // if (file.good()) { 
                cout << "File opened successfully!" <<"\n";
                return true;
            // }
            // else {
            //     cout << "File opening failed!" << "\n";
            //     return false;
            // }
        }
        void closeFile() {
            // if (file.good()) { 
                file.close();
                cout << "File closed successfully!" << "\n";
            // }
            // else { 
            //     cout << "File closing failed!" << "\n"; 
            // }
        }
        string getFileName() {
            return filename;
        }
        bool check() {
            return file.good(); 
        }
        void writeString(string s) {
            // if (file.good()) { 
                file << s;
                cout << "String write successful in file!" << "\n";
            // } 
            // else {
            //     cout << "File write failed!" << "\n";
            // }
        }
  
        void writeInt(int n) {
            // if (file.good()) {
                file << n;
                cout << "Integer write successful in file!" << "\n";
            // }
            // else {
            //     cout << "File write failed!" << "\n";
            // }
        }
        void writeFloat(float f) {
            // if (file.good()) {
                file << f;
                cout << "Float write successful in file!" << "\n";
            // } 
            // else {
            //     cout << "File write failed!" << "\n";
            // } 
        } 
};
void run() {
    string filename = "myfile.txt";
    File f1(filename);
    try {
        if (f1.check()) {
            f1.openFile();
            f1.writeString("Hello World!");
            f1.writeInt(20);
            f1.writeFloat(19.87);
            f1.closeFile();
        }
        else
            throw ("Failed to work with the file\n");
    }
    catch(const char* msg)
    {
        cerr << msg << "\n";
    }

}
int main(){
    run();
    return 0;
    
}