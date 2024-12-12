objects = queue.o ppos-all.o ppos-disk-manager.o disk-driver.o

ppos_a: $(objects)
		  cc ppos-core-aux.c pingpong-semaphore.c -o ppos_a $(objects) -lm

$(objects): ppos-core-globals.h ppos.h queue.h ppos-data.h \
			disk-driver.h ppos-disk-manager.h 
