/*
 * Copyright (c) 2023 George Daniel Mangum
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @brief Driver for UART port on Bouffalo Lab processors.
 *
 */

#ifndef ZEPHYR_DRIVERS_SERIAL_UART_BFLB_H_
#define ZEPHYR_DRIVERS_SERIAL_UART_BFLB_H_

#include <zephyr/drivers/pinctrl.h>
#include <zephyr/drivers/reset.h>
#include <zephyr/drivers/uart.h>

/* device config */
struct uart_bflb_config {
	    uint32_t baudrate;
	    uint8_t direction;
    	    uint8_t data_bits;
    	    uint8_t stop_bits;
    	    uint8_t parity;
    	    uint8_t bit_order;
    	    uint8_t flow_ctrl;
    	    uint8_t tx_fifo_threshold;
    	    uint8_t rx_fifo_threshold;
};

#endif	/* ZEPHYR_DRIVERS_SERIAL_UART_BFLB_H_ */

