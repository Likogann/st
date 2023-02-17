const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0B0F12", /* black   */
  [1] = "#1B3544", /* red     */
  [2] = "#2D3C44", /* green   */
  [3] = "#38454D", /* yellow  */
  [4] = "#365366", /* blue    */
  [5] = "#4C5252", /* magenta */
  [6] = "#5F615E", /* cyan    */
  [7] = "#adadac", /* white   */

  /* 8 bright colors */
  [8]  = "#797978",  /* black   */
  [9]  = "#1B3544",  /* red     */
  [10] = "#2D3C44", /* green   */
  [11] = "#38454D", /* yellow  */
  [12] = "#365366", /* blue    */
  [13] = "#4C5252", /* magenta */
  [14] = "#5F615E", /* cyan    */
  [15] = "#adadac", /* white   */

  /* special colors */
  [256] = "#0c1013", /* background */
  [257] = "#adadac", /* foreground */
  [258] = "#adadac",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */

 unsigned int defaultbg = 256;
 static char pseudotransparency = 0;
 static char *bgfile = "./eberhard-grossgasteiger-cs0sK0gzqCU-unsplash.jpg";
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
