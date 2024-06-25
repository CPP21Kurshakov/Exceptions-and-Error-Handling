#pragma once
#include "Figures.h"
#include "Wrong_figures.h"

class Rhombus : public Figures, public Wrong_figure
{
protected:
    float sid_a8, sid_b8, sid_c8, sid_d8;
    float corner_A8, corner_B8, corner_C8, corner_D8;

public:
    Rhombus(float sidRh1, float sidRh2, float sidRh3, float sidRh4, float cornRh1, float cornRh2, float cornRh3, float cornRh4);

    void print_info() const override;
};