#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileEncryptor {
private:
    string inputFile;
    string outputFile;
    string key;

public:
    FileEncryptor(const string& inputFile, const string& outputFile, const string& key)
        : inputFile(inputFile), outputFile(outputFile), key(key) {}

    void encrypt() {
        ifstream fin(inputFile, ios::binary); 
        ofstream fout(outputFile, ios::binary);

        if (!fin || !fout) {
            cerr << "Ошибка, фалй открыт" << endl;
            return;
        }

        size_t keyLength = key.length();
        size_t index = 0;

        char ch;
        while (fin.get(ch)) {
            ch ^= key[index];

            fout.put(ch);
            index = (index + 1) % keyLength;
        }

        fin.close();
        fout.close();

        cout << "Файл зашифрован" << endl;
    }
};

int main(int argc, char* argv[]) {
    if (argc != 4) { 
        cerr << "Используйте: " << argv[0] << "1.txt" << endl;
        return 1;
    }

    string inputFile = argv[1];
    string outputFile = argv[2]; 
    string key = argv[3]; 

    FileEncryptor encryptor(inputFile, outputFile, key);
    encryptor.encrypt();

    FileEncryptor encryptorAgain(outputFile, "2.txt", key);
    encryptorAgain.encrypt();

    return 0;
}