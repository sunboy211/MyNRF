/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main(void)
{
	while (1) {
		printk("Hello World!\n");
		k_msleep(1000);
	}
}
//prj.conf is left empty because the console drivers needed by printk() are enabled by default by the board configuration file. This is covered in-depth in Lesson 4.