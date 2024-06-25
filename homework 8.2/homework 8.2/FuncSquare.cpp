#include <iostream>
#include "Square.h"
#include "Figures.h"

Square::Square(float sidSq1, float sidSq2, float sidSq3, float sidSq4, float cornSq1, float cornSq2, float cornSq3, float cornSq4) :
    Figures(nameF), Wrong_figure(nameEr), sid_a6(sidSq1), sid_b6(sidSq2), sid_c6(sidSq3), sid_d6(sidSq4), corner_A6(cornSq1), corner_B6(cornSq2), corner_C6(cornSq3), corner_D6(cornSq4)
{
    nameF = "Квадрат ";
}

void Square::print_info() const
{
    try
    {
        if (corner_A6 != 90 || corner_B6 != 90 || corner_C6 != 90 || corner_D6 != 90)
        {
            throw Wrong_figure("Углы должны быть равны 90");
        }
        else if (sid_a6 != sid_c6 || sid_b6 != sid_d6 || sid_b6 != sid_c6 || sid_c6 != sid_d6)
        {
            throw Wrong_figure("Стороны должны быть равны");
        }

        std::cout << nameF << "( стороны " << sid_a6 << ", " << sid_b6 << ", " << sid_c6 << ", " << sid_d6 << "; " << "углы " << corner_A6 << ", " << corner_B6 << ", "
            << corner_C6 << ", " << corner_D6 << ") создана" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
}