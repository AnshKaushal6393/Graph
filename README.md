# Graph Algorithms

This repository contains simple C++ implementations of common graph algorithms.

## Current Algorithms

### Traversal

- Breadth First Search (BFS): `traversal/bfs.cpp`
- Depth First Search (DFS): `traversal/dfs.cpp`

Both traversal examples use an undirected graph with 5 vertices and start from vertex `0`.

### Cycle Detection

- Cycle detection in an undirected graph using DFS: `cycle_detection/undirected_dfs.cpp`

The cycle detection solution builds an adjacency list from an edge list and checks every connected component.

## Project Structure

```text
Graph/
|-- cycle_detection/
|   `-- undirected_dfs.cpp
|-- traversal/
|   |-- bfs.cpp
|   `-- dfs.cpp
`-- README.md
```

## Requirements

- A C++ compiler such as `g++`

## Compile and Run

From the project root, compile and run the traversal examples:

```bash
g++ traversal/bfs.cpp -o bfs
./bfs
```

```bash
g++ traversal/dfs.cpp -o dfs
./dfs
```

On Windows PowerShell, run the compiled files as:

```powershell
.\bfs.exe
.\dfs.exe
```

The cycle detection file is written as a `Solution` class, so it is ready to use in coding-platform style drivers or can be connected to a custom `main()` function.

## Example Output

For the current sample graph, both traversal programs print:

```text
0 1 2 3 4
```

## Notes

- The graph is represented using an adjacency list.
- BFS uses a queue to visit vertices level by level.
- DFS uses recursion to visit vertices depth first.
- Undirected cycle detection uses DFS with parent tracking.
