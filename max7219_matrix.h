/*
 * max7219_matrix.h
 *
 *  Created on: 2019. 3. 22.
 *      Author: KIKI
 */

#ifndef MAX7219_MATRIX_H_
#define MAX7219_MATRIX_H_

#include "stm32f4xx_hal.h"
#include <stdbool.h>

#define CHR(x)	Atoz[(x)- 65]

extern const uint64_t symbol[];
extern const uint64_t numbers[];
extern const uint64_t numbers3_5[];
extern const uint64_t Atoz[];

void MAX7219_MatrixInit(SPI_HandleTypeDef* spi, GPIO_TypeDef* cs_port, uint16_t cs_pin);
void MAX7219_MatrixClear(uint8_t index);
void MAX7219_MatrixSetRow(uint8_t index,  uint8_t rows[8]);
void MAX7219_MatrixSetRow64(uint8_t index,  uint64_t rows);
void MAX7219_MatrixSetPixel(uint8_t index, uint8_t row, uint8_t col);
void MAX7219_MatrixLShift(uint8_t step);
void MAX7219_MatrixRShift(uint8_t step);
bool MAX7219_MatrixUpdate(void);
void MAX7219_mywrite(uint8_t *numstr);

#endif /* MAX7219_MATRIX_H_ */
