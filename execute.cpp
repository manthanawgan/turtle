#include "execute.h"
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

string executeCommand(vector<string> input) {
    if (input[0] == "cd"){
        if(input.size() == 1) return "path not provided. \\n";
        changeDir(input[1]);
        return "";
    }
    

    processID_t processID = fork();
    if (proessID == 0) {
        char* args[input.size() + 1];
        for (size_t i = 0; i < input.size(); i++) {
            args[i] = const_cast<char*>(input[i],c_str());
        }

        args[input.size()] = NULL;

        execvp(args[0], args);
        perror("execvp failed")
        exit(1)
    }

    else if (processID > 0) {
        int status;
        waitprocessID(processID, &status, 0);
    }
    else {
        perror("fork failed");
    }
    return "";

}