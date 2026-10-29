/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arandrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:21:22 by arandrea          #+#    #+#             */
/*   Updated: 2026/10/18 23:24:28 by narabrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
int		ft_atoi(char *text);
char	ft_is_int(char *text);
int		err(char *text);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

char	is_size_ok(int i, char *title)
{
	if (i < 1)
	{
		err("Argument ");
		err(title);
		err(" can't be less than 1.\n");
		return (0);
	}
	return (1);
}

int	parse_x_y_arg(char *argx, char *argy, int *x_ptr, int *y_ptr)
{
	int	tmpx;
	int	tmpy;

	if (!ft_is_int(argx))
		return (err("x arguemnts should be able to be parsed as int.\n"));
	if (!ft_is_int(argy))
		return (err("ay arguemnts should be able to be parsed s int.\n"));
	tmpx = ft_atoi(argx);
	tmpy = ft_atoi(argy);
	if (is_size_ok(tmpx, "X") && is_size_ok(tmpy, "Y"))
	{
		*x_ptr = tmpx;
		*y_ptr = tmpy;
		return (0);
	}
	return (1);
}

int	parse_task_arg(char *arg, char *arg_title, int *task_ptr)
{
	int	tmp_parse;

	if (ft_is_int(arg))
	{
		tmp_parse = ft_atoi(arg);
		if (tmp_parse < 0 || tmp_parse > 4)
		{
			err(arg_title);
			err(" argument is out of range. Please ");
			return (err("provide from 0 to 4.\n"));
		}
		*task_ptr = tmp_parse;
		return (0);
	}
	err("Provided ");
	err(arg_title);
	return (err(" is not valid integer. Please provide int from 0 to 4.\n"));
}

int	parse_arguments(int argc, char **argv, int *x_y_task)
{
	if (argc == 1)
		return (0);
	else if (argc == 2)
		return (parse_task_arg(argv[1], "Task", &x_y_task[2]));
	else if (argc == 3 || argc == 4)
	{
		if (parse_x_y_arg(argv[1], argv[2], &x_y_task[0], &x_y_task[1]))
			return (1);
		else if (argc == 4)
			return (parse_task_arg(argv[3], "Task", &x_y_task[2]));
		else
			return (0);
	}
	else
	{
		err("Invalid argument configuration. Use command like this ");
		err(argv[0]);
		return (err(" [$x $y] [$task]; \t[] it means optional.\n"));
	}
}

int	main(int argc, char **argv)
{
	int	x_y_task[3];

	x_y_task[0] = 5;
	x_y_task[1] = 6;
	x_y_task[2] = ('n' - 'a' + 1) % 5;
	if (parse_arguments(argc, argv, x_y_task) != 0)
		return (1);
	if (x_y_task[2] == 0)
		rush00(x_y_task[0], x_y_task[1]);
	else if (x_y_task[2] == 1)
		rush01(x_y_task[0], x_y_task[1]);
	else if (x_y_task[2] == 2)
		rush02(x_y_task[0], x_y_task[1]);
	else if (x_y_task[2] == 3)
		rush03(x_y_task[0], x_y_task[1]);
	else
		rush04(x_y_task[0], x_y_task[1]);
	return (0);
}
