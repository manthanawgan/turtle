#include "cd.h"
#include <filesystem>
#include <unistd.h>
#include <iostream>

void changeDir(string givenPath) {
    filesystem::path newPath;

    if(given Path == ".") {
        return;

    }else if(givenPath == ".."){
        newPath = filesystem::current_path().parent_path();

    }else{
        newPath = filesystem::absoulte(givenPath);

    }

    if(newPath.empty()) {
        cerr << "cd : No parent directory. \\n";
        return;
    }

    if(chdir(newPath.c_str()) != 0){
        perror("cd");
    }

    return;
}