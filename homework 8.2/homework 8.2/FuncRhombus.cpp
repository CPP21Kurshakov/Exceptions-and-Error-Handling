#include <iostream>
#include "Rhombus.h"
#include "Figures.h"

Rhombus::Rhombus(float sidRh1, float sidRh2, float sidRh3, float sidRh4, float cornRh1, float cornRh2, float cornRh3, float cornRh4) :
    Figures(nameF), Wrong_figure(nameEr), sid_a8(sidRh1), sid_b8(sidRh2), sid_c8(sidRh3), sid_d8(sidRh4), corner_A8(cornRh1), corner_B8(cornRh2), corner_C8(cornRh3), corner_D8(cornRh4)
{
    nameF = "���� ";
}

void Rhombus::print_info() const
{
    try
    {
        if (corner_A8 != corner_C8 || corner_B8 != corner_D8)
        {
            throw Wrong_figure("���� 'A' � 'C','B' � 'D' ������ ���� �����");
        }
        else if (sid_a8 != sid_c8 || sid_b8 != sid_d8 || sid_a8 != sid_b8 || sid_b8 != sid_c8)
        {
            throw Wrong_figure("������� ������ ���� �����");
        }
        else if (corner_A8 + corner_D8 != 180 || corner_B8 + corner_C8 != 180)
        {
            throw Wrong_figure("����� ����� 'A' � 'D','B' � 'C' ������ ���� ����� 180");
        }

        std::cout << nameF << "( ������� " << sid_a8 << ", " << sid_b8 << ", " << sid_c8 << ", " << sid_d8 << "; " << "���� " << corner_A8 << ", " << corner_B8 << ", "
            << corner_C8 << ", " << corner_D8 << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}