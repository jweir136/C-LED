build:
	g++ $(CPPFLAGS) $(CFLAGS) -I. C-LED/*.cpp -o app

check:
	g++ $(CPPFLAGS) $(CFLAGS) -I. test/*.test.cpp -o test/testapp
	./test/testapp
	rm ./test/testapp
run:
	g++ $(CPPFLAGS) $(CFLAGS) -I. C-LED/*.cpp -o app
	./app