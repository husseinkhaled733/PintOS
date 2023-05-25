#include "fixed_point.h"

const int q = 14;
const int f = 1 << q;

struct real int_to_real(int n) {
    struct real r;
    r.val = n * f;
    return r;
}

int real_to_int_toward_zero(struct real r) {
    return r.val / f;
}

int real_to_int_toward_nearest(struct real r) {
    return (r.val >= 0) ? (r.val + f / 2) / f : (r.val - f / 2) / f;
}

struct real add(struct real x, struct real y) {
    struct real res;
    res.val = x.val + y.val;
    return res;
}

struct real subtract(struct real x, struct real y) {
    struct real res;
    res.val = x.val - y.val;
    return res;
}

struct real add_real_to_int(struct real r,int n){
    struct real res;
    res.val = r.val + n * f;
    return res;
}

struct real sub_int_from_real(struct real r,int n){
    struct real res;
    res.val = r.val - n * f;
    return res;
}

struct real multiply(struct real x, struct real y) {
    struct real res;
    res.val = ((int64_t) x.val) * y.val / f;
    return res;
}

struct real multiply_by_int(struct real x, int n) {
    struct real res;
    res.val = x.val * n;
    return res;
}

struct real divide(struct real x, struct real y) {
    struct real res;
    res.val = ((int64_t) x.val) * f / y.val;
    return res;
}

struct real divide_by_int(struct real x, int n) {
    struct real res;
    res.val = x.val / n;
    return res;
}
