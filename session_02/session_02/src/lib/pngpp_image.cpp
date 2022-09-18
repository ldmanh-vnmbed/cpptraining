#include "pngpp_image.h"
#include <filesystem>
bool pngpp_image::open_image(std::string file_path){
    if(!std::filesystem::exists(file_path)){
        // std::cout << "PNGPP...File not exists. Please check file_path...PNGPP\n";
        return false;
    }
    else
    {
        png::image<png::rgb_pixel> image(file_path);
        this->h = image.get_height();
        this->w = image.get_width();
    }
    return true;
}

unsigned int pngpp_image::getH(){
    return h;
}
unsigned int pngpp_image::getW(){
    return w;
}
