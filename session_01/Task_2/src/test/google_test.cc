#include "gtest/gtest.h"
#include "lodepng_image.h"
std::string image_path_1 = "";
std::string image_path_2 = "";
std::string image_path_3 = "";
std::string image_path_4 = "";
std::string image_path_5 = "";

namespace testing{
    TEST(open_image, testValid){
        lodepng_image image;
        EXPECT_FALSE(image.open_image(image_path_1));
        EXPECT_FALSE(image.open_image(image_path_2));
        EXPECT_FALSE(image.open_image(image_path_3));
        EXPECT_FALSE(image.open_image(image_path_4));
        EXPECT_FALSE(image.open_image(image_path_5));
    }
} //namespace