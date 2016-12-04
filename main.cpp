#include <iostream>
#include <string>

void print(std::string message) {
    std::cout << message << std::endl;
}

void flag(char flag) {
    switch(flag) {
        case 'p':
            print("print")
        default:  print("Unknown flag");
    }
}

int main(int argc, char**argv) {
    bool arg = false;
    for(int i = 0; i < argc; ++i) {
        if(argv[i][0] == '-') {
            arg = true;
            print("Flag:");
            flag(argv[i][1]);
        } else {
            print(arg ? "argument" : "Unknown");
            print(std::string(argv[i]));
        }
        std::cout << "print";
    }

    return 0;
}
