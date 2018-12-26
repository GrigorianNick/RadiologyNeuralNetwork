main: cmake
	cd build; cmake ..; make

cmake:
	cd build; cmake ..

clean:
	rm -rf build/*
