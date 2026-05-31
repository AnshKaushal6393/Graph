# Graph Algorithms

This repository contains simple C++ implementations of graph traversal algorithms.

## Current Algorithms

- Breadth First Search (BFS): `traversal/bfs.cpp`
- Depth First Search (DFS): `traversal/dfs.cpp`

Both examples use an undirected graph with 5 vertices and start traversal from vertex `0`.

## Project Structure

```text
Graph/
|-- traversal/
|   |-- bfs.cpp
|   `-- dfs.cpp
`-- README.md
```

## Requirements

- A C++ compiler such as `g++`

## Compile and Run

From the project root:

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

## Example Output

For the current sample graph, both traversal programs print:

```text
0 1 2 3 4
```

## Notes

- The graph is represented using an adjacency list.
- BFS uses a queue to visit vertices level by level.
- DFS uses recursion to visit vertices depth first.
