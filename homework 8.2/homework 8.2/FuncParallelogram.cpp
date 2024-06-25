#include <iostream>
#include "Parallelogram.h"
#include "Figures.h"

Parallelogram::Parallelogram(float sidPrl1, float sidPrl2, float sidPrl3, float sidPrl4, float cornPrl1, float cornPrl2, float cornPrl3, float cornPrl4) :
    Figures(nameF), Wrong_figure(nameEr), sid_a7(sidPrl1), sid_b7(sidPrl2), sid_c7(sidPrl3), sid_d7(sidPrl4), corner_A7(cornPrl1), corner_B7(cornPrl2), corner_C7(cornPrl3), corner_D7(cornPrl4)
{
    nameF = "Параллелограмм ";
}

void Parallelogram::print_info() const
{
    try
    {
        if (corner_A7 != corner_C7 || corner_B7 != corner_D7)
        {
            throw Wrong_figure("Углы 'A' и 'C','B' и 'D' должны быть равны");
        }
        else if (sid_a7 != sid_c7 || sid_b7 != sid_d7)
        {
            throw Wrong_figure("Стороны 'a' и 'c','b' и 'd' должны быть равны");
        }
        else if (corner_A7 + corner_D7 != 180 || corner_B7 + corner_C7 != 180)
        {
            throw Wrong_figure("Суммы углов 'A' и 'D','B' и 'C' должны быть равны 180");
        }

        std::cout << nameF << "( стороны " << sid_a7 << ", " << sid_b7 << ", " << sid_c7 << ", " << sid_d7 << "; " << "углы " << corner_A7 << ", " << corner_B7 << ", "
            << corner_C7 << ", " << corner_D7 << ") создана" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
    }
}