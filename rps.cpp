#include <iostream>
#include <random>
#include <unistd.h>

void Draw(int argument);

int Set_Result(int user_number, int random_number)

{
    int result;

    if (user_number == 3)
    {
        if (random_number == 1)
            result = 0;
        else
            result = 1;
    }
    else
    {
        if (random_number == (user_number + 1))
            result = 0;
        else
            result = 1;
    }
    return (result);
}

void RPS(int user_number)

{
    int result;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 3);

    int random_number = distrib(gen);

    write (1, "YOU MAKE A:\n", 13);
    Draw(user_number);
    write (1, "AGAINST A", 9);
    write (1, "\n", 1);
    Draw(random_number);

    result = Set_Result(user_number, random_number);
    if (user_number == random_number)
        result = 2;
    if (result == 1)
    {
        write (1, "You Win!", 8);
    }
    else if (result == 0)
        write (1, "You Lose!", 9);
    else
        write (1, "Match ended in a draw!", 22);    

}
