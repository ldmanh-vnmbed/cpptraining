#include "main.h"

std::string file_path = "/home/manhld/workspace/cpptraining/session_02/my_session_02/data/linux_test.png";

int main(){
    baseimg<pngpp_image> image;
    image.open_image(file_path);
    return 0;
}