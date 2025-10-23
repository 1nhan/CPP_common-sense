import Calc_Header;

auto Expression() -> double {
	double left = Term();
	Token t = ts.get();
	
	while (true) {
		switch (t.get_kind()) {
		case'+': 
			left += Term(); 
			t = ts.get(); 
			break;
		case'-': 
			left -= Term(); 
			t = ts.get(); 
			break;
		default: 
			return left;
		}
	}
};