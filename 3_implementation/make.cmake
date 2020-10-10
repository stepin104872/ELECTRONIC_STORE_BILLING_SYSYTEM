SRC = unity/unity.c\
src/esb.c\
test/test_esb.c\
main.c
-INC\
-Itest

PROJECT_NAME =esb.out
$(PROJECT_NAME):$(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME)
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
