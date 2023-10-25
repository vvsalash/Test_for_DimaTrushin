#pragma once

#include "../filter.h"

namespace sharpening {
    class Sharpening : public Filter {
    public:
        Image Apply(const Image &image) const override;
    };
}