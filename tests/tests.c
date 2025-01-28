

char* got(char* str) {
	if (str == NULL)
		return "NULL";
	if (str[0] == 0)
		return "(EMPTY)";
	return str;
}