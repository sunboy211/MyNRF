/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/* STEP 2.2 - Declare the function sum() */
#ifndef MY_FUNCTION_H
#define MY_FUNCTION_H 

int sum(int a, int b);

#endif 
//include guards:A construct, in this case, a macro, that is 
//used to avoid the problem of double inclusion, which happens if the header file 
//is included twice, thereby rendering the contents invalid.
