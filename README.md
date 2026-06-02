# Graph Algorithms

This repository contains simple C++ implementations of common graph algorithms.

## Current Algorithms

### Traversal

- Breadth First Search (BFS): `traversal/bfs.cpp`
- Depth First Search (DFS): `traversal/dfs.cpp`

Both traversal examples use an undirected graph with 5 vertices and start from vertex `0`.

### Cycle Detection

- Cycle detection in an undirected graph using DFS: `cycle_detection/undirected_dfs.cpp`
- Cycle detection in an undirected graph using BFS: `cycle_detection/undirected_bfs.cpp`
- Cycle detection in a directed graph using DFS: `cycle_detection/directed_dfs.cpp`

The undirected cycle detection solutions use parent tracking and check every connected component. The directed DFS solution uses visited and path-visited arrays to detect a back edge in the current recursion path.

### Topological Sort

- Topological sort using DFS: `topological_sort/dfs.cpp`

The DFS topological sort solution visits every vertex, pushes each vertex onto a stack after all of its outgoing neighbors are processed, and then pops the stack to produce a valid ordering for a directed acyclic graph.

## Project Structure

```text
Graph/
|-- cycle_detection/
|   |-- directed_dfs.cpp
|   |-- undirected_bfs.cpp
|   `-- undirected_dfs.cpp
|-- topological_sort/
|   `-- dfs.cpp
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

The cycle detection files are written as `Solution` classes, so they are ready to use in coding-platform style drivers or can be connected to a custom `main()` function.

- `undirected_dfs.cpp` builds an adjacency list from an edge list.
- `undirected_bfs.cpp` and `directed_dfs.cpp` expect an adjacency list as `vector<int> adj[]`.
- `topological_sort/dfs.cpp` expects a directed graph adjacency list as `vector<int> adj[]` and returns the ordering from `topoSort`.

## Example Output

For the current sample graph, both traversal programs print:

```text
0 1 2 3 4
```

## Notes

- The graph is represented using an adjacency list.
- BFS uses a queue to visit vertices level by level.
- DFS uses recursion to visit vertices depth first.
- Undirected cycle detection uses parent tracking to identify already visited non-parent nodes.
- Directed cycle detection uses recursion path tracking to identify back edges.
- DFS topological sort is intended for directed acyclic graphs.
