#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class IsoscelesTriangle : public Figures, public Wrong_figure
{
protected:
    float sid_a2, sid_b2, sid_c2;
    float corner_A2, corner_B2, corner_C2;

public:
    IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3);

    void print_info() const override;
};