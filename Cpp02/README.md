# Cpp02 — Fixed-point numbers (Module 02)

This module builds a simple fixed-point number class `Fixed` over three exercises, gradually adding features:

- ex00: canonical form and raw storage access
- ex01: conversion to/from `int` and `float`, stream output
- ex02: comparisons, arithmetic, pre/post increment-decrement, min/max

The class stores a fixed-point value using 8 fractional bits.

## Fixed-point representation

- Internal state: `int _num_val;` represents the fixed value scaled by `2^8 = 256`.
- Fractional bits: `static const int _bits = 8;`

Conversions:
- from int: `_num_val = val << _bits;`  // multiply by 256
- from float: `_num_val = roundf(val * (1 << _bits));`
- to int: `return _num_val >> _bits;`   // divide by 256 and truncate
- to float: `return _num_val / 256.0f;`

Because the fraction is fixed at 8 bits, the smallest step is 1/256 ≈ 0.00390625. Pre/post ++/-- add or subtract one raw unit (i.e., ±1/256).

## ex00 — Canonical form and raw bits

Files: `ex00/Fixed.hpp`, `ex00/Fixed.cpp`, `ex00/main.cpp`

Implements the canonical form and raw storage accessors:
- default constructor, copy constructor, copy assignment, destructor
- `int getRawBits() const;`
- `void setRawBits(int raw);`

Behavior highlights:
- Methods print diagnostic messages (as per subject examples) so you can see call order.
- `main.cpp` constructs, copies, assigns, and prints the raw bits.

## ex01 — Int/float conversions and stream output

Files: `ex01/Fixed.hpp`, `ex01/Fixed.cpp`, `ex01/main.cpp`

Adds:
- `Fixed(int)`, `Fixed(float)`
- `float toFloat() const;`, `int toInt() const;`
- `operator<<(std::ostream&, const Fixed&)` to print the number in floating-point form

Behavior highlights:
- Constructing from `int` left-shifts it by 8; from `float` it rounds to nearest raw integer.
- `<<` shows the human-readable value via `toFloat()`.

## ex02 — Operators, increments, min/max

Files: `ex02/Fixed.hpp`, `ex02/Fixed.cpp`, `ex02/main.cpp`

Adds:
- Comparisons: `> < >= <= == !=`
- Arithmetic: `+ - * /`
- Increments/decrements: pre `++x/--x`, post `x++/x--`
- `min`/`max` overloads for const and non-const refs

Implementation notes:
- Comparisons use `toFloat()` to compare numerical values.
- Arithmetic returns a new `Fixed` built from the real-number result using `toFloat()`; this avoids double-scaling mistakes with raw bits.
- `++`/`--` modify `_num_val` by ±1 (one LSB), which is ±1/256 in value.
- `min`/`max` return references to the selected operand (const-correct overloads provided).

Edge cases:
- Division by zero is not explicitly handled; you’ll get `inf`/`nan` behavior from floating-point division when converting back via the float constructor.
- Rounding happens when constructing from float; repeated operations can accumulate rounding error as expected for fixed-point arithmetic.

## How to build and run

Each exercise is standalone with its own `Makefile`.

```bash
# ex00
cd Cpp02/ex00 && make -s && ./a.out

# ex01
cd ../ex01 && make -s && ./a.out

# ex02
cd ../ex02 && make -s && ./a.out
```

The provided `main.cpp` files exercise the API and print values and diagnostics that match the subject’s examples (minor float formatting differences may occur).

## Design choices and behavior summary

- Fixed-point format with 8 fractional bits offers a simple balance between range and precision (step size 1/256).
- Conversions and operators are implemented so the class behaves like a numeric type while keeping the internal fixed representation hidden.
- Canonical form is present in all exercises for correct copying and destruction semantics.

## What’s not included

- If your local subject includes an `ex03` (Point/BSP), it is not present here. That exercise typically adds an immutable `Point` class using `Fixed` and a `bsp` function to test if a point lies strictly inside a triangle. It can be added on request.

## Troubleshooting

- If you change headers and see linker errors (undefined reference), run a clean build so objects depending on headers are recompiled: `make fclean && make`.
- For arithmetic correctness in ex02, ensure the operators use `toFloat()` (as in this repo) rather than combining raw bits directly.
