#include <string>
#include <iostream>
#include <vector>
#include "inputParser.h"
#include "execute.h"

using namespace std;

// Entry point for the shell application
int main() {
    while (true) {
        cout << " $ ";

        string input;
        getline(cin, input);

        vector<string> inputParsed = parser(input);
        cout << Executecommand(inputParsed) << endl;
    }
}