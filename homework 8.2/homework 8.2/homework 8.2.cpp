#include <iostream>
#include "Figures.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(const Figures* figure)
{
    figure->print_info();
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle(15, 22, 30, 40, 50, 60);
    RightTriangle rightTriangle(10, 20, 30, 44, 46, 90);
    IsoscelesTriangle isoscelesTriangle(20, 40, 20, 45, 90, 45);
    EquilateralTriangle equilateralTriangle(30, 30, 30, 60, 60, 60);
    Quadrilateral quadrilateral(25, 20, 40, 35, 97, 83, 76, 104);
    Rectangle rectangle(40, 20, 40, 20, 90, 90, 90, 90);
    Square square(55, 55, 55, 55, 90, 90, 90, 90);
    Parallelogram parallelogram(30, 50, 30, 50, 60, 120, 60, 120);
    Rhombus rhombus(40, 40, 40, 40, 70, 110, 70, 110);

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&rightTriangle);
    std::cout << std::endl;
    print_info(&isoscelesTriangle);
    std::cout << std::endl;
    print_info(&equilateralTriangle);
    std::cout << std::endl;
    print_info(&quadrilateral);
    std::cout << std::endl;
    print_info(&rectangle);
    std::cout << std::endl;
    print_info(&square);
    std::cout << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    print_info(&rhombus);

    return 0;
}
