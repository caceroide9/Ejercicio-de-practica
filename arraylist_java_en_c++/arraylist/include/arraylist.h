#ifndef ARRAYLIST_H
#define ARRAYLIST_H

template <class T>
class arraylist
{

    private:
        T *data;
        int arrlength;
        int listsize;
        void resize(){
            if (listsize == arrlength){
                    T *temp = new T[arrlength*2];
                for (int i = 0; i < arrlength; i ++){
                    temp[i] = data[i];
                    data = temp;}
                    arrlength =arrlength* 2;}}

        bool needtoresize(){
            return arrlength == listsize;}

    public:
        arraylist()
        {
            data = new T[10];
            arrlength = 10;
            listsize = 0;
        }
        ///~arraylist();

        void add(T item){
            if (needtoresize()){
                resize();}
            data[listsize] = item;
            listsize ++;}

        void add(int index, T item){
            if (needtoresize()){
                resize();}
            for (int i = listsize; i >= index; i --)
                data[i+1]=data[i];
                data[index]=item;
                listsize++;}

        void remove(int index){
            for (int i = index; i < listsize; i ++)
                data[i] = data[i+1];
                listsize --;}
        //void remove(T item);
        void set(int index, T item){
            if (index <= listsize && index >= 0)
                data[index] = item;}

        T *get(int index){
            if (index <= listsize && index >= 0){
                return &data[index];}
            else{
                return 0;}
            }
        int indexOf(T item){
            for (int i = 0; i <= listsize; i ++)
                if (item == data[i])
                    return i;
            return -1;}

        int lastindexof(T item){
            for (int i = listsize; i >= 0; i --)
                if (item == data[i]){
                    return i;}
            return -1;}

        int size(){return listsize;}

        void clear(){}

        bool isempty(){
        if(listsize==0){
            return true;}
        else{
            return false;}}

        bool contains(T item){
            return (indexOf(item)) > -1;}
};




#endif // ARRAYLIST_H
