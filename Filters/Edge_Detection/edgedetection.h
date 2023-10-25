#pragma once

#include "../filter.h"

static constexpr uint8_t WHITE = 255;
static constexpr uint8_t BLACK = 0;

namespace edge_detection {
    class EdgeDetection : public Filter {
    public:
        explicit EdgeDetection(double threshold);

        Image Apply(const Image &image) const override;

    private:
        double threshold_;
    };
}
