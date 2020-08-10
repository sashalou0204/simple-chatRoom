server:main.cpp chat_message.h
	g++ -o2 -std=c++11 -o server main.cpp -lboost_system -lpthread
client:client.cpp chat_message.h
	g++ -o2 -std=c++11 -o client client.cpp -lboost_system -lpthread
