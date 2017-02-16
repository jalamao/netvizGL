//
// Created by werl on 20/12/16.
//

#ifndef NETVIZGL_BUTTONS_H
#define NETVIZGL_BUTTONS_H

#include <gtk/gtk.h>

class Widget {
  GtkApplication *app;
  static Widget *instance;
  bool visible;
  GtkWidget *window;
  GtkWidget *button_box;

  GtkWidget *openFileButton;
  GtkWidget *dialog;
  GtkWidget *exportAsButton;

  GtkWidget *fruchterman, *simpleForce, *multiLevel, *box;
  GtkWidget *refreshButton,*entry;

  GtkWidget *separator1,*separator2,*separator3;
  GtkWidget *deleteNodeButton;

  GtkWidget *deleteEdgeButton;
  GtkColorChooser *colourNodeButton;

  GtkWidget *colourNodeLabel;
  GtkWidget *colourEdgeButton;

  GtkWidget *filterButton;
  GtkWidget *textNodeLabel;

  GtkWidget *textNodeEntry;

  GtkWidget *exitButton;

  static void activate(GtkApplication *app, gpointer user_data);

 public:
  Widget();
  virtual ~Widget();
  static Widget *Ins();
  static void toggleView();
  static void openFile();
  static void quitNetviz();
  static void updateColour();
  static void textChanged();
  static void refresh();
  enum AlgorithmSelection { FR, SMPL, MLT };
  static int getAlgorithm();
  double redColour;
  double blueColour;
  double greenColour;
  char *textNodeText;
};

#endif //NETVIZGL_BUTTONS_H
