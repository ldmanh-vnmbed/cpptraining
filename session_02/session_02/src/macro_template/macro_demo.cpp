#include <iostream>

// macro definition
#define AREA(w, h) ((w)*(h))
#define PRINT_STRING(s) std::cout << s << std::endl

int main() {
    PRINT_STRING("Macro demonstration");

    int width = 1920;
    int height = 1080;
    std::cout << "FullHD resolution: " <<
            width << "x" << height << "=" <<
            AREA(width, height) << " total\n";

    return 0;
}

