#include "Core.h"
using namespace SIPL;

int main(int argc, char ** argv) {
    Init();

	Image<PIXEL_COLOR_UCHAR> image = Image<PIXEL_COLOR_UCHAR>("images/example.bmp");
    image.show();
    for(int i = 0; i < image.getWidth(); i++) {
        for(int j = 0; j < image.getHeight(); j++) {
            PIXEL_COLOR_UCHAR c = image.get(i,j);;
            if(c.green == 0) 
                c.green = 100;
            image.set(i,j,c);
        }
    }
    image.update();

	return 0;
}
