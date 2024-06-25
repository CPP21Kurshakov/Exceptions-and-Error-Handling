#include <iostream>
#include "Quadrilateral.h"
#include "Figures.h"

Quadrilateral::Quadrilateral(float sidQl1, float sidQl2, float sidQl3, float sidQl4, float cornQl1, float cornQl2, float cornQl3, float cornQl4) :
    Figures(nameF), Wrong_figure(nameEr), sid_a4(sidQl1), sid_b4(sidQl2), sid_c4(sidQl3), sid_d4(sidQl4), corner_A4(cornQl1), corner_B4(cornQl2), corner_C4(cornQl3), corner_D4(cornQl4)
{
    nameF = "�������������� ";
}

void Quadrilateral::print_info() const
{
    try
    {
        if ((corner_A4 + corner_B4 + corner_C4 + corner_D4) != 360)
        {
            throw Wrong_figure("����� ����� ������ ���� ����� 360");
        }

        std::cout << nameF << "( ������� " << sid_a4 << ", " << sid_b4 << ", " << sid_c4 << ", " << sid_d4 << "; " << "���� " << corner_A4 << ", " << corner_B4 << ", "
            << corner_C4 << ", " << corner_D4 << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}