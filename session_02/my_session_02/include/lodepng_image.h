#include "lodepng.h"
#include "baseimg.h"

class lodepng_image : public baseimg<lodepng_image> {
   private:
    unsigned int h;
    unsigned int w;
   public:
    bool open_image(std::string file_path);
};