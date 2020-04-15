/**
 ******************************************************************************
 * @file wifi_scanner.c
 * @brief Scans frequencies from 2.400GHz to 2.525GHz (1MHz resolution)
 * with nRF24L01+ and plots the activity on each frequency through UART.
 * @author gemesa
 ******************************************************************************
 */

#ifndef GEN_DOC_WIFI_SCANNER_H_
#define GEN_DOC_WIFI_SCANNER_H_

extern void wifi_scanner_init(void);
extern void wifi_scanner_step(void);

#endif /* GEN_DOC_WIFI_SCANNER_H_ */
