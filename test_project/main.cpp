
#include <cstdio>
#include <PicoSHA2/picosha2.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Please provide an argument.");
        exit(-1);
    } else{
        std::string str(argv[1]);
        std::string out = picosha2::hash256_hex_string(str);
        printf("SHA256 of '%s': %s", str.c_str(), out.c_str());
    }
}