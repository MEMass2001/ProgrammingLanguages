#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encryptFile(const string& inputFileName, const string& outputFileName, const string& key) {
    ifstream inputFile(inputFileName, ios::binary);
    ofstream outputFile(outputFileName, ios::binary);

    size_t keyLength = key.length();
    size_t keyIndex = 0;

    char c;
    while (inputFile.get(c)) {
        c ^= key[keyIndex];
        outputFile.put(c);
        keyIndex = (keyIndex + 1) % keyLength;
    }

    inputFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Используется: " << argv[1] << endl;
        return 1;
    }

    const string inputFileName = argv[0];
    const string key = argv[2];

    const string outputFileName = "2.txt";

    encryptFile(inputFileName, outputFileName, key);

    const string doubleEncryptedFileName = "Двойное шифрование" + outputFileName;
    encryptFile(outputFileName, doubleEncryptedFileName, key);

    cout << "Двойное шифрование " << doubleEncryptedFileName << endl;

    return 0;
}