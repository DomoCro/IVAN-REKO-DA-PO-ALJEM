void fillRandom(MATRICA matrix_t*, float red, float stupac){
    for(int i = 0; i < red; i++)
        for(int j = 0; j < stupac; j++)
        matrix_t[i][j] = (rand() % 101) - 50;
}

void bestPositiveCol(const matrix_t *){
    int countMAX = 0;
    int t = 0;
    for(int j = 0; j < stupac; j++)
    {
        for(int i = 0; i < red; i++)
        {
            if(matrix_t[i][j] > 0)
            {
                t++;
                if(t > countMAX)
                {
                    countMAX = t;
                }
            }
        }
    }
    
}





val = MAX %rand()MAX-MIN+1;
