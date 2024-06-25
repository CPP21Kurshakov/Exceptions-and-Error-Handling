#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class Rectangle : public Figures, public Wrong_figure
{
protected:
    float sid_a5, sid_b5, sid_c5, sid_d5;
    float corner_A5, corner_B5, corner_C5, corner_D5;

public:
    Rectangle(float sidR1, float sidR2, float sidR3, float sidR4, float cornR1, float cornR2, float cornR3, float cornR4);

    void print_info() const override;
};