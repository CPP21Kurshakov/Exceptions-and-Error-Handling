#include "Wrong_figures.h"

Wrong_figure::Wrong_figure(const std::string& err) : nameEr(err) {}

const char* Wrong_figure::what() const noexcept
{
    return nameEr.c_str();
}

