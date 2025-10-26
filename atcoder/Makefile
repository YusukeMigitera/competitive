contest := abc407
task := a

init:
	acc new $(contest)
	cp code.cpp ./$(contest)/$(task)

add:
	cd $(contest)/$(task) && acc add
	cp code.cpp ./$(contest)/$(task)

test:
	cd $(contest)/$(task) && g++ -std=c++20 code.cpp
	cd $(contest)/$(task) && oj t -d tests

submit:
	cd $(contest)/$(task) && acc submit code.cpp -- -y -w 10
