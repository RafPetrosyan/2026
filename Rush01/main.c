int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	int	value = 1;
	while (value <= 4)

	
}

int	check_valid(int togh, int syun, int **arr);
void	print(int **arr);

void recursiv(int togh, int syun, int **arr, int *flag)
{
	int	value;

	value = 1;
	while (value <= 4)
	{
		arr[togh][syun] = value;
		if (check_valid(togh, syun, arr) == 1 && (togh == 4 && syun == 4))
		{
			*flag = 1;
			print_arr(arr);
		}
		else if (check_valid(togh, syun, arr) == 1 && syun != 4)
			recursiv(togh, syun + 1, arr, flag);
		else if (check_valid(togh, syun, arr) == 1 && syun == 4)
			recursiv(togh + 1, syun, arr, flag);
		else
			arr[togh][syun] = 0;
		if (*flag == 1)
			return;
		++value;
	}
}

// եթե սկսում եմ լրացնել ձախ վերևից ապա  քանի դեռ տողի վերջին չեմ հասել ուրեմն միայն ստուգում եմ ձախ տողի պայմանը իսկ հասնելուց հետո նաև աջի պայմանը
// պայմանը