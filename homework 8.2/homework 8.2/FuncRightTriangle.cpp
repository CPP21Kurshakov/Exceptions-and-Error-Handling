#include <iostream>
#include "RightTriangle.h"
#include "Figures.h"

RightTriangle::RightTriangle(float sidRt1, float sidRt2, float sidRt3, float cornRt1, float cornRt2, float cornRt3) :
    Figures(nameF), Wrong_figure(nameEr), sid_a1(sidRt1), sid_b1(sidRt2), sid_c1(sidRt3), corner_A1(cornRt1), corner_B1(cornRt2), corner_C1(cornRt3)
{
    nameF = "������������� ����������� ";
}

void RightTriangle::print_info() const
{
    try
    {
        if (corner_C1 != 90)
        {
            throw Wrong_figure("���� � ������ ���� ����� 60");
        }

        std::cout << nameF << "( ������� " << sid_a1 << ", " << sid_b1 << ", " << sid_c1 << "; " << "���� " << corner_A1 << ", " << corner_B1 << ", "
            << corner_C1 << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}