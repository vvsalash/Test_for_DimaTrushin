#pragma once

#include "../filter.h"

static constexpr double GRAYSCALE_RED = 0.299;
static constexpr double GRAYSCALE_GREEN = 0.587;
static constexpr double GRAYSCALE_BLUE = 0.114;

namespace grayscale {
    class Grayscale : public Filter {
    public:
        Image Apply(const Image &image) const override;
    };
}