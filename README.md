# C++ Exercises

C++ exercises from my Applied Computer Science studies, built with CMake.
Each folder contains one self-contained program.

## Contents

| Folder | Topic | Description |
|--------|-------|-------------|
| `P2` | Unit conversion | Converts temperatures between degrees Celsius and Fahrenheit |
| `P3` | Stopping distance | Calculates the perception-reaction distance, the braking distance and the total stopping distance of a braking vehicle |
| `P4` | Statistics | Sample size, sum, mean, variance, standard deviation, average absolute deviation, covariance and correlation of two data sets read from the keyboard |
| `P5` | Statistics + linear regression | Same statistics, data read from a text file, plus a linear regression line `k * x + d` |
| `P6` | Maps | Reads `category value` lines from a file and prints the mean per category using `std::map` |

## Requirements

- A C++17 compiler (GCC or Clang)
- CMake 3.x or newer

## Build

```bash
git clone https://github.com/stanKendy/programmierung-uebungen.git
cd programmierung-uebungen
mkdir build && cd build
cmake ..
make
```

## Example output

Linear regression on the sample data of `P5`:

```
Covariance 2.80817
Correlation 0.947852
Regression 127.184 * x - 152.168
```

## What I practiced
- Implementing formulas from physics and unit conversions in code
- Splitting code into header and source files
- Passing parameters by `const` reference
- Reading input with `cin` and files with `ifstream`
- Command line arguments (`argc`, `argv`)
- `std::vector`, `std::pair` and `std::map`
