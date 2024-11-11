#include <iostream>
using namespace std;
 
// Constants for the maze dimensions
const int WIDTH = 7;
const int HEIGHT = 7;

int startRow = 0;
int startCol = 0;
int finishRow = 7;
int finishCol = 7;
 
// Maze representation
// 0 - Open path
// 1 - Wall
// 2 - Part of the solution path
int maze[HEIGHT][WIDTH] = {
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0, 1, 1},
    {0, 1, 1, 1, 0, 1, 0},
    {0, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0}

};
 
// Function to print the maze with solution path
void printMaze() {
    // TODO: Loop through each cell in the maze and print
    for(int i = 0; i < HEIGHT; i++){
        for(int r = 0; r < WIDTH; r++){
            cout << maze[i][r] << " ";
        }
        cout << endl;
    }
    // '#' for walls, '.' for solution path, and ' ' for open spaces
}
 
// Recursive function to solve the maze
bool solveMaze(int x, int y) {
    // Base case: Check if (x, y) is out of bounds or a wall
    // TODO: Implement checks for boundaries and walls
    
    // Base case: Check if we've reached the end of the maze
    if()
    // TODO: Implement check for reaching the goal position
 
    // Mark current cell as part of the solution path
    // TODO: Update the cell to represent part of the path
 
    // Recursive calls: Move in each direction (right, left, down, up)
    // TODO: Call solveMaze recursively for each direction
 
    // Backtrack: If no path is found, reset the cell to its original state
    // TODO: Undo the marking for the path
 
    return false; // No solution found from this position
}
 
int main() {
    // Start the maze solver from the top-left corner
    if (solveMaze(0, 0)) {
        cout << "Path found:\n";
    } else {
        cout << "No path found.\n";
    }
    printMaze();  // Display the maze with the solution path
    cout << maze[3][3];
    return 0;
}