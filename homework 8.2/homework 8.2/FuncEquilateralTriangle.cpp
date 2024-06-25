#include <iostream>
#include "EquilateralTriangle.h"
#include "Figures.h"

EquilateralTriangle::EquilateralTriangle(float sidEt1, float sidEt2, float sidEt3, float cornEt1, float cornEt2, float cornEt3) :
    Figures(nameF), Wrong_figure(nameEr), sid_a3(sidEt1), sid_b3(sidEt2), sid_c3(sidEt3), corner_A3(cornEt1), corner_B3(cornEt2), corner_C3(cornEt3)
{
    nameF = "Равносторонний треугольник ";
}

void EquilateralTriangle::print_info() const
{
    try
    {
        if (sid_a3 != sid_c3 || sid_a3 != sid_b3)
        {
            throw Wrong_figure ("Стороны должны быть равны");
        }
        else if (corner_A3 != corner_C3 || corner_A3 != corner_B3)
        {
            throw Wrong_figure ("Углы должны быть равны");
        }

        std::cout << nameF << "( стороны " << sid_a3 << ", " << sid_b3 << ", " << sid_c3 << "; " << "углы " << corner_A3 << ", " << corner_B3 << ", "
            << corner_C3 << ") создана" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
}