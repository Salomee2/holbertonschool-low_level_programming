#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H


void check_io_stat(int fd, const char *filename, char mode);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);
void copy_file(int src, int dest);
void close_file(int fd);

#endif

