#include <png++/png.hpp>

class pngpp_image
{
private:
    unsigned int h = 0;
    unsigned int w = 0;
public:
    bool open_image(std::string image_path);
    int getH();
    int getW();
};