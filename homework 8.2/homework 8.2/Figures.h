#pragma once

class Figures
{
protected:
    std::string nameF;

public:
    Figures(const std::string& name);

    virtual void print_info() const = 0;

    std::string getName();
};