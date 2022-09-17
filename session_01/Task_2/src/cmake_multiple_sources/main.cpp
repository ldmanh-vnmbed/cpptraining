#define PNGPP 1

#if PNGPP
#include "pngpp_image.h"
#else
#include "lodepng_image.h"
#endif

#include "foo.h"
#include <iostream>

std::string file_path = "/home/manhld/workspace/cpptraining/session_01/Task_2/data/linux_test.png";

int main()
{
#if PNGPP
        pngpp_image image;
        if(image.open_image(file_path)){
            std::cout<<"Image Height: "<<image.getH()<<std::endl;
            std::cout<<"Image Widght: "<<image.getW()<<std::endl;
        }
    #else
        lodepng_image image;
        if(image.open_image(file_path)){
            std::cout<<"Image Height: "<<image.getH()<<std::endl;
            std::cout<<"Image Widght: "<<image.getW()<<std::endl;
        } 
#endif /* PNGPP */

    return 0;
}