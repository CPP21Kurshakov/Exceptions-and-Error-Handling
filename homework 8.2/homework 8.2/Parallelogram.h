#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class Parallelogram : public Figures, public Wrong_figure
{
protected:
    float sid_a7, sid_b7, sid_c7, sid_d7;
    float corner_A7, corner_B7, corner_C7, corner_D7;

public:
    Parallelogram(float sidPrl1, float sidPrl2, float sidPrl3, float sidPrl4, float cornPrl1, float cornPrl2, float cornPrl3, float cornPrl4);

    void print_info() const override;
};