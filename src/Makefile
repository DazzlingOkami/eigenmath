CFLAGS = -Wall -O0
CC = gcc

# := means evaluate then assign result to variable
# sed removes the commas then replaces .c with .o

objects = \
abs.o \
add.o \
adj.o \
arccos.o \
arccosh.o \
arcsin.o \
arcsinh.o \
arctan.o \
arctanh.o \
arg.o \
atomize.o \
besselj.o \
bessely.o \
bignum.o \
binomial.o \
ceiling.o \
choose.o \
circexp.o \
clock.o \
coeff.o \
cofactor.o \
conj.o \
contract.o \
core.o \
cos.o \
cosh.o \
defint.o \
degree.o \
denominator.o \
derivative.o \
det.o \
display.o \
eigen.o \
erf.o \
erfc.o \
eval.o \
exp.o \
expand.o \
expcos.o \
expsin.o \
factor.o \
factorial.o \
factorpoly.o \
factors.o \
filter.o \
float.o \
floor.o \
for.o \
gcd.o \
globals.o \
guess.o \
hermite.o \
hilbert.o \
imag.o \
index.o \
inner.o \
integral.o \
inv.o \
is.o \
isprime.o \
laguerre.o \
latex.o \
lcm.o \
leading.o \
legendre.o \
log.o \
mag.o \
main.o \
mathjax.o \
mathml.o \
mod.o \
multiply.o \
nroots.o \
numerator.o \
outer.o \
polar.o \
pollard.o \
power.o \
prime.o \
primetab.o \
print.o \
product.o \
quotient.o \
rationalize.o \
real.o \
rect.o \
roots.o \
run.o \
scan.o \
setq.o \
sgn.o \
simplify.o \
sin.o \
sinh.o \
stack.o \
sum.o \
symbol.o \
tan.o \
tanh.o \
taylor.o \
tensor.o \
test.o \
transpose.o \
userfunc.o

eigenmath : $(objects)
	gcc -o eigenmath $(objects) -lm

$(objects) : defs.h defs1.h prototypes.h

clean :
	del eigenmath.exe
	del *.o
