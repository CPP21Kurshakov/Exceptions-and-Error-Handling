#include <iostream>
#include <string>
#include <Windows.h>



class ForbiddenSize
{
private:
    std::string attention;

public:
    ForbiddenSize(const std::string& att) : attention(att) {}

    std::string getAttention() const { return attention; }
};

int function(std::string str, int forbidden_length)
{
    int length = str.length();

    if (length == forbidden_length)
    {
        throw ForbiddenSize("Вы ввели слово запретной длины! До свидания");
    }

    return length;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int forbidden_length;
    int result;
    std::string word;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    do
    {
        std::cout << "Введите слово: ";
        std::cin >> word;

        try
        {
            result = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\"" << " равна " << result << std::endl;
        }
        catch (const ForbiddenSize& f_b)
        {
            std::cerr << f_b.getAttention() << std::endl;
        }
        
    } while (word.length() != forbidden_length);



    return 0;
}
