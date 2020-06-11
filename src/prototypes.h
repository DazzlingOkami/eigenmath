void eval_abs(void);
void absval(void);
void absval_nib(void);
void absval_tensor(void);
void eval_add(void);
void add(void);
void add_terms(int n);
void add_terms_nib(int n);
void flatten_terms(int h);
void censor_terms(int h);
void combine_terms(int h);
void combine_terms_nib(int h);
int combine_adjacent_terms(struct atom **s);
void sort_terms(int n);
int sort_terms_func(const void *q1, const void *q2);
int cmp_terms(struct atom *p1, struct atom *p2);
int is_imaginary_term(struct atom *p);
void add_numbers(void);
void add_rationals(void);
void add_integers(void);
void subtract(void);
void eval_adj(void);
void adj(void);
void adj_nib(void);
void eval_arccos(void);
void arccos(void);
void arccos_nib(void);
void eval_arccosh(void);
void arccosh(void);
void arccosh_nib(void);
void eval_arcsin(void);
void arcsin(void);
void arcsin_nib(void);
void eval_arcsinh(void);
void arcsinh(void);
void arcsinh_nib(void);
void eval_arctan(void);
void arctan(void);
void arctan_nib(void);
void arctan_numerical_args(void);
void eval_arctanh(void);
void arctanh(void);
void arctanh_nib(void);
void eval_arg(void);
void arg(void);
void arg_nib(void);
void eval_atomize(void);
void atomize(void);
void eval_besselj(void);
void besselj(void);
void besselj_nib(void);
void eval_bessely(void);
void bessely(void);
void bessely_nib(void);
void init_bignums(void);
void push_integer(int n);
void push_rational(int a, int b);
void push_rational_number(int sign, uint32_t *a, uint32_t *b);
int pop_integer(void);
void push_double(double d);
double pop_double(void);
int equaln(struct atom *p, int n);
int equalq(struct atom *p, int a, int b);
int compare_numbers(struct atom *a, struct atom *b);
int compare_rationals(struct atom *a, struct atom *b);
double convert_rational_to_double(struct atom *p);
void convert_double_to_rational(double d);
void best_rational_approximation(double x);
void bignum_scan_integer(char *s);
void bignum_float(void);
void bignum_factorial(int n);
uint32_t * bignum_factorial_nib(int n);
void msetbit(uint32_t *x, uint32_t k);
void mclrbit(uint32_t *x, uint32_t k);
void mshiftright(uint32_t *a);
uint32_t * mscan(char *s);
char * mstr(uint32_t *a);
int mdivby1billion(uint32_t *a);
uint32_t * madd(uint32_t *u, uint32_t *v);
uint32_t * msub(uint32_t *u, uint32_t *v);
uint32_t * mmul(uint32_t *u, uint32_t *v);
uint32_t * mdiv(uint32_t *u, uint32_t *v);
uint32_t * mmod(uint32_t *u, uint32_t *v);
uint32_t * mpow(uint32_t *u, uint32_t *v);
void mshr(uint32_t *u);
int mcmp(uint32_t *u, uint32_t *v);
uint32_t * mint(uint32_t n);
uint32_t * mnew(int n);
void mfree(uint32_t *u);
uint32_t * mcopy(uint32_t *u);
void mnorm(uint32_t *u);
uint32_t * mgcd(uint32_t *u, uint32_t *v);
uint32_t * mmodpow(uint32_t *x, uint32_t *n, uint32_t *m);
uint32_t * mroot(uint32_t *a, uint32_t *n);
int mprime(uint32_t *n);
int mprimef(uint32_t *n, uint32_t *q, int k);
void eval_binomial(void);
void binomial(void);
void binomial_nib(void);
int binomial_check_args(void);
void eval_ceiling(void);
void ceiling_nib(void);
void eval_choose(void);
void choose(void);
void choose_nib(void);
int choose_check_args(void);
void eval_circexp(void);
void circexp(void);
void circexp_subst(void);
void circexp_subst_nib(void);
void eval_exptan(void);
void exptan(void);
void eval_expcosh(void);
void expcosh(void);
void eval_expsinh(void);
void expsinh(void);
void eval_exptanh(void);
void exptanh(void);
void eval_clock(void);
void clockform(void);
void eval_coeff(void);
int coeff(void);
void eval_cofactor(void);
void eval_conj(void);
void conjugate(void);
void conjugate_subst(void);
void conjugate_subst_nib(void);
void eval_contract(void);
void contract(void);
void contract_nib(void);
struct atom * alloc(void);
struct atom * alloc_matrix(int nrow, int ncol);
struct atom * alloc_tensor(int nelem);
void gc(void);
void untag(struct atom *p);
void alloc_block(void);
void append(void);
void cons(void);
int find(struct atom *p, struct atom *q);
void list(int n);
void subst(void);
int length(struct atom *p);
int weight(struct atom *p);
int equal(struct atom *p1, struct atom *p2);
int lessp(struct atom *p1, struct atom *p2);
void sort(int n);
int sort_func(const void *q1, const void *q2);
int cmp_expr(struct atom *p1, struct atom *p2);
int sign(int n);
void eval_cos(void);
void cosine(void);
void cosine_nib(void);
void cosine_of_sum(void);
void eval_cosh(void);
void cosineh(void);
void cosineh_nib(void);
void eval_defint(void);
void eval_degree(void);
void degree(void);
void degree_nib(struct atom *p);
void eval_denominator(void);
void denominator(void);
void denominator1(void);
void denominator1_nib(void);
void eval_derivative(void);
void derivative(void);
void d_scalar_scalar(void);
void d_scalar_scalar_1(void);
void dsum(void);
void dproduct(void);
void dpower(void);
void dlog(void);
void dd(void);
void dfunction(void);
void dsin(void);
void dcos(void);
void dtan(void);
void darcsin(void);
void darccos(void);
void darctan(void);
void dsinh(void);
void dcosh(void);
void dtanh(void);
void darcsinh(void);
void darccosh(void);
void darctanh(void);
void dabs(void);
void dhermite(void);
void derf(void);
void derfc(void);
void dbesselj0(void);
void dbesseljn(void);
void dbessely0(void);
void dbesselyn(void);
void derivative_of_integral(void);
void eval_det(void);
void det(void);
void det_nib(void);
void display(void);
void emit_top_expr(struct atom *p);
int will_be_displayed_as_fraction(struct atom *p);
void emit_expr(struct atom *p);
void emit_unsigned_expr(struct atom *p);
int is_negative(struct atom *p);
void emit_term(struct atom *p);
int isdenominator(struct atom *p);
int count_denominators(struct atom *p);
void emit_multiply(struct atom *p, int n);
void emit_fraction(struct atom *p, int d);
void emit_numerators(struct atom *p);
void emit_denominators(struct atom *p);
void emit_factor(struct atom *p);
void emit_numerical_fraction(struct atom *p);
int isfactor(struct atom *p);
void emit_power(struct atom *p);
void emit_denominator(struct atom *p, int n);
void emit_function(struct atom *p);
void emit_index_function(struct atom *p);
void emit_factorial_function(struct atom *p);
void emit_subexpr(struct atom *p);
void emit_symbol(struct atom *p);
void emit_string(struct atom *p);
void fixup_fraction(int x, int k1, int k2);
void fixup_power(int k1, int k2);
void move(int j, int k, int dx, int dy);
void get_size(int j, int k, int *h, int *w, int *y);
void emit_char(int c);
void emit_str(char *s);
void emit_number(struct atom *p, int emit_sign);
int display_cmp(const void *aa, const void *bb);
void print_it(void);
char * getdisplaystr(void);
void fill_buf(void);
void emit_tensor(struct atom *p);
void emit_flat_tensor(struct atom *p);
void emit_tensor_inner(struct atom *p, int j, int *k);
void eval_eigen(void);
void eval_eigenval(void);
void eval_eigenvec(void);
int eigen_check_arg(void);
void eigen(int op);
int step(void);
void step2(int p, int q);
void eval_erf(void);
void erf_symbolic(void);
void erf_symbolic_nib(void);
void eval_erfc(void);
void erfc_symbolic(void);
void erfc_symbolic_nib(void);
void eval_and_print_result(int update);
void eval_and_print_result_nib(int update);
void prep_symbol_equals(void);
void eval(void);
void eval_sym(void);
void eval_cons(void);
void eval_binding(void);
void eval_clear(void);
void eval_dim(void);
void eval_do(void);
void eval_eval(void);
void eval_number(void);
void eval_print(void);
void eval_quote(void);
void eval_rank(void);
void eval_sqrt(void);
void eval_status(void);
void eval_stop(void);
void eval_subst(void);
void eval_unit(void);
void expand_expr(void);
void eval_exp(void);
void exponential(void);
void eval_expand(void);
void expand(void);
void expand_tensor(void);
void remove_negative_exponents(void);
void expand_get_C(void);
void expand_get_CF(void);
void trivial_divide(void);
void expand_get_B(void);
void expand_get_A(void);
void expand_get_AF(void);
void eval_expcos(void);
void expcos(void);
void eval_expsin(void);
void expsin(void);
void eval_factor(void);
void factor_again(void);
void factor_term(void);
void factor(void);
void factor_small_number(void);
void factor_factor(void);
void factor_factor_nib(void);
void factor_bignum(uint32_t *a);
void eval_factorial(void);
void factorial(void);
void factorial_nib(void);
void factorpoly(void);
void factorpoly_nib(void);
void rationalize_coefficients(int h);
int get_factor(void);
void factor_divpoly(void);
void evalpoly(void);
void divisors_onstack(void);
void gen(int h, int k);
void factor_add(void);
int factors(struct atom *p);
void push_term_factors(struct atom *p);
void eval_filter(void);
void filter(void);
void filter_main(void);
void filter_sum(void);
void filter_tensor(void);
void eval_float(void);
void float_expr(void);
void float_subst(void);
void float_subst_nib(void);
void eval_floor(void);
void floor_nib(void);
void eval_for(void);
void eval_gcd(void);
void gcd(void);
void gcd_main(void);
void gcd_expr_expr(void);
void gcd_expr(struct atom *p);
void gcd_term_term(void);
void gcd_term_factor(void);
void gcd_factor_term(void);
void gcd_numbers(void);
void guess(void);
void eval_hermite(void);
void hermite(void);
void hermite_nib(void);
void eval_hilbert(void);
void hilbert(void);
void push_zero_matrix(int i, int j);
void eval_imag(void);
void imag(void);
void eval_index(void);
void index_function(int n);
void index_function_nib(int n);
void eval_inner(void);
void eval_dot(void);
void inner(void);
void inner_nib(void);
void eval_integral(void);
void integral(void);
void integral_nib(void);
void integral_of_form(void);
int find_integral(int h);
void decomp(void);
void decomp_nib(void);
void decomp_sum(void);
void decomp_product(void);
void collect_coeffs(void);
void collect_coeffs_nib(void);
int collect_coeffs_sort_func(const void *q1, const void *q2);
void partition_integrand(void);
void eval_inv(void);
void inv(void);
int iszero(struct atom *p);
int isplusone(struct atom *p);
int isminusone(struct atom *p);
int isinteger(struct atom *p);
int isfraction(struct atom *p);
int isposint(struct atom *p);
int iseveninteger(struct atom *p);
int isradical(struct atom *p);
int isnegative(struct atom *p);
int isnegativeterm(struct atom *p);
int isnegativenumber(struct atom *p);
int iscomplexnumber(struct atom *p);
int isimaginarynumber(struct atom *p);
int isimaginaryunit(struct atom *p);
int isoneoversqrttwo(struct atom *p);
int isminusoneoversqrttwo(struct atom *p);
int isquarterturn(struct atom *p);
int isdoublez(struct atom *p);
int ispoly(struct atom *p, struct atom *x);
int ispoly_expr(struct atom *p, struct atom *x);
int ispoly_term(struct atom *p, struct atom *x);
int ispoly_factor(struct atom *p, struct atom *x);
void eval_isprime(void);
void eval_laguerre(void);
void laguerre(void);
void laguerre2(int n);
void eval_latex(void);
void latex(void);
void latex_nib(void);
void latex_expr(struct atom *p);
void latex_term(struct atom *p);
void latex_numerators(struct atom *p);
void latex_denominators(struct atom *p);
void latex_factor(struct atom *p);
void latex_number(struct atom *p);
void latex_rational(struct atom *p);
void latex_double(struct atom *p);
void latex_power(struct atom *p);
void latex_base(struct atom *p);
void latex_exponent(struct atom *p);
void latex_imaginary(struct atom *p);
void latex_function(struct atom *p);
void latex_arglist(struct atom *p);
void latex_subexpr(struct atom *p);
void latex_symbol(struct atom *p);
int latex_symbol_scan(char *s);
void latex_symbol_shipout(char *s, int n);
void latex_tensor(struct atom *p);
void latex_tensor_matrix(struct tensor *t, int d, int *k);
void latex_string(struct atom *p);
void eval_lcm(void);
void lcm(void);
void lcm_nib(void);
void eval_leading(void);
void leading(void);
void eval_legendre(void);
void legendre(void);
void legendre_nib(void);
void legendre2(int n, int m);
void legendre3(int m);
void eval_log(void);
void logarithm(void);
void log_nib(void);
void eval_mag(void);
void mag(void);
void mag_nib(void);
int main(int argc, char *argv[]);
void run_stdin(void);
void prompt(void);
void echo(void);
void run_infile(void);
void printbuf(char *s, int color);
void cmdisplay(void);
void begin_document(void);
void end_document(void);
void begin_latex(void);
void end_latex(void);
void begin_mathml(void);
void end_mathml(void);
void begin_mathjax(void);
void end_mathjax(void);
void eval_draw(void);
void eval_exit(void);
void malloc_kaput(void);
void eval_mathjax(void);
void mathjax(void);
void mathjax_nib(void);
void eval_mathml(void);
void mathml(void);
void mathml_nib(void);
void mml_expr(struct atom *p);
void mml_term(struct atom *p);
void mml_numerators(struct atom *p);
void mml_denominators(struct atom *p);
void mml_factor(struct atom *p);
void mml_number(struct atom *p);
void mml_rational(struct atom *p);
void mml_double(struct atom *p);
void mml_power(struct atom *p);
void mml_base(struct atom *p);
void mml_exponent(struct atom *p);
void mml_imaginary(struct atom *p);
void mml_function(struct atom *p);
void mml_arglist(struct atom *p);
void mml_subexpr(struct atom *p);
void mml_symbol(struct atom *p);
int mml_symbol_scan(char *s);
void mml_symbol_shipout(char *s, int n);
void mml_tensor(struct atom *p);
void mml_matrix(struct tensor *t, int d, int *k);
void mml_string(struct atom *p, int mathmode);
void mml_mi(char *s);
void mml_mn(char *s);
void mml_mo(char *s);
void eval_mod(void);
void mod(void);
void mod_nib(void);
void mod_numbers(void);
void mod_rationals(void);
void eval_multiply(void);
void multiply(void);
void multiply_factors(int n);
void multiply_factors_nib(int n);
void level_factors(int h);
void partition_tensor_factor(int h);
void collect_numerical_factors(int h);
void combine_factors(int h);
void sort_factors_provisional(int n);
int sort_factors_provisional_func(const void *q1, const void *q2);
int cmp_factors_provisional(struct atom *p1, struct atom *p2);
int combine_adjacent_factors(struct atom **s);
void factor_factors_maybe(int h);
void normalize_power_factors(int h);
void expand_sum_factors(int h);
void sort_factors(int n);
int sort_factors_func(const void *q1, const void *q2);
int cmp_factors(struct atom *p1, struct atom *p2);
int order_factor(struct atom *p);
void multiply_numbers(void);
void multiply_rationals(void);
void multiply_noexpand(void);
void multiply_factors_noexpand(int n);
void negate(void);
void negate_nib(void);
void negate_number(void);
void negate_noexpand(void);
void reciprocate(void);
void reciprocate_nib(void);
void reciprocate_number(void);
void divide(void);
void divide_nib(void);
void divide_numbers(void);
void divide_rationals(void);
void reduce_radical_factors(int h);
void eval_nroots(void);
void monic(int n);
void findroot(int n);
void compute_fa(int n);
void nroots_divpoly(int n);
void eval_numerator(void);
void numerator(void);
void numerator1(void);
void numerator1_nib(void);
void eval_outer(void);
void outer(void);
void outer_nib(void);
void eval_polar(void);
void polar(void);
void factor_number(void);
void factor_a(void);
void try_kth_prime(int k);
int factor_b(void);
void push_factor(uint32_t *d, int count);
void eval_power(void);
void power(void);
void power_nib(void);
void power_natural_number(void);
int simplify_polar(void);
void power_sum(void);
void power_imaginary_unit(void);
void power_imaginary_unit_nib(void);
void power_complex_number(void);
void power_complex_plus(int n);
void power_complex_minus(int n);
void power_complex_double(void);
void power_complex_rational(void);
void power_numbers(void);
void power_rationals(void);
void power_rationals_nib(void);
void eval_prime(void);
void prime(void);
void eval_string(void);
void print(struct atom *p);
void print_nib(struct atom *p);
void print_subexpr(struct atom *p);
void print_expr(struct atom *p);
int sign_of_term(struct atom *p);
void print_a_over_b(struct atom *p);
void print_term(struct atom *p);
void print_denom(struct atom *p, int d);
void print_factor(struct atom *p);
void print_index_function(struct atom *p);
void print_factorial_function(struct atom *p);
void print_tensor(struct atom *p);
void print_tensor_inner(struct atom *p, int j, int *k);
void print_function_definition(struct atom *p);
void print_arg_list(struct atom *p);
void print_multiply_sign(void);
int is_denominator(struct atom *p);
int any_denominators(struct atom *p);
void print_number(struct atom *p);
void eval_lisp(void);
void print_lisp(struct atom *p);
void print_lisp_nib(struct atom *p);
void print_str(char *s);
void print_char(int c);
void eval_product(void);
void eval_quotient(void);
void divpoly(void);
void eval_rationalize(void);
void rationalize(void);
void rationalize_tensor(void);
void rationalize_scalar(void);
void move_divisors_num_to_den(void);
void move_divisors_den_to_num(void);
int get_divisor(struct atom *p);
int get_divisor_from_term(struct atom *p);
int get_divisor_from_factor(struct atom *p);
void eval_real(void);
void real(void);
void eval_rect(void);
void rect(void);
void rect_nib(void);
void eval_roots(void);
void roots(void);
void roots2(void);
void roots3(void);
void mini_solve(void);
void run(char *s);
void stop(char *s);
void init(void);
void print_status(void);
void eval_run(void);
void run_file(char *filename);
void trace_input(void);
void print_input_line(void);
void print_scan_line(char *s);
char * scan(char *s);
char * scan1(char *s);
char * scan_nib(char *s);
void scan_stmt(void);
void scan_comparison(void);
void scan_expression(void);
int another_factor_pending(void);
void scan_term(void);
void scan_power(void);
void scan_factor(void);
void scan_symbol(void);
void scan_string(void);
void scan_function_call(void);
void scan_subexpr(void);
void get_token_skip_newlines(void);
void get_token(void);
void get_token_nib(void);
void update_token_buf(char *a, char *b);
void scan_error(char *errmsg);
void build_tensor(int h);
void static_negate(void);
void static_negate_nib(void);
void static_reciprocate(void);
void static_reciprocate_nib(void);
void eval_setq(void);
void setq_indexed(void);
void set_component(int n);
void set_component_nib(int n);
void setq_userfunc(void);
void eval_sgn(void);
void sgn(void);
void simfac(void);
void simfac_term(void);
int simfac_term_nib(int h);
void eval_simplify(void);
void simplify(void);
void simplify_nib(void);
void simplify_tensor(void);
void simplify_factorial(void);
void simplify_expr(void);
void simplify_expr_nib(void);
void simplify_trig(void);
void simplify_trig_nib(void);
void simplify_sin(void);
void simplify_cos(void);
void replace_sin(void);
void replace_sin_nib(void);
void replace_cos(void);
void replace_cos_nib(void);
void eval_sin(void);
void sine(void);
void sine_nib(void);
void sine_of_sum(void);
void eval_sinh(void);
void sineh(void);
void sineh_nib(void);
void push(struct atom *p);
struct atom * pop(void);
void save(void);
void restore(void);
void save_binding(struct atom *p);
void restore_binding(struct atom *p);
void swap(void);
void push_string(char *s);
void eval_sum(void);
void std_symbol(char *s, int n);
struct atom * usr_symbol(char *s);
char * get_printname(struct atom *p);
void set_binding(struct atom *p, struct atom *b);
void set_binding_and_arglist(struct atom *p, struct atom *b, struct atom *a);
struct atom * get_binding(struct atom *p);
struct atom * get_arglist(struct atom *p);
int symnum(struct atom *p);
void init_symbol_table(void);
void eval_tan(void);
void tangent(void);
void tangent_nib(void);
void tangent_of_sum(void);
void eval_tanh(void);
void tangenth(void);
void tangenth_nib(void);
void eval_taylor(void);
void taylor(void);
void taylor_nib(void);
void eval_tensor(void);
void tensor_plus_tensor(void);
int compatible_tensors(struct atom *q1, struct atom *q2);
void scalar_times_tensor(void);
int is_square_matrix(struct atom *p);
void d_tensor_tensor(void);
void d_scalar_tensor(void);
void d_tensor_scalar(void);
int compare_tensors(struct atom *p1, struct atom *p2);
void power_tensor(void);
void copy_tensor(void);
void promote_tensor(void);
int compatible(struct atom *p, struct atom *q);
void eval_test(void);
void eval_check(void);
void eval_testeq(void);
void eval_testge(void);
void eval_testgt(void);
void eval_testle(void);
void eval_testlt(void);
void eval_not(void);
void eval_and(void);
void eval_or(void);
int cmp_args(void);
void evalp(void);
void eval_transpose(void);
void transpose(void);
void transpose_nib(void);
void eval_user_function(void);
int rewrite(void);
int rewrite_nib(void);
void eval_zero(void);
