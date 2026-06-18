// Example: college campus road network graph
#include<iostream>
using namespace std;

class Graph
{
    private:
    // pointer to adjency matrix
    bool **adjMatrix;

    // Total no. of vertices
    int vertices;

    public:
    // constructor
    Graph(int vertices)//6
    {
        // store total vertices
        this->vertices = vertices;//6

        //create rows dinamically
        for (int i=0; i<vertices; i++)//0<6
        {
            adjMatrix[i]= new bool[vertices];

            //initially no egdes
            for(int j = 0; j<vertices; j++)
            {
                adjMatrix[i][j] = false;
            }
        }
    }
    // function to add edge
    void addEdge(int source, int destination)
    {
        // since graph is undirected
        adjMatrix[source][destination] = true;
        adjMatrix[destination][source] = true;
    }
    // display adjency matrix
    void display()
    {
        cout<<"\nAdjency Matrix\n\n";

        for(int i = 0; i < vertices; i++)
        {
            for(int j = 0; j<vertices; j++)
            {
                cout<< adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    //create graph with 6 vertices
    Graph g(6); // obj
    
    // main gate <-> library
    g.addEdge(0,1);

    // main gate <-> canteen
    g.addEdge(0,2);

    // library <-> academic block
    g.addEdge(1,3);

    // canteen <-> academic block
    g.addEdge(2,3);

    // academic block <-> hostel
    g.addEdge(3,4);

    // hjostel <-> sport ground
    g.addEdge(4,5);

    //print matrix
    g.display();
    return 0;
}