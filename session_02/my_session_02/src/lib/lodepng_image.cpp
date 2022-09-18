#include "lodepng_image.h"

#include <iostream>
#include <filesystem>
#include <vector>

bool lodepng_image::open_image(std::string file_path) {
    if (!std::filesystem::exists(file_path)) {
        std::cout << "LodePNG -> File not exists!!! Please check file path\n";
        return false;
    } else {
        std::cout << "LodePNG -> File exists!!! Opening\n";
        std::vector<unsigned char> buffer;
        lodepng::load_file(buffer, file_path);
    }
    return true;
}