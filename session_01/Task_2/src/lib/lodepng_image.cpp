#include "lodepng_image.h"
#include <vector>
#include <iostream>

bool lodepng_image::open_image(std::string file_path){
  std::vector<unsigned char> buffer;
  std::vector<unsigned char> image;
  lodepng::State state;
  bool status = lodepng::load_file(buffer,file_path);
  if(status){
    std::cout<<"LodePNG...Image is not exist. Please check the file path...\n";
    return false;
  } else {
    lodepng::decode(image,this->w,this->h,state,buffer);
  }
  return true;
}

unsigned int lodepng_image::getH(){
  return h;
}

unsigned int lodepng_image::getW(){
  return w;
}