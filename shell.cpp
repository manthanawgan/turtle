#include <string>
#include <iostream>
#include <array>
#include "inputParser.h"
#include "execute.h"

using namespace std;

int main() {
    while (true) {
        cout << " $ ";

        string input
        getline(cin, input);

        vector<string> inputParsed = parser(input);
        cout << Executecommand(inputParsed) << endl
    }
}
