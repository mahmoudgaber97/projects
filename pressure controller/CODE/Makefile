CC=arm-none-eabi-#replace all 'name of chip by $(CC)'
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I
LIBS=#replace libs by 'LIBS'
SRC=$(wildcard *.c)#collect all $(PROJECT_NAME).c and replaces by 'SRC'
OBJ=$(SRC:.c=.o)#create same names of $(PROJECT_NAME)s.c to $(PROJECT_NAME)s.o
AS=$(wildcard *.s)#collect all $(PROJECT_NAME).s and replaces by 'AS'      
ASOBJ=$(AS:.s=.o)#create same names of $(PROJECT_NAME)s.s to $(PROJECT_NAME)s.o
LINK=linker_script.ld
PROJECT_NAME=FILE
all: $(PROJECT_NAME).bin
	@echo "========bulid has been done========="

%.o: %.c	
	$(CC)gcc.exe -c $(INCS) .  $(CFLAGS) $< -o $@


%.o: %.s
	$(CC)as.exe  $(CFLAGS)  $< -o $@ 

$(PROJECT_NAME).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T $(LINK) $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_$(PROJECT_NAME).map
$(PROJECT_NAME).bin:$(PROJECT_NAME).elf
	$(CC)objcopy.exe  -O binary $< $@

	

clean obj:
	rm -rf *.o *~
	@echo "===================== All object $(PROJECT_NAME)s have been removed==================="
clean_all:
	rm -rf *.bin  *.elf *~
	@echo "===================== All execution $(PROJECT_NAME)s have been removed==================="

debug:
	$(CC)objdump.exe $(PROJECT_NAME).elf -h