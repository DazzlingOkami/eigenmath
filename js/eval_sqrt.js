function
eval_sqrt(p1)
{
	push(cadr(p1));
	evalf();
	push_rational(1, 2);
	power();
}
