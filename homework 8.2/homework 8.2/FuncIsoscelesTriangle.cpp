#include <iostream>
#include "IsoscelesTriangle.h"
#include "Figures.h"

IsoscelesTriangle::IsoscelesTriangle(float sidIt1, float sidIt2, float sidIt3, float cornIt1, float cornIt2, float cornIt3) :
    Figures(nameF), Wrong_figure(nameEr), sid_a2(sidIt1), sid_b2(sidIt2), sid_c2(sidIt3), corner_A2(cornIt1), corner_B2(cornIt2), corner_C2(cornIt3)
{
    nameF = "�������������� ����������� ";
}

void IsoscelesTriangle::print_info() const
{
    try
    {
        if (sid_a2 != sid_c2)
        {
            throw Wrong_figure("������� ������ ���� �����");
        }
        else if (corner_A2 != corner_C2)
        {
            throw Wrong_figure("���� ������ ���� ����� 45");
        }

        std::cout << nameF << "( ������� " << sid_a2 << ", " << sid_b2 << ", " << sid_c2 << "; " << "���� " << corner_A2 << ", " << corner_B2 << ", "
            << corner_C2 << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}