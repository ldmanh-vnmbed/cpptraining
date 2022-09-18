#include "lodepng.h"

class lodepng_image {
  private:
    unsigned int h = 0;
    unsigned int w = 0;
  public:
    bool open_image(std::string file_path);
    unsigned int getH();
    unsigned int getW();
};