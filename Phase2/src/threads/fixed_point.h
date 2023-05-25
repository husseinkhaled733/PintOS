#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#include <stdint.h>

struct real {
    int val;
};

extern const int q;
extern const int f;


struct real int_to_real(int n);
int real_to_int_toward_zero(struct real r);
int real_to_int_toward_nearest(struct real r);
struct real add(struct real x, struct real y);
struct real subtract(struct real x, struct real y);
struct real add_real_to_int(struct real r,int n);
struct real sub_int_from_real(struct real r,int n);
struct real multiply(struct real x, struct real y);
struct real multiply_by_int(struct real x, int n);
struct real divide(struct real x, struct real y);
struct real divide_by_int(struct real x, int n);

#endif