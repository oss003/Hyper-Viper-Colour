;Font file for ASCII chars 32-128

font:
;special chars
.db $0d,$ff,$b0,$56,$a0,$56,$20,$59,$a0,$5b,$20,$5e,$10,$5e,$00,$5e ;$4000
.db $f0,$5d,$e0,$5d,$d0,$5d,$c0,$5d,$b0,$5d,$a0,$5d,$80,$68,$70,$68 ;$4010
.db $f0,$65,$70,$63,$f0,$60,$e0,$60,$d0,$60,$c0,$60,$b0,$60,$a0,$60 ;$4020
.db $90,$60,$80,$60,$70,$60,$f0,$62,$70,$65,$f0,$67,$70,$6a,$f0,$5e ;$4030
.db $b0,$76,$a0,$76,$90,$76,$e0,$65,$90,$47,$80,$47,$70,$47,$60,$47 ;$4040
.db $50,$47,$40,$47,$30,$47,$b0,$49,$30,$4c,$10,$5d,$20,$6c,$a0,$69 ;$4050
.db $20,$67,$a0,$64,$20,$62,$a0,$5f,$20,$5d,$a0,$5a,$20,$58,$a0,$55 ;$4060
.db $00,$38,$78,$7c,$fc,$fe,$fe,$fc,$00,$88,$88,$cc,$cc,$ee,$ee,$cc ;$4070 rock
.db $08,$00,$00,$00,$d0,$41,$e0,$41,$f0,$41,$00,$42,$10,$42,$20,$42 ;$4080
.db $3c,$5a,$ff,$bd,$ff,$18,$18,$18,$00,$0c,$4a,$0f,$2d,$81,$80,$80 ;$4090 mushroom
.db $f7,$f7,$f7,$00,$df,$df,$df,$00,$b0,$b0,$b0,$00,$f0,$f0,$f0,$00 ;$40a0 wall
.db $18,$3c,$6a,$d7,$eb,$56,$3c,$18,$80,$c0,$e8,$fc,$fc,$e8,$c0,$80 ;$40b0 snake body
.db $3c,$ee,$3f,$0f,$0f,$3f,$ee,$3c,$0c,$0e,$0f,$0f,$0f,$0f,$0e,$0c ;$40c0 snake head left
.db $3c,$77,$fc,$f0,$f0,$fc,$f7,$3c,$0c,$87,$0c,$00,$00,$0c,$87,$0c ;$40d0 snake head right
.db $42,$42,$e7,$a5,$ff,$ff,$7e,$3c,$02,$02,$07,$25,$0f,$0f,$0e,$0c ;$40e0 snake head up
.db $3c,$7e,$ff,$ff,$a5,$e7,$42,$42,$0c,$0e,$0f,$0f,$25,$07,$02,$02 ;$40f0 snake head down

;ascii chars
.db $00,$00,$00,$00,$00,$00,$00,$00 ; space 
.db $0c,$0c,$0c,$0c,$0c,$00,$0c,$00 ; !
.db $6C,$6C,$6C,$00,$00,$00,$00,$00 ; "
.db $6C,$6C,$FE,$6C,$FE,$6C,$6C,$00 ; #
.db $30,$7C,$C0,$78,$0C,$F8,$30,$00 ; $
.db $00,$C6,$CC,$18,$30,$66,$C6,$00 ; %
.db $38,$6C,$38,$76,$DC,$CC,$76,$00 ; &
.db $60,$60,$00,$00,$00,$00,$00,$00 ; '
.db $18,$30,$60,$60,$60,$30,$18,$00 ; (
.db $60,$30,$18,$18,$18,$30,$60,$00 ; )
.db $00,$cc,$30,$fc,$30,$cc,$00,$00 ; *
.db $00,$30,$30,$FC,$30,$30,$00,$00 ; +
.db $00,$00,$00,$00,$00,$30,$30,$60 ; ,
.db $00,$00,$00,$FC,$00,$00,$00,$00 ; -
.db $00,$00,$00,$00,$00,$30,$30,$00 ; .
.db $0c,$0C,$0c,$30,$30,$C0,$c0,$00 ; /

