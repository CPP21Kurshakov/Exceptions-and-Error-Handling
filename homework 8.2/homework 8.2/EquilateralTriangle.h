#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class EquilateralTriangle : public Figures, public Wrong_figure
{
protected:
    float sid_a3, sid_b3, sid_c3;
    float corner_A3, corner_B3, corner_C3;

public:
    EquilateralTriangle(float sidEt1, float sidEt2, float sidEt3, float cornEt1, float cornEt2, float cornEt3);

    void print_info() const override;
};