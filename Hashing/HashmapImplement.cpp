#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
    public:
        string key;
        T value;
        Node<T>* next;

        Node(string key, T val)
        {
            this->key=key;
            value=val;
            next=NULL;
        }
        ~Node()
        {
            if(next!=NULL)
            {
                delete next;
            }
        }
};

template<typename T>
class Hashtable
{
    Node<T>**table;
    int current_size;
    int table_size;

    public:
        Hashtable(int ts =7)
        {
            table_size=ts;
            table= new Node<T>*[table_size];
            current_size=0;
            for(int i=0;i<table_size;i++)
            {
                table[i]=NULL;
            }
        }

        void insert(string key, T value)
        {

        }

        T search(string key)
        {

        }

        void erase(string key)
        {

        }
};

