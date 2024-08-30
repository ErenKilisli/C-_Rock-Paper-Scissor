#include <unistd.h>

int RPS(int user_number);
int ft_strcmp(const char *s1, const char *s2);

int Set_User_Number(char *str)

{
	int	user_Number;
	if (ft_strcmp(str, "Rock") == 0)
		user_Number = 1;
	if (ft_strcmp(str, "Paper") == 0)
		user_Number = 2;
	if (ft_strcmp(str, "Scissor") == 0)
		user_Number = 3;
	return (user_Number);
}

int Handle_Error(char *str)

{
	if (ft_strcmp(str, "Rock") == 0 || ft_strcmp(str, "Paper") == 0 
	|| ft_strcmp(str, "Scissor") == 0)
		return 1;
	return 0;
}

int main (int argc, char **argv)

{
    if (argc != 2 || Handle_Error(argv[1]) != 1)
    {
        write (1, "Please write only Rock, Paper or Scissor\n", 41);
    }
	else
	{
		int user;
		user = Set_User_Number(argv[1]);
		RPS(user);

		return (0);
	}
}