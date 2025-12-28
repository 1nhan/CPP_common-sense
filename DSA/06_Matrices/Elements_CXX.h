#pragma once

class Elements {
	int row,
		col,
		val;

public:
	int		get_row	()		{ return row; }
	int		get_col	()		{ return col; }
	int		get_val	()		{ return val; }
	void	set_row	(int n) { row = n; }
	void	set_col	(int n) { col = n; }
	void	set_val	(int n) { val = n; }
};	