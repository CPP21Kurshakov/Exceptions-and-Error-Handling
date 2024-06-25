#include <iostream>
#include "Triangle.h"
#include "Figures.h"

Triangle::Triangle(float sidT1, float sidT2, float sidT3, float cornT1, float cornT2, float cornT3) :
    Figures(nameF), Wrong_figure(nameEr), sid_a(sidT1), sid_b(sidT2), sid_c(sidT3), corner_A(cornT1), corner_B(cornT2), corner_C(cornT3)
{
    nameF = "����������� ";
}

void Triangle::print_info() const
{
    try
    {
        if (corner_C != 60)
        {
            throw Wrong_figure("���� � ������ ���� ����� 60");
        }

        std::cout << nameF << "( ������� " << sid_a << ", " << sid_b << ", " << sid_c << "; " << "���� " << corner_A << ", " << corner_B << ", "
            << corner_C << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}