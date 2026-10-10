#include <iostream>
#include "lumen/vec3.hpp"

void print(const char* label, lumen::Vec3 v) {
    std::cout << label << v.x << " " << v.y << " " << v.z << "\n";
}

int main() {
    lumen::Vec3 a{1, 2, 3};
    lumen::Vec3 b{4, 5, 6};

    print("a + b     = ", a + b);       
    print("a - b     = ", a - b);     
    print("a * 2     = ", a * 2.0);     
    print("2 * a     = ", 2.0 * a);     
    std::cout << "dot(a,b)  = " << dot(a, b) << "\n";                  // 32
    std::cout << "norm(3,4) = " << norm(lumen::Vec3{3, 4, 0}) << "\n"; // 5
}