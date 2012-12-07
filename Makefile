CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: tweet.o tweet_test

tweet.o: tweet.cpp
	  $(CPP) $(CFLAGS) -c tweet.cpp 

tweet_test: tweet.o
		$(CPP) $(CFLAGS) -o tweet_test tweet.o


clean:
	rm -f *.o;
	rm -f ntest; rm -f ttest; rm -f treetest;
	rm -f *~;
