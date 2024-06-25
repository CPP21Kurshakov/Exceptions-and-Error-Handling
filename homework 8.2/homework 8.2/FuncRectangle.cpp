#include <iostream>
#include "Rectangle.h"
#include "Figures.h"

Rectangle::Rectangle(float sidR1, float sidR2, float sidR3, float sidR4, float cornR1, float cornR2, float cornR3, float cornR4) :
    Figures(nameF), Wrong_figure(nameEr), sid_a5(sidR1), sid_b5(sidR2), sid_c5(sidR3), sid_d5(sidR4), corner_A5(cornR1), corner_B5(cornR2), corner_C5(cornR3), corner_D5(cornR4)
{
    nameF = "������������� ";
}

void Rectangle::print_info() const
{
    try
    {
        if (corner_A5 != 90 || corner_B5 != 90 || corner_C5 != 90 || corner_D5 != 90)
        {
            throw Wrong_figure("������ ���� ������ ���� ����� 90");
        }
        else if (sid_a5 != sid_c5 || sid_b5 != sid_d5)
        {
            throw Wrong_figure("������� '�' � '�', ������� 'b' � 'd' ������ ���� �����");
        }

        std::cout << nameF << "( ������� " << sid_a5 << ", " << sid_b5 << ", " << sid_c5 << ", " << sid_d5 << "; " << "���� " << corner_A5 << ", " << corner_B5 << ", "
            << corner_C5 << ", " << corner_D5 << ") �������" << std::endl;
    }
    catch (const Wrong_figure& err)
    {
        std::cout << nameF << " " << "������ �������� ������. �������: " << err.what() << std::endl;
    }
}