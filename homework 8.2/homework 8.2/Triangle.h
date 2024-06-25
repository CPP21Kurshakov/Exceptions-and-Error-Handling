#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class Triangle : public Figures, public Wrong_figure
{
protected:
    float sid_a, sid_b, sid_c;
    float corner_A, corner_B, corner_C;

public:
    Triangle(float sidT1, float sidT2, float sidT3, float cornT1, float cornT2, float cornT3);

    void print_info()const override;
};