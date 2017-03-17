              ':')      drive = path[0];
              = CurDisk();
              ':') (
               = path[0];
              strcpy(npath, &path[2]);
 
               = drive;
              strcpy(npath, path);

              path);
       != 1 && npath[len-1] == '\\')    npath[len-1] = '\0'
    path[1] == ':' && strlen(path) >= 3)
       (strlen(path) >= 1 && path[1] != ':')) {
        if(path[1] != ':') {
                (void)GetCpath(drive, dum);
                (void)sprintf(tmp, " % c: \\%s %s", drive, dum, path);
                if(path[strlen(tmp)-1] != '\\') (void)strcat(tmp, "\\"
        } else  (void)strcpy(tmp, path);
   else{
        if(path[1] == ':')      (void)ChCdrive(drive);
        (void)GetCpath(drive, dum);



   hile(!(Pen_mode == PEN_ON && Dig_mode == MENU));
   flag & S_WINDOW)     FbXBox(sx0, sy0, sx1, sy1);
   (line(y0, x0, x1, y1, 1, CUR_PLANE);
   (line(y0, x0, x0, y1, 1, CUR_PLANE);
FbXBox(xa, ya, xb, yb);
   id)putchar(BELL);
   Set(1, 1, 60, 0);
   id)sprintf(tmpbuf2, "LOADPIC %s%s %s %s",
    Su pict1_path, Pic_file  tmpbuf  tmpbuf3);
   Set(1, 1, tmpbuf2, AT_RB_BLACK);

              uf2) == -1) {
             putchar(BELL);
             ();

              256; ++i)
             ((unsigned char)i, &Col_r[i], &Col_g[i], &Col_b[i]);





                ndrive, drive, direct[100], dum[100];
              100], tmp[100], att[MAXFILE=3], buf[MAXFILE=3][13];
               OFF;
               OFF;
                0;
   
   
                cpath[MAXDRIVE][100] = {
              "\0", "\0"  "\0"  "\0"  "\0"         };
                drive_flag[MAXDRIVE] = {
              0, 0, 0, 0        };
