compile:
	@${CXX} -std=c++14 code/cf1066.cpp -o a.out
test_code:
	@./a.out < test/test1.txt
run:
	@make compile && bash run-tests.sh && rm a.out
test_one:
	@make compile && ./a.out < $(file) && rm a.out