livenum:
.db $30,$cc,$cc,$cc,$cc,$cc,$30,$00 ; 0
.db $0c,$3C,$0C,$0C,$0C,$0C,$0C,$00 ; 1
.db $30,$cc,$0c,$0c,$30,$c0,$Fc,$00 ; 2
.db $30,$cc,$0c,$30,$0c,$cc,$30,$00 ; 3
.db $0c,$3c,$cc,$cc,$cc,$Fc,$0c,$00 ; 4
.db $fc,$c0,$c0,$f0,$0c,$cc,$30,$00 ; 5
.db $0c,$30,$c0,$f0,$cc,$cc,$30,$00 ; 6
.db $fc,$0c,$0c,$30,$C0,$c0,$c0,$00 ; 7
.db $30,$cc,$cc,$30,$cc,$cc,$30,$00 ; 8
.db $30,$cc,$cc,$3c,$0c,$30,$c0,$00 ; 9
.db $00,$30,$30,$00,$30,$30,$00,$00 ; :
.db $00,$30,$30,$00,$30,$30,$c0,$00 ; ;
.db $18,$30,$60,$C0,$60,$30,$18,$00 ; <
.db $00,$00,$FC,$00,$00,$FC,$00,$00 ; =
.db $60,$30,$18,$0C,$18,$30,$60,$00 ; >
.db $78,$CC,$0C,$18,$30,$00,$30,$00 ; ?
.db $7C,$C6,$DE,$DE,$DE,$C0,$78,$00 ; @
.db $30,$cc,$cc,$fc,$cc,$cc,$cc,$00 ; A
.db $f0,$cc,$cc,$f0,$cc,$cc,$f0,$00 ; B
.db $30,$cc,$c0,$c0,$c0,$cc,$30,$00 ; C
.db $f0,$cc,$cc,$cc,$cc,$cc,$f0,$00 ; D
.db $fc,$c0,$c0,$fc,$c0,$c0,$Fc,$00 ; E
.db $fc,$c0,$c0,$f0,$c0,$c0,$c0,$00 ; F
.db $30,$cc,$c0,$c0,$cc,$cc,$3c,$00 ; G
.db $cc,$cc,$cc,$fc,$cc,$cc,$cc,$00 ; H
.db $30,$30,$30,$30,$30,$30,$30,$00 ; I
.db $0c,$0C,$0C,$0C,$0C,$cC,$30,$00 ; J
.db $cc,$cc,$cc,$f0,$cc,$cc,$cc,$00 ; K
.db $c0,$c0,$c0,$c0,$c0,$c0,$fc,$00 ; L
.db $cc,$cc,$fc,$cc,$cc,$cc,$cc,$00 ; M
.db $f0,$cc,$cc,$cc,$cc,$cc,$cc,$00 ; N
.db $30,$cc,$cc,$cc,$cc,$cc,$30,$00 ; O
.db $f0,$cc,$cc,$f0,$c0,$c0,$c0,$00 ; P
.db $30,$cc,$cc,$cc,$fc,$cc,$3c,$00 ; Q
.db $f0,$cc,$cc,$f0,$cc,$cc,$cc,$00 ; R
.db $30,$cc,$c0,$30,$0c,$cc,$30,$00 ; S
.db $fc,$30,$30,$30,$30,$30,$30,$00 ; T
.db $cc,$cc,$cc,$cc,$cc,$cc,$3c,$00 ; U
.db $cc,$cc,$cc,$cc,$cc,$cc,$30,$00 ; V
.db $cc,$cc,$cc,$cc,$fc,$cc,$cc,$00 ; W
.db $cc,$cc,$cc,$30,$cc,$cc,$cc,$00 ; X
.db $cc,$cc,$cc,$fc,$30,$30,$30,$00 ; Y
.db $fc,$0c,$0c,$30,$c0,$c0,$fc,$00 ; Z
.db $78,$60,$60,$60,$60,$60,$78,$00 ; [
.db $C0,$60,$30,$18,$0C,$06,$02,$00 ; \
.db $78,$18,$18,$18,$18,$18,$78,$00 ; ]
.db $10,$38,$6C,$C6,$00,$00,$00,$00 ; ^
;.db $18,$18,$18,$18,$18,$18,$18,$18 ; _=|
;.db $30,$30,$18,$00,$00,$00,$00,$00 ; `
;.db $00,$00,$3E,$06,$3E,$26,$3E,$00 ; a
;.db $30,$30,$3E,$26,$26,$26,$3E,$00 ; b
;.db $00,$00,$3E,$30,$30,$30,$3E,$00 ; c
;.db $06,$06,$3E,$26,$26,$26,$3E,$00 ; d
;.db $00,$00,$3E,$26,$3E,$20,$3E,$00 ; e
;.db $1C,$10,$3E,$18,$18,$18,$18,$00 ; f
;.db $00,$00,$3E,$34,$34,$1E,$26,$3E ; g
;.db $30,$30,$3E,$26,$26,$26,$26,$00 ; h
;.db $0C,$00,$0C,$0C,$0C,$0C,$0C,$00 ; i
;.db $0C,$00,$0C,$0C,$0C,$0C,$04,$1C ; j
;.db $30,$30,$32,$34,$3C,$26,$26,$00 ; k
;.db $0C,$0C,$0C,$0C,$0C,$0C,$0C,$00 ; l
;.db $00,$00,$7F,$5B,$5B,$5B,$5B,$00 ; m
;.db $00,$00,$3E,$26,$26,$26,$26,$00 ; n
;.db $00,$00,$3E,$26,$26,$26,$3E,$00 ; o
;.db $00,$00,$3E,$32,$32,$32,$3E,$30 ; p
;.db $00,$00,$3E,$32,$32,$32,$3E,$06 ; q
;.db $00,$00,$34,$38,$30,$30,$30,$00 ; r
;.db $00,$00,$3E,$30,$3E,$06,$3E,$00 ; s
;.db $04,$04,$3E,$0C,$0C,$0C,$0C,$00 ; t
;.db $00,$00,$32,$32,$32,$32,$3E,$00 ; u
;.db $00,$00,$32,$32,$32,$1C,$08,$00 ; v
;.db $00,$00,$6D,$6D,$6D,$6D,$7F,$00 ; w
;.db $00,$00,$32,$34,$1C,$16,$26,$00 ; x
;.db $00,$00,$32,$32,$32,$32,$3E,$06 ; y
;.db $00,$00,$3E,$0E,$1C,$38,$3E,$00 ; z
;.db $1C,$30,$30,$E0,$30,$30,$1C,$00 ; {
;.db $18,$18,$18,$18,$18,$18,$18,$18 ; |
;.db $E0,$30,$30,$1C,$30,$30,$E0,$00 ; }
;.db $00,$00,$00,$00,$00,$00,$00,$00 ; ~
;.db $00,$00,$00,$00,$00,$00,$00,$00 ; 

;======================================================================
;FONT ROUTINES:
;======================================================================
;PUTSTRING
; - x,y,string,0
; - x,y,string,0
; - $ea
;
;PUTCHAR x,y,a
;======================================================================
XPOS     equ $70
YPOS     equ $71
COLOR    equ $72
COLORTMP equ $78

PUTSTRING:
    stx $e8
    sty $e9


    ldy #0
P_S_0:
    lda ($e8),y    ; Check end of printing
    cmp #$ff
    beq P_S_4

P_S_1:
    sta XPOS       ; Save x,y,attribute
    jsr setcolor
    jsr PTR_INC
    lda ($e8),y
    sta YPOS

P_S_2:
    jsr PTR_INC    ; Print character until 0
    lda ($e8),y
    beq P_S_5
    jsr PRINTCHAR
    inc XPOS
    jmp P_S_2
P_S_5:
    jsr PTR_INC
    jmp P_S_0

P_S_4:
    rts            ; Return to program

PTR_INC:           ; Increment textpointer
    inc $e8
    bne PTR_1
    inc $e9
PTR_1:
    rts

setcolor:
    sta COLORTMP
    lda XPOS
    and #31
    sta XPOS

    ldx #4
nshift:
    lda COLORTMP
    asl a
    rol COLOR
    asl a
    rol COLOR
    dex
    bne nshift
    rts

;----------------------------------------------------------------------
SCR      equ $73
CHR      equ $75
TMP_Y    equ $77

PUTCHAR:
    stx XPOS
    sty YPOS

PRINTCHAR:
    sta CHR        ; Calculate characterspritedata address
    lda #0         ; = A * 8 + charsprite data address
    sta CHR+1
    asl CHR
    rol CHR+1
    asl CHR
    rol CHR+1
    asl CHR
    rol CHR+1
    lda CHR
    clc
    adc #<font
    sta CHR
    lda CHR+1
    adc #>font
    sta CHR+1
    
    lda XPOS       ; Calculate screenaddress
    sta SCR
    lda YPOS
    clc
    adc #$80
    sta SCR+1
 
    sty TMP_Y
    ldx #0
    ldy #0         ; Put character on screen
P_C_1:
    lda (CHR),y
    and COLOR
    sta (SCR),y
    inc CHR
    bne P_C_2
    inc CHR+1
P_C_2:
    lda SCR
    clc
    adc #$20
    sta SCR
    lda SCR+1
    adc #0
    sta SCR+1
    inx
    cpx #8
    bne P_C_1

    ldy TMP_Y
    rts
 
INV_CURSOR:
    stx SCR
    tya
    clc
    adc #$80
    sta SCR+1
 
    ldy #0         ; Put character on screen
IC1:
    lda (SCR),y
    eor #$ff
    sta (SCR),y
    tya
    clc
    adc #$20
    tay
    bne IC1
    rts    