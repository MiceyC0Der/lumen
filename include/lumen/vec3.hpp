#pragma once
#include <cmath>

namespace lumen {

struct Vec3 {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
};

constexpr Vec3 operator+(Vec3 a, Vec3 b) { 
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}
constexpr Vec3 operator-(Vec3 a, Vec3 b) { 
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}

constexpr Vec3 operator*(Vec3 a, double s) { 
    return {a.x * s, a.y * s, a.z * s};
}
constexpr Vec3 operator*(double s, Vec3 a) { 
    return {s * a.x, s*a.y, s * a.z};
}

constexpr double dot(Vec3 a, Vec3 b) { 
    return a.x * b.x + a.y * b.y + a.z * b.z;

}

inline double norm(Vec3 a) {
    return std::sqrt(dot(a, a));
}


} // namespace lumen