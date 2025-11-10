contest := abc407
task := a

init:
	acc new $(contest)
	cp code.cpp ./$(contest)/a

addb:
	cd $(contest)/a && acc add
	cp code.cpp ./$(contest)/b

addc:
	cd $(contest)/b && acc add
	cp code.cpp ./$(contest)/c

edit:
	nvim ./$(contest)/$(task)/code.cpp

test:
	cd $(contest)/$(task) && g++ -std=c++20 code.cpp
	cd $(contest)/$(task) && oj t -d tests

submit:
	cd $(contest)/$(task) && acc submit code.cpp -- -y -w 10
