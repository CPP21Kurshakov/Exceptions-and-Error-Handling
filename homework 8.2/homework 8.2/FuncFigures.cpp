#include <string>
#include "Figures.h"

Figures::Figures(const std::string& name) : nameF(name) {}

std::string Figures::getName()
{
    return nameF;
}