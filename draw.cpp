#include <unistd.h>

void Rock()

{
    write(1, "  ___  \n", 8);
    write(1, " /   \\ \n", 8);
    write(1, " \\___/ \n", 8);
}
void Paper()

{
    write(1, "  _____  \n", 10);
    write(1, " |     | \n", 10);
    write(1, " |_____| \n", 10);
}

void Scissor()

{
    write(1, "  O O   \n", 9);
    write(1, "   X    \n", 9);
    write(1, "  / \\  \n", 8);
}

void Draw(int argument)

{
    if (argument == 1)
        Rock();
    if (argument == 2)
        Paper();
    if (argument == 3)
        Scissor();
    write (1, "\n", 1);

}