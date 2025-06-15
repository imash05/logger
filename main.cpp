#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

int main() {
    ofstream MyFile("log_123.log");

    MyFile << "test log";
    MyFile.close();
    
    cout << "File di log creato!" << endl;
    return 0;
    //testttt
}