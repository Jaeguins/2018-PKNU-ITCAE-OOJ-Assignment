#include <iostream>
class AreaGet {
public:
    static float GetArea(float width, float height) {return width * height;}
    static float GetArea(float caliber) {return 0.5f*caliber*caliber;}
};
int main() {
    while (1) {
        std::cout << "type r to rectangle, c to  circle." << std::endl;
        char in;
        std::cin >> in;
        switch (in) {
        case 'r':
            float width, height;
            std::cin >> width >> height;
            std::cout << "area : " << AreaGet::GetArea(width, height) << std::endl;
            break;
        case 'c':
            float caliber;
            std::cin >> caliber;
            std::cout << "area : " << AreaGet::GetArea(caliber) << std::endl;
            break;
        default:
            std::cout << "wrong input shape" << std::endl;
            break;
        }
    }
}