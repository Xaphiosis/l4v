/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

int a;
void *b;
void **c;

int main(void) {
    b = &a;
    c = &b;
    return 3;
}
