all: main

CXX = g++
override CXXFLAGS += -g -Wall -Werror -std=c++14

# Para Linux/macOS
ifeq ($(OS),Linux)
    SRCS = src/Cliente.cpp src/Equipamento.cpp src/Manutencao.cpp src/Sistema.cpp main.cpp 
    HEADERS = $(shell find header -type f -name '*.h')
    
# Para Windows
else
    SRCS = src/Cliente.cpp src/Equipamento.cpp src/Manutencao.cpp src/Sistema.cpp main.cpp  
    HEADERS = $(wildcard header/*.h)  
endif

main: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -mconsole -o "$@"

main-debug: $(SRCS) $(HEADERS)
	NIX_HARDENING_ENABLE= $(CXX) $(CXXFLAGS) -O0 $(SRCS) -mconsole -o "$@"

clean:
	rm -f main main-debug
