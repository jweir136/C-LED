build:
	g++ $(CPPFLAGS) $(CFLAGS) -I. C-LED/*.cpp -o app -lwiringPi

check:
	g++ $(CPPFLAGS) $(CFLAGS) -I. test/*.test.cpp -o test/testapp -lwiringPi
	./test/testapp
	rm ./test/testapp
run:
	g++ $(CPPFLAGS) $(CFLAGS) -I. C-LED/*.cpp -o app -lwiringPi
	./app