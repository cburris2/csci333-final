CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: naughtyornice.o nn_test tweet.o tweet_test

tweet.o: tweet.cpp
	   $(CPP) $(CFLAGS) -c tweet.cpp 

tweet_test: tweet.o
		$(CPP) $(CFLAGS) -o tweet_test tweet.o

naughtyornice.o: naughtyornice.cpp
		     $(CPP) $(CFLAGS) -c naughtyornice.cpp 

nn_test: naughtyornice.o
	   $(CPP) $(CFLAGS) -o nn_test naughtyornice.o



clean:
	rm -f *.o;
	rm -f nn_test; 
	rm -f tweet_test;
	rm -f *~;
