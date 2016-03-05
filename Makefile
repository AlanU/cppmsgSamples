all: hello-cpp-world 

%: %.cpp
	g++ -std=c++11 -I./inc $< -o $@
	
clean: 
	rm -f hello-cpp-world 
	
rebuild: clean all
