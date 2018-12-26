main: cmake
	cd build; cmake ..; make

cmake:
	mkdir -p build
	cd build; cmake ..

clean:
	rm -rf build/*
