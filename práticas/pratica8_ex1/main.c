#include <stdio.h>
#include <raylib.h>
#include <stdlib.h>
#include <time.h>

#define L 8
#define C 10
#define RAIO 20
#define LADO (2*RAIO+10)
#define MARGEM LADO/2
#define LARGURA C*LADO
#define ALTURA L*LADO

int MovHorizontal(int x) {
    if (IsKeyPressed(KEY_LEFT)) {
        if (x > 0) x--;
    }
    if (IsKeyPressed(KEY_RIGHT)) {
        if (x < C-1) x++;
    }
    return x;
}

int MovVertical(int y) {
    if (IsKeyPressed(KEY_UP)) {
        if (y > 0) y--;
    }
    if (IsKeyPressed(KEY_DOWN)) {
        if (y < L-1) y++;
    }
    return y;
}

void DesenharGrid(){
    for(int linha = 0; linha < L; linha++){
        for(int coluna = 0; coluna < C; coluna++){
            DrawCircle(MARGEM+coluna*LADO, MARGEM+linha*LADO, RAIO, RED);
        }
    }
}

int main(){

    InitWindow(LARGURA, ALTURA, "Exemplo: DrawCircle");
    SetTargetFPS(60);

    srand(time(NULL));

    int cursorX = rand() % C;
    int cursorY = rand() % L;

    while(!WindowShouldClose()){
        cursorX = MovHorizontal(cursorX);
        cursorY = MovVertical(cursorY);

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DesenharGrid();

        DrawCircle(MARGEM + cursorX * LADO, MARGEM + cursorY * LADO, RAIO, GREEN);

        EndDrawing();
    }

    CloseWindow();


    return 0;
}
