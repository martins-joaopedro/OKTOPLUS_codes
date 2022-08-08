
        cout << "to aqui" << matriz[X][Y] << endl;
        F.pop();

        

        for(int k=0; k<4; k++) {
            px = pos[k];
            py = pos[3-k];

            place = matriz[X+px][Y+py];
            if(place != 0) {
              cout << X+px << " " << Y+py << endl;
              cout << place << endl;

              F.push(make_pair(X+px, Y+py));
              matriz[X+px][Y+py] = matriz[X][Y] + 1;
              matriz[X][Y] = 0;
              
              if(place == 2)
                cout << matriz[X+px][Y+py] << endl;
                break;
            }
        }