function
lookup(s)
{
	if (!(s in symtab))
		symtab[s] = {printname:s, func:eval_symbol};
	return symtab[s];
}
