#include <string>
#include <iostream>
#include <vector>
#include "inputParser.h"
#include "execute.h"
#include <filesystem>

using namespace std;

string getPathFromHome() {
    string str = filesystem::current_path().string();
    return str.substr(str.find_last_of("/") + 1);
}

// Entry point for the shell application
int main() {
    while (true) {
        cout << " $~ " << getPathFromHome() << "~$";

        string input;
        getline(cin, input);

        vector<string> inputParsed = parser(input);
        cout << executeCommand(inputParsed) << endl;
    }

    return 0
}