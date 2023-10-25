#pragma once

#include "../filter.h"

namespace negative {
    class Negative : public Filter {
    public:
        Image Apply(const Image &image) const override;
    };
}

