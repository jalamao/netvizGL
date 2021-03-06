//
// Created by werl on 25/10/16.
//

#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <vector>
#include <string>
#include "../Vertex.h"

#ifndef NETVIZGL_GRAPH_H
#define NETVIZGL_GRAPH_H

class Algorithm;

using namespace std;

class Graph {
 public:
  Graph(char *filePath);
  virtual ~Graph();
  Algorithm *algorithm;

  vector<Vertex *> vertices;
  unsigned long numVertices;
  unsigned long numEdges;
  vector<vector<int>> adjacencyMatrix;
  vector<int *> edgeList;

  virtual void draw() = 0;
  virtual void update() = 0;

  virtual int *split(string x);
  static unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3);
 private:
  virtual void read(char *filePath) = 0;
};

#endif //NETVIZGL_GRAPHREADER_H
