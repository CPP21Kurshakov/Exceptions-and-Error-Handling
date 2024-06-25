#include <iostream>
#include "IsoscelesTriangle.h"
#include "Figures.h"

IsoscelesTriangle::IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3) :
    Figures(nameF), Wrong_figure(nameEr), sid_a2(sidIt1), sid_b2(sidIt2), sid_c2(sidIt3), corner_A2(cornIt1), corner_B2(cornIt2), corner_C2(cornIt3)
{
    nameF = "Равнобедренный треугольник ";
}

void IsoscelesTriangle::print_info() const
{
    try
    {
        if (sid_a2 != sid_c2)
        {
            throw Wrong_figure("Стороны должны быть равны");
        }
        else if (corner_A2 != corner_C2)
        {
            throw Wrong_figure("Углы должны быть равны 45");
        }

        std::cout << nameF << "( стороны " << sid_a2 << ", " << sid_b2 << ", " << sid_c2 << "; " << "углы " << corner_A2 << ", " << corner_B2 << ", "
            << corner_C2 << ") создана" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
}