void appendRowToMatrix(double ***matrix, int *rows, int dim, double *vector) {
    double **temp = (double **) realloc((*matrix), (*rows+1)*sizeof(double *));
    if (temp==NULL) {
        printf("Error allocating memory.\n");
        return;
    }
    *matrix = temp;

    (*matrix)[*rows] = (double *) malloc(dim*sizeof(double));
    if ((*matrix)[*rows]==NULL) {
        printf("Error allocating memory.\n");
        return;
    }

    for (int i=0; i<dim; i++) {
        (*matrix)[*rows][i] = vector[i];
    }
    (*rows)++;
}