#include "lodepng_image.h"
#include "pngpp_image.h"

std::string file_path = "/home/manhld/workspace/cpptraining/session_02/my_session_02/data/linux_test.png";

int main(){
    baseimg<lodepng_image> image;
    image.open(file_path);
    return 0;
}