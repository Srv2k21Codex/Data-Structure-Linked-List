

.MODEL SMALL
.DATA
    HELLO_MSG DB 'HELLO,WORLD','$'
.CODE
    
   MAIN PROC
        
        MOV AX ,@DATA;
        MOV DS, AX
        MOV AH , 09h
        MOV DX, OFFSET HELLO_MSG
        INT 21h

        MOV AH, 4Ch
        INT 21h
   MAIN ENDP

   END MAIN