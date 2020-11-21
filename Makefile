#for compiling main to actually play

casessetup.o: casessetup.cpp casessetup.h cases.h
	g++ -c casessetup.cpp

icon.o: icon.cpp icon.h
	g++ -c icon.cpp

load.o: load.cpp load.h
	g++ -c load.cpp

save.o: save.cpp save.h
	g++ -c save.cpp

randomcases.o:	randomcases.cpp icon.h randomcases.h cases.h
	g++ -c randomcases.cpp

wantedlist.o:	wantedlist.cpp icon.h wantedlist.h cases.h
	g++ -c wantedlist.cpp

week1task.o:	week1task.cpp week1task.h cases.h icon.h
	g++ -c week1task.cpp

week2task.o:	week2task.cpp week2task.h cases.h randomcases.h
	g++ -c week2task.cpp

week3task.o:	week3task.cpp week3task.h cases.h randomcases.h
	g++ -c week3task.cpp

week4task.o:	week4task.cpp week4task.h cases.h randomcases.h wantedlist.h
	g++ -c week4task.cpp

weekend.o:	weekend.cpp weekend.h
	g++ -c weekend.cpp

main.o:	main.cpp cases.h casessetup.h week1task.h week2task.h week3task.h week4task.h weekend.h save.h load.h
	g++ -c main.cpp

main:	casessetup.o icon.o load.o randomcases.o save.o wantedlist.o week1task.o week2task.o week3task.o week4task.o weekend.o main.o
	g++ casessetup.o icon.o load.o randomcases.o save.o wantedlist.o week1task.o week2task.o week3task.o week4task.o weekend.o main.o -o main
