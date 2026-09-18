#pragma once

#include <random>

namespace JSMath {
    // Meniru Math.random() dari JavaScript (mereturn float 0.0 hingga < 1.0)
    inline float random() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::uniform_real_distribution<float> dis(0.0f, 1.0f);
        return dis(gen);
    }
}
