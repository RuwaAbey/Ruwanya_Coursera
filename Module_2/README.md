### 1. General Instructions

#### a. Platform base input can set variables 

```bash
PLATFORM=HOST
```

```make
ifeq ($(PLATFORM), MSP432)
    CC=arm-none-eabi-gcc
    CTSFLAG=-DMSP432
endif

ifeq ($(PLATFORM),HOST)
    CC=gcc
    CTSFLAG=-DHOST
endif
```
#### b. PLtaform based sources and includes

```make
ifeq ($(PLATFORM), MSP432)
    INCLUDES = -I../include/msp432 -I../include/CMSIS -I../include/common
endif

ifeq ($(PLATFORM),HOST)
    INCLUDES = -I../include/common
endif
```

#### c. General Flags (Both Platforms)

```make
CFLAGS = -Wall -Werror -g -O0 -std=c99
```

### 2. Generate the preprocessed output of all c-program implementation files (use the –E flag).

```bash
gcc [OPTIONS] -E [FILE-TO-PREPROCESS]
```

```make
%.i : %.c
	$(CC) $(CFLAGS) $(CTSFLAG) $(INCLUDES) -E $< -o $@
```
Example:

```bash
make main.i PLATFORM=HOST
```