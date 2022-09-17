#include "baseimg.h"

void baseimg::open(std::string file_path){

}

void baseimg::set_name(std::string name){

}

std::string baseimg::get_name(){
    return name;
}

bool pngpp_image::open_image(std::string file_path){
    if(!std::filesystem::exists(file_path)){
        return false
    } else {
        png::image<png::gray_pixel> image;
    }
    return true;
}

bool lodepng_image::open_image(std::string file_path){
    
}