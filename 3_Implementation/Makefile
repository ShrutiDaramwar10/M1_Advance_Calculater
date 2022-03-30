SOURCES = src/Addition.c src/Derivatives.c src/Equation.c src/Integration.c src/Modulus.c src/Power.c src/BaseConversion.c src/Division.c src/Factorial.c src/main.c src/Multiplication.c src/Substraction.c
OBJECTS = $(SOURCES:%.c=%.o)

TARGET = AdvancedMath

$(TARGET): $(OBJECTS)
	gcc $^ -o $@ -lm

%.o: %.c
	gcc -c $< -o $@ -lm
