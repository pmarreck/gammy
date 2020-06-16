/**
 * Copyright (C) 2019 Francesco Fusco. All rights reserved.
 * License: https://github.com/Fushko/gammy#license
 */

#ifndef UTILS_H
#define UTILS_H

#include <array>
#include <vector>

double lerp(double start, double end, double factor);
double normalize(double start, double end, double value);
double remap(double value, double from_min, double from_max, double to_min, double to_max);
int roundup(int val, int multiple);

int clamp(int v, int lo, int hi);

void setColors(int temp, std::array<double, 3> &c);

int calcBrightness(const std::vector<uint8_t> &buf);

// Windows functions

void getGDISnapshot(std::vector<uint8_t> &buf);
void setGDIGamma(int brightness, int temp);

void checkInstance();
void checkGammaRange();
void toggleRegkey(bool);

double easeOutExpo(double t, double b , double c, double d);
double easeInOutQuad(double t, double b, double c, double d);

#endif // UTILS_H
