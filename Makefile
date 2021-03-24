sort:main.o sort.o
	gcc $^ -o $@ 

%.o:%.c
	gcc -c $<
    
.PHONY:clean
clean:
	rm *.o sort -rf








