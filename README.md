Thanks https://github.com/bitbank2/MAX7219

I made some modification based on that lib.

For my personal function, write your main.c like this

```c
//include header files
#include "MAX7219/max7219.h"
#include "MAX7219/max7219_matrix.h"

//init MAX7219
MAX7219_MatrixInit(&hspi1, MAX7219_CS_GPIO_Port, MAX7219_CS_Pin);
MAX7219_MatrixUpdate();

//prepare the numbers you want to show
uint8_t colororder[]={1,3,2,3,2,1};
//use MAX7219_mywrite(uint8_t *numstr) to flush the buffer
MAX7219_mywrite(colororder);
//use MAX7219_MatrixUpdate() to display the numbers
MAX7219_MatrixUpdate();
```



![image-20210224144132459](https://gitee.com/buddismblingblinghead/MxyPic/raw/master/img/20210224144158.png)

