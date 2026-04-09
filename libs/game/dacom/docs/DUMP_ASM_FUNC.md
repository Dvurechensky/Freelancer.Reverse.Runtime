```assembly

                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;void * FUN_065b1000(void * this, char * param_1, char * param_2)
          ;this          void *             ECX
          ;param_1       char *               4                      ;XREF[1,0]:   065b1002
          ;param_2       char *               8                      ;XREF[1,0]:   065b1039
                                                          ;XREF[1,0]:   065b11de
ram:065b1000    53              PUSH        EBX
ram:065b1001    56              PUSH        ESI
ram:065b1002    8b74240c        MOV         ESI,dword ptr [ESP + param_1+0x8]
ram:065b1006    57              PUSH        EDI
ram:065b1007    85f6            TEST        ESI,ESI
ram:065b1009    8bd9            MOV         EBX,this
ram:065b100b    7426            JZ          LAB_065b1033
ram:065b100d    8bfe            MOV         EDI,ESI
ram:065b100f    83c9ff          OR          this,0xffffffff
ram:065b1012    33c0            XOR         EAX,EAX
ram:065b1014    f2ae            SCASB.REPNE ES:EDI
ram:065b1016    f7d1            NOT         this
ram:065b1018    51              PUSH        this
ram:065b1019    e8b04e0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b101e    83c404          ADD         ESP,0x4
ram:065b1021    8903            MOV         dword ptr [EBX],EAX
ram:065b1023    8bce            MOV         this,ESI
ram:065b1025    8bd0            MOV         EDX,EAX
                            LAB_065b1027:                 ;XREF[1,0]:   065b102f
ram:065b1027    8a01            MOV         AL,byte ptr [this]
ram:065b1029    41              INC         this
ram:065b102a    8802            MOV         byte ptr [EDX],AL
ram:065b102c    42              INC         EDX
ram:065b102d    84c0            TEST        AL,AL
ram:065b102f    75f6            JNZ         LAB_065b1027
ram:065b1031    eb06            JMP         LAB_065b1039
                            LAB_065b1033:                 ;XREF[1,0]:   065b100b
ram:065b1033    c70300000000    MOV         dword ptr [EBX],0x0
                            LAB_065b1039:                 ;XREF[1,0]:   065b1031
ram:065b1039    8b742414        MOV         ESI,dword ptr [ESP + param_2+0xc]
ram:065b103d    85f6            TEST        ESI,ESI
ram:065b103f    742d            JZ          LAB_065b106e
ram:065b1041    8bfe            MOV         EDI,ESI
ram:065b1043    83c9ff          OR          this,0xffffffff
ram:065b1046    33c0            XOR         EAX,EAX
ram:065b1048    f2ae            SCASB.REPNE ES:EDI
ram:065b104a    f7d1            NOT         this
ram:065b104c    51              PUSH        this
ram:065b104d    e87c4e0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b1052    83c404          ADD         ESP,0x4
ram:065b1055    894304          MOV         dword ptr [EBX + 0x4],EAX
ram:065b1058    8bce            MOV         this,ESI
ram:065b105a    8bd0            MOV         EDX,EAX
                            LAB_065b105c:                 ;XREF[1,0]:   065b1064
ram:065b105c    8a01            MOV         AL,byte ptr [this]
ram:065b105e    41              INC         this
ram:065b105f    8802            MOV         byte ptr [EDX],AL
ram:065b1061    42              INC         EDX
ram:065b1062    84c0            TEST        AL,AL
ram:065b1064    75f6            JNZ         LAB_065b105c
ram:065b1066    5f              POP         EDI
ram:065b1067    8bc3            MOV         EAX,EBX
ram:065b1069    5e              POP         ESI
ram:065b106a    5b              POP         EBX
ram:065b106b    c20800          RET         0x8
                            LAB_065b106e:                 ;XREF[1,0]:   065b103f
ram:065b106e    5f              POP         EDI
ram:065b106f    c74304000...    MOV         dword ptr [EBX + 0x4],0x0
ram:065b1076    8bc3            MOV         EAX,EBX
ram:065b1078    5e              POP         ESI
ram:065b1079    5b              POP         EBX
ram:065b107a    c20800          RET         0x8
ram:065b107d    90              ??          90h
ram:065b107e    90              ??          90h
ram:065b107f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1080(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
                                                          ;XREF[1,0]:   065b1138
ram:065b1080    56              PUSH        ESI
ram:065b1081    8bf1            MOV         ESI,param_1
ram:065b1083    8b06            MOV         EAX,dword ptr [ESI]
ram:065b1085    50              PUSH        EAX
ram:065b1086    e8374e0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b108b    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b108e    c70600000000    MOV         dword ptr [ESI],0x0
ram:065b1094    51              PUSH        param_1
ram:065b1095    e8284e0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b109a    83c408          ADD         ESP,0x8
ram:065b109d    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b10a4    5e              POP         ESI
ram:065b10a5    c3              RET
ram:065b10a6    90              ??          90h
ram:065b10a7    90              ??          90h
ram:065b10a8    90              ??          90h
ram:065b10a9    90              ??          90h
ram:065b10aa    90              ??          90h
ram:065b10ab    90              ??          90h
ram:065b10ac    90              ??          90h
ram:065b10ad    90              ??          90h
ram:065b10ae    90              ??          90h
ram:065b10af    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;void * FUN_065b10b0(void * this, char * param_1)
          ;this          void *             ECX
          ;param_1       char *               4                      ;XREF[1,0]:   065b10b0
                                                          ;XREF[1,0]:   065b1609
ram:065b10b0    8a442404        MOV         AL,byte ptr [ESP + param_1]
ram:065b10b4    53              PUSH        EBX
ram:065b10b5    56              PUSH        ESI
ram:065b10b6    8bf1            MOV         ESI,this
ram:065b10b8    6a0c            PUSH        0xc
ram:065b10ba    884604          MOV         byte ptr [ESI + 0x4],AL
ram:065b10bd    e80c4e0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b10c2    8b5c2410        MOV         EBX,dword ptr [ESP + 0x10]
ram:065b10c6    83c404          ADD         ESP,0x4
ram:065b10c9    8900            MOV         dword ptr [EAX],EAX
ram:065b10cb    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b10ce    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b10d1    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b10d8    85db            TEST        EBX,EBX
ram:065b10da    c70600000000    MOV         dword ptr [ESI],0x0
ram:065b10e0    7426            JZ          LAB_065b1108
ram:065b10e2    57              PUSH        EDI
ram:065b10e3    8bfb            MOV         EDI,EBX
ram:065b10e5    83c9ff          OR          this,0xffffffff
ram:065b10e8    33c0            XOR         EAX,EAX
ram:065b10ea    f2ae            SCASB.REPNE ES:EDI
ram:065b10ec    f7d1            NOT         this
ram:065b10ee    51              PUSH        this
ram:065b10ef    e8da4d0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b10f4    83c404          ADD         ESP,0x4
ram:065b10f7    8906            MOV         dword ptr [ESI],EAX
ram:065b10f9    8bcb            MOV         this,EBX
ram:065b10fb    8bd0            MOV         EDX,EAX
ram:065b10fd    5f              POP         EDI
                            LAB_065b10fe:                 ;XREF[1,0]:   065b1106
ram:065b10fe    8a01            MOV         AL,byte ptr [this]
ram:065b1100    41              INC         this
ram:065b1101    8802            MOV         byte ptr [EDX],AL
ram:065b1103    42              INC         EDX
ram:065b1104    84c0            TEST        AL,AL
ram:065b1106    75f6            JNZ         LAB_065b10fe
                            LAB_065b1108:                 ;XREF[1,0]:   065b10e0
ram:065b1108    8bc6            MOV         EAX,ESI
ram:065b110a    5e              POP         ESI
ram:065b110b    5b              POP         EBX
ram:065b110c    c20400          RET         0x4
ram:065b110f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1110(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
                                                          ;XREF[1,0]:   065b1507
ram:065b1110    53              PUSH        EBX
ram:065b1111    56              PUSH        ESI
ram:065b1112    57              PUSH        EDI
ram:065b1113    8bf9            MOV         EDI,param_1
ram:065b1115    8b07            MOV         EAX,dword ptr [EDI]
ram:065b1117    50              PUSH        EAX
ram:065b1118    e8a54d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b111d    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b1120    c70700000000    MOV         dword ptr [EDI],0x0
ram:065b1126    83c404          ADD         ESP,0x4
ram:065b1129    8b30            MOV         ESI,dword ptr [EAX]
ram:065b112b    3bf0            CMP         ESI,EAX
ram:065b112d    743f            JZ          LAB_065b116e
                            LAB_065b112f:                 ;XREF[1,0]:   065b116c
ram:065b112f    8b5e08          MOV         EBX,dword ptr [ESI + 0x8]
ram:065b1132    85db            TEST        EBX,EBX
ram:065b1134    7410            JZ          LAB_065b1146
ram:065b1136    8bcb            MOV         param_1,EBX
ram:065b1138    e843ffffff      CALL        FUN_065b1080                            ;undefined FUN_065b1080(undefined4 * ...
ram:065b113d    53              PUSH        EBX
ram:065b113e    e87f4d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1143    83c404          ADD         ESP,0x4
                            LAB_065b1146:                 ;XREF[1,0]:   065b1134
ram:065b1146    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1149    8b16            MOV         EDX,dword ptr [ESI]
ram:065b114b    56              PUSH        ESI
ram:065b114c    8911            MOV         dword ptr [param_1],EDX
ram:065b114e    8b06            MOV         EAX,dword ptr [ESI]
ram:065b1150    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1153    894804          MOV         dword ptr [EAX + 0x4],param_1
ram:065b1156    e8674d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b115b    8b570c          MOV         EDX,dword ptr [EDI + 0xc]
ram:065b115e    83c404          ADD         ESP,0x4
ram:065b1161    4a              DEC         EDX
ram:065b1162    89570c          MOV         dword ptr [EDI + 0xc],EDX
ram:065b1165    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b1168    8b30            MOV         ESI,dword ptr [EAX]
ram:065b116a    3bf0            CMP         ESI,EAX
ram:065b116c    75c1            JNZ         LAB_065b112f
                            LAB_065b116e:                 ;XREF[1,0]:   065b112d
ram:065b116e    8b5f08          MOV         EBX,dword ptr [EDI + 0x8]
ram:065b1171    8b33            MOV         ESI,dword ptr [EBX]
ram:065b1173    3bf3            CMP         ESI,EBX
ram:065b1175    7427            JZ          LAB_065b119e
                            LAB_065b1177:                 ;XREF[1,0]:   065b119c
ram:065b1177    8bc6            MOV         EAX,ESI
ram:065b1179    8b36            MOV         ESI,dword ptr [ESI]
ram:065b117b    50              PUSH        EAX
ram:065b117c    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b117f    8b08            MOV         param_1,dword ptr [EAX]
ram:065b1181    890a            MOV         dword ptr [EDX],param_1
ram:065b1183    8b10            MOV         EDX,dword ptr [EAX]
ram:065b1185    8b4804          MOV         param_1,dword ptr [EAX + 0x4]
ram:065b1188    894a04          MOV         dword ptr [EDX + 0x4],param_1
ram:065b118b    e8324d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1190    8b4f0c          MOV         param_1,dword ptr [EDI + 0xc]
ram:065b1193    83c404          ADD         ESP,0x4
ram:065b1196    49              DEC         param_1
ram:065b1197    3bf3            CMP         ESI,EBX
ram:065b1199    894f0c          MOV         dword ptr [EDI + 0xc],param_1
ram:065b119c    75d9            JNZ         LAB_065b1177
                            LAB_065b119e:                 ;XREF[1,0]:   065b1175
ram:065b119e    8b5708          MOV         EDX,dword ptr [EDI + 0x8]
ram:065b11a1    52              PUSH        EDX
ram:065b11a2    e81b4d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b11a7    83c404          ADD         ESP,0x4
ram:065b11aa    c74708000...    MOV         dword ptr [EDI + 0x8],0x0
ram:065b11b1    c7470c000...    MOV         dword ptr [EDI + 0xc],0x0
ram:065b11b8    5f              POP         EDI
ram:065b11b9    5e              POP         ESI
ram:065b11ba    5b              POP         EBX
ram:065b11bb    c3              RET
ram:065b11bc    90              ??          90h
ram:065b11bd    90              ??          90h
ram:065b11be    90              ??          90h
ram:065b11bf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b11c0(void * this, char * param_1, char * param_2)
          ;this          void *             ECX
          ;param_1       char *               4
          ;param_2       char *               8
                                                          ;XREF[3,0]:   065b1984,065b19ad,065b1a34
ram:065b11c0    53              PUSH        EBX
ram:065b11c1    55              PUSH        EBP
ram:065b11c2    6a08            PUSH        0x8
ram:065b11c4    8bd9            MOV         EBX,this
ram:065b11c6    e8034d0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b11cb    83c404          ADD         ESP,0x4
ram:065b11ce    85c0            TEST        EAX,EAX
ram:065b11d0    7415            JZ          LAB_065b11e7
ram:065b11d2    8b4c2410        MOV         this,dword ptr [ESP + 0x10]
ram:065b11d6    8b54240c        MOV         EDX,dword ptr [ESP + 0xc]
ram:065b11da    51              PUSH        this
ram:065b11db    52              PUSH        EDX
ram:065b11dc    8bc8            MOV         this,EAX
ram:065b11de    e81dfeffff      CALL        FUN_065b1000                            ;void * FUN_065b1000(void * this, cha...
ram:065b11e3    8be8            MOV         EBP,EAX
ram:065b11e5    eb02            JMP         LAB_065b11e9
                            LAB_065b11e7:                 ;XREF[1,0]:   065b11d0
ram:065b11e7    33ed            XOR         EBP,EBP
                            LAB_065b11e9:                 ;XREF[1,0]:   065b11e5
ram:065b11e9    56              PUSH        ESI
ram:065b11ea    8b7308          MOV         ESI,dword ptr [EBX + 0x8]
ram:065b11ed    57              PUSH        EDI
ram:065b11ee    6a0c            PUSH        0xc
ram:065b11f0    8b7e04          MOV         EDI,dword ptr [ESI + 0x4]
ram:065b11f3    e8d64c0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b11f8    83c404          ADD         ESP,0x4
ram:065b11fb    8930            MOV         dword ptr [EAX],ESI
ram:065b11fd    85ff            TEST        EDI,EDI
ram:065b11ff    7502            JNZ         LAB_065b1203
ram:065b1201    8bf8            MOV         EDI,EAX
                            LAB_065b1203:                 ;XREF[1,0]:   065b11ff
ram:065b1203    897804          MOV         dword ptr [EAX + 0x4],EDI
ram:065b1206    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b1209    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b120c    5f              POP         EDI
ram:065b120d    5e              POP         ESI
ram:065b120e    8901            MOV         dword ptr [this],EAX
ram:065b1210    83c008          ADD         EAX,0x8
ram:065b1213    85c0            TEST        EAX,EAX
ram:065b1215    7402            JZ          LAB_065b1219
ram:065b1217    8928            MOV         dword ptr [EAX],EBP
                            LAB_065b1219:                 ;XREF[1,0]:   065b1215
ram:065b1219    8b430c          MOV         EAX,dword ptr [EBX + 0xc]
ram:065b121c    5d              POP         EBP
ram:065b121d    40              INC         EAX
ram:065b121e    89430c          MOV         dword ptr [EBX + 0xc],EAX
ram:065b1221    b001            MOV         AL,0x1
ram:065b1223    5b              POP         EBX
ram:065b1224    c20800          RET         0x8
ram:065b1227    90              ??          90h
ram:065b1228    90              ??          90h
ram:065b1229    90              ??          90h
ram:065b122a    90              ??          90h
ram:065b122b    90              ??          90h
ram:065b122c    90              ??          90h
ram:065b122d    90              ??          90h
ram:065b122e    90              ??          90h
ram:065b122f    90              ??          90h
ram:065b1230    8b              ??          8Bh
ram:065b1231    54              ??          54h    T
ram:065b1232    24              ??          24h    $
ram:065b1233    04              ??          04h
ram:065b1234    83              ??          83h
ram:065b1235    fa              ??          FAh
ram:065b1236    01              ??          01h
ram:065b1237    7c              ??          7Ch    |
ram:065b1238    12              ??          12h
ram:065b1239    8b              ??          8Bh
ram:065b123a    49              ??          49h    I
ram:065b123b    08              ??          08h
ram:065b123c    8b              ??          8Bh
ram:065b123d    01              ??          01h
ram:065b123e    3b              ??          3Bh    ;
ram:065b123f    c1              ??          C1h
ram:065b1240    74              ??          74h    t
ram:065b1241    09              ??          09h
ram:065b1242    4a              ??          4Ah    J
ram:065b1243    74              ??          74h    t
ram:065b1244    0b              ??          0Bh
ram:065b1245    8b              ??          8Bh
ram:065b1246    00              ??          00h
ram:065b1247    3b              ??          3Bh    ;
ram:065b1248    c1              ??          C1h
ram:065b1249    75              ??          75h    u
ram:065b124a    f7              ??          F7h
ram:065b124b    32              ??          32h    2
ram:065b124c    c0              ??          C0h
ram:065b124d    c2              ??          C2h
ram:065b124e    0c              ??          0Ch
ram:065b124f    00              ??          00h
ram:065b1250    8b              ??          8Bh
ram:065b1251    40              ??          40h    @
ram:065b1252    08              ??          08h
ram:065b1253    8b              ??          8Bh
ram:065b1254    48              ??          48h    H
ram:065b1255    04              ??          04h
ram:065b1256    85              ??          85h
ram:065b1257    c9              ??          C9h
ram:065b1258    74              ??          74h    t
ram:065b1259    1c              ??          1Ch
ram:065b125a    8b              ??          8Bh
ram:065b125b    00              ??          00h
ram:065b125c    51              ??          51h    Q
ram:065b125d    8b              ??          8Bh
ram:065b125e    4c              ??          4Ch    L
ram:065b125f    24              ??          24h    $
ram:065b1260    10              ??          10h
ram:065b1261    50              ??          50h    P
ram:065b1262    68              ??          68h    h
ram:065b1263    10              ??          10h
ram:065b1264    80              ??          80h
ram:065b1265    5b              ??          5Bh    [
ram:065b1266    06              ??          06h
ram:065b1267    51              ??          51h    Q
ram:065b1268    ff              ??          FFh
ram:065b1269    15              ??          15h
ram:065b126a    40              ??          40h    @
ram:065b126b    70              ??          70h    p
ram:065b126c    5b              ??          5Bh    [
ram:065b126d    06              ??          06h
ram:065b126e    83              ??          83h
ram:065b126f    c4              ??          C4h
ram:065b1270    10              ??          10h
ram:065b1271    b0              ??          B0h
ram:065b1272    01              ??          01h
ram:065b1273    c2              ??          C2h
ram:065b1274    0c              ??          0Ch
ram:065b1275    00              ??          00h
ram:065b1276    8b              ??          8Bh
ram:065b1277    10              ??          10h
ram:065b1278    56              ??          56h    V
ram:065b1279    8b              ??          8Bh
ram:065b127a    74              ??          74h    t
ram:065b127b    24              ??          24h    $
ram:065b127c    0c              ??          0Ch
ram:065b127d    57              ??          57h    W
ram:065b127e    8b              ??          8Bh
ram:065b127f    7c              ??          7Ch    |
ram:065b1280    24              ??          24h    $
ram:065b1281    14              ??          14h
ram:065b1282    56              ??          56h    V
ram:065b1283    52              ??          52h    R
ram:065b1284    57              ??          57h    W
ram:065b1285    ff              ??          FFh
ram:065b1286    15              ??          15h
ram:065b1287    3c              ??          3Ch    <
ram:065b1288    70              ??          70h    p
ram:065b1289    5b              ??          5Bh    [
ram:065b128a    06              ??          06h
ram:065b128b    83              ??          83h
ram:065b128c    c4              ??          C4h
ram:065b128d    0c              ??          0Ch
ram:065b128e    c6              ??          C6h
ram:065b128f    44              ??          44h    D
ram:065b1290    3e              ??          3Eh    >
ram:065b1291    ff              ??          FFh
ram:065b1292    00              ??          00h
ram:065b1293    b0              ??          B0h
ram:065b1294    01              ??          01h
ram:065b1295    5f              ??          5Fh    _
ram:065b1296    5e              ??          5Eh    ^
ram:065b1297    c2              ??          C2h
ram:065b1298    0c              ??          0Ch
ram:065b1299    00              ??          00h
ram:065b129a    90              ??          90h
ram:065b129b    90              ??          90h
ram:065b129c    90              ??          90h
ram:065b129d    90              ??          90h
ram:065b129e    90              ??          90h
ram:065b129f    90              ??          90h
ram:065b12a0    8b              ??          8Bh
ram:065b12a1    54              ??          54h    T
ram:065b12a2    24              ??          24h    $
ram:065b12a3    04              ??          04h
ram:065b12a4    57              ??          57h    W
ram:065b12a5    83              ??          83h
ram:065b12a6    fa              ??          FAh
ram:065b12a7    01              ??          01h
ram:065b12a8    7c              ??          7Ch    |
ram:065b12a9    12              ??          12h
ram:065b12aa    8b              ??          8Bh
ram:065b12ab    49              ??          49h    I
ram:065b12ac    08              ??          08h
ram:065b12ad    8b              ??          8Bh
ram:065b12ae    01              ??          01h
ram:065b12af    3b              ??          3Bh    ;
ram:065b12b0    c1              ??          C1h
ram:065b12b1    74              ??          74h    t
ram:065b12b2    09              ??          09h
ram:065b12b3    4a              ??          4Ah    J
ram:065b12b4    74              ??          74h    t
ram:065b12b5    0c              ??          0Ch
ram:065b12b6    8b              ??          8Bh
ram:065b12b7    00              ??          00h
ram:065b12b8    3b              ??          3Bh    ;
ram:065b12b9    c1              ??          C1h
ram:065b12ba    75              ??          75h    u
ram:065b12bb    f7              ??          F7h
ram:065b12bc    33              ??          33h    3
ram:065b12bd    c0              ??          C0h
ram:065b12be    5f              ??          5Fh    _
ram:065b12bf    c2              ??          C2h
ram:065b12c0    04              ??          04h
ram:065b12c1    00              ??          00h
ram:065b12c2    8b              ??          8Bh
ram:065b12c3    40              ??          40h    @
ram:065b12c4    08              ??          08h
ram:065b12c5    83              ??          83h
ram:065b12c6    c9              ??          C9h
ram:065b12c7    ff              ??          FFh
ram:065b12c8    8b              ??          8Bh
ram:065b12c9    50              ??          50h    P
ram:065b12ca    04              ??          04h
ram:065b12cb    8b              ??          8Bh
ram:065b12cc    38              ??          38h    8
ram:065b12cd    33              ??          33h    3
ram:065b12ce    c0              ??          C0h
ram:065b12cf    f2              ??          F2h
ram:065b12d0    ae              ??          AEh
ram:065b12d1    f7              ??          F7h
ram:065b12d2    d1              ??          D1h
ram:065b12d3    49              ??          49h    I
ram:065b12d4    85              ??          85h
ram:065b12d5    d2              ??          D2h
ram:065b12d6    74              ??          74h    t
ram:065b12d7    16              ??          16h
ram:065b12d8    56              ??          56h    V
ram:065b12d9    8b              ??          8Bh
ram:065b12da    f1              ??          F1h
ram:065b12db    8b              ??          8Bh
ram:065b12dc    fa              ??          FAh
ram:065b12dd    83              ??          83h
ram:065b12de    c9              ??          C9h
ram:065b12df    ff              ??          FFh
ram:065b12e0    f2              ??          F2h
ram:065b12e1    ae              ??          AEh
ram:065b12e2    f7              ??          F7h
ram:065b12e3    d1              ??          D1h
ram:065b12e4    49              ??          49h    I
ram:065b12e5    8d              ??          8Dh
ram:065b12e6    44              ??          44h    D
ram:065b12e7    0e              ??          0Eh
ram:065b12e8    03              ??          03h
ram:065b12e9    5e              ??          5Eh    ^
ram:065b12ea    5f              ??          5Fh    _
ram:065b12eb    c2              ??          C2h
ram:065b12ec    04              ??          04h
ram:065b12ed    00              ??          00h
ram:065b12ee    8b              ??          8Bh
ram:065b12ef    c1              ??          C1h
ram:065b12f0    5f              ??          5Fh    _
ram:065b12f1    c2              ??          C2h
ram:065b12f2    04              ??          04h
ram:065b12f3    00              ??          00h
ram:065b12f4    90              ??          90h
ram:065b12f5    90              ??          90h
ram:065b12f6    90              ??          90h
ram:065b12f7    90              ??          90h
ram:065b12f8    90              ??          90h
ram:065b12f9    90              ??          90h
ram:065b12fa    90              ??          90h
ram:065b12fb    90              ??          90h
ram:065b12fc    90              ??          90h
ram:065b12fd    90              ??          90h
ram:065b12fe    90              ??          90h
ram:065b12ff    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b1300(void * this, undefined4 param_1, int param_2, undefined1 * param_3)
          ;this          void *             ECX
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b130d
          ;param_2       int                  8
          ;param_3       undefined1 *         c
ram:065b1300    53              PUSH        EBX
ram:065b1301    55              PUSH        EBP
ram:065b1302    56              PUSH        ESI
ram:065b1303    57              PUSH        EDI
ram:065b1304    8b7908          MOV         EDI,dword ptr [this + 0x8]
ram:065b1307    8b37            MOV         ESI,dword ptr [EDI]
ram:065b1309    3bf7            CMP         ESI,EDI
ram:065b130b    7420            JZ          LAB_065b132d
ram:065b130d    8b5c2414        MOV         EBX,dword ptr [ESP + param_1+0x10]
ram:065b1311    8b2d30705b06    MOV         EBP,dword ptr [DAT_065b7030]
                            LAB_065b1317:                 ;XREF[1,0]:   065b132b
ram:065b1317    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b131a    53              PUSH        EBX
ram:065b131b    8b08            MOV         this,dword ptr [EAX]
ram:065b131d    51              PUSH        this
ram:065b131e    ffd5            CALL        EBP
ram:065b1320    83c408          ADD         ESP,0x8
ram:065b1323    85c0            TEST        EAX,EAX
ram:065b1325    740f            JZ          LAB_065b1336
ram:065b1327    8b36            MOV         ESI,dword ptr [ESI]
ram:065b1329    3bf7            CMP         ESI,EDI
ram:065b132b    75ea            JNZ         LAB_065b1317
                            LAB_065b132d:                 ;XREF[1,0]:   065b130b
ram:065b132d    5f              POP         EDI
ram:065b132e    5e              POP         ESI
ram:065b132f    5d              POP         EBP
ram:065b1330    32c0            XOR         AL,AL
ram:065b1332    5b              POP         EBX
ram:065b1333    c20c00          RET         0xc
                            LAB_065b1336:                 ;XREF[1,0]:   065b1325
ram:065b1336    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b1339    8b4204          MOV         EAX,dword ptr [EDX + 0x4]
ram:065b133c    85c0            TEST        EAX,EAX
ram:065b133e    7422            JZ          LAB_065b1362
ram:065b1340    8b742418        MOV         ESI,dword ptr [ESP + 0x18]
ram:065b1344    8b7c241c        MOV         EDI,dword ptr [ESP + 0x1c]
ram:065b1348    56              PUSH        ESI
ram:065b1349    50              PUSH        EAX
ram:065b134a    57              PUSH        EDI
ram:065b134b    ff153c705b06    CALL        dword ptr [DAT_065b703c]
ram:065b1351    83c40c          ADD         ESP,0xc
ram:065b1354    c6443eff00      MOV         byte ptr [ESI + EDI*0x1 + -0x1],0x0
ram:065b1359    b001            MOV         AL,0x1
ram:065b135b    5f              POP         EDI
ram:065b135c    5e              POP         ESI
ram:065b135d    5d              POP         EBP
ram:065b135e    5b              POP         EBX
ram:065b135f    c20c00          RET         0xc
                            LAB_065b1362:                 ;XREF[1,0]:   065b133e
ram:065b1362    8b44241c        MOV         EAX,dword ptr [ESP + 0x1c]
ram:065b1366    5f              POP         EDI
ram:065b1367    5e              POP         ESI
ram:065b1368    5d              POP         EBP
ram:065b1369    c60000          MOV         byte ptr [EAX],0x0
ram:065b136c    b001            MOV         AL,0x1
ram:065b136e    5b              POP         EBX
ram:065b136f    c20c00          RET         0xc
ram:065b1372    90              ??          90h
ram:065b1373    90              ??          90h
ram:065b1374    90              ??          90h
ram:065b1375    90              ??          90h
ram:065b1376    90              ??          90h
ram:065b1377    90              ??          90h
ram:065b1378    90              ??          90h
ram:065b1379    90              ??          90h
ram:065b137a    90              ??          90h
ram:065b137b    90              ??          90h
ram:065b137c    90              ??          90h
ram:065b137d    90              ??          90h
ram:065b137e    90              ??          90h
ram:065b137f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b1380(void * this, undefined4 param_1)
          ;this          void *             ECX
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b138d
ram:065b1380    53              PUSH        EBX
ram:065b1381    55              PUSH        EBP
ram:065b1382    56              PUSH        ESI
ram:065b1383    57              PUSH        EDI
ram:065b1384    8b7908          MOV         EDI,dword ptr [this + 0x8]
ram:065b1387    8b37            MOV         ESI,dword ptr [EDI]
ram:065b1389    3bf7            CMP         ESI,EDI
ram:065b138b    7420            JZ          LAB_065b13ad
ram:065b138d    8b5c2414        MOV         EBX,dword ptr [ESP + param_1+0x10]
ram:065b1391    8b2d30705b06    MOV         EBP,dword ptr [DAT_065b7030]
                            LAB_065b1397:                 ;XREF[1,0]:   065b13ab
ram:065b1397    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b139a    53              PUSH        EBX
ram:065b139b    8b08            MOV         this,dword ptr [EAX]
ram:065b139d    51              PUSH        this
ram:065b139e    ffd5            CALL        EBP
ram:065b13a0    83c408          ADD         ESP,0x8
ram:065b13a3    85c0            TEST        EAX,EAX
ram:065b13a5    740f            JZ          LAB_065b13b6
ram:065b13a7    8b36            MOV         ESI,dword ptr [ESI]
ram:065b13a9    3bf7            CMP         ESI,EDI
ram:065b13ab    75ea            JNZ         LAB_065b1397
                            LAB_065b13ad:                 ;XREF[1,0]:   065b138b
ram:065b13ad    33c0            XOR         EAX,EAX
                            LAB_065b13af:                 ;XREF[1,0]:   065b13c0
ram:065b13af    5f              POP         EDI
ram:065b13b0    5e              POP         ESI
ram:065b13b1    5d              POP         EBP
ram:065b13b2    5b              POP         EBX
ram:065b13b3    c20400          RET         0x4
                            LAB_065b13b6:                 ;XREF[1,0]:   065b13a5
ram:065b13b6    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b13b9    33c0            XOR         EAX,EAX
ram:065b13bb    8b7a04          MOV         EDI,dword ptr [EDX + 0x4]
ram:065b13be    85ff            TEST        EDI,EDI
ram:065b13c0    74ed            JZ          LAB_065b13af
ram:065b13c2    83c9ff          OR          this,0xffffffff
ram:065b13c5    f2ae            SCASB.REPNE ES:EDI
ram:065b13c7    f7d1            NOT         this
ram:065b13c9    5f              POP         EDI
ram:065b13ca    49              DEC         this
ram:065b13cb    5e              POP         ESI
ram:065b13cc    5d              POP         EBP
ram:065b13cd    8bc1            MOV         EAX,this
ram:065b13cf    5b              POP         EBX
ram:065b13d0    c20400          RET         0x4
ram:065b13d3    90              ??          90h
ram:065b13d4    90              ??          90h
ram:065b13d5    90              ??          90h
ram:065b13d6    90              ??          90h
ram:065b13d7    90              ??          90h
ram:065b13d8    90              ??          90h
ram:065b13d9    90              ??          90h
ram:065b13da    90              ??          90h
ram:065b13db    90              ??          90h
ram:065b13dc    90              ??          90h
ram:065b13dd    90              ??          90h
ram:065b13de    90              ??          90h
ram:065b13df    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined1 * FUN_065b13e0(undefined1 * param_1)
          ;param_1       undefined1 *       ECX
          ;local_1       undefined1          -1                      ;XREF[1,0]:   065b13e1
                                                          ;XREF[1,0]:   065b43f6
ram:065b13e0    51              PUSH        param_1
ram:065b13e1    8a442403        MOV         AL,byte ptr [ESP + local_1+0x4]
ram:065b13e5    56              PUSH        ESI
ram:065b13e6    8bf1            MOV         ESI,param_1
ram:065b13e8    6a0c            PUSH        0xc
ram:065b13ea    8806            MOV         byte ptr [ESI],AL
ram:065b13ec    e8dd4a0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b13f1    83c404          ADD         ESP,0x4
ram:065b13f4    8900            MOV         dword ptr [EAX],EAX
ram:065b13f6    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b13f9    8bce            MOV         param_1,ESI
ram:065b13fb    6a00            PUSH        0x0
ram:065b13fd    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b1400    c74608000...    MOV         dword ptr [ESI + 0x8],0x0
ram:065b1407    e874000000      CALL        FUN_065b1480                            ;uint FUN_065b1480(void * this, int p...
ram:065b140c    8bc6            MOV         EAX,ESI
ram:065b140e    5e              POP         ESI
ram:065b140f    59              POP         param_1
ram:065b1410    c3              RET
ram:065b1411    90              ??          90h
ram:065b1412    90              ??          90h
ram:065b1413    90              ??          90h
ram:065b1414    90              ??          90h
ram:065b1415    90              ??          90h
ram:065b1416    90              ??          90h
ram:065b1417    90              ??          90h
ram:065b1418    90              ??          90h
ram:065b1419    90              ??          90h
ram:065b141a    90              ??          90h
ram:065b141b    90              ??          90h
ram:065b141c    90              ??          90h
ram:065b141d    90              ??          90h
ram:065b141e    90              ??          90h
ram:065b141f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1420(int param_1)
          ;param_1       int                ECX
ram:065b1420    53              PUSH        EBX
ram:065b1421    56              PUSH        ESI
ram:065b1422    57              PUSH        EDI
ram:065b1423    8bf9            MOV         EDI,param_1
ram:065b1425    e8c6000000      CALL        FUN_065b14f0                            ;undefined FUN_065b14f0(int param_1)
ram:065b142a    8b5f04          MOV         EBX,dword ptr [EDI + 0x4]
ram:065b142d    8b33            MOV         ESI,dword ptr [EBX]
ram:065b142f    3bf3            CMP         ESI,EBX
ram:065b1431    7427            JZ          LAB_065b145a
                            LAB_065b1433:                 ;XREF[1,0]:   065b1458
ram:065b1433    8bc6            MOV         EAX,ESI
ram:065b1435    8b36            MOV         ESI,dword ptr [ESI]
ram:065b1437    50              PUSH        EAX
ram:065b1438    8b4804          MOV         param_1,dword ptr [EAX + 0x4]
ram:065b143b    8b10            MOV         EDX,dword ptr [EAX]
ram:065b143d    8911            MOV         dword ptr [param_1],EDX
ram:065b143f    8b08            MOV         param_1,dword ptr [EAX]
ram:065b1441    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b1444    895104          MOV         dword ptr [param_1 + 0x4],EDX
ram:065b1447    e8764a0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b144c    8b4f08          MOV         param_1,dword ptr [EDI + 0x8]
ram:065b144f    83c404          ADD         ESP,0x4
ram:065b1452    49              DEC         param_1
ram:065b1453    3bf3            CMP         ESI,EBX
ram:065b1455    894f08          MOV         dword ptr [EDI + 0x8],param_1
ram:065b1458    75d9            JNZ         LAB_065b1433
                            LAB_065b145a:                 ;XREF[1,0]:   065b1431
ram:065b145a    8b4704          MOV         EAX,dword ptr [EDI + 0x4]
ram:065b145d    50              PUSH        EAX
ram:065b145e    e85f4a0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1463    83c404          ADD         ESP,0x4
ram:065b1466    33c0            XOR         EAX,EAX
ram:065b1468    894704          MOV         dword ptr [EDI + 0x4],EAX
ram:065b146b    894708          MOV         dword ptr [EDI + 0x8],EAX
ram:065b146e    5f              POP         EDI
ram:065b146f    5e              POP         ESI
ram:065b1470    5b              POP         EBX
ram:065b1471    c3              RET
ram:065b1472    90              ??          90h
ram:065b1473    90              ??          90h
ram:065b1474    90              ??          90h
ram:065b1475    90              ??          90h
ram:065b1476    90              ??          90h
ram:065b1477    90              ??          90h
ram:065b1478    90              ??          90h
ram:065b1479    90              ??          90h
ram:065b147a    90              ??          90h
ram:065b147b    90              ??          90h
ram:065b147c    90              ??          90h
ram:065b147d    90              ??          90h
ram:065b147e    90              ??          90h
ram:065b147f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b1480(void * this, int param_1)
          ;this          void *             ECX
          ;param_1       int                  4                      ;XREF[1,0]:   065b148b
                                                          ;XREF[1,0]:   065b1407
ram:065b1480    53              PUSH        EBX
ram:065b1481    56              PUSH        ESI
ram:065b1482    8bf1            MOV         ESI,this
ram:065b1484    b301            MOV         BL,0x1
ram:065b1486    e865000000      CALL        FUN_065b14f0                            ;undefined FUN_065b14f0(int param_1)
ram:065b148b    8b44240c        MOV         EAX,dword ptr [ESP + param_1+0x8]
ram:065b148f    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b1496    85c0            TEST        EAX,EAX
ram:065b1498    740d            JZ          LAB_065b14a7
ram:065b149a    50              PUSH        EAX
ram:065b149b    8bce            MOV         this,ESI
ram:065b149d    e84e020000      CALL        FUN_065b16f0                            ;uint FUN_065b16f0(undefined4 param_1)
ram:065b14a2    5e              POP         ESI
ram:065b14a3    5b              POP         EBX
ram:065b14a4    c20400          RET         0x4
                            LAB_065b14a7:                 ;XREF[1,0]:   065b1498
ram:065b14a7    8ac3            MOV         AL,BL
ram:065b14a9    5e              POP         ESI
ram:065b14aa    5b              POP         EBX
ram:065b14ab    c20400          RET         0x4
ram:065b14ae    90              ??          90h
ram:065b14af    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b14b0(void * this, undefined4 * param_1, uint param_2)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b14bb
          ;param_2       uint                 8                      ;XREF[1,0]:   065b14ca
ram:065b14b0    53              PUSH        EBX
ram:065b14b1    56              PUSH        ESI
ram:065b14b2    8bf1            MOV         ESI,this
ram:065b14b4    b301            MOV         BL,0x1
ram:065b14b6    e835000000      CALL        FUN_065b14f0                            ;undefined FUN_065b14f0(int param_1)
ram:065b14bb    8b44240c        MOV         EAX,dword ptr [ESP + param_1+0x8]
ram:065b14bf    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b14c6    85c0            TEST        EAX,EAX
ram:065b14c8    7412            JZ          LAB_065b14dc
ram:065b14ca    8b4c2410        MOV         this,dword ptr [ESP + param_2+0x8]
ram:065b14ce    51              PUSH        this
ram:065b14cf    50              PUSH        EAX
ram:065b14d0    8bce            MOV         this,ESI
ram:065b14d2    e889020000      CALL        FUN_065b1760                            ;uint FUN_065b1760(undefined4 * param...
ram:065b14d7    5e              POP         ESI
ram:065b14d8    5b              POP         EBX
ram:065b14d9    c20800          RET         0x8
                            LAB_065b14dc:                 ;XREF[1,0]:   065b14c8
ram:065b14dc    8ac3            MOV         AL,BL
ram:065b14de    5e              POP         ESI
ram:065b14df    5b              POP         EBX
ram:065b14e0    c20800          RET         0x8
ram:065b14e3    90              ??          90h
ram:065b14e4    90              ??          90h
ram:065b14e5    90              ??          90h
ram:065b14e6    90              ??          90h
ram:065b14e7    90              ??          90h
ram:065b14e8    90              ??          90h
ram:065b14e9    90              ??          90h
ram:065b14ea    90              ??          90h
ram:065b14eb    90              ??          90h
ram:065b14ec    90              ??          90h
ram:065b14ed    90              ??          90h
ram:065b14ee    90              ??          90h
ram:065b14ef    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b14f0(int param_1)
          ;param_1       int                ECX
                                                          ;XREF[3,0]:   065b1425,065b1486,065b14b6
ram:065b14f0    56              PUSH        ESI
ram:065b14f1    57              PUSH        EDI
ram:065b14f2    8bf9            MOV         EDI,param_1
ram:065b14f4    8b4704          MOV         EAX,dword ptr [EDI + 0x4]
ram:065b14f7    8b30            MOV         ESI,dword ptr [EAX]
ram:065b14f9    3bf0            CMP         ESI,EAX
ram:065b14fb    7441            JZ          LAB_065b153e
ram:065b14fd    53              PUSH        EBX
                            LAB_065b14fe:                 ;XREF[1,0]:   065b153b
ram:065b14fe    8b5e08          MOV         EBX,dword ptr [ESI + 0x8]
ram:065b1501    85db            TEST        EBX,EBX
ram:065b1503    7410            JZ          LAB_065b1515
ram:065b1505    8bcb            MOV         param_1,EBX
ram:065b1507    e804fcffff      CALL        FUN_065b1110                            ;undefined FUN_065b1110(undefined4 * ...
ram:065b150c    53              PUSH        EBX
ram:065b150d    e8b0490000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1512    83c404          ADD         ESP,0x4
                            LAB_065b1515:                 ;XREF[1,0]:   065b1503
ram:065b1515    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b1518    8b0e            MOV         param_1,dword ptr [ESI]
ram:065b151a    56              PUSH        ESI
ram:065b151b    8908            MOV         dword ptr [EAX],param_1
ram:065b151d    8b16            MOV         EDX,dword ptr [ESI]
ram:065b151f    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b1522    894204          MOV         dword ptr [EDX + 0x4],EAX
ram:065b1525    e898490000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b152a    8b5708          MOV         EDX,dword ptr [EDI + 0x8]
ram:065b152d    8b4704          MOV         EAX,dword ptr [EDI + 0x4]
ram:065b1530    83c404          ADD         ESP,0x4
ram:065b1533    4a              DEC         EDX
ram:065b1534    895708          MOV         dword ptr [EDI + 0x8],EDX
ram:065b1537    8b30            MOV         ESI,dword ptr [EAX]
ram:065b1539    3bf0            CMP         ESI,EAX
ram:065b153b    75c1            JNZ         LAB_065b14fe
ram:065b153d    5b              POP         EBX
                            LAB_065b153e:                 ;XREF[1,0]:   065b14fb
ram:065b153e    5f              POP         EDI
ram:065b153f    5e              POP         ESI
ram:065b1540    c3              RET
ram:065b1541    90              ??          90h
ram:065b1542    90              ??          90h
ram:065b1543    90              ??          90h
ram:065b1544    90              ??          90h
ram:065b1545    90              ??          90h
ram:065b1546    90              ??          90h
ram:065b1547    90              ??          90h
ram:065b1548    90              ??          90h
ram:065b1549    90              ??          90h
ram:065b154a    90              ??          90h
ram:065b154b    90              ??          90h
ram:065b154c    90              ??          90h
ram:065b154d    90              ??          90h
ram:065b154e    90              ??          90h
ram:065b154f    90              ??          90h
ram:065b1550    e9              ??          E9h
ram:065b1551    1b              ??          1Bh
ram:065b1552    00              ??          00h
ram:065b1553    00              ??          00h
ram:065b1554    00              ??          00h
ram:065b1555    90              ??          90h
ram:065b1556    90              ??          90h
ram:065b1557    90              ??          90h
ram:065b1558    90              ??          90h
ram:065b1559    90              ??          90h
ram:065b155a    90              ??          90h
ram:065b155b    90              ??          90h
ram:065b155c    90              ??          90h
ram:065b155d    90              ??          90h
ram:065b155e    90              ??          90h
ram:065b155f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b1560(undefined4 param_1)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b1560
                                                          ;XREF[1,0]:   065b463c
ram:065b1560    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b1564    c20400          RET         0x4
ram:065b1567    90              ??          90h
ram:065b1568    90              ??          90h
ram:065b1569    90              ??          90h
ram:065b156a    90              ??          90h
ram:065b156b    90              ??          90h
ram:065b156c    90              ??          90h
ram:065b156d    90              ??          90h
ram:065b156e    90              ??          90h
ram:065b156f    90              ??          90h
ram:065b1570    53              ??          53h    S
ram:065b1571    55              ??          55h    U
ram:065b1572    8b              ??          8Bh
ram:065b1573    69              ??          69h    i
ram:065b1574    04              ??          04h
ram:065b1575    56              ??          56h    V
ram:065b1576    57              ??          57h    W
ram:065b1577    8b              ??          8Bh
ram:065b1578    75              ??          75h    u
ram:065b1579    00              ??          00h
ram:065b157a    3b              ??          3Bh    ;
ram:065b157b    f5              ??          F5h
ram:065b157c    74              ??          74h    t
ram:065b157d    22              ??          22h    "
ram:065b157e    8b              ??          8Bh
ram:065b157f    7c              ??          7Ch    |
ram:065b1580    24              ??          24h    $
ram:065b1581    14              ??          14h
ram:065b1582    8b              ??          8Bh
ram:065b1583    1d              ??          1Dh
ram:065b1584    30              ??          30h    0
ram:065b1585    70              ??          70h    p
ram:065b1586    5b              ??          5Bh    [
ram:065b1587    06              ??          06h
ram:065b1588    8b              ??          8Bh
ram:065b1589    46              ??          46h    F
ram:065b158a    08              ??          08h
ram:065b158b    57              ??          57h    W
ram:065b158c    8b              ??          8Bh
ram:065b158d    08              ??          08h
ram:065b158e    51              ??          51h    Q
ram:065b158f    ff              ??          FFh
ram:065b1590    d3              ??          D3h
ram:065b1591    83              ??          83h
ram:065b1592    c4              ??          C4h
ram:065b1593    08              ??          08h
ram:065b1594    85              ??          85h
ram:065b1595    c0              ??          C0h
ram:065b1596    74              ??          74h    t
ram:065b1597    11              ??          11h
ram:065b1598    7f              ??          7Fh    
ram:065b1599    06              ??          06h
ram:065b159a    8b              ??          8Bh
ram:065b159b    36              ??          36h    6
ram:065b159c    3b              ??          3Bh    ;
ram:065b159d    f5              ??          F5h
ram:065b159e    75              ??          75h    u
ram:065b159f    e8              ??          E8h
ram:065b15a0    5f              ??          5Fh    _
ram:065b15a1    5e              ??          5Eh    ^
ram:065b15a2    5d              ??          5Dh    ]
ram:065b15a3    33              ??          33h    3
ram:065b15a4    c0              ??          C0h
ram:065b15a5    5b              ??          5Bh    [
ram:065b15a6    c2              ??          C2h
ram:065b15a7    04              ??          04h
ram:065b15a8    00              ??          00h
ram:065b15a9    8b              ??          8Bh
ram:065b15aa    46              ??          46h    F
ram:065b15ab    08              ??          08h
ram:065b15ac    5f              ??          5Fh    _
ram:065b15ad    5e              ??          5Eh    ^
ram:065b15ae    5d              ??          5Dh    ]
ram:065b15af    5b              ??          5Bh    [
ram:065b15b0    c2              ??          C2h
ram:065b15b1    04              ??          04h
ram:065b15b2    00              ??          00h
ram:065b15b3    90              ??          90h
ram:065b15b4    90              ??          90h
ram:065b15b5    90              ??          90h
ram:065b15b6    90              ??          90h
ram:065b15b7    90              ??          90h
ram:065b15b8    90              ??          90h
ram:065b15b9    90              ??          90h
ram:065b15ba    90              ??          90h
ram:065b15bb    90              ??          90h
ram:065b15bc    90              ??          90h
ram:065b15bd    90              ??          90h
ram:065b15be    90              ??          90h
ram:065b15bf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;void * FUN_065b15c0(void * this, char * param_1)
          ;this          void *             ECX
          ;param_1       char *               4                      ;XREF[1,0]:   065b15c6
          ;local_4       undefined4          -4                      ;XREF[1,0]:   065b15ce
                                                          ;XREF[1,0]:   065b1a5b
ram:065b15c0    51              PUSH        this
ram:065b15c1    53              PUSH        EBX
ram:065b15c2    55              PUSH        EBP
ram:065b15c3    8be9            MOV         EBP,this
ram:065b15c5    56              PUSH        ESI
ram:065b15c6    8b5c2414        MOV         EBX,dword ptr [ESP + param_1+0x10]
ram:065b15ca    57              PUSH        EDI
ram:065b15cb    8b7d04          MOV         EDI,dword ptr [EBP + 0x4]
ram:065b15ce    896c2410        MOV         dword ptr [ESP + local_4+0x14],EBP
ram:065b15d2    8b37            MOV         ESI,dword ptr [EDI]
ram:065b15d4    3bf7            CMP         ESI,EDI
ram:065b15d6    7420            JZ          LAB_065b15f8
ram:065b15d8    8b2d30705b06    MOV         EBP,dword ptr [DAT_065b7030]
                            LAB_065b15de:                 ;XREF[1,0]:   065b15f2
ram:065b15de    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b15e1    53              PUSH        EBX
ram:065b15e2    8b08            MOV         this,dword ptr [EAX]
ram:065b15e4    51              PUSH        this
ram:065b15e5    ffd5            CALL        EBP
ram:065b15e7    83c408          ADD         ESP,0x8
ram:065b15ea    85c0            TEST        EAX,EAX
ram:065b15ec    7f06            JG          LAB_065b15f4
ram:065b15ee    8b36            MOV         ESI,dword ptr [ESI]
ram:065b15f0    3bf7            CMP         ESI,EDI
ram:065b15f2    75ea            JNZ         LAB_065b15de
                            LAB_065b15f4:                 ;XREF[1,0]:   065b15ec
ram:065b15f4    8b6c2410        MOV         EBP,dword ptr [ESP + 0x10]
                            LAB_065b15f8:                 ;XREF[1,0]:   065b15d6
ram:065b15f8    6a10            PUSH        0x10
ram:065b15fa    e8cf480000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b15ff    83c404          ADD         ESP,0x4
ram:065b1602    85c0            TEST        EAX,EAX
ram:065b1604    740c            JZ          LAB_065b1612
ram:065b1606    53              PUSH        EBX
ram:065b1607    8bc8            MOV         this,EAX
ram:065b1609    e8a2faffff      CALL        FUN_065b10b0                            ;void * FUN_065b10b0(void * this, cha...
ram:065b160e    8bd8            MOV         EBX,EAX
ram:065b1610    eb02            JMP         LAB_065b1614
                            LAB_065b1612:                 ;XREF[1,0]:   065b1604
ram:065b1612    33db            XOR         EBX,EBX
                            LAB_065b1614:                 ;XREF[1,0]:   065b1610
ram:065b1614    8b7e04          MOV         EDI,dword ptr [ESI + 0x4]
ram:065b1617    6a0c            PUSH        0xc
ram:065b1619    e8b0480000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b161e    83c404          ADD         ESP,0x4
ram:065b1621    8930            MOV         dword ptr [EAX],ESI
ram:065b1623    85ff            TEST        EDI,EDI
ram:065b1625    7502            JNZ         LAB_065b1629
ram:065b1627    8bf8            MOV         EDI,EAX
                            LAB_065b1629:                 ;XREF[1,0]:   065b1625
ram:065b1629    897804          MOV         dword ptr [EAX + 0x4],EDI
ram:065b162c    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b162f    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b1632    8902            MOV         dword ptr [EDX],EAX
ram:065b1634    83c008          ADD         EAX,0x8
ram:065b1637    85c0            TEST        EAX,EAX
ram:065b1639    7402            JZ          LAB_065b163d
ram:065b163b    8918            MOV         dword ptr [EAX],EBX
                            LAB_065b163d:                 ;XREF[1,0]:   065b1639
ram:065b163d    8b4508          MOV         EAX,dword ptr [EBP + 0x8]
ram:065b1640    5f              POP         EDI
ram:065b1641    40              INC         EAX
ram:065b1642    5e              POP         ESI
ram:065b1643    894508          MOV         dword ptr [EBP + 0x8],EAX
ram:065b1646    8bc3            MOV         EAX,EBX
ram:065b1648    5d              POP         EBP
ram:065b1649    5b              POP         EBX
ram:065b164a    59              POP         this
ram:065b164b    c20400          RET         0x4
ram:065b164e    90              ??          90h
ram:065b164f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1650()
                                                          ;XREF[3,0]:   065b192e,065b19c9,065b1a4a
ram:065b1650    53              PUSH        EBX
ram:065b1651    55              PUSH        EBP
ram:065b1652    56              PUSH        ESI
ram:065b1653    57              PUSH        EDI
ram:065b1654    8b7c2414        MOV         EDI,dword ptr [ESP + Stack[0x4]+0x10]
ram:065b1658    b301            MOV         BL,0x1
ram:065b165a    8bcf            MOV         ECX,EDI
ram:065b165c    33f6            XOR         ESI,ESI
ram:065b165e    e80d090000      CALL        FUN_065b1f70                            ;undefined FUN_065b1f70(int * param_1)
ram:065b1663    8b6c2420        MOV         EBP,dword ptr [ESP + Stack[0x10]+0x10]
ram:065b1667    83f864          CMP         EAX,0x64
ram:065b166a    7476            JZ          LAB_065b16e2
                            LAB_065b166c:                 ;XREF[1,0]:   065b16c0
ram:065b166c    83f865          CMP         EAX,0x65
ram:065b166f    7471            JZ          LAB_065b16e2
ram:065b1671    83f866          CMP         EAX,0x66
ram:065b1674    7457            JZ          LAB_065b16cd
ram:065b1676    3b442418        CMP         EAX,dword ptr [ESP + Stack[0x8]+0x10]
ram:065b167a    7466            JZ          LAB_065b16e2
ram:065b167c    8b8710040000    MOV         EAX,dword ptr [EDI + 0x410]
ram:065b1682    8b54241c        MOV         EDX,dword ptr [ESP + Stack[0xc]+0x10]
ram:065b1686    4a              DEC         EDX
ram:065b1687    8d4c0601        LEA         ECX,[ESI + EAX*0x1 + 0x1]
ram:065b168b    3bca            CMP         ECX,EDX
ram:065b168d    7d4e            JGE         LAB_065b16dd
ram:065b168f    84db            TEST        BL,BL
ram:065b1691    7505            JNZ         LAB_065b1698
ram:065b1693    c6042e20        MOV         byte ptr [ESI + EBP*0x1],0x20
ram:065b1697    46              INC         ESI
                            LAB_065b1698:                 ;XREF[1,0]:   065b1691
ram:065b1698    8d4710          LEA         EAX,[EDI + 0x10]
ram:065b169b    8bce            MOV         ECX,ESI
ram:065b169d    32db            XOR         BL,BL
ram:065b169f    2bc8            SUB         ECX,EAX
ram:065b16a1    8d1429          LEA         EDX,[ECX + EBP*0x1]
                            LAB_065b16a4:                 ;XREF[1,0]:   065b16ac
ram:065b16a4    8a08            MOV         CL,byte ptr [EAX]
ram:065b16a6    880c02          MOV         byte ptr [EDX + EAX*0x1],CL
ram:065b16a9    40              INC         EAX
ram:065b16aa    84c9            TEST        CL,CL
ram:065b16ac    75f6            JNZ         LAB_065b16a4
ram:065b16ae    8b9710040000    MOV         EDX,dword ptr [EDI + 0x410]
ram:065b16b4    8bcf            MOV         ECX,EDI
ram:065b16b6    03f2            ADD         ESI,EDX
ram:065b16b8    e8b3080000      CALL        FUN_065b1f70                            ;undefined FUN_065b1f70(int * param_1)
ram:065b16bd    83f864          CMP         EAX,0x64
ram:065b16c0    75aa            JNZ         LAB_065b166c
ram:065b16c2    c6042e00        MOV         byte ptr [ESI + EBP*0x1],0x0
ram:065b16c6    5f              POP         EDI
ram:065b16c7    5e              POP         ESI
ram:065b16c8    5d              POP         EBP
ram:065b16c9    5b              POP         EBX
ram:065b16ca    c21000          RET         0x10
                            LAB_065b16cd:                 ;XREF[1,0]:   065b1674
ram:065b16cd    c6042e00        MOV         byte ptr [ESI + EBP*0x1],0x0
ram:065b16d1    5f              POP         EDI
ram:065b16d2    5e              POP         ESI
ram:065b16d3    5d              POP         EBP
ram:065b16d4    b865000000      MOV         EAX,0x65
ram:065b16d9    5b              POP         EBX
ram:065b16da    c21000          RET         0x10
                            LAB_065b16dd:                 ;XREF[1,0]:   065b168d
ram:065b16dd    b864000000      MOV         EAX,0x64
                            LAB_065b16e2:                 ;XREF[3,0]:   065b166a,065b166f,065b167a
ram:065b16e2    c6042e00        MOV         byte ptr [ESI + EBP*0x1],0x0
ram:065b16e6    5f              POP         EDI
ram:065b16e7    5e              POP         ESI
ram:065b16e8    5d              POP         EBP
ram:065b16e9    5b              POP         EBX
ram:065b16ea    c21000          RET         0x10
ram:065b16ed    90              ??          90h
ram:065b16ee    90              ??          90h
ram:065b16ef    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b16f0(undefined4 param_1)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b1703
          ;local_418     undefined1        -418                      ;XREF[5,0]:   065b16fa,065b170a,065b1718,065b172f,065b173c
                                                          ;XREF[2,0]:   065b149d,065b18da
ram:065b16f0    81ec18040000    SUB         ESP,0x418
ram:065b16f6    56              PUSH        ESI
ram:065b16f7    8bf1            MOV         ESI,ECX
ram:065b16f9    57              PUSH        EDI
ram:065b16fa    8d4c2408        LEA         ECX=>local_418,[ESP + 0x8]
ram:065b16fe    e83d040000      CALL        FUN_065b1b40                            ;undefined4 * FUN_065b1b40(undefined4...
ram:065b1703    8bbc24240...    MOV         EDI,dword ptr [ESP + param_1+0x420]
ram:065b170a    8d4c2408        LEA         ECX=>local_418,[ESP + 0x8]
ram:065b170e    57              PUSH        EDI
ram:065b170f    e86c040000      CALL        FUN_065b1b80                            ;undefined4 FUN_065b1b80(void * this,...
ram:065b1714    84c0            TEST        AL,AL
ram:065b1716    7516            JNZ         LAB_065b172e
ram:065b1718    8d4c2408        LEA         ECX=>local_418,[ESP + 0x8]
ram:065b171c    e83f040000      CALL        FUN_065b1b60                            ;undefined FUN_065b1b60(undefined4 * ...
ram:065b1721    5f              POP         EDI
ram:065b1722    32c0            XOR         AL,AL
ram:065b1724    5e              POP         ESI
ram:065b1725    81c418040000    ADD         ESP,0x418
ram:065b172b    c20400          RET         0x4
                            LAB_065b172e:                 ;XREF[1,0]:   065b1716
ram:065b172e    53              PUSH        EBX
ram:065b172f    8d44240c        LEA         EAX=>local_418,[ESP + 0xc]
ram:065b1733    57              PUSH        EDI
ram:065b1734    50              PUSH        EAX
ram:065b1735    8bce            MOV         ECX,ESI
ram:065b1737    e894000000      CALL        FUN_065b17d0                            ;uint FUN_065b17d0(void)
ram:065b173c    8d4c240c        LEA         ECX=>local_418,[ESP + 0xc]
ram:065b1740    8ad8            MOV         BL,AL
ram:065b1742    e819040000      CALL        FUN_065b1b60                            ;undefined FUN_065b1b60(undefined4 * ...
ram:065b1747    8ac3            MOV         AL,BL
ram:065b1749    5b              POP         EBX
ram:065b174a    5f              POP         EDI
ram:065b174b    5e              POP         ESI
ram:065b174c    81c418040000    ADD         ESP,0x418
ram:065b1752    c20400          RET         0x4
ram:065b1755    90              ??          90h
ram:065b1756    90              ??          90h
ram:065b1757    90              ??          90h
ram:065b1758    90              ??          90h
ram:065b1759    90              ??          90h
ram:065b175a    90              ??          90h
ram:065b175b    90              ??          90h
ram:065b175c    90              ??          90h
ram:065b175d    90              ??          90h
ram:065b175e    90              ??          90h
ram:065b175f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b1760(undefined4 * param_1, uint param_2)
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b1779
          ;param_2       uint                 8                      ;XREF[1,0]:   065b1772
          ;local_418     undefined1        -418                      ;XREF[5,0]:   065b1769,065b1782,065b178f,065b17a5,065b17b6
                                                          ;XREF[1,0]:   065b14d2
ram:065b1760    81ec18040000    SUB         ESP,0x418
ram:065b1766    56              PUSH        ESI
ram:065b1767    8bf1            MOV         ESI,ECX
ram:065b1769    8d4c2404        LEA         ECX=>local_418,[ESP + 0x4]
ram:065b176d    e8ce030000      CALL        FUN_065b1b40                            ;undefined4 * FUN_065b1b40(undefined4...
ram:065b1772    8b8424240...    MOV         EAX,dword ptr [ESP + param_2+0x41c]
ram:065b1779    8b8c24200...    MOV         ECX,dword ptr [ESP + param_1+0x41c]
ram:065b1780    50              PUSH        EAX
ram:065b1781    51              PUSH        ECX
ram:065b1782    8d4c240c        LEA         ECX=>local_418,[ESP + 0xc]
ram:065b1786    e8a5040000      CALL        FUN_065b1c30                            ;undefined4 FUN_065b1c30(void * this,...
ram:065b178b    84c0            TEST        AL,AL
ram:065b178d    7515            JNZ         LAB_065b17a4
ram:065b178f    8d4c2404        LEA         ECX=>local_418,[ESP + 0x4]
ram:065b1793    e8c8030000      CALL        FUN_065b1b60                            ;undefined FUN_065b1b60(undefined4 * ...
ram:065b1798    32c0            XOR         AL,AL
ram:065b179a    5e              POP         ESI
ram:065b179b    81c418040000    ADD         ESP,0x418
ram:065b17a1    c20800          RET         0x8
                            LAB_065b17a4:                 ;XREF[1,0]:   065b178d
ram:065b17a4    53              PUSH        EBX
ram:065b17a5    8d542408        LEA         EDX=>local_418,[ESP + 0x8]
ram:065b17a9    6818805b06      PUSH        0x65b8018
ram:065b17ae    52              PUSH        EDX
ram:065b17af    8bce            MOV         ECX,ESI
ram:065b17b1    e81a000000      CALL        FUN_065b17d0                            ;uint FUN_065b17d0(void)
ram:065b17b6    8d4c2408        LEA         ECX=>local_418,[ESP + 0x8]
ram:065b17ba    8ad8            MOV         BL,AL
ram:065b17bc    e89f030000      CALL        FUN_065b1b60                            ;undefined FUN_065b1b60(undefined4 * ...
ram:065b17c1    8ac3            MOV         AL,BL
ram:065b17c3    5b              POP         EBX
ram:065b17c4    5e              POP         ESI
ram:065b17c5    81c418040000    ADD         ESP,0x418
ram:065b17cb    c20800          RET         0x8
ram:065b17ce    90              ??          90h
ram:065b17cf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b17d0(void)
          ;local_res1    undefined1           1                      ;XREF[2,0]:   065b1990,065b1a11
          ;local_res0    undefined1           0                      ;XREF[5,0]:   065b190c,065b195b,065b19f1,065b1a3b,065b1a54
                                                          ;XREF[2,0]:   065b1737,065b17b1
ram:065b17d0    b8201c0000      MOV         EAX,0x1c20
ram:065b17d5    e806470000      CALL        FUN_065b5ee0                            ;undefined FUN_065b5ee0(void)
ram:065b17da    53              PUSH        EBX
ram:065b17db    55              PUSH        EBP
ram:065b17dc    8bac242c1...    MOV         EBP,dword ptr [ESP + 0x1c2c]
ram:065b17e3    56              PUSH        ESI
ram:065b17e4    8bd9            MOV         EBX,ECX
ram:065b17e6    57              PUSH        EDI
ram:065b17e7    8bcd            MOV         ECX,EBP
ram:065b17e9    e882070000      CALL        FUN_065b1f70                            ;undefined FUN_065b1f70(int * param_1)
ram:065b17ee    83f866          CMP         EAX,0x66
ram:065b17f1    0f8494020000    JZ          LAB_065b1a8b
                            LAB_065b17f7:                 ;XREF[1,0]:   065b1a85
ram:065b17f7    83f865          CMP         EAX,0x65
ram:065b17fa    0f877a020000    JA          switchD_065b1808::caseD_3
ram:065b1800    33c9            XOR         ECX,ECX
ram:065b1802    8a88d41a5b06    MOV         CL,byte ptr [EAX + switchD_065b1808::...
                            switchD:                      ; FWD[7,0]:   065b180f,065b1815,065b1909,065b1a3b
                                                          ;             065b1a7a,065b1a7b,065b1abc
ram:065b1808    ff248dbc1...    JMP         dword ptr [ECX*0x4 + switchD_065b1808...;= 065b1909
                            caseD_64:                     ;XREF[2,0]:   065b1808,065b1ac8
ram:065b180f    cc              INT3
ram:065b1810    e9              ??          E9h
ram:065b1811    66              ??          66h    f
ram:065b1812    02              ??          02h
ram:065b1813    00              ??          00h
ram:065b1814    00              ??          00h
                            caseD_1:                      ;XREF[2,0]:   065b1808,065b1ac0
ram:065b1815    8bcd            MOV         ECX,EBP
ram:065b1817    e854070000      CALL        FUN_065b1f70                            ;undefined FUN_065b1f70(int * param_1)
ram:065b181c    85c0            TEST        EAX,EAX
ram:065b181e    0f8547020000    JNZ         LAB_065b1a6b
ram:065b1824    8b3d44705b06    MOV         EDI,dword ptr [DAT_065b7044]
ram:065b182a    8d9424240...    LEA         EDX,[ESP + 0xb24]
ram:065b1831    8d8424200...    LEA         EAX,[ESP + 0xa20]
ram:065b1838    52              PUSH        EDX
ram:065b1839    8d8c241c0...    LEA         ECX=>Stack[0x508],[ESP + 0x51c]
ram:065b1840    50              PUSH        EAX
ram:065b1841    8d94241c0...    LEA         EDX=>Stack[0x404],[ESP + 0x41c]
ram:065b1848    8d7510          LEA         ESI,[EBP + 0x10]
ram:065b184b    51              PUSH        ECX
ram:065b184c    52              PUSH        EDX
ram:065b184d    56              PUSH        ESI
ram:065b184e    ffd7            CALL        EDI
ram:065b1850    8a8424280...    MOV         AL,byte ptr [ESP + 0x428]
ram:065b1857    83c414          ADD         ESP,0x14
ram:065b185a    84c0            TEST        AL,AL
ram:065b185c    755d            JNZ         LAB_065b18bb
ram:065b185e    80bc24180...    CMP         byte ptr [ESP + 0x518],0x5c
ram:065b1866    7453            JZ          LAB_065b18bb
ram:065b1868    8d8424240...    LEA         EAX,[ESP + 0xb24]
ram:065b186f    8d8c24200...    LEA         ECX,[ESP + 0xa20]
ram:065b1876    50              PUSH        EAX
ram:065b1877    8d94241c0...    LEA         EDX,[ESP + 0x51c]
ram:065b187e    51              PUSH        ECX
ram:065b187f    8b8c24401...    MOV         ECX,dword ptr [ESP + 0x1c40]
ram:065b1886    8d84241c0...    LEA         EAX,[ESP + 0x41c]
ram:065b188d    52              PUSH        EDX
ram:065b188e    50              PUSH        EAX
ram:065b188f    51              PUSH        ECX
ram:065b1890    ffd7            CALL        EDI
ram:065b1892    8d94242c0...    LEA         EDX,[ESP + 0x52c]
ram:065b1899    56              PUSH        ESI
ram:065b189a    8d84242c0...    LEA         EAX,[ESP + 0x42c]
ram:065b18a1    52              PUSH        EDX
ram:065b18a2    50              PUSH        EAX
ram:065b18a3    8d8c24480...    LEA         ECX,[ESP + 0xc48]
ram:065b18aa    6830805b06      PUSH        0x65b8030
ram:065b18af    51              PUSH        ECX
ram:065b18b0    ff1540705b06    CALL        dword ptr [DAT_065b7040]
ram:065b18b6    83c428          ADD         ESP,0x28
ram:065b18b9    eb15            JMP         LAB_065b18d0
                            LAB_065b18bb:                 ;XREF[2,0]:   065b185c,065b1866
ram:065b18bb    8d9424280...    LEA         EDX,[ESP + 0xc28]
ram:065b18c2    8bc6            MOV         EAX,ESI
ram:065b18c4    2bd6            SUB         EDX,ESI
                            LAB_065b18c6:                 ;XREF[1,0]:   065b18ce
ram:065b18c6    8a08            MOV         CL,byte ptr [EAX]
ram:065b18c8    880c02          MOV         byte ptr [EDX + EAX*0x1],CL
ram:065b18cb    40              INC         EAX
ram:065b18cc    84c9            TEST        CL,CL
ram:065b18ce    75f6            JNZ         LAB_065b18c6
                            LAB_065b18d0:                 ;XREF[1,0]:   065b18b9
ram:065b18d0    8d9424280...    LEA         EDX,[ESP + 0xc28]
ram:065b18d7    8bcb            MOV         ECX,EBX
ram:065b18d9    52              PUSH        EDX
ram:065b18da    e811feffff      CALL        FUN_065b16f0                            ;uint FUN_065b16f0(undefined4 param_1)
ram:065b18df    8b4d04          MOV         ECX,dword ptr [EBP + 0x4]
ram:065b18e2    8b7500          MOV         ESI,dword ptr [EBP]
ram:065b18e5    8b4508          MOV         EAX,dword ptr [EBP + 0x8]
ram:065b18e8    03ce            ADD         ECX,ESI
ram:065b18ea    3bc1            CMP         EAX,ECX
ram:065b18ec    720c            JC          LAB_065b18fa
ram:065b18ee    c7450cfff...    MOV         dword ptr [EBP + 0xc],0xffffffff
ram:065b18f5    e981010000      JMP         switchD_065b1808::caseD_65
                            LAB_065b18fa:                 ;XREF[1,0]:   065b18ec
ram:065b18fa    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b18fd    40              INC         EAX
ram:065b18fe    89550c          MOV         dword ptr [EBP + 0xc],EDX
ram:065b1901    894508          MOV         dword ptr [EBP + 0x8],EAX
ram:065b1904    e972010000      JMP         switchD_065b1808::caseD_65
                            caseD_0:                      ;XREF[2,0]:   065b1808,065b1abc
ram:065b1909    8d4510          LEA         EAX,[EBP + 0x10]
ram:065b190c    8d542410        LEA         EDX=>local_res0,[ESP + 0x10]
ram:065b1910    2bd0            SUB         EDX,EAX
                            LAB_065b1912:                 ;XREF[1,0]:   065b191a
ram:065b1912    8a08            MOV         CL,byte ptr [EAX]
ram:065b1914    880c02          MOV         byte ptr [EDX + EAX*0x1],CL
ram:065b1917    40              INC         EAX
ram:065b1918    84c9            TEST        CL,CL
ram:065b191a    75f6            JNZ         LAB_065b1912
ram:065b191c    8d84241c0...    LEA         EAX=>Stack[0x60c],[ESP + 0x61c]
ram:065b1923    8bcb            MOV         ECX,EBX
ram:065b1925    50              PUSH        EAX
ram:065b1926    6800040000      PUSH        0x400
ram:065b192b    6a04            PUSH        0x4
ram:065b192d    55              PUSH        EBP
ram:065b192e    e81dfdffff      CALL        FUN_065b1650                            ;undefined FUN_065b1650()
ram:065b1933    83f804          CMP         EAX,0x4
ram:065b1936    747f            JZ          LAB_065b19b7
ram:065b1938    83f865          CMP         EAX,0x65
ram:065b193b    0f8559010000    JNZ         LAB_065b1a9a
ram:065b1941    8dbc241c0...    LEA         EDI=>Stack[0x60c],[ESP + 0x61c]
ram:065b1948    83c9ff          OR          ECX,0xffffffff
ram:065b194b    33c0            XOR         EAX,EAX
ram:065b194d    f2ae            SCASB.REPNE ES:EDI
ram:065b194f    f7d1            NOT         ECX
ram:065b1951    49              DEC         ECX
ram:065b1952    743a            JZ          LAB_065b198e
ram:065b1954    8d8c241c0...    LEA         ECX=>Stack[0x60c],[ESP + 0x61c]
ram:065b195b    8d542410        LEA         EDX=>local_res0,[ESP + 0x10]
ram:065b195f    51              PUSH        ECX
ram:065b1960    52              PUSH        EDX
ram:065b1961    8d8424300...    LEA         EAX,[ESP + 0xc30]
ram:065b1968    6828805b06      PUSH        0x65b8028
ram:065b196d    50              PUSH        EAX
ram:065b196e    ff1540705b06    CALL        dword ptr [DAT_065b7040]
ram:065b1974    83c410          ADD         ESP,0x10
ram:065b1977    8d8c24280...    LEA         ECX,[ESP + 0xc28]
ram:065b197e    6a00            PUSH        0x0
ram:065b1980    51              PUSH        ECX
ram:065b1981    8b4b0c          MOV         ECX,dword ptr [EBX + 0xc]
ram:065b1984    e837f8ffff      CALL        FUN_065b11c0                            ;undefined4 FUN_065b11c0(void * this,...
ram:065b1989    e9ed000000      JMP         switchD_065b1808::caseD_65
                            LAB_065b198e:                 ;XREF[1,0]:   065b1952
ram:065b198e    33c0            XOR         EAX,EAX
                            LAB_065b1990:                 ;XREF[1,0]:   065b199e
ram:065b1990    8a4c0410        MOV         CL,byte ptr [ESP + EAX*0x1 + local_re...
ram:065b1994    888c04280...    MOV         byte ptr [ESP + EAX*0x1 + 0xc28],CL
ram:065b199b    40              INC         EAX
ram:065b199c    84c9            TEST        CL,CL
ram:065b199e    75f0            JNZ         LAB_065b1990
ram:065b19a0    8d8c24280...    LEA         ECX,[ESP + 0xc28]
ram:065b19a7    6a00            PUSH        0x0
ram:065b19a9    51              PUSH        ECX
ram:065b19aa    8b4b0c          MOV         ECX,dword ptr [EBX + 0xc]
ram:065b19ad    e80ef8ffff      CALL        FUN_065b11c0                            ;undefined4 FUN_065b11c0(void * this,...
ram:065b19b2    e9c4000000      JMP         switchD_065b1808::caseD_65
                            LAB_065b19b7:                 ;XREF[1,0]:   065b1936
ram:065b19b7    8d94242c1...    LEA         EDX,[ESP + 0x182c]
ram:065b19be    8bcb            MOV         ECX,EBX
ram:065b19c0    52              PUSH        EDX
ram:065b19c1    6800040000      PUSH        0x400
ram:065b19c6    6a65            PUSH        0x65
ram:065b19c8    55              PUSH        EBP
ram:065b19c9    e882fcffff      CALL        FUN_065b1650                            ;undefined FUN_065b1650()
ram:065b19ce    83f865          CMP         EAX,0x65
ram:065b19d1    0f85d3000000    JNZ         LAB_065b1aaa
ram:065b19d7    8dbc241c0...    LEA         EDI=>Stack[0x60c],[ESP + 0x61c]
ram:065b19de    83c9ff          OR          ECX,0xffffffff
ram:065b19e1    33c0            XOR         EAX,EAX
ram:065b19e3    f2ae            SCASB.REPNE ES:EDI
ram:065b19e5    f7d1            NOT         ECX
ram:065b19e7    49              DEC         ECX
ram:065b19e8    7425            JZ          LAB_065b1a0f
ram:065b19ea    8d84241c0...    LEA         EAX=>Stack[0x60c],[ESP + 0x61c]
ram:065b19f1    8d4c2410        LEA         ECX=>local_res0,[ESP + 0x10]
ram:065b19f5    50              PUSH        EAX
ram:065b19f6    51              PUSH        ECX
ram:065b19f7    8d9424300...    LEA         EDX,[ESP + 0xc30]
ram:065b19fe    6828805b06      PUSH        0x65b8028
ram:065b1a03    52              PUSH        EDX
ram:065b1a04    ff1540705b06    CALL        dword ptr [DAT_065b7040]
ram:065b1a0a    83c410          ADD         ESP,0x10
ram:065b1a0d    eb12            JMP         LAB_065b1a21
                            LAB_065b1a0f:                 ;XREF[1,0]:   065b19e8
ram:065b1a0f    33c0            XOR         EAX,EAX
                            LAB_065b1a11:                 ;XREF[1,0]:   065b1a1f
ram:065b1a11    8a4c0410        MOV         CL,byte ptr [ESP + EAX*0x1 + local_re...
ram:065b1a15    888c04280...    MOV         byte ptr [ESP + EAX*0x1 + 0xc28],CL
ram:065b1a1c    40              INC         EAX
ram:065b1a1d    84c9            TEST        CL,CL
ram:065b1a1f    75f0            JNZ         LAB_065b1a11
                            LAB_065b1a21:                 ;XREF[1,0]:   065b1a0d
ram:065b1a21    8d84242c1...    LEA         EAX,[ESP + 0x182c]
ram:065b1a28    8d8c24280...    LEA         ECX,[ESP + 0xc28]
ram:065b1a2f    50              PUSH        EAX
ram:065b1a30    51              PUSH        ECX
ram:065b1a31    8b4b0c          MOV         ECX,dword ptr [EBX + 0xc]
ram:065b1a34    e887f7ffff      CALL        FUN_065b11c0                            ;undefined4 FUN_065b11c0(void * this,...
ram:065b1a39    eb40            JMP         switchD_065b1808::caseD_65
                            caseD_2:                      ;XREF[2,0]:   065b1808,065b1ac4
ram:065b1a3b    8d542410        LEA         EDX=>local_res0,[ESP + 0x10]
ram:065b1a3f    8bcb            MOV         ECX,EBX
ram:065b1a41    52              PUSH        EDX
ram:065b1a42    6800040000      PUSH        0x400
ram:065b1a47    6a03            PUSH        0x3
ram:065b1a49    55              PUSH        EBP
ram:065b1a4a    e801fcffff      CALL        FUN_065b1650                            ;undefined FUN_065b1650()
ram:065b1a4f    83f803          CMP         EAX,0x3
ram:065b1a52    7511            JNZ         LAB_065b1a65
ram:065b1a54    8d442410        LEA         EAX=>local_res0,[ESP + 0x10]
ram:065b1a58    8bcb            MOV         ECX,EBX
ram:065b1a5a    50              PUSH        EAX
ram:065b1a5b    e860fbffff      CALL        FUN_065b15c0                            ;void * FUN_065b15c0(void * this, cha...
ram:065b1a60    89430c          MOV         dword ptr [EBX + 0xc],EAX
ram:065b1a63    eb16            JMP         switchD_065b1808::caseD_65
                            LAB_065b1a65:                 ;XREF[1,0]:   065b1a52
ram:065b1a65    83f865          CMP         EAX,0x65
ram:065b1a68    7411            JZ          switchD_065b1808::caseD_65
ram:065b1a6a    cc              INT3
                            LAB_065b1a6b:                 ;XREF[1,0]:   065b181e
ram:065b1a6b    5f              POP         EDI
ram:065b1a6c    5e              POP         ESI
ram:065b1a6d    5d              POP         EBP
ram:065b1a6e    32c0            XOR         AL,AL
ram:065b1a70    5b              POP         EBX
ram:065b1a71    81c4201c0000    ADD         ESP,0x1c20
ram:065b1a77    c20800          RET         0x8
                            caseD_4:                      ;XREF[3,0]:   065b17fa,065b1808,065b1ad0
                            caseD_5:
                            caseD_6:
                            caseD_7:
                            caseD_8:
                            caseD_9:
                            caseD_a:
                            caseD_b:
                            caseD_c:
                            caseD_d:
                            caseD_e:
                            caseD_f:
                            caseD_10:
                            caseD_11:
                            caseD_12:
                            caseD_13:
                            caseD_14:
                            caseD_15:
                            caseD_16:
                            caseD_17:
                            caseD_18:
                            caseD_19:
                            caseD_1a:
                            caseD_1b:
                            caseD_1c:
                            caseD_1d:
                            caseD_1e:
                            caseD_1f:
                            caseD_20:
                            caseD_21:
                            caseD_22:
                            caseD_23:
                            caseD_24:
                            caseD_25:
                            caseD_26:
                            caseD_27:
                            caseD_28:
                            caseD_29:
                            caseD_2a:
                            caseD_2b:
                            caseD_2c:
                            caseD_2d:
                            caseD_2e:
                            caseD_2f:
                            caseD_30:
                            caseD_31:
                            caseD_32:
                            caseD_33:
                            caseD_34:
                            caseD_35:
                            caseD_36:
                            caseD_37:
                            caseD_38:
                            caseD_39:
                            caseD_3a:
                            caseD_3b:
                            caseD_3c:
                            caseD_3d:
                            caseD_3e:
                            caseD_3f:
                            caseD_40:
                            caseD_41:
                            caseD_42:
                            caseD_43:
                            caseD_44:
                            caseD_45:
                            caseD_46:
                            caseD_47:
                            caseD_48:
                            caseD_49:
                            caseD_4a:
                            caseD_4b:
                            caseD_4c:
                            caseD_4d:
                            caseD_4e:
                            caseD_4f:
                            caseD_50:
                            caseD_51:
                            caseD_52:
                            caseD_53:
                            caseD_54:
                            caseD_55:
                            caseD_56:
                            caseD_57:
                            caseD_58:
                            caseD_59:
                            caseD_5a:
                            caseD_5b:
                            caseD_5c:
                            caseD_5d:
                            caseD_5e:
                            caseD_5f:
                            caseD_60:
                            caseD_61:
                            caseD_62:
                            caseD_63:
                            caseD_3:
ram:065b1a7a    cc              INT3
                            caseD_65:                     ;XREF[9,0]:   065b1808,065b18f5,065b1904,065b1989
                                                          ;             065b19b2,065b1a39,065b1a63,065b1a68
                                                          ;             065b1acc
ram:065b1a7b    8bcd            MOV         ECX,EBP
ram:065b1a7d    e8ee040000      CALL        FUN_065b1f70                            ;undefined FUN_065b1f70(int * param_1)
ram:065b1a82    83f866          CMP         EAX,0x66
ram:065b1a85    0f856cfdffff    JNZ         LAB_065b17f7
                            LAB_065b1a8b:                 ;XREF[1,0]:   065b17f1
ram:065b1a8b    5f              POP         EDI
ram:065b1a8c    5e              POP         ESI
ram:065b1a8d    5d              POP         EBP
ram:065b1a8e    b001            MOV         AL,0x1
ram:065b1a90    5b              POP         EBX
ram:065b1a91    81c4201c0000    ADD         ESP,0x1c20
ram:065b1a97    c20800          RET         0x8
                            LAB_065b1a9a:                 ;XREF[1,0]:   065b193b
ram:065b1a9a    cc              INT3
ram:065b1a9b    5f              ??          5Fh    _
ram:065b1a9c    5e              ??          5Eh    ^
ram:065b1a9d    5d              ??          5Dh    ]
ram:065b1a9e    32              ??          32h    2
ram:065b1a9f    c0              ??          C0h
ram:065b1aa0    5b              ??          5Bh    [
ram:065b1aa1    81              ??          81h
ram:065b1aa2    c4              ??          C4h
ram:065b1aa3    20              ??          20h
ram:065b1aa4    1c              ??          1Ch
ram:065b1aa5    00              ??          00h
ram:065b1aa6    00              ??          00h
ram:065b1aa7    c2              ??          C2h
ram:065b1aa8    08              ??          08h
ram:065b1aa9    00              ??          00h
                            LAB_065b1aaa:                 ;XREF[1,0]:   065b19d1
ram:065b1aaa    cc              INT3
ram:065b1aab    5f              ??          5Fh    _
ram:065b1aac    5e              ??          5Eh    ^
ram:065b1aad    5d              ??          5Dh    ]
ram:065b1aae    32              ??          32h    2
ram:065b1aaf    c0              ??          C0h
ram:065b1ab0    5b              ??          5Bh    [
ram:065b1ab1    81              ??          81h
ram:065b1ab2    c4              ??          C4h
ram:065b1ab3    20              ??          20h
ram:065b1ab4    1c              ??          1Ch
ram:065b1ab5    00              ??          00h
ram:065b1ab6    00              ??          00h
ram:065b1ab7    c2              ??          C2h
ram:065b1ab8    08              ??          08h
ram:065b1ab9    00              ??          00h
ram:065b1aba    8b              ??          8Bh
ram:065b1abb    ff              ??          FFh
                            switchdataD_065b1abc:         ;XREF[1,0]:   065b1808
ram:065b1abc    09195b06        addr        switchD_065b1808::caseD_0
ram:065b1ac0    15185b06        addr        switchD_065b1808::caseD_1
ram:065b1ac4    3b1a5b06        addr        switchD_065b1808::caseD_2
ram:065b1ac8    0f185b06        addr        switchD_065b1808::caseD_64
ram:065b1acc    7b1a5b06        addr        switchD_065b1808::caseD_65
ram:065b1ad0    7a1a5b06        addr        switchD_065b1808::caseD_3
                            switchdataD_065b1ad4:         ;XREF[1,0]:   065b1802
ram:065b1ad4    00              db          0h
ram:065b1ad5    01              db          1h
ram:065b1ad6    02              db          2h
ram:065b1ad7    05              db          5h
ram:065b1ad8    05              db          5h
ram:065b1ad9    05              db          5h
ram:065b1ada    05              db          5h
ram:065b1adb    05              db          5h
ram:065b1adc    05              db          5h
ram:065b1add    05              db          5h
ram:065b1ade    05              db          5h
ram:065b1adf    05              db          5h
ram:065b1ae0    05              db          5h
ram:065b1ae1    05              db          5h
ram:065b1ae2    05              db          5h
ram:065b1ae3    05              db          5h
ram:065b1ae4    05              db          5h
ram:065b1ae5    05              db          5h
ram:065b1ae6    05              db          5h
ram:065b1ae7    05              db          5h
ram:065b1ae8    05              db          5h
ram:065b1ae9    05              db          5h
ram:065b1aea    05              db          5h
ram:065b1aeb    05              db          5h
ram:065b1aec    05              db          5h
ram:065b1aed    05              db          5h
ram:065b1aee    05              db          5h
ram:065b1aef    05              db          5h
ram:065b1af0    05              db          5h
ram:065b1af1    05              db          5h
ram:065b1af2    05              db          5h
ram:065b1af3    05              db          5h
ram:065b1af4    05              db          5h
ram:065b1af5    05              db          5h
ram:065b1af6    05              db          5h
ram:065b1af7    05              db          5h
ram:065b1af8    05              db          5h
ram:065b1af9    05              db          5h
ram:065b1afa    05              db          5h
ram:065b1afb    05              db          5h
ram:065b1afc    05              db          5h
ram:065b1afd    05              db          5h
ram:065b1afe    05              db          5h
ram:065b1aff    05              db          5h
ram:065b1b00    05              db          5h
ram:065b1b01    05              db          5h
ram:065b1b02    05              db          5h
ram:065b1b03    05              db          5h
ram:065b1b04    05              db          5h
ram:065b1b05    05              db          5h
ram:065b1b06    05              db          5h
ram:065b1b07    05              db          5h
ram:065b1b08    05              db          5h
ram:065b1b09    05              db          5h
ram:065b1b0a    05              db          5h
ram:065b1b0b    05              db          5h
ram:065b1b0c    05              db          5h
ram:065b1b0d    05              db          5h
ram:065b1b0e    05              db          5h
ram:065b1b0f    05              db          5h
ram:065b1b10    05              db          5h
ram:065b1b11    05              db          5h
ram:065b1b12    05              db          5h
ram:065b1b13    05              db          5h
ram:065b1b14    05              db          5h
ram:065b1b15    05              db          5h
ram:065b1b16    05              db          5h
ram:065b1b17    05              db          5h
ram:065b1b18    05              db          5h
ram:065b1b19    05              db          5h
ram:065b1b1a    05              db          5h
ram:065b1b1b    05              db          5h
ram:065b1b1c    05              db          5h
ram:065b1b1d    05              db          5h
ram:065b1b1e    05              db          5h
ram:065b1b1f    05              db          5h
ram:065b1b20    05              db          5h
ram:065b1b21    05              db          5h
ram:065b1b22    05              db          5h
ram:065b1b23    05              db          5h
ram:065b1b24    05              db          5h
ram:065b1b25    05              db          5h
ram:065b1b26    05              db          5h
ram:065b1b27    05              db          5h
ram:065b1b28    05              db          5h
ram:065b1b29    05              db          5h
ram:065b1b2a    05              db          5h
ram:065b1b2b    05              db          5h
ram:065b1b2c    05              db          5h
ram:065b1b2d    05              db          5h
ram:065b1b2e    05              db          5h
ram:065b1b2f    05              db          5h
ram:065b1b30    05              db          5h
ram:065b1b31    05              db          5h
ram:065b1b32    05              db          5h
ram:065b1b33    05              db          5h
ram:065b1b34    05              db          5h
ram:065b1b35    05              db          5h
ram:065b1b36    05              db          5h
ram:065b1b37    05              db          5h
ram:065b1b38    03              db          3h
ram:065b1b39    04              db          4h
ram:065b1b3a    90              ??          90h
ram:065b1b3b    90              ??          90h
ram:065b1b3c    90              ??          90h
ram:065b1b3d    90              ??          90h
ram:065b1b3e    90              ??          90h
ram:065b1b3f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 * FUN_065b1b40(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
                                                          ;XREF[2,0]:   065b16fe,065b176d
ram:065b1b40    56              PUSH        ESI
ram:065b1b41    8bf1            MOV         ESI,param_1
ram:065b1b43    c70600000000    MOV         dword ptr [ESI],0x0
ram:065b1b49    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b1b50    e84b010000      CALL        FUN_065b1ca0                            ;undefined FUN_065b1ca0(undefined4 * ...
ram:065b1b55    8bc6            MOV         EAX,ESI
ram:065b1b57    5e              POP         ESI
ram:065b1b58    c3              RET
ram:065b1b59    90              ??          90h
ram:065b1b5a    90              ??          90h
ram:065b1b5b    90              ??          90h
ram:065b1b5c    90              ??          90h
ram:065b1b5d    90              ??          90h
ram:065b1b5e    90              ??          90h
ram:065b1b5f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1b60(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
                                                          ;XREF[4,0]:   065b171c,065b1742,065b1793,065b17bc
ram:065b1b60    56              PUSH        ESI
ram:065b1b61    8bf1            MOV         ESI,param_1
ram:065b1b63    8b06            MOV         EAX,dword ptr [ESI]
ram:065b1b65    50              PUSH        EAX
ram:065b1b66    e857430000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1b6b    83c404          ADD         ESP,0x4
ram:065b1b6e    c70600000000    MOV         dword ptr [ESI],0x0
ram:065b1b74    5e              POP         ESI
ram:065b1b75    c3              RET
ram:065b1b76    90              ??          90h
ram:065b1b77    90              ??          90h
ram:065b1b78    90              ??          90h
ram:065b1b79    90              ??          90h
ram:065b1b7a    90              ??          90h
ram:065b1b7b    90              ??          90h
ram:065b1b7c    90              ??          90h
ram:065b1b7d    90              ??          90h
ram:065b1b7e    90              ??          90h
ram:065b1b7f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b1b80(void * this, undefined4 param_1)
          ;this          void *             ECX
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b1b8d
                                                          ;XREF[1,0]:   065b170f
ram:065b1b80    53              PUSH        EBX
ram:065b1b81    8bd9            MOV         EBX,this
ram:065b1b83    56              PUSH        ESI
ram:065b1b84    57              PUSH        EDI
ram:065b1b85    8b03            MOV         EAX,dword ptr [EBX]
ram:065b1b87    50              PUSH        EAX
ram:065b1b88    e835430000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1b8d    8b4c2414        MOV         this,dword ptr [ESP + param_1+0x10]
ram:065b1b91    6838805b06      PUSH        0x65b8038
ram:065b1b96    51              PUSH        this
ram:065b1b97    c70300000000    MOV         dword ptr [EBX],0x0
ram:065b1b9d    ff1558705b06    CALL        dword ptr [DAT_065b7058]
ram:065b1ba3    8bf0            MOV         ESI,EAX
ram:065b1ba5    83c40c          ADD         ESP,0xc
ram:065b1ba8    85f6            TEST        ESI,ESI
ram:065b1baa    7475            JZ          LAB_065b1c21
ram:065b1bac    55              PUSH        EBP
ram:065b1bad    8b2d54705b06    MOV         EBP,dword ptr [DAT_065b7054]
ram:065b1bb3    6a02            PUSH        0x2
ram:065b1bb5    6a00            PUSH        0x0
ram:065b1bb7    56              PUSH        ESI
ram:065b1bb8    ffd5            CALL        EBP
ram:065b1bba    56              PUSH        ESI
ram:065b1bbb    ff1520705b06    CALL        dword ptr [DAT_065b7020]
ram:065b1bc1    6a00            PUSH        0x0
ram:065b1bc3    6a00            PUSH        0x0
ram:065b1bc5    56              PUSH        ESI
ram:065b1bc6    8bf8            MOV         EDI,EAX
ram:065b1bc8    ffd5            CALL        EBP
ram:065b1bca    57              PUSH        EDI
ram:065b1bcb    e8fe420000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b1bd0    56              PUSH        ESI
ram:065b1bd1    57              PUSH        EDI
ram:065b1bd2    6a01            PUSH        0x1
ram:065b1bd4    50              PUSH        EAX
ram:065b1bd5    8903            MOV         dword ptr [EBX],EAX
ram:065b1bd7    ff154c705b06    CALL        dword ptr [DAT_065b704c]
ram:065b1bdd    83c430          ADD         ESP,0x30
ram:065b1be0    3bc7            CMP         EAX,EDI
ram:065b1be2    5d              POP         EBP
ram:065b1be3    7420            JZ          LAB_065b1c05
ram:065b1be5    8b13            MOV         EDX,dword ptr [EBX]
ram:065b1be7    52              PUSH        EDX
ram:065b1be8    e8d5420000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1bed    56              PUSH        ESI
ram:065b1bee    c70300000000    MOV         dword ptr [EBX],0x0
ram:065b1bf4    ff1548705b06    CALL        dword ptr [DAT_065b7048]
ram:065b1bfa    83c408          ADD         ESP,0x8
ram:065b1bfd    32c0            XOR         AL,AL
ram:065b1bff    5f              POP         EDI
ram:065b1c00    5e              POP         ESI
ram:065b1c01    5b              POP         EBX
ram:065b1c02    c20400          RET         0x4
                            LAB_065b1c05:                 ;XREF[1,0]:   065b1be3
ram:065b1c05    56              PUSH        ESI
ram:065b1c06    897b04          MOV         dword ptr [EBX + 0x4],EDI
ram:065b1c09    ff1548705b06    CALL        dword ptr [DAT_065b7048]
ram:065b1c0f    83c404          ADD         ESP,0x4
ram:065b1c12    8bcb            MOV         this,EBX
ram:065b1c14    e887000000      CALL        FUN_065b1ca0                            ;undefined FUN_065b1ca0(undefined4 * ...
ram:065b1c19    5f              POP         EDI
ram:065b1c1a    5e              POP         ESI
ram:065b1c1b    b001            MOV         AL,0x1
ram:065b1c1d    5b              POP         EBX
ram:065b1c1e    c20400          RET         0x4
                            LAB_065b1c21:                 ;XREF[1,0]:   065b1baa
ram:065b1c21    8bcb            MOV         this,EBX
ram:065b1c23    e878000000      CALL        FUN_065b1ca0                            ;undefined FUN_065b1ca0(undefined4 * ...
ram:065b1c28    5f              POP         EDI
ram:065b1c29    5e              POP         ESI
ram:065b1c2a    32c0            XOR         AL,AL
ram:065b1c2c    5b              POP         EBX
ram:065b1c2d    c20400          RET         0x4
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b1c30(void * this, undefined4 * param_1, uint param_2)
          ;this          void *             ECX
          ;param_1       undefined4 *         4
          ;param_2       uint                 8                      ;XREF[1,0]:   065b1c3e
                                                          ;XREF[1,0]:   065b1786
ram:065b1c30    53              PUSH        EBX
ram:065b1c31    8bd9            MOV         EBX,this
ram:065b1c33    55              PUSH        EBP
ram:065b1c34    56              PUSH        ESI
ram:065b1c35    8b03            MOV         EAX,dword ptr [EBX]
ram:065b1c37    57              PUSH        EDI
ram:065b1c38    50              PUSH        EAX
ram:065b1c39    e884420000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b1c3e    8b6c241c        MOV         EBP,dword ptr [ESP + param_2+0x14]
ram:065b1c42    c70300000000    MOV         dword ptr [EBX],0x0
ram:065b1c48    55              PUSH        EBP
ram:065b1c49    e880420000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b1c4e    8b74241c        MOV         ESI,dword ptr [ESP + 0x1c]
ram:065b1c52    8bcd            MOV         this,EBP
ram:065b1c54    8bd1            MOV         EDX,this
ram:065b1c56    8bf8            MOV         EDI,EAX
ram:065b1c58    c1e902          SHR         this,0x2
ram:065b1c5b    8903            MOV         dword ptr [EBX],EAX
ram:065b1c5d    83c408          ADD         ESP,0x8
ram:065b1c60    f3a5            MOVSD.REP   ES:EDI,ESI
ram:065b1c62    8bca            MOV         this,EDX
ram:065b1c64    83e103          AND         this,0x3
ram:065b1c67    f3a4            MOVSB.REP   ES:EDI,ESI
ram:065b1c69    8b03            MOV         EAX,dword ptr [EBX]
ram:065b1c6b    8bcb            MOV         this,EBX
ram:065b1c6d    894308          MOV         dword ptr [EBX + 0x8],EAX
ram:065b1c70    896b04          MOV         dword ptr [EBX + 0x4],EBP
ram:065b1c73    e828000000      CALL        FUN_065b1ca0                            ;undefined FUN_065b1ca0(undefined4 * ...
ram:065b1c78    5f              POP         EDI
ram:065b1c79    5e              POP         ESI
ram:065b1c7a    5d              POP         EBP
ram:065b1c7b    b001            MOV         AL,0x1
ram:065b1c7d    5b              POP         EBX
ram:065b1c7e    c20800          RET         0x8
ram:065b1c81    90              ??          90h
ram:065b1c82    90              ??          90h
ram:065b1c83    90              ??          90h
ram:065b1c84    90              ??          90h
ram:065b1c85    90              ??          90h
ram:065b1c86    90              ??          90h
ram:065b1c87    90              ??          90h
ram:065b1c88    90              ??          90h
ram:065b1c89    90              ??          90h
ram:065b1c8a    90              ??          90h
ram:065b1c8b    90              ??          90h
ram:065b1c8c    90              ??          90h
ram:065b1c8d    90              ??          90h
ram:065b1c8e    90              ??          90h
ram:065b1c8f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1c90(int param_1)
          ;param_1       int                ECX
                                                          ;XREF[5,0]:   065b1d97,065b1dde,065b1e25,065b1e6c
                                                          ;             065b1ec5
ram:065b1c90    8b8110040000    MOV         EAX,dword ptr [param_1 + 0x410]
ram:065b1c96    c644081000      MOV         byte ptr [EAX + param_1*0x1 + 0x10],0x0
ram:065b1c9b    c3              RET
ram:065b1c9c    90              ??          90h
ram:065b1c9d    90              ??          90h
ram:065b1c9e    90              ??          90h
ram:065b1c9f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1ca0(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
                                                          ;XREF[4,0]:   065b1b50,065b1c14,065b1c23,065b1c73
ram:065b1ca0    8b01            MOV         EAX,dword ptr [param_1]
ram:065b1ca2    c78110040...    MOV         dword ptr [param_1 + 0x410],0x0
ram:065b1cac    c7410c0a0...    MOV         dword ptr [param_1 + 0xc],0xa
ram:065b1cb3    894108          MOV         dword ptr [param_1 + 0x8],EAX
ram:065b1cb6    c3              RET
ram:065b1cb7    90              ??          90h
ram:065b1cb8    90              ??          90h
ram:065b1cb9    90              ??          90h
ram:065b1cba    90              ??          90h
ram:065b1cbb    90              ??          90h
ram:065b1cbc    90              ??          90h
ram:065b1cbd    90              ??          90h
ram:065b1cbe    90              ??          90h
ram:065b1cbf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;bool FUN_065b1cc0(int * param_1)
          ;param_1       int *              ECX
                                                          ;XREF[1,0]:   065b1f73
ram:065b1cc0    53              PUSH        EBX
ram:065b1cc1    56              PUSH        ESI
ram:065b1cc2    8bf1            MOV         ESI,param_1
ram:065b1cc4    57              PUSH        EDI
ram:065b1cc5    33ff            XOR         EDI,EDI
ram:065b1cc7    83cbff          OR          EBX,0xffffffff
ram:065b1cca    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b1ccd    89be10040000    MOV         dword ptr [ESI + 0x410],EDI
ram:065b1cd3    40              INC         EAX
ram:065b1cd4    83f85e          CMP         EAX,0x5e
ram:065b1cd7    7766            JA          switchD_065b1ce1::caseD_0
                            LAB_065b1cd9:                 ;XREF[1,0]:   065b1d3d
ram:065b1cd9    33c9            XOR         param_1,param_1
ram:065b1cdb    8a88081f5b06    MOV         param_1,byte ptr [EAX + 0x65b1f08]=>B...;= 7h
                            switchD:                      ; FWD[9,0]:   065b1ce8,065b1d07,065b1d3f,065b1d79
                                                          ;             065b1d82,065b1dc9,065b1e10,065b1e57
                                                          ;             065b1ee8
ram:065b1ce1    ff248de81...    JMP         dword ptr [param_1*0x4 + switchD_065b...;= 065b1d79
                            caseD_d:                      ;XREF[2,0]:   065b1ce1,065b1eec
                            caseD_20:
                            caseD_9:
ram:065b1ce8    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b1ceb    8b0e            MOV         param_1,dword ptr [ESI]
ram:065b1ced    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1cf0    03d1            ADD         EDX,param_1
ram:065b1cf2    3bc2            CMP         EAX,EDX
ram:065b1cf4    7205            JC          LAB_065b1cfb
ram:065b1cf6    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1cf9    eb3b            JMP         LAB_065b1d36
                            LAB_065b1cfb:                 ;XREF[1,0]:   065b1cf4
ram:065b1cfb    0fbe08          MOVSX       param_1,byte ptr [EAX]
ram:065b1cfe    40              INC         EAX
ram:065b1cff    894e0c          MOV         dword ptr [ESI + 0xc],param_1
ram:065b1d02    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1d05    eb2f            JMP         LAB_065b1d36
                            caseD_3b:                     ;XREF[2,0]:   065b1ce1,065b1ef4
ram:065b1d07    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b1d0a    8b06            MOV         EAX,dword ptr [ESI]
ram:065b1d0c    8d0c02          LEA         param_1,[EDX + EAX*0x1]
                            LAB_065b1d0f:                 ;XREF[1,0]:   065b1d29
ram:065b1d0f    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1d12    3bc1            CMP         EAX,param_1
ram:065b1d14    7317            JNC         LAB_065b1d2d
ram:065b1d16    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b1d19    40              INC         EAX
ram:065b1d1a    89560c          MOV         dword ptr [ESI + 0xc],EDX
ram:065b1d1d    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1d20    8bc2            MOV         EAX,EDX
ram:065b1d22    83f80a          CMP         EAX,0xa
ram:065b1d25    7409            JZ          LAB_065b1d30
ram:065b1d27    3bc3            CMP         EAX,EBX
ram:065b1d29    75e4            JNZ         LAB_065b1d0f
ram:065b1d2b    eb03            JMP         LAB_065b1d30
                            LAB_065b1d2d:                 ;XREF[1,0]:   065b1d14
ram:065b1d2d    895e0c          MOV         dword ptr [ESI + 0xc],EBX
                            LAB_065b1d30:                 ;XREF[2,0]:   065b1d25,065b1d2b
ram:065b1d30    89be10040000    MOV         dword ptr [ESI + 0x410],EDI
                            LAB_065b1d36:                 ;XREF[2,0]:   065b1cf9,065b1d05
ram:065b1d36    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b1d39    40              INC         EAX
ram:065b1d3a    83f85e          CMP         EAX,0x5e
ram:065b1d3d    769a            JBE         LAB_065b1cd9
                            caseD_1:                      ;XREF[3,0]:   065b1cd7,065b1ce1,065b1f04
                            caseD_2:
                            caseD_3:
                            caseD_4:
                            caseD_5:
                            caseD_6:
                            caseD_7:
                            caseD_8:
                            caseD_b:
                            caseD_c:
                            caseD_e:
                            caseD_f:
                            caseD_10:
                            caseD_11:
                            caseD_12:
                            caseD_13:
                            caseD_14:
                            caseD_15:
                            caseD_16:
                            caseD_17:
                            caseD_18:
                            caseD_19:
                            caseD_1a:
                            caseD_1b:
                            caseD_1c:
                            caseD_1d:
                            caseD_1e:
                            caseD_1f:
                            caseD_21:
                            caseD_22:
                            caseD_23:
                            caseD_24:
                            caseD_25:
                            caseD_26:
                            caseD_27:
                            caseD_28:
                            caseD_29:
                            caseD_2a:
                            caseD_2b:
                            caseD_2c:
                            caseD_2d:
                            caseD_2e:
                            caseD_2f:
                            caseD_30:
                            caseD_31:
                            caseD_32:
                            caseD_33:
                            caseD_34:
                            caseD_35:
                            caseD_36:
                            caseD_37:
                            caseD_38:
                            caseD_39:
                            caseD_3a:
                            caseD_3c:
                            caseD_3e:
                            caseD_3f:
                            caseD_40:
                            caseD_41:
                            caseD_42:
                            caseD_43:
                            caseD_44:
                            caseD_45:
                            caseD_46:
                            caseD_47:
                            caseD_48:
                            caseD_49:
                            caseD_4a:
                            caseD_4b:
                            caseD_4c:
                            caseD_4d:
                            caseD_4e:
                            caseD_4f:
                            caseD_50:
                            caseD_51:
                            caseD_52:
                            caseD_53:
                            caseD_54:
                            caseD_55:
                            caseD_56:
                            caseD_57:
                            caseD_58:
                            caseD_59:
                            caseD_5a:
                            caseD_5c:
                            caseD_0:
ram:065b1d3f    8b3d5c705b06    MOV         EDI,dword ptr [DAT_065b705c]
                            LAB_065b1d45:                 ;XREF[1,0]:   065b1ebd
ram:065b1d45    8b8610040000    MOV         EAX,dword ptr [ESI + 0x410]
ram:065b1d4b    8a4e0c          MOV         param_1,byte ptr [ESI + 0xc]
ram:065b1d4e    884c0610        MOV         byte ptr [ESI + EAX*0x1 + 0x10],param_1
ram:065b1d52    8b9610040000    MOV         EDX,dword ptr [ESI + 0x410]
ram:065b1d58    8b0e            MOV         param_1,dword ptr [ESI]
ram:065b1d5a    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1d5d    42              INC         EDX
ram:065b1d5e    899610040000    MOV         dword ptr [ESI + 0x410],EDX
ram:065b1d64    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b1d67    03d1            ADD         EDX,param_1
ram:065b1d69    3bc2            CMP         EAX,EDX
ram:065b1d6b    0f822d010000    JC          LAB_065b1e9e
ram:065b1d71    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1d74    e92f010000      JMP         LAB_065b1ea8
                            caseD_ffffffff:               ;XREF[2,0]:   065b1ce1,065b1ee8
ram:065b1d79    5f              POP         EDI
ram:065b1d7a    5e              POP         ESI
ram:065b1d7b    b866000000      MOV         EAX,0x66
ram:065b1d80    5b              POP         EBX
ram:065b1d81    c3              RET
                            caseD_a:                      ;XREF[2,0]:   065b1ce1,065b1ef0
ram:065b1d82    8a460c          MOV         AL,byte ptr [ESI + 0xc]
ram:065b1d85    8bce            MOV         param_1,ESI
ram:065b1d87    884610          MOV         byte ptr [ESI + 0x10],AL
ram:065b1d8a    8b8610040000    MOV         EAX,dword ptr [ESI + 0x410]
ram:065b1d90    40              INC         EAX
ram:065b1d91    898610040000    MOV         dword ptr [ESI + 0x410],EAX
ram:065b1d97    e8f4feffff      CALL        FUN_065b1c90                            ;undefined FUN_065b1c90(int param_1)
ram:065b1d9c    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1d9f    8b3e            MOV         EDI,dword ptr [ESI]
ram:065b1da1    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1da4    03cf            ADD         param_1,EDI
ram:065b1da6    3bc1            CMP         EAX,param_1
ram:065b1da8    720c            JC          LAB_065b1db6
ram:065b1daa    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1dad    5f              POP         EDI
ram:065b1dae    5e              POP         ESI
ram:065b1daf    b865000000      MOV         EAX,0x65
ram:065b1db4    5b              POP         EBX
ram:065b1db5    c3              RET
                            LAB_065b1db6:                 ;XREF[1,0]:   065b1da8
ram:065b1db6    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b1db9    40              INC         EAX
ram:065b1dba    89560c          MOV         dword ptr [ESI + 0xc],EDX
ram:065b1dbd    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1dc0    5f              POP         EDI
ram:065b1dc1    5e              POP         ESI
ram:065b1dc2    b865000000      MOV         EAX,0x65
ram:065b1dc7    5b              POP         EBX
ram:065b1dc8    c3              RET
                            caseD_5b:                     ;XREF[2,0]:   065b1ce1,065b1efc
ram:065b1dc9    8a460c          MOV         AL,byte ptr [ESI + 0xc]
ram:065b1dcc    8bce            MOV         param_1,ESI
ram:065b1dce    884610          MOV         byte ptr [ESI + 0x10],AL
ram:065b1dd1    8b8610040000    MOV         EAX,dword ptr [ESI + 0x410]
ram:065b1dd7    40              INC         EAX
ram:065b1dd8    898610040000    MOV         dword ptr [ESI + 0x410],EAX
ram:065b1dde    e8adfeffff      CALL        FUN_065b1c90                            ;undefined FUN_065b1c90(int param_1)
ram:065b1de3    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1de6    8b3e            MOV         EDI,dword ptr [ESI]
ram:065b1de8    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1deb    03cf            ADD         param_1,EDI
ram:065b1ded    3bc1            CMP         EAX,param_1
ram:065b1def    720c            JC          LAB_065b1dfd
ram:065b1df1    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1df4    5f              POP         EDI
ram:065b1df5    5e              POP         ESI
ram:065b1df6    b802000000      MOV         EAX,0x2
ram:065b1dfb    5b              POP         EBX
ram:065b1dfc    c3              RET
                            LAB_065b1dfd:                 ;XREF[1,0]:   065b1def
ram:065b1dfd    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b1e00    40              INC         EAX
ram:065b1e01    89560c          MOV         dword ptr [ESI + 0xc],EDX
ram:065b1e04    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1e07    5f              POP         EDI
ram:065b1e08    5e              POP         ESI
ram:065b1e09    b802000000      MOV         EAX,0x2
ram:065b1e0e    5b              POP         EBX
ram:065b1e0f    c3              RET
                            caseD_5d:                     ;XREF[2,0]:   065b1ce1,065b1f00
ram:065b1e10    8a460c          MOV         AL,byte ptr [ESI + 0xc]
ram:065b1e13    8bce            MOV         param_1,ESI
ram:065b1e15    884610          MOV         byte ptr [ESI + 0x10],AL
ram:065b1e18    8b8610040000    MOV         EAX,dword ptr [ESI + 0x410]
ram:065b1e1e    40              INC         EAX
ram:065b1e1f    898610040000    MOV         dword ptr [ESI + 0x410],EAX
ram:065b1e25    e866feffff      CALL        FUN_065b1c90                            ;undefined FUN_065b1c90(int param_1)
ram:065b1e2a    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1e2d    8b3e            MOV         EDI,dword ptr [ESI]
ram:065b1e2f    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1e32    03cf            ADD         param_1,EDI
ram:065b1e34    3bc1            CMP         EAX,param_1
ram:065b1e36    720c            JC          LAB_065b1e44
ram:065b1e38    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1e3b    5f              POP         EDI
ram:065b1e3c    5e              POP         ESI
ram:065b1e3d    b803000000      MOV         EAX,0x3
ram:065b1e42    5b              POP         EBX
ram:065b1e43    c3              RET
                            LAB_065b1e44:                 ;XREF[1,0]:   065b1e36
ram:065b1e44    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b1e47    40              INC         EAX
ram:065b1e48    89560c          MOV         dword ptr [ESI + 0xc],EDX
ram:065b1e4b    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1e4e    5f              POP         EDI
ram:065b1e4f    5e              POP         ESI
ram:065b1e50    b803000000      MOV         EAX,0x3
ram:065b1e55    5b              POP         EBX
ram:065b1e56    c3              RET
                            caseD_3d:                     ;XREF[2,0]:   065b1ce1,065b1ef8
ram:065b1e57    8a460c          MOV         AL,byte ptr [ESI + 0xc]
ram:065b1e5a    8bce            MOV         param_1,ESI
ram:065b1e5c    884610          MOV         byte ptr [ESI + 0x10],AL
ram:065b1e5f    8b8610040000    MOV         EAX,dword ptr [ESI + 0x410]
ram:065b1e65    40              INC         EAX
ram:065b1e66    898610040000    MOV         dword ptr [ESI + 0x410],EAX
ram:065b1e6c    e81ffeffff      CALL        FUN_065b1c90                            ;undefined FUN_065b1c90(int param_1)
ram:065b1e71    8b4e04          MOV         param_1,dword ptr [ESI + 0x4]
ram:065b1e74    8b3e            MOV         EDI,dword ptr [ESI]
ram:065b1e76    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b1e79    03cf            ADD         param_1,EDI
ram:065b1e7b    3bc1            CMP         EAX,param_1
ram:065b1e7d    720c            JC          LAB_065b1e8b
ram:065b1e7f    895e0c          MOV         dword ptr [ESI + 0xc],EBX
ram:065b1e82    5f              POP         EDI
ram:065b1e83    5e              POP         ESI
ram:065b1e84    b804000000      MOV         EAX,0x4
ram:065b1e89    5b              POP         EBX
ram:065b1e8a    c3              RET
                            LAB_065b1e8b:                 ;XREF[1,0]:   065b1e7d
ram:065b1e8b    0fbe10          MOVSX       EDX,byte ptr [EAX]
ram:065b1e8e    40              INC         EAX
ram:065b1e8f    89560c          MOV         dword ptr [ESI + 0xc],EDX
ram:065b1e92    894608          MOV         dword ptr [ESI + 0x8],EAX
ram:065b1e95    5f              POP         EDI
ram:065b1e96    5e              POP         ESI
ram:065b1e97    b804000000      MOV         EAX,0x4
ram:065b1e9c    5b              POP         EBX
ram:065b1e9d    c3              RET
                            LAB_065b1e9e:                 ;XREF[1,0]:   065b1d6b
ram:065b1e9e    0fbe08          MOVSX       param_1,byte ptr [EAX]
ram:065b1ea1    40              INC         EAX
ram:065b1ea2    894e0c          MOV         dword ptr [ESI + 0xc],param_1
ram:065b1ea5    894608          MOV         dword ptr [ESI + 0x8],EAX
                            LAB_065b1ea8:                 ;XREF[1,0]:   065b1d74
ram:065b1ea8    8b560c          MOV         EDX,dword ptr [ESI + 0xc]
ram:065b1eab    52              PUSH        EDX
ram:065b1eac    6848805b06      PUSH        0x65b8048
ram:065b1eb1    ffd7            CALL        EDI
ram:065b1eb3    83c408          ADD         ESP,0x8
ram:065b1eb6    85c0            TEST        EAX,EAX
ram:065b1eb8    7509            JNZ         LAB_065b1ec3
ram:065b1eba    395e0c          CMP         dword ptr [ESI + 0xc],EBX
ram:065b1ebd    0f8582feffff    JNZ         LAB_065b1d45
                            LAB_065b1ec3:                 ;XREF[1,0]:   065b1eb8
ram:065b1ec3    8bce            MOV         param_1,ESI
ram:065b1ec5    e8c6fdffff      CALL        FUN_065b1c90                            ;undefined FUN_065b1c90(int param_1)
ram:065b1eca    83c610          ADD         ESI,0x10
ram:065b1ecd    683c805b06      PUSH        0x65b803c
ram:065b1ed2    56              PUSH        ESI
ram:065b1ed3    ff1530705b06    CALL        dword ptr [DAT_065b7030]
ram:065b1ed9    83c408          ADD         ESP,0x8
ram:065b1edc    f7d8            NEG         EAX
ram:065b1ede    1bc0            SBB         EAX,EAX
ram:065b1ee0    5f              POP         EDI
ram:065b1ee1    5e              POP         ESI
ram:065b1ee2    40              INC         EAX
ram:065b1ee3    5b              POP         EBX
ram:065b1ee4    c3              RET
ram:065b1ee5    8d              ??          8Dh
ram:065b1ee6    49              ??          49h    I
ram:065b1ee7    00              ??          00h
                            switchdataD_065b1ee8:         ;XREF[1,0]:   065b1ce1
ram:065b1ee8    791d5b06        addr        switchD_065b1ce1::caseD_ffffffff
ram:065b1eec    e81c5b06        addr        switchD_065b1ce1::caseD_9
ram:065b1ef0    821d5b06        addr        switchD_065b1ce1::caseD_a
ram:065b1ef4    071d5b06        addr        switchD_065b1ce1::caseD_3b
ram:065b1ef8    571e5b06        addr        switchD_065b1ce1::caseD_3d
ram:065b1efc    c91d5b06        addr        switchD_065b1ce1::caseD_5b
ram:065b1f00    101e5b06        addr        switchD_065b1ce1::caseD_5d
ram:065b1f04    3f1d5b06        addr        switchD_065b1ce1::caseD_0
                            switchdataD_065b1f08:
ram:065b1f08    00              db          0h
                            BYTE_065b1f09:                ;XREF[1,0]:   065b1cdb
ram:065b1f09    07              db          7h
ram:065b1f0a    07              db          7h
ram:065b1f0b    07              db          7h
ram:065b1f0c    07              db          7h
ram:065b1f0d    07              db          7h
ram:065b1f0e    07              db          7h
ram:065b1f0f    07              db          7h
ram:065b1f10    07              db          7h
ram:065b1f11    07              db          7h
ram:065b1f12    01              db          1h
ram:065b1f13    02              db          2h
ram:065b1f14    07              db          7h
ram:065b1f15    07              db          7h
ram:065b1f16    01              db          1h
ram:065b1f17    07              db          7h
ram:065b1f18    07              db          7h
ram:065b1f19    07              db          7h
ram:065b1f1a    07              db          7h
ram:065b1f1b    07              db          7h
ram:065b1f1c    07              db          7h
ram:065b1f1d    07              db          7h
ram:065b1f1e    07              db          7h
ram:065b1f1f    07              db          7h
ram:065b1f20    07              db          7h
ram:065b1f21    07              db          7h
ram:065b1f22    07              db          7h
ram:065b1f23    07              db          7h
ram:065b1f24    07              db          7h
ram:065b1f25    07              db          7h
ram:065b1f26    07              db          7h
ram:065b1f27    07              db          7h
ram:065b1f28    07              db          7h
ram:065b1f29    01              db          1h
ram:065b1f2a    07              db          7h
ram:065b1f2b    07              db          7h
ram:065b1f2c    07              db          7h
ram:065b1f2d    07              db          7h
ram:065b1f2e    07              db          7h
ram:065b1f2f    07              db          7h
ram:065b1f30    07              db          7h
ram:065b1f31    07              db          7h
ram:065b1f32    07              db          7h
ram:065b1f33    07              db          7h
ram:065b1f34    07              db          7h
ram:065b1f35    07              db          7h
ram:065b1f36    07              db          7h
ram:065b1f37    07              db          7h
ram:065b1f38    07              db          7h
ram:065b1f39    07              db          7h
ram:065b1f3a    07              db          7h
ram:065b1f3b    07              db          7h
ram:065b1f3c    07              db          7h
ram:065b1f3d    07              db          7h
ram:065b1f3e    07              db          7h
ram:065b1f3f    07              db          7h
ram:065b1f40    07              db          7h
ram:065b1f41    07              db          7h
ram:065b1f42    07              db          7h
ram:065b1f43    07              db          7h
ram:065b1f44    03              db          3h
ram:065b1f45    07              db          7h
ram:065b1f46    04              db          4h
ram:065b1f47    07              db          7h
ram:065b1f48    07              db          7h
ram:065b1f49    07              db          7h
ram:065b1f4a    07              db          7h
ram:065b1f4b    07              db          7h
ram:065b1f4c    07              db          7h
ram:065b1f4d    07              db          7h
ram:065b1f4e    07              db          7h
ram:065b1f4f    07              db          7h
ram:065b1f50    07              db          7h
ram:065b1f51    07              db          7h
ram:065b1f52    07              db          7h
ram:065b1f53    07              db          7h
ram:065b1f54    07              db          7h
ram:065b1f55    07              db          7h
ram:065b1f56    07              db          7h
ram:065b1f57    07              db          7h
ram:065b1f58    07              db          7h
ram:065b1f59    07              db          7h
ram:065b1f5a    07              db          7h
ram:065b1f5b    07              db          7h
ram:065b1f5c    07              db          7h
ram:065b1f5d    07              db          7h
ram:065b1f5e    07              db          7h
ram:065b1f5f    07              db          7h
ram:065b1f60    07              db          7h
ram:065b1f61    07              db          7h
ram:065b1f62    07              db          7h
ram:065b1f63    07              db          7h
ram:065b1f64    05              db          5h
ram:065b1f65    07              db          7h
ram:065b1f66    06              db          6h
ram:065b1f67    90              ??          90h
ram:065b1f68    90              ??          90h
ram:065b1f69    90              ??          90h
ram:065b1f6a    90              ??          90h
ram:065b1f6b    90              ??          90h
ram:065b1f6c    90              ??          90h
ram:065b1f6d    90              ??          90h
ram:065b1f6e    90              ??          90h
ram:065b1f6f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b1f70(int * param_1)
          ;param_1       int *              ECX
                                                          ;XREF[5,0]:   065b165e,065b16b8,065b17e9,065b1817
                                                          ;             065b1a7d
ram:065b1f70    56              PUSH        ESI
ram:065b1f71    8bf1            MOV         ESI,param_1
ram:065b1f73    e848fdffff      CALL        FUN_065b1cc0                            ;bool FUN_065b1cc0(int * param_1)
ram:065b1f78    898614040000    MOV         dword ptr [ESI + 0x414],EAX
ram:065b1f7e    5e              POP         ESI
ram:065b1f7f    c3              RET
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 * FUN_065b1f80(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
          ;local_15      undefined1         -15                      ;XREF[2,0]:   065b1f83,065b1f8c
                            ;TEST COMMENT
                                                          ;XREF[1,0]:   065b31eb
ram:065b1f80    83ec18          SUB         ESP,0x18                                ;TEST COMMENT
ram:065b1f83    8a442403        MOV         AL,byte ptr [ESP + local_15+0x18]
ram:065b1f87    53              PUSH        EBX
ram:065b1f88    55              PUSH        EBP
ram:065b1f89    56              PUSH        ESI
ram:065b1f8a    8bf1            MOV         ESI,param_1
ram:065b1f8c    8a4c240f        MOV         param_1,byte ptr [ESP + local_15+0x24]
ram:065b1f90    57              PUSH        EDI
ram:065b1f91    33db            XOR         EBX,EBX
ram:065b1f93    8d7e08          LEA         EDI,[ESI + 0x8]
ram:065b1f96    6a20            PUSH        0x20
ram:065b1f98    8807            MOV         byte ptr [EDI],AL
ram:065b1f9a    884f01          MOV         byte ptr [EDI + 0x1],param_1
ram:065b1f9d    885f0c          MOV         byte ptr [EDI + 0xc],BL
ram:065b1fa0    e8293f0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b1fa5    b101            MOV         param_1,0x1
ram:065b1fa7    895804          MOV         dword ptr [EAX + 0x4],EBX
ram:065b1faa    88481c          MOV         byte ptr [EAX + 0x1c],param_1
ram:065b1fad    88581d          MOV         byte ptr [EAX + 0x1d],BL
ram:065b1fb0    894708          MOV         dword ptr [EDI + 0x8],EAX
ram:065b1fb3    88481d          MOV         byte ptr [EAX + 0x1d],param_1
ram:065b1fb6    8b5708          MOV         EDX,dword ptr [EDI + 0x8]
ram:065b1fb9    83c404          ADD         ESP,0x4
ram:065b1fbc    891a            MOV         dword ptr [EDX],EBX
ram:065b1fbe    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b1fc1    53              PUSH        EBX
ram:065b1fc2    895808          MOV         dword ptr [EAX + 0x8],EBX
ram:065b1fc5    8b4f08          MOV         param_1,dword ptr [EDI + 0x8]
ram:065b1fc8    51              PUSH        param_1
ram:065b1fc9    8bcf            MOV         param_1,EDI
ram:065b1fcb    e810210000      CALL        FUN_065b40e0                            ;undefined FUN_065b40e0(undefined4 pa...
ram:065b1fd0    8a542413        MOV         DL,byte ptr [ESP + 0x13]
ram:065b1fd4    894704          MOV         dword ptr [EDI + 0x4],EAX
ram:065b1fd7    8900            MOV         dword ptr [EAX],EAX
ram:065b1fd9    8b4704          MOV         EAX,dword ptr [EDI + 0x4]
ram:065b1fdc    6a10            PUSH        0x10
ram:065b1fde    894008          MOV         dword ptr [EAX + 0x8],EAX
ram:065b1fe1    895f10          MOV         dword ptr [EDI + 0x10],EBX
ram:065b1fe4    88561c          MOV         byte ptr [ESI + 0x1c],DL
ram:065b1fe7    e8e23e0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b1fec    8d6e2c          LEA         EBP,[ESI + 0x2c]
ram:065b1fef    8900            MOV         dword ptr [EAX],EAX
ram:065b1ff1    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b1ff4    83c404          ADD         ESP,0x4
ram:065b1ff7    894620          MOV         dword ptr [ESI + 0x20],EAX
ram:065b1ffa    895e24          MOV         dword ptr [ESI + 0x24],EBX
ram:065b1ffd    c706cc705b06    MOV         dword ptr [ESI],0x65b70cc
ram:065b2003    885e04          MOV         byte ptr [ESI + 0x4],BL
ram:065b2006    895d00          MOV         dword ptr [EBP],EBX
ram:065b2009    895e28          MOV         dword ptr [ESI + 0x28],EBX
ram:065b200c    885e30          MOV         byte ptr [ESI + 0x30],BL
ram:065b200f    899e34010000    MOV         dword ptr [ESI + 0x134],EBX
ram:065b2015    e8b6260000      CALL        FUN_065b46d0                            ;undefined4 * FUN_065b46d0(void)
ram:065b201a    8bf8            MOV         EDI,EAX
ram:065b201c    6800000080      PUSH        0x80000000
ram:065b2021    6874805b06      PUSH        0x65b8074
ram:065b2026    57              PUSH        EDI
ram:065b2027    56              PUSH        ESI
ram:065b2028    e8b3010000      CALL        FUN_065b21e0                            ;undefined4 FUN_065b21e0(int param_1,...
ram:065b202d    8b07            MOV         EAX,dword ptr [EDI]
ram:065b202f    57              PUSH        EDI
ram:065b2030    ff5008          CALL        dword ptr [EAX + 0x8]
ram:065b2033    e868260000      CALL        FUN_065b46a0                            ;undefined4 * FUN_065b46a0(void)
ram:065b2038    8bf8            MOV         EDI,EAX
ram:065b203a    6800000080      PUSH        0x80000000
ram:065b203f    6864805b06      PUSH        0x65b8064
ram:065b2044    57              PUSH        EDI
ram:065b2045    56              PUSH        ESI
ram:065b2046    e895010000      CALL        FUN_065b21e0                            ;undefined4 FUN_065b21e0(int param_1,...
ram:065b204b    8d4628          LEA         EAX,[ESI + 0x28]
ram:065b204e    8d542414        LEA         EDX,[ESP + 0x14]
ram:065b2052    c74424186...    MOV         dword ptr [ESP + 0x18],0x65b8064
ram:065b205a    895c2424        MOV         dword ptr [ESP + 0x24],EBX
ram:065b205e    c74424141...    MOV         dword ptr [ESP + 0x14],0x14
ram:065b2066    896c2420        MOV         dword ptr [ESP + 0x20],EBP
ram:065b206a    8974241c        MOV         dword ptr [ESP + 0x1c],ESI
ram:065b206e    8b0f            MOV         param_1,dword ptr [EDI]
ram:065b2070    50              PUSH        EAX
ram:065b2071    52              PUSH        EDX
ram:065b2072    57              PUSH        EDI
ram:065b2073    ff510c          CALL        dword ptr [param_1 + 0xc]
ram:065b2076    8b07            MOV         EAX,dword ptr [EDI]
ram:065b2078    57              PUSH        EDI
ram:065b2079    ff5008          CALL        dword ptr [EAX + 0x8]
ram:065b207c    8bc6            MOV         EAX,ESI
ram:065b207e    5f              POP         EDI
ram:065b207f    5e              POP         ESI
ram:065b2080    5d              POP         EBP
ram:065b2081    5b              POP         EBX
ram:065b2082    83c418          ADD         ESP,0x18
ram:065b2085    c3              RET
ram:065b2086    90              ??          90h
ram:065b2087    90              ??          90h
ram:065b2088    90              ??          90h
ram:065b2089    90              ??          90h
ram:065b208a    90              ??          90h
ram:065b208b    90              ??          90h
ram:065b208c    90              ??          90h
ram:065b208d    90              ??          90h
ram:065b208e    90              ??          90h
ram:065b208f    90              ??          90h
ram:065b2090    8b              ??          8Bh
ram:065b2091    54              ??          54h    T
ram:065b2092    24              ??          24h    $
ram:065b2093    08              ??          08h
ram:065b2094    53              ??          53h    S
ram:065b2095    8b              ??          8Bh
ram:065b2096    5c              ??          5Ch    \
ram:065b2097    24              ??          24h    $
ram:065b2098    10              ??          10h
ram:065b2099    56              ??          56h    V
ram:065b209a    57              ??          57h    W
ram:065b209b    bf              ??          BFh
ram:065b209c    84              ??          84h
ram:065b209d    80              ??          80h
ram:065b209e    5b              ??          5Bh    [
ram:065b209f    06              ??          06h
ram:065b20a0    8b              ??          8Bh
ram:065b20a1    f2              ??          F2h
ram:065b20a2    b9              ??          B9h
ram:065b20a3    10              ??          10h
ram:065b20a4    00              ??          00h
ram:065b20a5    00              ??          00h
ram:065b20a6    00              ??          00h
ram:065b20a7    33              ??          33h    3
ram:065b20a8    c0              ??          C0h
ram:065b20a9    c7              ??          C7h
ram:065b20aa    03              ??          03h
ram:065b20ab    00              ??          00h
ram:065b20ac    00              ??          00h
ram:065b20ad    00              ??          00h
ram:065b20ae    00              ??          00h
ram:065b20af    f3              ??          F3h
ram:065b20b0    a6              ??          A6h
ram:065b20b1    75              ??          75h    u
ram:065b20b2    14              ??          14h
ram:065b20b3    8b              ??          8Bh
ram:065b20b4    74              ??          74h    t
ram:065b20b5    24              ??          24h    $
ram:065b20b6    10              ??          10h
ram:065b20b7    56              ??          56h    V
ram:065b20b8    8b              ??          8Bh
ram:065b20b9    0e              ??          0Eh
ram:065b20ba    ff              ??          FFh
ram:065b20bb    51              ??          51h    Q
ram:065b20bc    04              ??          04h
ram:065b20bd    89              ??          89h
ram:065b20be    33              ??          33h    3
ram:065b20bf    5f              ??          5Fh    _
ram:065b20c0    5e              ??          5Eh    ^
ram:065b20c1    33              ??          33h    3
ram:065b20c2    c0              ??          C0h
ram:065b20c3    5b              ??          5Bh    [
ram:065b20c4    c2              ??          C2h
ram:065b20c5    0c              ??          0Ch
ram:065b20c6    00              ??          00h
ram:065b20c7    8b              ??          8Bh
ram:065b20c8    44              ??          44h    D
ram:065b20c9    24              ??          24h    $
ram:065b20ca    10              ??          10h
ram:065b20cb    8b              ??          8Bh
ram:065b20cc    40              ??          40h    @
ram:065b20cd    2c              ??          2Ch    ,
ram:065b20ce    85              ??          85h
ram:065b20cf    c0              ??          C0h
ram:065b20d0    74              ??          74h    t
ram:065b20d1    0d              ??          0Dh
ram:065b20d2    8b              ??          8Bh
ram:065b20d3    08              ??          08h
ram:065b20d4    53              ??          53h    S
ram:065b20d5    52              ??          52h    R
ram:065b20d6    50              ??          50h    P
ram:065b20d7    ff              ??          FFh
ram:065b20d8    11              ??          11h
ram:065b20d9    5f              ??          5Fh    _
ram:065b20da    5e              ??          5Eh    ^
ram:065b20db    5b              ??          5Bh    [
ram:065b20dc    c2              ??          C2h
ram:065b20dd    0c              ??          0Ch
ram:065b20de    00              ??          00h
ram:065b20df    5f              ??          5Fh    _
ram:065b20e0    5e              ??          5Eh    ^
ram:065b20e1    b8              ??          B8h
ram:065b20e2    fd              ??          FDh
ram:065b20e3    ff              ??          FFh
ram:065b20e4    ff              ??          FFh
ram:065b20e5    ff              ??          FFh
ram:065b20e6    5b              ??          5Bh    [
ram:065b20e7    c2              ??          C2h
ram:065b20e8    0c              ??          0Ch
ram:065b20e9    00              ??          00h
ram:065b20ea    90              ??          90h
ram:065b20eb    90              ??          90h
ram:065b20ec    90              ??          90h
ram:065b20ed    90              ??          90h
ram:065b20ee    90              ??          90h
ram:065b20ef    90              ??          90h
ram:065b20f0    b8              ??          B8h
ram:065b20f1    01              ??          01h
ram:065b20f2    00              ??          00h
ram:065b20f3    00              ??          00h
ram:065b20f4    00              ??          00h
ram:065b20f5    c2              ??          C2h
ram:065b20f6    04              ??          04h
ram:065b20f7    00              ??          00h
ram:065b20f8    90              ??          90h
ram:065b20f9    90              ??          90h
ram:065b20fa    90              ??          90h
ram:065b20fb    90              ??          90h
ram:065b20fc    90              ??          90h
ram:065b20fd    90              ??          90h
ram:065b20fe    90              ??          90h
ram:065b20ff    90              ??          90h
ram:065b2100    53              ??          53h    S
ram:065b2101    8b              ??          8Bh
ram:065b2102    5c              ??          5Ch    \
ram:065b2103    24              ??          24h    $
ram:065b2104    10              ??          10h
ram:065b2105    55              ??          55h    U
ram:065b2106    8b              ??          8Bh
ram:065b2107    6c              ??          6Ch    l
ram:065b2108    24              ??          24h    $
ram:065b2109    10              ??          10h
ram:065b210a    56              ??          56h    V
ram:065b210b    57              ??          57h    W
ram:065b210c    85              ??          85h
ram:065b210d    ed              ??          EDh
ram:065b210e    c7              ??          C7h
ram:065b210f    03              ??          03h
ram:065b2110    00              ??          00h
ram:065b2111    00              ??          00h
ram:065b2112    00              ??          00h
ram:065b2113    00              ??          00h
ram:065b2114    0f              ??          0Fh
ram:065b2115    84              ??          84h
ram:065b2116    9d              ??          9Dh
ram:065b2117    00              ??          00h
ram:065b2118    00              ??          00h
ram:065b2119    00              ??          00h
ram:065b211a    8b              ??          8Bh
ram:065b211b    7d              ??          7Dh    }
ram:065b211c    04              ??          04h
ram:065b211d    85              ??          85h
ram:065b211e    ff              ??          FFh
ram:065b211f    0f              ??          0Fh
ram:065b2120    84              ??          84h
ram:065b2121    92              ??          92h
ram:065b2122    00              ??          00h
ram:065b2123    00              ??          00h
ram:065b2124    00              ??          00h
ram:065b2125    8b              ??          8Bh
ram:065b2126    35              ??          35h    5
ram:065b2127    54              ??          54h    T
ram:065b2128    80              ??          80h
ram:065b2129    5b              ??          5Bh    [
ram:065b212a    06              ??          06h
ram:065b212b    8b              ??          8Bh
ram:065b212c    c7              ??          C7h
ram:065b212d    8a              ??          8Ah
ram:065b212e    10              ??          10h
ram:065b212f    8a              ??          8Ah
ram:065b2130    ca              ??          CAh
ram:065b2131    3a              ??          3Ah    :
ram:065b2132    16              ??          16h
ram:065b2133    75              ??          75h    u
ram:065b2134    1c              ??          1Ch
ram:065b2135    84              ??          84h
ram:065b2136    c9              ??          C9h
ram:065b2137    74              ??          74h    t
ram:065b2138    14              ??          14h
ram:065b2139    8a              ??          8Ah
ram:065b213a    50              ??          50h    P
ram:065b213b    01              ??          01h
ram:065b213c    8a              ??          8Ah
ram:065b213d    ca              ??          CAh
ram:065b213e    3a              ??          3Ah    :
ram:065b213f    56              ??          56h    V
ram:065b2140    01              ??          01h
ram:065b2141    75              ??          75h    u
ram:065b2142    0e              ??          0Eh
ram:065b2143    83              ??          83h
ram:065b2144    c0              ??          C0h
ram:065b2145    02              ??          02h
ram:065b2146    83              ??          83h
ram:065b2147    c6              ??          C6h
ram:065b2148    02              ??          02h
ram:065b2149    84              ??          84h
ram:065b214a    c9              ??          C9h
ram:065b214b    75              ??          75h    u
ram:065b214c    e0              ??          E0h
ram:065b214d    33              ??          33h    3
ram:065b214e    c0              ??          C0h
ram:065b214f    eb              ??          EBh
ram:065b2150    05              ??          05h
ram:065b2151    1b              ??          1Bh
ram:065b2152    c0              ??          C0h
ram:065b2153    83              ??          83h
ram:065b2154    d8              ??          D8h
ram:065b2155    ff              ??          FFh
ram:065b2156    85              ??          85h
ram:065b2157    c0              ??          C0h
ram:065b2158    74              ??          74h    t
ram:065b2159    5d              ??          5Dh    ]
ram:065b215a    57              ??          57h    W
ram:065b215b    e8              ??          E8h
ram:065b215c    20              ??          20h
ram:065b215d    22              ??          22h    "
ram:065b215e    00              ??          00h
ram:065b215f    00              ??          00h
ram:065b2160    8b              ??          8Bh
ram:065b2161    74              ??          74h    t
ram:065b2162    24              ??          24h    $
ram:065b2163    18              ??          18h
ram:065b2164    83              ??          83h
ram:065b2165    c4              ??          C4h
ram:065b2166    04              ??          04h
ram:065b2167    89              ??          89h
ram:065b2168    44              ??          44h    D
ram:065b2169    24              ??          24h    $
ram:065b216a    1c              ??          1Ch
ram:065b216b    8d              ??          8Dh
ram:065b216c    44              ??          44h    D
ram:065b216d    24              ??          24h    $
ram:065b216e    1c              ??          1Ch
ram:065b216f    8d              ??          8Dh
ram:065b2170    4c              ??          4Ch    L
ram:065b2171    24              ??          24h    $
ram:065b2172    18              ??          18h
ram:065b2173    50              ??          50h    P
ram:065b2174    51              ??          51h    Q
ram:065b2175    8d              ??          8Dh
ram:065b2176    4e              ??          4Eh    N
ram:065b2177    08              ??          08h
ram:065b2178    e8              ??          E8h
ram:065b2179    33              ??          33h    3
ram:065b217a    19              ??          19h
ram:065b217b    00              ??          00h
ram:065b217c    00              ??          00h
ram:065b217d    8b              ??          8Bh
ram:065b217e    4e              ??          4Eh    N
ram:065b217f    0c              ??          0Ch
ram:065b2180    8b              ??          8Bh
ram:065b2181    44              ??          44h    D
ram:065b2182    24              ??          24h    $
ram:065b2183    18              ??          18h
ram:065b2184    3b              ??          3Bh    ;
ram:065b2185    c1              ??          C1h
ram:065b2186    74              ??          74h    t
ram:065b2187    44              ??          44h    D
ram:065b2188    8d              ??          8Dh
ram:065b2189    78              ??          78h    x
ram:065b218a    10              ??          10h
ram:065b218b    85              ??          85h
ram:065b218c    ff              ??          FFh
ram:065b218d    74              ??          74h    t
ram:065b218e    3d              ??          3Dh    =
ram:065b218f    8b              ??          8Bh
ram:065b2190    47              ??          47h    G
ram:065b2191    04              ??          04h
ram:065b2192    8b              ??          8Bh
ram:065b2193    30              ??          30h    0
ram:065b2194    3b              ??          3Bh    ;
ram:065b2195    f0              ??          F0h
ram:065b2196    74              ??          74h    t
ram:065b2197    34              ??          34h    4
ram:065b2198    8b              ??          8Bh
ram:065b2199    46              ??          46h    F
ram:065b219a    08              ??          08h
ram:065b219b    53              ??          53h    S
ram:065b219c    55              ??          55h    U
ram:065b219d    50              ??          50h    P
ram:065b219e    8b              ??          8Bh
ram:065b219f    10              ??          10h
ram:065b21a0    ff              ??          FFh
ram:065b21a1    52              ??          52h    R
ram:065b21a2    0c              ??          0Ch
ram:065b21a3    85              ??          85h
ram:065b21a4    c0              ??          C0h
ram:065b21a5    74              ??          74h    t
ram:065b21a6    2a              ??          2Ah    *
ram:065b21a7    8b              ??          8Bh
ram:065b21a8    36              ??          36h    6
ram:065b21a9    8b              ??          8Bh
ram:065b21aa    4f              ??          4Fh    O
ram:065b21ab    04              ??          04h
ram:065b21ac    3b              ??          3Bh    ;
ram:065b21ad    f1              ??          F1h
ram:065b21ae    75              ??          75h    u
ram:065b21af    e8              ??          E8h
ram:065b21b0    5f              ??          5Fh    _
ram:065b21b1    5e              ??          5Eh    ^
ram:065b21b2    5d              ??          5Dh    ]
ram:065b21b3    5b              ??          5Bh    [
ram:065b21b4    c2              ??          C2h
ram:065b21b5    0c              ??          0Ch
ram:065b21b6    00              ??          00h
ram:065b21b7    8b              ??          8Bh
ram:065b21b8    44              ??          44h    D
ram:065b21b9    24              ??          24h    $
ram:065b21ba    14              ??          14h
ram:065b21bb    89              ??          89h
ram:065b21bc    03              ??          03h
ram:065b21bd    50              ??          50h    P
ram:065b21be    8b              ??          8Bh
ram:065b21bf    08              ??          08h
ram:065b21c0    ff              ??          FFh
ram:065b21c1    51              ??          51h    Q
ram:065b21c2    04              ??          04h
ram:065b21c3    5f              ??          5Fh    _
ram:065b21c4    5e              ??          5Eh    ^
ram:065b21c5    5d              ??          5Dh    ]
ram:065b21c6    33              ??          33h    3
ram:065b21c7    c0              ??          C0h
ram:065b21c8    5b              ??          5Bh    [
ram:065b21c9    c2              ??          C2h
ram:065b21ca    0c              ??          0Ch
ram:065b21cb    00              ??          00h
ram:065b21cc    b8              ??          B8h
ram:065b21cd    fd              ??          FDh
ram:065b21ce    ff              ??          FFh
ram:065b21cf    ff              ??          FFh
ram:065b21d0    ff              ??          FFh
ram:065b21d1    5f              ??          5Fh    _
ram:065b21d2    5e              ??          5Eh    ^
ram:065b21d3    5d              ??          5Dh    ]
ram:065b21d4    5b              ??          5Bh    [
ram:065b21d5    c2              ??          C2h
ram:065b21d6    0c              ??          0Ch
ram:065b21d7    00              ??          00h
ram:065b21d8    90              ??          90h
ram:065b21d9    90              ??          90h
ram:065b21da    90              ??          90h
ram:065b21db    90              ??          90h
ram:065b21dc    90              ??          90h
ram:065b21dd    90              ??          90h
ram:065b21de    90              ??          90h
ram:065b21df    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b21e0(int param_1, int * param_2, char * param_3, uint param_4)
          ;param_1       int                  4                      ;XREF[2,0]:   065b220e,065b2241
          ;param_2       int *                8                      ;XREF[1,0]:   065b21e0
          ;param_3       char *               c                      ;XREF[3,0]:   065b21f3,065b220a,065b2225
          ;param_4       uint                10                      ;XREF[1,0]:   065b2269
          ;local_c       undefined1          -c                      ;XREF[1,0]:   065b2250
          ;local_10      undefined1         -10                      ;XREF[1,0]:   065b222b
          ;local_14      undefined4         -14                      ;XREF[1,0]:   065b2287
          ;local_18      undefined4         -18                      ;XREF[1,0]:   065b228b
          ;local_1c      undefined4         -1c                      ;XREF[2,0]:   065b2283,065b229b
          ;local_20      undefined4         -20                      ;XREF[1,0]:   065b227f
          ;local_24      undefined4         -24                      ;XREF[1,0]:   065b2233
          ;local_28      undefined4         -28                      ;XREF[1,0]:   065b222f
          ;local_2c      undefined1         -2c                      ;XREF[4,0]:   065b2212,065b2218,065b2221,065b225d
          ;local_34      undefined1         -34                      ;XREF[1,0]:   065b223d
          ;local_38      undefined4         -38                      ;XREF[1,0]:   065b2254
                                                          ;XREF[2,0]:   065b2028,065b2046
ram:065b21e0    8b442408        MOV         EAX,dword ptr [ESP + param_2]
ram:065b21e4    83ec38          SUB         ESP,0x38
ram:065b21e7    53              PUSH        EBX
ram:065b21e8    33db            XOR         EBX,EBX
ram:065b21ea    3bc3            CMP         EAX,EBX
ram:065b21ec    55              PUSH        EBP
ram:065b21ed    0f8494010000    JZ          LAB_065b2387
ram:065b21f3    8b6c244c        MOV         EBP,dword ptr [ESP + param_3+0x40]
ram:065b21f7    3beb            CMP         EBP,EBX
ram:065b21f9    0f8488010000    JZ          LAB_065b2387
ram:065b21ff    56              PUSH        ESI
ram:065b2200    57              PUSH        EDI
ram:065b2201    55              PUSH        EBP
ram:065b2202    e879210000      CALL        ?GetCRC32@DACOM_CRC@@YAKPBD@Z           ;uint ?GetCRC32@DACOM_CRC@@YAKPBD@Z(c...
ram:065b2207    83c404          ADD         ESP,0x4
ram:065b220a    89442454        MOV         dword ptr [ESP + param_3+0x48],EAX
ram:065b220e    8a44244c        MOV         AL,byte ptr [ESP + param_1+0x48]
ram:065b2212    8d4c241c        LEA         ECX=>local_2c,[ESP + 0x1c]
ram:065b2216    53              PUSH        EBX
ram:065b2217    53              PUSH        EBX
ram:065b2218    88442424        MOV         byte ptr [ESP + local_2c+0x50],AL
ram:065b221c    e8bf1a0000      CALL        FUN_065b3ce0                            ;undefined FUN_065b3ce0(int * param_1...
ram:065b2221    8d4c241c        LEA         ECX=>local_2c,[ESP + 0x1c]
ram:065b2225    8d542454        LEA         EDX=>param_3,[ESP + 0x54]
ram:065b2229    51              PUSH        ECX
ram:065b222a    52              PUSH        EDX
ram:065b222b    8d4c2440        LEA         ECX=>local_10,[ESP + 0x40]
ram:065b222f    89442428        MOV         dword ptr [ESP + local_28+0x50],EAX
ram:065b2233    895c242c        MOV         dword ptr [ESP + local_24+0x50],EBX
ram:065b2237    e8e4180000      CALL        FUN_065b3b20                            ;void * FUN_065b3b20(void * this, und...
ram:065b223c    50              PUSH        EAX
ram:065b223d    8d442418        LEA         EAX=>local_34,[ESP + 0x18]
ram:065b2241    8b4c2450        MOV         ECX,dword ptr [ESP + param_1+0x4c]
ram:065b2245    50              PUSH        EAX
ram:065b2246    83c108          ADD         ECX,0x8
ram:065b2249    e822130000      CALL        FUN_065b3570                            ;undefined FUN_065b3570(void * this, ...
ram:065b224e    8b30            MOV         ESI,dword ptr [EAX]
ram:065b2250    8d4c243c        LEA         ECX=>local_c,[ESP + 0x3c]
ram:065b2254    89742410        MOV         dword ptr [ESP + local_38+0x48],ESI
ram:065b2258    e8231a0000      CALL        FUN_065b3c80                            ;undefined FUN_065b3c80(int param_1)
ram:065b225d    8d4c241c        LEA         ECX=>local_2c,[ESP + 0x1c]
ram:065b2261    e81a1a0000      CALL        FUN_065b3c80                            ;undefined FUN_065b3c80(int param_1)
ram:065b2266    8b4614          MOV         EAX,dword ptr [ESI + 0x14]
ram:065b2269    8b4c2458        MOV         ECX,dword ptr [ESP + param_4+0x48]
ram:065b226d    8b30            MOV         ESI,dword ptr [EAX]
ram:065b226f    3bf0            CMP         ESI,EAX
ram:065b2271    740b            JZ          LAB_065b227e
                            LAB_065b2273:                 ;XREF[1,0]:   065b227c
ram:065b2273    3b4e10          CMP         ECX,dword ptr [ESI + 0x10]
ram:065b2276    7306            JNC         LAB_065b227e
ram:065b2278    8b36            MOV         ESI,dword ptr [ESI]
ram:065b227a    3bf0            CMP         ESI,EAX
ram:065b227c    75f5            JNZ         LAB_065b2273
                            LAB_065b227e:                 ;XREF[2,0]:   065b2271,065b2276
ram:065b227e    53              PUSH        EBX
ram:065b227f    895c242c        MOV         dword ptr [ESP + local_20+0x4c],EBX
ram:065b2283    895c2430        MOV         dword ptr [ESP + local_1c+0x4c],EBX
ram:065b2287    895c2438        MOV         dword ptr [ESP + local_14+0x4c],EBX
ram:065b228b    894c2434        MOV         dword ptr [ESP + local_18+0x4c],ECX
ram:065b228f    e82e3c0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b2294    8bfd            MOV         EDI,EBP
ram:065b2296    83c9ff          OR          ECX,0xffffffff
ram:065b2299    33c0            XOR         EAX,EAX
ram:065b229b    895c2430        MOV         dword ptr [ESP + local_1c+0x4c],EBX
ram:065b229f    f2ae            SCASB.REPNE ES:EDI
ram:065b22a1    f7d1            NOT         ECX
ram:065b22a3    51              PUSH        ECX
ram:065b22a4    e8253c0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b22a9    83c408          ADD         ESP,0x8
ram:065b22ac    8944242c        MOV         dword ptr [ESP + 0x2c],EAX
ram:065b22b0    8bcd            MOV         ECX,EBP
ram:065b22b2    8bd0            MOV         EDX,EAX
                            LAB_065b22b4:                 ;XREF[1,0]:   065b22bc
ram:065b22b4    8a01            MOV         AL,byte ptr [ECX]
ram:065b22b6    41              INC         ECX
ram:065b22b7    8802            MOV         byte ptr [EDX],AL
ram:065b22b9    42              INC         EDX
ram:065b22ba    3ac3            CMP         AL,BL
ram:065b22bc    75f6            JNZ         LAB_065b22b4
ram:065b22be    8b54244c        MOV         EDX,dword ptr [ESP + 0x4c]
ram:065b22c2    8b442434        MOV         EAX,dword ptr [ESP + 0x34]
ram:065b22c6    50              PUSH        EAX
ram:065b22c7    8d6a30          LEA         EBP,[EDX + 0x30]
ram:065b22ca    e8f33b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b22cf    83c404          ADD         ESP,0x4
ram:065b22d2    3beb            CMP         EBP,EBX
ram:065b22d4    895c2434        MOV         dword ptr [ESP + 0x34],EBX
ram:065b22d8    7426            JZ          LAB_065b2300
ram:065b22da    8bfd            MOV         EDI,EBP
ram:065b22dc    83c9ff          OR          ECX,0xffffffff
ram:065b22df    33c0            XOR         EAX,EAX
ram:065b22e1    f2ae            SCASB.REPNE ES:EDI
ram:065b22e3    f7d1            NOT         ECX
ram:065b22e5    51              PUSH        ECX
ram:065b22e6    e8e33b0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b22eb    83c404          ADD         ESP,0x4
ram:065b22ee    89442434        MOV         dword ptr [ESP + 0x34],EAX
ram:065b22f2    8bcd            MOV         ECX,EBP
ram:065b22f4    8bd0            MOV         EDX,EAX
                            LAB_065b22f6:                 ;XREF[1,0]:   065b22fe
ram:065b22f6    8a01            MOV         AL,byte ptr [ECX]
ram:065b22f8    41              INC         ECX
ram:065b22f9    8802            MOV         byte ptr [EDX],AL
ram:065b22fb    42              INC         EDX
ram:065b22fc    3ac3            CMP         AL,BL
ram:065b22fe    75f6            JNZ         LAB_065b22f6
                            LAB_065b2300:                 ;XREF[1,0]:   065b22d8
ram:065b2300    8b442450        MOV         EAX,dword ptr [ESP + 0x50]
ram:065b2304    50              PUSH        EAX
ram:065b2305    8944242c        MOV         dword ptr [ESP + 0x2c],EAX
ram:065b2309    8b08            MOV         ECX,dword ptr [EAX]
ram:065b230b    ff5104          CALL        dword ptr [ECX + 0x4]
ram:065b230e    8b7e04          MOV         EDI,dword ptr [ESI + 0x4]
ram:065b2311    6a18            PUSH        0x18
ram:065b2313    e8b63b0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b2318    83c404          ADD         ESP,0x4
ram:065b231b    3bfb            CMP         EDI,EBX
ram:065b231d    8930            MOV         dword ptr [EAX],ESI
ram:065b231f    7502            JNZ         LAB_065b2323
ram:065b2321    8bf8            MOV         EDI,EAX
                            LAB_065b2323:                 ;XREF[1,0]:   065b231f
ram:065b2323    897804          MOV         dword ptr [EAX + 0x4],EDI
ram:065b2326    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b2329    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b232c    8d4c2428        LEA         ECX,[ESP + 0x28]
ram:065b2330    51              PUSH        ECX
ram:065b2331    8902            MOV         dword ptr [EDX],EAX
ram:065b2333    83c008          ADD         EAX,0x8
ram:065b2336    50              PUSH        EAX
ram:065b2337    e8241e0000      CALL        FUN_065b4160                            ;undefined FUN_065b4160(int * param_1...
ram:065b233c    8b442418        MOV         EAX,dword ptr [ESP + 0x18]
ram:065b2340    83c408          ADD         ESP,0x8
ram:065b2343    8b5018          MOV         EDX,dword ptr [EAX + 0x18]
ram:065b2346    5f              POP         EDI
ram:065b2347    42              INC         EDX
ram:065b2348    5e              POP         ESI
ram:065b2349    895018          MOV         dword ptr [EAX + 0x18],EDX
ram:065b234c    8b442420        MOV         EAX,dword ptr [ESP + 0x20]
ram:065b2350    3bc3            CMP         EAX,EBX
ram:065b2352    740a            JZ          LAB_065b235e
ram:065b2354    8b10            MOV         EDX,dword ptr [EAX]
ram:065b2356    50              PUSH        EAX
ram:065b2357    ff5208          CALL        dword ptr [EDX + 0x8]
ram:065b235a    895c2420        MOV         dword ptr [ESP + 0x20],EBX
                            LAB_065b235e:                 ;XREF[1,0]:   065b2352
ram:065b235e    8b442424        MOV         EAX,dword ptr [ESP + 0x24]
ram:065b2362    895c2428        MOV         dword ptr [ESP + 0x28],EBX
ram:065b2366    50              PUSH        EAX
ram:065b2367    e8563b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b236c    8b4c2430        MOV         ECX,dword ptr [ESP + 0x30]
ram:065b2370    895c2428        MOV         dword ptr [ESP + 0x28],EBX
ram:065b2374    51              PUSH        ECX
ram:065b2375    e8483b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b237a    83c408          ADD         ESP,0x8
ram:065b237d    33c0            XOR         EAX,EAX
ram:065b237f    5d              POP         EBP
ram:065b2380    5b              POP         EBX
ram:065b2381    83c438          ADD         ESP,0x38
ram:065b2384    c21000          RET         0x10
                            LAB_065b2387:                 ;XREF[2,0]:   065b21ed,065b21f9
ram:065b2387    5d              POP         EBP
ram:065b2388    b8feffffff      MOV         EAX,0xfffffffe
ram:065b238d    5b              POP         EBX
ram:065b238e    83c438          ADD         ESP,0x38
ram:065b2391    c21000          RET         0x10
ram:065b2394    90              ??          90h
ram:065b2395    90              ??          90h
ram:065b2396    90              ??          90h
ram:065b2397    90              ??          90h
ram:065b2398    90              ??          90h
ram:065b2399    90              ??          90h
ram:065b239a    90              ??          90h
ram:065b239b    90              ??          90h
ram:065b239c    90              ??          90h
ram:065b239d    90              ??          90h
ram:065b239e    90              ??          90h
ram:065b239f    90              ??          90h
ram:065b23a0    83              ??          83h
ram:065b23a1    ec              ??          ECh
ram:065b23a2    08              ??          08h
ram:065b23a3    8b              ??          8Bh
ram:065b23a4    4c              ??          4Ch    L
ram:065b23a5    24              ??          24h    $
ram:065b23a6    14              ??          14h
ram:065b23a7    53              ??          53h    S
ram:065b23a8    55              ??          55h    U
ram:065b23a9    8b              ??          8Bh
ram:065b23aa    6c              ??          6Ch    l
ram:065b23ab    24              ??          24h    $
ram:065b23ac    14              ??          14h
ram:065b23ad    56              ??          56h    V
ram:065b23ae    57              ??          57h    W
ram:065b23af    8b              ??          8Bh
ram:065b23b0    45              ??          45h    E
ram:065b23b1    0c              ??          0Ch
ram:065b23b2    85              ??          85h
ram:065b23b3    c9              ??          C9h
ram:065b23b4    89              ??          89h
ram:065b23b5    44              ??          44h    D
ram:065b23b6    24              ??          24h    $
ram:065b23b7    1c              ??          1Ch
ram:065b23b8    75              ??          75h    u
ram:065b23b9    08              ??          08h
ram:065b23ba    8b              ??          8Bh
ram:065b23bb    00              ??          00h
ram:065b23bc    89              ??          89h
ram:065b23bd    44              ??          44h    D
ram:065b23be    24              ??          24h    $
ram:065b23bf    24              ??          24h    $
ram:065b23c0    eb              ??          EBh
ram:065b23c1    40              ??          40h    @
ram:065b23c2    51              ??          51h    Q
ram:065b23c3    e8              ??          E8h
ram:065b23c4    b8              ??          B8h
ram:065b23c5    1f              ??          1Fh
ram:065b23c6    00              ??          00h
ram:065b23c7    00              ??          00h
ram:065b23c8    83              ??          83h
ram:065b23c9    c4              ??          C4h
ram:065b23ca    04              ??          04h
ram:065b23cb    89              ??          89h
ram:065b23cc    44              ??          44h    D
ram:065b23cd    24              ??          24h    $
ram:065b23ce    10              ??          10h
ram:065b23cf    8d              ??          8Dh
ram:065b23d0    44              ??          44h    D
ram:065b23d1    24              ??          24h    $
ram:065b23d2    10              ??          10h
ram:065b23d3    8d              ??          8Dh
ram:065b23d4    4c              ??          4Ch    L
ram:065b23d5    24              ??          24h    $
ram:065b23d6    14              ??          14h
ram:065b23d7    50              ??          50h    P
ram:065b23d8    51              ??          51h    Q
ram:065b23d9    8d              ??          8Dh
ram:065b23da    4d              ??          4Dh    M
ram:065b23db    08              ??          08h
ram:065b23dc    e8              ??          E8h
ram:065b23dd    cf              ??          CFh
ram:065b23de    16              ??          16h
ram:065b23df    00              ??          00h
ram:065b23e0    00              ??          00h
ram:065b23e1    8b              ??          8Bh
ram:065b23e2    44              ??          44h    D
ram:065b23e3    24              ??          24h    $
ram:065b23e4    14              ??          14h
ram:065b23e5    8b              ??          8Bh
ram:065b23e6    4c              ??          4Ch    L
ram:065b23e7    24              ??          24h    $
ram:065b23e8    1c              ??          1Ch
ram:065b23e9    3b              ??          3Bh    ;
ram:065b23ea    c1              ??          C1h
ram:065b23eb    89              ??          89h
ram:065b23ec    44              ??          44h    D
ram:065b23ed    24              ??          24h    $
ram:065b23ee    24              ??          24h    $
ram:065b23ef    74              ??          74h    t
ram:065b23f0    47              ??          47h    G
ram:065b23f1    8d              ??          8Dh
ram:065b23f2    4c              ??          4Ch    L
ram:065b23f3    24              ??          24h    $
ram:065b23f4    1c              ??          1Ch
ram:065b23f5    89              ??          89h
ram:065b23f6    44              ??          44h    D
ram:065b23f7    24              ??          24h    $
ram:065b23f8    1c              ??          1Ch
ram:065b23f9    e8              ??          E8h
ram:065b23fa    42              ??          42h    B
ram:065b23fb    1a              ??          1Ah
ram:065b23fc    00              ??          00h
ram:065b23fd    00              ??          00h
ram:065b23fe    8b              ??          8Bh
ram:065b23ff    44              ??          44h    D
ram:065b2400    24              ??          24h    $
ram:065b2401    24              ??          24h    $
ram:065b2402    3b              ??          3Bh    ;
ram:065b2403    44              ??          44h    D
ram:065b2404    24              ??          24h    $
ram:065b2405    1c              ??          1Ch
ram:065b2406    74              ??          74h    t
ram:065b2407    30              ??          30h    0
ram:065b2408    8b              ??          8Bh
ram:065b2409    5c              ??          5Ch    \
ram:065b240a    24              ??          24h    $
ram:065b240b    20              ??          20h
ram:065b240c    8d              ??          8Dh
ram:065b240d    78              ??          78h    x
ram:065b240e    10              ??          10h
ram:065b240f    8b              ??          8Bh
ram:065b2410    40              ??          40h    @
ram:065b2411    14              ??          14h
ram:065b2412    8b              ??          8Bh
ram:065b2413    30              ??          30h    0
ram:065b2414    3b              ??          3Bh    ;
ram:065b2415    f0              ??          F0h
ram:065b2416    74              ??          74h    t
ram:065b2417    0b              ??          0Bh
ram:065b2418    39              ??          39h    9
ram:065b2419    5e              ??          5Eh    ^
ram:065b241a    08              ??          08h
ram:065b241b    74              ??          74h    t
ram:065b241c    2a              ??          2Ah    *
ram:065b241d    8b              ??          8Bh
ram:065b241e    36              ??          36h    6
ram:065b241f    3b              ??          3Bh    ;
ram:065b2420    f0              ??          F0h
ram:065b2421    75              ??          75h    u
ram:065b2422    f5              ??          F5h
ram:065b2423    8d              ??          8Dh
ram:065b2424    4c              ??          4Ch    L
ram:065b2425    24              ??          24h    $
ram:065b2426    24              ??          24h    $
ram:065b2427    e8              ??          E8h
ram:065b2428    14              ??          14h
ram:065b2429    1a              ??          1Ah
ram:065b242a    00              ??          00h
ram:065b242b    00              ??          00h
ram:065b242c    8b              ??          8Bh
ram:065b242d    44              ??          44h    D
ram:065b242e    24              ??          24h    $
ram:065b242f    24              ??          24h    $
ram:065b2430    8b              ??          8Bh
ram:065b2431    4c              ??          4Ch    L
ram:065b2432    24              ??          24h    $
ram:065b2433    1c              ??          1Ch
ram:065b2434    3b              ??          3Bh    ;
ram:065b2435    c1              ??          C1h
ram:065b2436    75              ??          75h    u
ram:065b2437    d4              ??          D4h
ram:065b2438    5f              ??          5Fh    _
ram:065b2439    5e              ??          5Eh    ^
ram:065b243a    5d              ??          5Dh    ]
ram:065b243b    b8              ??          B8h
ram:065b243c    fe              ??          FEh
ram:065b243d    ff              ??          FFh
ram:065b243e    ff              ??          FFh
ram:065b243f    ff              ??          FFh
ram:065b2440    5b              ??          5Bh    [
ram:065b2441    83              ??          83h
ram:065b2442    c4              ??          C4h
ram:065b2443    08              ??          08h
ram:065b2444    c2              ??          C2h
ram:065b2445    0c              ??          0Ch
ram:065b2446    00              ??          00h
ram:065b2447    8b              ??          8Bh
ram:065b2448    56              ??          56h    V
ram:065b2449    04              ??          04h
ram:065b244a    8b              ??          8Bh
ram:065b244b    06              ??          06h
ram:065b244c    89              ??          89h
ram:065b244d    02              ??          02h
ram:065b244e    8b              ??          8Bh
ram:065b244f    0e              ??          0Eh
ram:065b2450    8b              ??          8Bh
ram:065b2451    56              ??          56h    V
ram:065b2452    04              ??          04h
ram:065b2453    89              ??          89h
ram:065b2454    51              ??          51h    Q
ram:065b2455    04              ??          04h
ram:065b2456    8d              ??          8Dh
ram:065b2457    4e              ??          4Eh    N
ram:065b2458    08              ??          08h
ram:065b2459    e8              ??          E8h
ram:065b245a    32              ??          32h    2
ram:065b245b    00              ??          00h
ram:065b245c    00              ??          00h
ram:065b245d    00              ??          00h
ram:065b245e    56              ??          56h    V
ram:065b245f    e8              ??          E8h
ram:065b2460    5e              ??          5Eh    ^
ram:065b2461    3a              ??          3Ah    :
ram:065b2462    00              ??          00h
ram:065b2463    00              ??          00h
ram:065b2464    8b              ??          8Bh
ram:065b2465    47              ??          47h    G
ram:065b2466    08              ??          08h
ram:065b2467    83              ??          83h
ram:065b2468    c4              ??          C4h
ram:065b2469    04              ??          04h
ram:065b246a    48              ??          48h    H
ram:065b246b    89              ??          89h
ram:065b246c    47              ??          47h    G
ram:065b246d    08              ??          08h
ram:065b246e    75              ??          75h    u
ram:065b246f    12              ??          12h
ram:065b2470    8b              ??          8Bh
ram:065b2471    44              ??          44h    D
ram:065b2472    24              ??          24h    $
ram:065b2473    24              ??          24h    $
ram:065b2474    8d              ??          8Dh
ram:065b2475    4c              ??          4Ch    L
ram:065b2476    24              ??          24h    $
ram:065b2477    20              ??          20h
ram:065b2478    50              ??          50h    P
ram:065b2479    51              ??          51h    Q
ram:065b247a    8d              ??          8Dh
ram:065b247b    4d              ??          4Dh    M
ram:065b247c    08              ??          08h
ram:065b247d    e8              ??          E8h
ram:065b247e    be              ??          BEh
ram:065b247f    11              ??          11h
ram:065b2480    00              ??          00h
ram:065b2481    00              ??          00h
ram:065b2482    5f              ??          5Fh    _
ram:065b2483    5e              ??          5Eh    ^
ram:065b2484    5d              ??          5Dh    ]
ram:065b2485    33              ??          33h    3
ram:065b2486    c0              ??          C0h
ram:065b2487    5b              ??          5Bh    [
ram:065b2488    83              ??          83h
ram:065b2489    c4              ??          C4h
ram:065b248a    08              ??          08h
ram:065b248b    c2              ??          C2h
ram:065b248c    0c              ??          0Ch
ram:065b248d    00              ??          00h
ram:065b248e    90              ??          90h
ram:065b248f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b2490(int * param_1)
          ;param_1       int *              ECX
                                                          ;XREF[1,0]:   065b3ca6
ram:065b2490    56              PUSH        ESI
ram:065b2491    8bf1            MOV         ESI,param_1
ram:065b2493    8b06            MOV         EAX,dword ptr [ESI]
ram:065b2495    85c0            TEST        EAX,EAX
ram:065b2497    740c            JZ          LAB_065b24a5
ram:065b2499    8b08            MOV         param_1,dword ptr [EAX]
ram:065b249b    50              PUSH        EAX
ram:065b249c    ff5108          CALL        dword ptr [param_1 + 0x8]
ram:065b249f    c70600000000    MOV         dword ptr [ESI],0x0
                            LAB_065b24a5:                 ;XREF[1,0]:   065b2497
ram:065b24a5    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b24a8    c74608000...    MOV         dword ptr [ESI + 0x8],0x0
ram:065b24af    52              PUSH        EDX
ram:065b24b0    e80d3a0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b24b5    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b24b8    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b24bf    50              PUSH        EAX
ram:065b24c0    e8fd390000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b24c5    83c408          ADD         ESP,0x8
ram:065b24c8    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b24cf    5e              POP         ESI
ram:065b24d0    c3              RET
ram:065b24d1    90              ??          90h
ram:065b24d2    90              ??          90h
ram:065b24d3    90              ??          90h
ram:065b24d4    90              ??          90h
ram:065b24d5    90              ??          90h
ram:065b24d6    90              ??          90h
ram:065b24d7    90              ??          90h
ram:065b24d8    90              ??          90h
ram:065b24d9    90              ??          90h
ram:065b24da    90              ??          90h
ram:065b24db    90              ??          90h
ram:065b24dc    90              ??          90h
ram:065b24dd    90              ??          90h
ram:065b24de    90              ??          90h
ram:065b24df    90              ??          90h
ram:065b24e0    51              ??          51h    Q
ram:065b24e1    53              ??          53h    S
ram:065b24e2    55              ??          55h    U
ram:065b24e3    8b              ??          8Bh
ram:065b24e4    6c              ??          6Ch    l
ram:065b24e5    24              ??          24h    $
ram:065b24e6    18              ??          18h
ram:065b24e7    56              ??          56h    V
ram:065b24e8    85              ??          85h
ram:065b24e9    ed              ??          EDh
ram:065b24ea    57              ??          57h    W
ram:065b24eb    75              ??          75h    u
ram:065b24ec    0d              ??          0Dh
ram:065b24ed    5f              ??          5Fh    _
ram:065b24ee    5e              ??          5Eh    ^
ram:065b24ef    5d              ??          5Dh    ]
ram:065b24f0    b8              ??          B8h
ram:065b24f1    fe              ??          FEh
ram:065b24f2    ff              ??          FFh
ram:065b24f3    ff              ??          FFh
ram:065b24f4    ff              ??          FFh
ram:065b24f5    5b              ??          5Bh    [
ram:065b24f6    59              ??          59h    Y
ram:065b24f7    c2              ??          C2h
ram:065b24f8    10              ??          10h
ram:065b24f9    00              ??          00h
ram:065b24fa    8b              ??          8Bh
ram:065b24fb    74              ??          74h    t
ram:065b24fc    24              ??          24h    $
ram:065b24fd    18              ??          18h
ram:065b24fe    8b              ??          8Bh
ram:065b24ff    4c              ??          4Ch    L
ram:065b2500    24              ??          24h    $
ram:065b2501    1c              ??          1Ch
ram:065b2502    85              ??          85h
ram:065b2503    c9              ??          C9h
ram:065b2504    8b              ??          8Bh
ram:065b2505    46              ??          46h    F
ram:065b2506    0c              ??          0Ch
ram:065b2507    89              ??          89h
ram:065b2508    44              ??          44h    D
ram:065b2509    24              ??          24h    $
ram:065b250a    20              ??          20h
ram:065b250b    75              ??          75h    u
ram:065b250c    08              ??          08h
ram:065b250d    8b              ??          8Bh
ram:065b250e    00              ??          00h
ram:065b250f    89              ??          89h
ram:065b2510    44              ??          44h    D
ram:065b2511    24              ??          24h    $
ram:065b2512    18              ??          18h
ram:065b2513    eb              ??          EBh
ram:065b2514    40              ??          40h    @
ram:065b2515    51              ??          51h    Q
ram:065b2516    e8              ??          E8h
ram:065b2517    65              ??          65h    e
ram:065b2518    1e              ??          1Eh
ram:065b2519    00              ??          00h
ram:065b251a    00              ??          00h
ram:065b251b    83              ??          83h
ram:065b251c    c4              ??          C4h
ram:065b251d    04              ??          04h
ram:065b251e    89              ??          89h
ram:065b251f    44              ??          44h    D
ram:065b2520    24              ??          24h    $
ram:065b2521    1c              ??          1Ch
ram:065b2522    8d              ??          8Dh
ram:065b2523    44              ??          44h    D
ram:065b2524    24              ??          24h    $
ram:065b2525    1c              ??          1Ch
ram:065b2526    8d              ??          8Dh
ram:065b2527    4c              ??          4Ch    L
ram:065b2528    24              ??          24h    $
ram:065b2529    10              ??          10h
ram:065b252a    50              ??          50h    P
ram:065b252b    51              ??          51h    Q
ram:065b252c    8d              ??          8Dh
ram:065b252d    4e              ??          4Eh    N
ram:065b252e    08              ??          08h
ram:065b252f    e8              ??          E8h
ram:065b2530    7c              ??          7Ch    |
ram:065b2531    15              ??          15h
ram:065b2532    00              ??          00h
ram:065b2533    00              ??          00h
ram:065b2534    8b              ??          8Bh
ram:065b2535    44              ??          44h    D
ram:065b2536    24              ??          24h    $
ram:065b2537    10              ??          10h
ram:065b2538    8b              ??          8Bh
ram:065b2539    4c              ??          4Ch    L
ram:065b253a    24              ??          24h    $
ram:065b253b    20              ??          20h
ram:065b253c    3b              ??          3Bh    ;
ram:065b253d    c1              ??          C1h
ram:065b253e    89              ??          89h
ram:065b253f    44              ??          44h    D
ram:065b2540    24              ??          24h    $
ram:065b2541    18              ??          18h
ram:065b2542    74              ??          74h    t
ram:065b2543    5a              ??          5Ah    Z
ram:065b2544    8d              ??          8Dh
ram:065b2545    4c              ??          4Ch    L
ram:065b2546    24              ??          24h    $
ram:065b2547    20              ??          20h
ram:065b2548    89              ??          89h
ram:065b2549    44              ??          44h    D
ram:065b254a    24              ??          24h    $
ram:065b254b    20              ??          20h
ram:065b254c    e8              ??          E8h
ram:065b254d    ef              ??          EFh
ram:065b254e    18              ??          18h
ram:065b254f    00              ??          00h
ram:065b2550    00              ??          00h
ram:065b2551    8b              ??          8Bh
ram:065b2552    44              ??          44h    D
ram:065b2553    24              ??          24h    $
ram:065b2554    18              ??          18h
ram:065b2555    3b              ??          3Bh    ;
ram:065b2556    44              ??          44h    D
ram:065b2557    24              ??          24h    $
ram:065b2558    20              ??          20h
ram:065b2559    74              ??          74h    t
ram:065b255a    43              ??          43h    C
ram:065b255b    8b              ??          8Bh
ram:065b255c    5c              ??          5Ch    \
ram:065b255d    24              ??          24h    $
ram:065b255e    24              ??          24h    $
ram:065b255f    8d              ??          8Dh
ram:065b2560    78              ??          78h    x
ram:065b2561    14              ??          14h
ram:065b2562    8b              ??          8Bh
ram:065b2563    40              ??          40h    @
ram:065b2564    14              ??          14h
ram:065b2565    8b              ??          8Bh
ram:065b2566    30              ??          30h    0
ram:065b2567    3b              ??          3Bh    ;
ram:065b2568    f0              ??          F0h
ram:065b2569    74              ??          74h    t
ram:065b256a    1e              ??          1Eh
ram:065b256b    8b              ??          8Bh
ram:065b256c    56              ??          56h    V
ram:065b256d    10              ??          10h
ram:065b256e    8b              ??          8Bh
ram:065b256f    46              ??          46h    F
ram:065b2570    0c              ??          0Ch
ram:065b2571    8b              ??          8Bh
ram:065b2572    4e              ??          4Eh    N
ram:065b2573    08              ??          08h
ram:065b2574    53              ??          53h    S
ram:065b2575    52              ??          52h    R
ram:065b2576    50              ??          50h    P
ram:065b2577    51              ??          51h    Q
ram:065b2578    ff              ??          FFh
ram:065b2579    d5              ??          D5h
ram:065b257a    83              ??          83h
ram:065b257b    c4              ??          C4h
ram:065b257c    10              ??          10h
ram:065b257d    85              ??          85h
ram:065b257e    c0              ??          C0h
ram:065b257f    74              ??          74h    t
ram:065b2580    1d              ??          1Dh
ram:065b2581    8b              ??          8Bh
ram:065b2582    36              ??          36h    6
ram:065b2583    8b              ??          8Bh
ram:065b2584    07              ??          07h
ram:065b2585    3b              ??          3Bh    ;
ram:065b2586    f0              ??          F0h
ram:065b2587    75              ??          75h    u
ram:065b2588    e2              ??          E2h
ram:065b2589    8d              ??          8Dh
ram:065b258a    4c              ??          4Ch    L
ram:065b258b    24              ??          24h    $
ram:065b258c    18              ??          18h
ram:065b258d    e8              ??          E8h
ram:065b258e    ae              ??          AEh
ram:065b258f    18              ??          18h
ram:065b2590    00              ??          00h
ram:065b2591    00              ??          00h
ram:065b2592    8b              ??          8Bh
ram:065b2593    44              ??          44h    D
ram:065b2594    24              ??          24h    $
ram:065b2595    18              ??          18h
ram:065b2596    8b              ??          8Bh
ram:065b2597    4c              ??          4Ch    L
ram:065b2598    24              ??          24h    $
ram:065b2599    20              ??          20h
ram:065b259a    3b              ??          3Bh    ;
ram:065b259b    c1              ??          C1h
ram:065b259c    75              ??          75h    u
ram:065b259d    c1              ??          C1h
ram:065b259e    5f              ??          5Fh    _
ram:065b259f    5e              ??          5Eh    ^
ram:065b25a0    5d              ??          5Dh    ]
ram:065b25a1    33              ??          33h    3
ram:065b25a2    c0              ??          C0h
ram:065b25a3    5b              ??          5Bh    [
ram:065b25a4    59              ??          59h    Y
ram:065b25a5    c2              ??          C2h
ram:065b25a6    10              ??          10h
ram:065b25a7    00              ??          00h
ram:065b25a8    90              ??          90h
ram:065b25a9    90              ??          90h
ram:065b25aa    90              ??          90h
ram:065b25ab    90              ??          90h
ram:065b25ac    90              ??          90h
ram:065b25ad    90              ??          90h
ram:065b25ae    90              ??          90h
ram:065b25af    90              ??          90h
ram:065b25b0    b8              ??          B8h
ram:065b25b1    20              ??          20h
ram:065b25b2    22              ??          22h    "
ram:065b25b3    00              ??          00h
ram:065b25b4    00              ??          00h
ram:065b25b5    e8              ??          E8h
ram:065b25b6    26              ??          26h    &
ram:065b25b7    39              ??          39h    9
ram:065b25b8    00              ??          00h
ram:065b25b9    00              ??          00h
ram:065b25ba    55              ??          55h    U
ram:065b25bb    56              ??          56h    V
ram:065b25bc    8b              ??          8Bh
ram:065b25bd    b4              ??          B4h
ram:065b25be    24              ??          24h    $
ram:065b25bf    30              ??          30h    0
ram:065b25c0    22              ??          22h    "
ram:065b25c1    00              ??          00h
ram:065b25c2    00              ??          00h
ram:065b25c3    57              ??          57h    W
ram:065b25c4    85              ??          85h
ram:065b25c5    f6              ??          F6h
ram:065b25c6    75              ??          75h    u
ram:065b25c7    11              ??          11h
ram:065b25c8    5f              ??          5Fh    _
ram:065b25c9    5e              ??          5Eh    ^
ram:065b25ca    b8              ??          B8h
ram:065b25cb    fe              ??          FEh
ram:065b25cc    ff              ??          FFh
ram:065b25cd    ff              ??          FFh
ram:065b25ce    ff              ??          FFh
ram:065b25cf    5d              ??          5Dh    ]
ram:065b25d0    81              ??          81h
ram:065b25d1    c4              ??          C4h
ram:065b25d2    20              ??          20h
ram:065b25d3    22              ??          22h    "
ram:065b25d4    00              ??          00h
ram:065b25d5    00              ??          00h
ram:065b25d6    c2              ??          C2h
ram:065b25d7    08              ??          08h
ram:065b25d8    00              ??          00h
ram:065b25d9    8b              ??          8Bh
ram:065b25da    bc              ??          BCh
ram:065b25db    24              ??          24h    $
ram:065b25dc    30              ??          30h    0
ram:065b25dd    22              ??          22h    "
ram:065b25de    00              ??          00h
ram:065b25df    00              ??          00h
ram:065b25e0    8d              ??          8Dh
ram:065b25e1    44              ??          44h    D
ram:065b25e2    24              ??          24h    $
ram:065b25e3    24              ??          24h    $
ram:065b25e4    6a              ??          6Ah    j
ram:065b25e5    00              ??          00h
ram:065b25e6    50              ??          50h    P
ram:065b25e7    8b              ??          8Bh
ram:065b25e8    8f              ??          8Fh
ram:065b25e9    34              ??          34h    4
ram:065b25ea    01              ??          01h
ram:065b25eb    00              ??          00h
ram:065b25ec    00              ??          00h
ram:065b25ed    68              ??          68h    h
ram:065b25ee    04              ??          04h
ram:065b25ef    01              ??          01h
ram:065b25f0    00              ??          00h
ram:065b25f1    00              ??          00h
ram:065b25f2    6a              ??          6Ah    j
ram:065b25f3    00              ??          00h
ram:065b25f4    56              ??          56h    V
ram:065b25f5    51              ??          51h    Q
ram:065b25f6    ff              ??          FFh
ram:065b25f7    15              ??          15h
ram:065b25f8    0c              ??          0Ch
ram:065b25f9    70              ??          70h    p
ram:065b25fa    5b              ??          5Bh    [
ram:065b25fb    06              ??          06h
ram:065b25fc    85              ??          85h
ram:065b25fd    c0              ??          C0h
ram:065b25fe    75              ??          75h    u
ram:065b25ff    41              ??          41h    A
ram:065b2600    56              ??          56h    V
ram:065b2601    8d              ??          8Dh
ram:065b2602    94              ??          94h
ram:065b2603    24              ??          24h    $
ram:065b2604    30              ??          30h    0
ram:065b2605    02              ??          02h
ram:065b2606    00              ??          00h
ram:065b2607    00              ??          00h
ram:065b2608    68              ??          68h    h
ram:065b2609    70              ??          70h    p
ram:065b260a    81              ??          81h
ram:065b260b    5b              ??          5Bh    [
ram:065b260c    06              ??          06h
ram:065b260d    52              ??          52h    R
ram:065b260e    e8              ??          E8h
ram:065b260f    cd              ??          CDh
ram:065b2610    01              ??          01h
ram:065b2611    00              ??          00h
ram:065b2612    00              ??          00h
ram:065b2613    50              ??          50h    P
ram:065b2614    68              ??          68h    h
ram:065b2615    5a              ??          5Ah    Z
ram:065b2616    02              ??          02h
ram:065b2617    00              ??          00h
ram:065b2618    00              ??          00h
ram:065b2619    b9              ??          B9h
ram:065b261a    01              ??          01h
ram:065b261b    00              ??          00h
ram:065b261c    10              ??          10h
ram:065b261d    00              ??          00h
ram:065b261e    68              ??          68h    h
ram:065b261f    30              ??          30h    0
ram:065b2620    81              ??          81h
ram:065b2621    5b              ??          5Bh    [
ram:065b2622    06              ??          06h
ram:065b2623    68              ??          68h    h
ram:065b2624    14              ??          14h
ram:065b2625    81              ??          81h
ram:065b2626    5b              ??          5Bh    [
ram:065b2627    06              ??          06h
ram:065b2628    51              ??          51h    Q
ram:065b2629    ff              ??          FFh
ram:065b262a    15              ??          15h
ram:065b262b    34              ??          34h    4
ram:065b262c    8a              ??          8Ah
ram:065b262d    5b              ??          5Bh    [
ram:065b262e    06              ??          06h
ram:065b262f    83              ??          83h
ram:065b2630    c4              ??          C4h
ram:065b2631    20              ??          20h
ram:065b2632    83              ??          83h
ram:065b2633    c8              ??          C8h
ram:065b2634    ff              ??          FFh
ram:065b2635    5f              ??          5Fh    _
ram:065b2636    5e              ??          5Eh    ^
ram:065b2637    5d              ??          5Dh    ]
ram:065b2638    81              ??          81h
ram:065b2639    c4              ??          C4h
ram:065b263a    20              ??          20h
ram:065b263b    22              ??          22h    "
ram:065b263c    00              ??          00h
ram:065b263d    00              ??          00h
ram:065b263e    c2              ??          C2h
ram:065b263f    08              ??          08h
ram:065b2640    00              ??          00h
ram:065b2641    8d              ??          8Dh
ram:065b2642    84              ??          84h
ram:065b2643    24              ??          24h    $
ram:065b2644    28              ??          28h    (
ram:065b2645    01              ??          01h
ram:065b2646    00              ??          00h
ram:065b2647    00              ??          00h
ram:065b2648    6a              ??          6Ah    j
ram:065b2649    00              ??          00h
ram:065b264a    50              ??          50h    P
ram:065b264b    6a              ??          6Ah    j
ram:065b264c    00              ??          00h
ram:065b264d    8d              ??          8Dh
ram:065b264e    4c              ??          4Ch    L
ram:065b264f    24              ??          24h    $
ram:065b2650    30              ??          30h    0
ram:065b2651    6a              ??          6Ah    j
ram:065b2652    00              ??          00h
ram:065b2653    51              ??          51h    Q
ram:065b2654    ff              ??          FFh
ram:065b2655    15              ??          15h
ram:065b2656    44              ??          44h    D
ram:065b2657    70              ??          70h    p
ram:065b2658    5b              ??          5Bh    [
ram:065b2659    06              ??          06h
ram:065b265a    8d              ??          8Dh
ram:065b265b    57              ??          57h    W
ram:065b265c    30              ??          30h    0
ram:065b265d    8d              ??          8Dh
ram:065b265e    8c              ??          8Ch
ram:065b265f    24              ??          24h    $
ram:065b2660    3c              ??          3Ch    <
ram:065b2661    01              ??          01h
ram:065b2662    00              ??          00h
ram:065b2663    00              ??          00h
ram:065b2664    83              ??          83h
ram:065b2665    c4              ??          C4h
ram:065b2666    14              ??          14h
ram:065b2667    89              ??          89h
ram:065b2668    54              ??          54h    T
ram:065b2669    24              ??          24h    $
ram:065b266a    14              ??          14h
ram:065b266b    8d              ??          8Dh
ram:065b266c    84              ??          84h
ram:065b266d    24              ??          24h    $
ram:065b266e    28              ??          28h    (
ram:065b266f    01              ??          01h
ram:065b2670    00              ??          00h
ram:065b2671    00              ??          00h
ram:065b2672    2b              ??          2Bh    +
ram:065b2673    d1              ??          D1h
ram:065b2674    8a              ??          8Ah
ram:065b2675    08              ??          08h
ram:065b2676    88              ??          88h
ram:065b2677    0c              ??          0Ch
ram:065b2678    02              ??          02h
ram:065b2679    40              ??          40h    @
ram:065b267a    84              ??          84h
ram:065b267b    c9              ??          C9h
ram:065b267c    75              ??          75h    u
ram:065b267d    f6              ??          F6h
ram:065b267e    8d              ??          8Dh
ram:065b267f    54              ??          54h    T
ram:065b2680    24              ??          24h    $
ram:065b2681    24              ??          24h    $
ram:065b2682    52              ??          52h    R
ram:065b2683    ff              ??          FFh
ram:065b2684    15              ??          15h
ram:065b2685    08              ??          08h
ram:065b2686    70              ??          70h    p
ram:065b2687    5b              ??          5Bh    [
ram:065b2688    06              ??          06h
ram:065b2689    8b              ??          8Bh
ram:065b268a    e8              ??          E8h
ram:065b268b    85              ??          85h
ram:065b268c    ed              ??          EDh
ram:065b268d    75              ??          75h    u
ram:065b268e    43              ??          43h    C
ram:065b268f    56              ??          56h    V
ram:065b2690    8d              ??          8Dh
ram:065b2691    84              ??          84h
ram:065b2692    24              ??          24h    $
ram:065b2693    30              ??          30h    0
ram:065b2694    02              ??          02h
ram:065b2695    00              ??          00h
ram:065b2696    00              ??          00h
ram:065b2697    68              ??          68h    h
ram:065b2698    d8              ??          D8h
ram:065b2699    80              ??          80h
ram:065b269a    5b              ??          5Bh    [
ram:065b269b    06              ??          06h
ram:065b269c    50              ??          50h    P
ram:065b269d    e8              ??          E8h
ram:065b269e    3e              ??          3Eh    >
ram:065b269f    01              ??          01h
ram:065b26a0    00              ??          00h
ram:065b26a1    00              ??          00h
ram:065b26a2    50              ??          50h    P
ram:065b26a3    68              ??          68h    h
ram:065b26a4    64              ??          64h    d
ram:065b26a5    02              ??          02h
ram:065b26a6    00              ??          00h
ram:065b26a7    00              ??          00h
ram:065b26a8    b9              ??          B9h
ram:065b26a9    01              ??          01h
ram:065b26aa    00              ??          00h
ram:065b26ab    10              ??          10h
ram:065b26ac    00              ??          00h
ram:065b26ad    68              ??          68h    h
ram:065b26ae    30              ??          30h    0
ram:065b26af    81              ??          81h
ram:065b26b0    5b              ??          5Bh    [
ram:065b26b1    06              ??          06h
ram:065b26b2    68              ??          68h    h
ram:065b26b3    14              ??          14h
ram:065b26b4    81              ??          81h
ram:065b26b5    5b              ??          5Bh    [
ram:065b26b6    06              ??          06h
ram:065b26b7    51              ??          51h    Q
ram:065b26b8    ff              ??          FFh
ram:065b26b9    15              ??          15h
ram:065b26ba    34              ??          34h    4
ram:065b26bb    8a              ??          8Ah
ram:065b26bc    5b              ??          5Bh    [
ram:065b26bd    06              ??          06h
ram:065b26be    83              ??          83h
ram:065b26bf    c4              ??          C4h
ram:065b26c0    20              ??          20h
ram:065b26c1    b8              ??          B8h
ram:065b26c2    fe              ??          FEh
ram:065b26c3    ff              ??          FFh
ram:065b26c4    ff              ??          FFh
ram:065b26c5    ff              ??          FFh
ram:065b26c6    5f              ??          5Fh    _
ram:065b26c7    5e              ??          5Eh    ^
ram:065b26c8    5d              ??          5Dh    ]
ram:065b26c9    81              ??          81h
ram:065b26ca    c4              ??          C4h
ram:065b26cb    20              ??          20h
ram:065b26cc    22              ??          22h    "
ram:065b26cd    00              ??          00h
ram:065b26ce    00              ??          00h
ram:065b26cf    c2              ??          C2h
ram:065b26d0    08              ??          08h
ram:065b26d1    00              ??          00h
ram:065b26d2    8d              ??          8Dh
ram:065b26d3    4c              ??          4Ch    L
ram:065b26d4    24              ??          24h    $
ram:065b26d5    1c              ??          1Ch
ram:065b26d6    8d              ??          8Dh
ram:065b26d7    54              ??          54h    T
ram:065b26d8    24              ??          24h    $
ram:065b26d9    18              ??          18h
ram:065b26da    51              ??          51h    Q
ram:065b26db    8d              ??          8Dh
ram:065b26dc    44              ??          44h    D
ram:065b26dd    24              ??          24h    $
ram:065b26de    24              ??          24h    $
ram:065b26df    52              ??          52h    R
ram:065b26e0    8d              ??          8Dh
ram:065b26e1    4c              ??          4Ch    L
ram:065b26e2    24              ??          24h    $
ram:065b26e3    2c              ??          2Ch    ,
ram:065b26e4    50              ??          50h    P
ram:065b26e5    51              ??          51h    Q
ram:065b26e6    e8              ??          E8h
ram:065b26e7    35              ??          35h    5
ram:065b26e8    0c              ??          0Ch
ram:065b26e9    00              ??          00h
ram:065b26ea    00              ??          00h
ram:065b26eb    8b              ??          8Bh
ram:065b26ec    54              ??          54h    T
ram:065b26ed    24              ??          24h    $
ram:065b26ee    2c              ??          2Ch    ,
ram:065b26ef    8b              ??          8Bh
ram:065b26f0    44              ??          44h    D
ram:065b26f1    24              ??          24h    $
ram:065b26f2    28              ??          28h    (
ram:065b26f3    8b              ??          8Bh
ram:065b26f4    4c              ??          4Ch    L
ram:065b26f5    24              ??          24h    $
ram:065b26f6    30              ??          30h    0
ram:065b26f7    52              ??          52h    R
ram:065b26f8    50              ??          50h    P
ram:065b26f9    8d              ??          8Dh
ram:065b26fa    54              ??          54h    T
ram:065b26fb    24              ??          24h    $
ram:065b26fc    3c              ??          3Ch    <
ram:065b26fd    51              ??          51h    Q
ram:065b26fe    52              ??          52h    R
ram:065b26ff    8d              ??          8Dh
ram:065b2700    84              ??          84h
ram:065b2701    24              ??          24h    $
ram:065b2702    4c              ??          4Ch    L
ram:065b2703    02              ??          02h
ram:065b2704    00              ??          00h
ram:065b2705    00              ??          00h
ram:065b2706    68              ??          68h    h
ram:065b2707    b0              ??          B0h
ram:065b2708    80              ??          80h
ram:065b2709    5b              ??          5Bh    [
ram:065b270a    06              ??          06h
ram:065b270b    50              ??          50h    P
ram:065b270c    e8              ??          E8h
ram:065b270d    cf              ??          CFh
ram:065b270e    00              ??          00h
ram:065b270f    00              ??          00h
ram:065b2710    00              ??          00h
ram:065b2711    50              ??          50h    P
ram:065b2712    68              ??          68h    h
ram:065b2713    6a              ??          6Ah    j
ram:065b2714    02              ??          02h
ram:065b2715    00              ??          00h
ram:065b2716    00              ??          00h
ram:065b2717    b9              ??          B9h
ram:065b2718    03              ??          03h
ram:065b2719    00              ??          00h
ram:065b271a    10              ??          10h
ram:065b271b    00              ??          00h
ram:065b271c    68              ??          68h    h
ram:065b271d    30              ??          30h    0
ram:065b271e    81              ??          81h
ram:065b271f    5b              ??          5Bh    [
ram:065b2720    06              ??          06h
ram:065b2721    68              ??          68h    h
ram:065b2722    94              ??          94h
ram:065b2723    80              ??          80h
ram:065b2724    5b              ??          5Bh    [
ram:065b2725    06              ??          06h
ram:065b2726    51              ??          51h    Q
ram:065b2727    ff              ??          FFh
ram:065b2728    15              ??          15h
ram:065b2729    34              ??          34h    4
ram:065b272a    8a              ??          8Ah
ram:065b272b    5b              ??          5Bh    [
ram:065b272c    06              ??          06h
ram:065b272d    6a              ??          6Ah    j
ram:065b272e    00              ??          00h
ram:065b272f    c7              ??          C7h
ram:065b2730    44              ??          44h    D
ram:065b2731    24              ??          24h    $
ram:065b2732    50              ??          50h    P
ram:065b2733    00              ??          00h
ram:065b2734    00              ??          00h
ram:065b2735    00              ??          00h
ram:065b2736    00              ??          00h
ram:065b2737    e8              ??          E8h
ram:065b2738    86              ??          86h
ram:065b2739    37              ??          37h    7
ram:065b273a    00              ??          00h
ram:065b273b    00              ??          00h
ram:065b273c    8d              ??          8Dh
ram:065b273d    bc              ??          BCh
ram:065b273e    24              ??          24h    $
ram:065b273f    68              ??          68h    h
ram:065b2740    01              ??          01h
ram:065b2741    00              ??          00h
ram:065b2742    00              ??          00h
ram:065b2743    83              ??          83h
ram:065b2744    c9              ??          C9h
ram:065b2745    ff              ??          FFh
ram:065b2746    33              ??          33h    3
ram:065b2747    c0              ??          C0h
ram:065b2748    83              ??          83h
ram:065b2749    c4              ??          C4h
ram:065b274a    40              ??          40h    @
ram:065b274b    f2              ??          F2h
ram:065b274c    ae              ??          AEh
ram:065b274d    f7              ??          F7h
ram:065b274e    d1              ??          D1h
ram:065b274f    51              ??          51h    Q
ram:065b2750    c7              ??          C7h
ram:065b2751    44              ??          44h    D
ram:065b2752    24              ??          24h    $
ram:065b2753    14              ??          14h
ram:065b2754    00              ??          00h
ram:065b2755    00              ??          00h
ram:065b2756    00              ??          00h
ram:065b2757    00              ??          00h
ram:065b2758    e8              ??          E8h
ram:065b2759    71              ??          71h    q
ram:065b275a    37              ??          37h    7
ram:065b275b    00              ??          00h
ram:065b275c    00              ??          00h
ram:065b275d    83              ??          83h
ram:065b275e    c4              ??          C4h
ram:065b275f    04              ??          04h
ram:065b2760    89              ??          89h
ram:065b2761    44              ??          44h    D
ram:065b2762    24              ??          24h    $
ram:065b2763    10              ??          10h
ram:065b2764    8d              ??          8Dh
ram:065b2765    8c              ??          8Ch
ram:065b2766    24              ??          24h    $
ram:065b2767    28              ??          28h    (
ram:065b2768    01              ??          01h
ram:065b2769    00              ??          00h
ram:065b276a    00              ??          00h
ram:065b276b    8b              ??          8Bh
ram:065b276c    d0              ??          D0h
ram:065b276d    8a              ??          8Ah
ram:065b276e    01              ??          01h
ram:065b276f    41              ??          41h    A
ram:065b2770    88              ??          88h
ram:065b2771    02              ??          02h
ram:065b2772    42              ??          42h    B
ram:065b2773    84              ??          84h
ram:065b2774    c0              ??          C0h
ram:065b2775    75              ??          75h    u
ram:065b2776    f6              ??          F6h
ram:065b2777    89              ??          89h
ram:065b2778    6c              ??          6Ch    l
ram:065b2779    24              ??          24h    $
ram:065b277a    0c              ??          0Ch
ram:065b277b    8b              ??          8Bh
ram:065b277c    ac              ??          ACh
ram:065b277d    24              ??          24h    $
ram:065b277e    30              ??          30h    0
ram:065b277f    22              ??          22h    "
ram:065b2780    00              ??          00h
ram:065b2781    00              ??          00h
ram:065b2782    6a              ??          6Ah    j
ram:065b2783    10              ??          10h
ram:065b2784    8b              ??          8Bh
ram:065b2785    75              ??          75h    u
ram:065b2786    20              ??          20h
ram:065b2787    8b              ??          8Bh
ram:065b2788    7e              ??          7Eh    ~
ram:065b2789    04              ??          04h
ram:065b278a    e8              ??          E8h
ram:065b278b    3f              ??          3Fh    ?
ram:065b278c    37              ??          37h    7
ram:065b278d    00              ??          00h
ram:065b278e    00              ??          00h
ram:065b278f    83              ??          83h
ram:065b2790    c4              ??          C4h
ram:065b2791    04              ??          04h
ram:065b2792    89              ??          89h
ram:065b2793    30              ??          30h    0
ram:065b2794    85              ??          85h
ram:065b2795    ff              ??          FFh
ram:065b2796    75              ??          75h    u
ram:065b2797    02              ??          02h
ram:065b2798    8b              ??          8Bh
ram:065b2799    f8              ??          F8h
ram:065b279a    89              ??          89h
ram:065b279b    78              ??          78h    x
ram:065b279c    04              ??          04h
ram:065b279d    89              ??          89h
ram:065b279e    46              ??          46h    F
ram:065b279f    04              ??          04h
ram:065b27a0    8b              ??          8Bh
ram:065b27a1    48              ??          48h    H
ram:065b27a2    04              ??          04h
ram:065b27a3    89              ??          89h
ram:065b27a4    01              ??          01h
ram:065b27a5    8d              ??          8Dh
ram:065b27a6    48              ??          48h    H
ram:065b27a7    08              ??          08h
ram:065b27a8    85              ??          85h
ram:065b27a9    c9              ??          C9h
ram:065b27aa    74              ??          74h    t
ram:065b27ab    0a              ??          0Ah
ram:065b27ac    8d              ??          8Dh
ram:065b27ad    54              ??          54h    T
ram:065b27ae    24              ??          24h    $
ram:065b27af    0c              ??          0Ch
ram:065b27b0    52              ??          52h    R
ram:065b27b1    e8              ??          E8h
ram:065b27b2    5a              ??          5Ah    Z
ram:065b27b3    00              ??          00h
ram:065b27b4    00              ??          00h
ram:065b27b5    00              ??          00h
ram:065b27b6    8b              ??          8Bh
ram:065b27b7    75              ??          75h    u
ram:065b27b8    24              ??          24h    $
ram:065b27b9    8b              ??          8Bh
ram:065b27ba    44              ??          44h    D
ram:065b27bb    24              ??          24h    $
ram:065b27bc    14              ??          14h
ram:065b27bd    8b              ??          8Bh
ram:065b27be    4c              ??          4Ch    L
ram:065b27bf    24              ??          24h    $
ram:065b27c0    10              ??          10h
ram:065b27c1    46              ??          46h    F
ram:065b27c2    89              ??          89h
ram:065b27c3    75              ??          75h    u
ram:065b27c4    24              ??          24h    $
ram:065b27c5    51              ??          51h    Q
ram:065b27c6    c6              ??          C6h
ram:065b27c7    00              ??          00h
ram:065b27c8    00              ??          00h
ram:065b27c9    e8              ??          E8h
ram:065b27ca    f4              ??          F4h
ram:065b27cb    36              ??          36h    6
ram:065b27cc    00              ??          00h
ram:065b27cd    00              ??          00h
ram:065b27ce    83              ??          83h
ram:065b27cf    c4              ??          C4h
ram:065b27d0    04              ??          04h
ram:065b27d1    33              ??          33h    3
ram:065b27d2    c0              ??          C0h
ram:065b27d3    5f              ??          5Fh    _
ram:065b27d4    5e              ??          5Eh    ^
ram:065b27d5    5d              ??          5Dh    ]
ram:065b27d6    81              ??          81h
ram:065b27d7    c4              ??          C4h
ram:065b27d8    20              ??          20h
ram:065b27d9    22              ??          22h    "
ram:065b27da    00              ??          00h
ram:065b27db    00              ??          00h
ram:065b27dc    c2              ??          C2h
ram:065b27dd    08              ??          08h
ram:065b27de    00              ??          00h
ram:065b27df    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b27e0(undefined4 param_1, undefined4 param_2)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b27e9
          ;param_2       undefined4           8                      ;XREF[1,0]:   065b27e0
                                                          ;XREF[2,0]:   065b34ad,065b34e1
ram:065b27e0    8b4c2408        MOV         ECX,dword ptr [ESP + param_2]
ram:065b27e4    8d44240c        LEA         EAX=>Stack[0xc],[ESP + 0xc]
ram:065b27e8    56              PUSH        ESI
ram:065b27e9    8b742408        MOV         ESI,dword ptr [ESP + param_1+0x4]
ram:065b27ed    50              PUSH        EAX
ram:065b27ee    51              PUSH        ECX
ram:065b27ef    6800200000      PUSH        0x2000
ram:065b27f4    56              PUSH        ESI
ram:065b27f5    ff1528705b06    CALL        dword ptr [DAT_065b7028]
ram:065b27fb    83c410          ADD         ESP,0x10
ram:065b27fe    8bc6            MOV         EAX,ESI
ram:065b2800    5e              POP         ESI
ram:065b2801    c3              RET
ram:065b2802    90              ??          90h
ram:065b2803    90              ??          90h
ram:065b2804    90              ??          90h
ram:065b2805    90              ??          90h
ram:065b2806    90              ??          90h
ram:065b2807    90              ??          90h
ram:065b2808    90              ??          90h
ram:065b2809    90              ??          90h
ram:065b280a    90              ??          90h
ram:065b280b    90              ??          90h
ram:065b280c    90              ??          90h
ram:065b280d    90              ??          90h
ram:065b280e    90              ??          90h
ram:065b280f    90              ??          90h
ram:065b2810    8b              ??          8Bh
ram:065b2811    44              ??          44h    D
ram:065b2812    24              ??          24h    $
ram:065b2813    04              ??          04h
ram:065b2814    55              ??          55h    U
ram:065b2815    8b              ??          8Bh
ram:065b2816    e9              ??          E9h
ram:065b2817    56              ??          56h    V
ram:065b2818    6a              ??          6Ah    j
ram:065b2819    00              ??          00h
ram:065b281a    c7              ??          C7h
ram:065b281b    45              ??          45h    E
ram:065b281c    04              ??          04h
ram:065b281d    00              ??          00h
ram:065b281e    00              ??          00h
ram:065b281f    00              ??          00h
ram:065b2820    00              ??          00h
ram:065b2821    8b              ??          8Bh
ram:065b2822    70              ??          70h    p
ram:065b2823    04              ??          04h
ram:065b2824    e8              ??          E8h
ram:065b2825    99              ??          99h
ram:065b2826    36              ??          36h    6
ram:065b2827    00              ??          00h
ram:065b2828    00              ??          00h
ram:065b2829    83              ??          83h
ram:065b282a    c4              ??          C4h
ram:065b282b    04              ??          04h
ram:065b282c    c7              ??          C7h
ram:065b282d    45              ??          45h    E
ram:065b282e    04              ??          04h
ram:065b282f    00              ??          00h
ram:065b2830    00              ??          00h
ram:065b2831    00              ??          00h
ram:065b2832    00              ??          00h
ram:065b2833    85              ??          85h
ram:065b2834    f6              ??          F6h
ram:065b2835    74              ??          74h    t
ram:065b2836    27              ??          27h    '
ram:065b2837    57              ??          57h    W
ram:065b2838    8b              ??          8Bh
ram:065b2839    fe              ??          FEh
ram:065b283a    83              ??          83h
ram:065b283b    c9              ??          C9h
ram:065b283c    ff              ??          FFh
ram:065b283d    33              ??          33h    3
ram:065b283e    c0              ??          C0h
ram:065b283f    f2              ??          F2h
ram:065b2840    ae              ??          AEh
ram:065b2841    f7              ??          F7h
ram:065b2842    d1              ??          D1h
ram:065b2843    51              ??          51h    Q
ram:065b2844    e8              ??          E8h
ram:065b2845    85              ??          85h
ram:065b2846    36              ??          36h    6
ram:065b2847    00              ??          00h
ram:065b2848    00              ??          00h
ram:065b2849    83              ??          83h
ram:065b284a    c4              ??          C4h
ram:065b284b    04              ??          04h
ram:065b284c    89              ??          89h
ram:065b284d    45              ??          45h    E
ram:065b284e    04              ??          04h
ram:065b284f    8b              ??          8Bh
ram:065b2850    ce              ??          CEh
ram:065b2851    8b              ??          8Bh
ram:065b2852    d0              ??          D0h
ram:065b2853    5f              ??          5Fh    _
ram:065b2854    8a              ??          8Ah
ram:065b2855    01              ??          01h
ram:065b2856    41              ??          41h    A
ram:065b2857    88              ??          88h
ram:065b2858    02              ??          02h
ram:065b2859    42              ??          42h    B
ram:065b285a    84              ??          84h
ram:065b285b    c0              ??          C0h
ram:065b285c    75              ??          75h    u
ram:065b285d    f6              ??          F6h
ram:065b285e    8b              ??          8Bh
ram:065b285f    4c              ??          4Ch    L
ram:065b2860    24              ??          24h    $
ram:065b2861    0c              ??          0Ch
ram:065b2862    8b              ??          8Bh
ram:065b2863    c5              ??          C5h
ram:065b2864    5e              ??          5Eh    ^
ram:065b2865    8b              ??          8Bh
ram:065b2866    11              ??          11h
ram:065b2867    89              ??          89h
ram:065b2868    55              ??          55h    U
ram:065b2869    00              ??          00h
ram:065b286a    5d              ??          5Dh    ]
ram:065b286b    c2              ??          C2h
ram:065b286c    04              ??          04h
ram:065b286d    00              ??          00h
ram:065b286e    90              ??          90h
ram:065b286f    90              ??          90h
ram:065b2870    8b              ??          8Bh
ram:065b2871    44              ??          44h    D
ram:065b2872    24              ??          24h    $
ram:065b2873    08              ??          08h
ram:065b2874    81              ??          81h
ram:065b2875    ec              ??          ECh
ram:065b2876    04              ??          04h
ram:065b2877    01              ??          01h
ram:065b2878    00              ??          00h
ram:065b2879    00              ??          00h
ram:065b287a    85              ??          85h
ram:065b287b    c0              ??          C0h
ram:065b287c    53              ??          53h    S
ram:065b287d    55              ??          55h    U
ram:065b287e    56              ??          56h    V
ram:065b287f    57              ??          57h    W
ram:065b2880    75              ??          75h    u
ram:065b2881    12              ??          12h
ram:065b2882    5f              ??          5Fh    _
ram:065b2883    5e              ??          5Eh    ^
ram:065b2884    5d              ??          5Dh    ]
ram:065b2885    b8              ??          B8h
ram:065b2886    fe              ??          FEh
ram:065b2887    ff              ??          FFh
ram:065b2888    ff              ??          FFh
ram:065b2889    ff              ??          FFh
ram:065b288a    5b              ??          5Bh    [
ram:065b288b    81              ??          81h
ram:065b288c    c4              ??          C4h
ram:065b288d    04              ??          04h
ram:065b288e    01              ??          01h
ram:065b288f    00              ??          00h
ram:065b2890    00              ??          00h
ram:065b2891    c2              ??          C2h
ram:065b2892    08              ??          08h
ram:065b2893    00              ??          00h
ram:065b2894    8d              ??          8Dh
ram:065b2895    4c              ??          4Ch    L
ram:065b2896    24              ??          24h    $
ram:065b2897    10              ??          10h
ram:065b2898    6a              ??          6Ah    j
ram:065b2899    00              ??          00h
ram:065b289a    51              ??          51h    Q
ram:065b289b    6a              ??          6Ah    j
ram:065b289c    00              ??          00h
ram:065b289d    6a              ??          6Ah    j
ram:065b289e    00              ??          00h
ram:065b289f    50              ??          50h    P
ram:065b28a0    ff              ??          FFh
ram:065b28a1    15              ??          15h
ram:065b28a2    44              ??          44h    D
ram:065b28a3    70              ??          70h    p
ram:065b28a4    5b              ??          5Bh    [
ram:065b28a5    06              ??          06h
ram:065b28a6    8b              ??          8Bh
ram:065b28a7    9c              ??          9Ch
ram:065b28a8    24              ??          24h    $
ram:065b28a9    2c              ??          2Ch    ,
ram:065b28aa    01              ??          01h
ram:065b28ab    00              ??          00h
ram:065b28ac    00              ??          00h
ram:065b28ad    83              ??          83h
ram:065b28ae    c4              ??          C4h
ram:065b28af    14              ??          14h
ram:065b28b0    8b              ??          8Bh
ram:065b28b1    7b              ??          7Bh    {
ram:065b28b2    20              ??          20h
ram:065b28b3    8b              ??          8Bh
ram:065b28b4    37              ??          37h    7
ram:065b28b5    3b              ??          3Bh    ;
ram:065b28b6    f7              ??          F7h
ram:065b28b7    74              ??          74h    t
ram:065b28b8    1e              ??          1Eh
ram:065b28b9    8b              ??          8Bh
ram:065b28ba    2d              ??          2Dh    -
ram:065b28bb    30              ??          30h    0
ram:065b28bc    70              ??          70h    p
ram:065b28bd    5b              ??          5Bh    [
ram:065b28be    06              ??          06h
ram:065b28bf    8b              ??          8Bh
ram:065b28c0    46              ??          46h    F
ram:065b28c1    0c              ??          0Ch
ram:065b28c2    8d              ??          8Dh
ram:065b28c3    54              ??          54h    T
ram:065b28c4    24              ??          24h    $
ram:065b28c5    10              ??          10h
ram:065b28c6    52              ??          52h    R
ram:065b28c7    50              ??          50h    P
ram:065b28c8    ff              ??          FFh
ram:065b28c9    d5              ??          D5h
ram:065b28ca    83              ??          83h
ram:065b28cb    c4              ??          C4h
ram:065b28cc    08              ??          08h
ram:065b28cd    85              ??          85h
ram:065b28ce    c0              ??          C0h
ram:065b28cf    74              ??          74h    t
ram:065b28d0    16              ??          16h
ram:065b28d1    8b              ??          8Bh
ram:065b28d2    36              ??          36h    6
ram:065b28d3    3b              ??          3Bh    ;
ram:065b28d4    f7              ??          F7h
ram:065b28d5    75              ??          75h    u
ram:065b28d6    e8              ??          E8h
ram:065b28d7    5f              ??          5Fh    _
ram:065b28d8    5e              ??          5Eh    ^
ram:065b28d9    5d              ??          5Dh    ]
ram:065b28da    83              ??          83h
ram:065b28db    c8              ??          C8h
ram:065b28dc    ff              ??          FFh
ram:065b28dd    5b              ??          5Bh    [
ram:065b28de    81              ??          81h
ram:065b28df    c4              ??          C4h
ram:065b28e0    04              ??          04h
ram:065b28e1    01              ??          01h
ram:065b28e2    00              ??          00h
ram:065b28e3    00              ??          00h
ram:065b28e4    c2              ??          C2h
ram:065b28e5    08              ??          08h
ram:065b28e6    00              ??          00h
ram:065b28e7    8b              ??          8Bh
ram:065b28e8    4e              ??          4Eh    N
ram:065b28e9    0c              ??          0Ch
ram:065b28ea    51              ??          51h    Q
ram:065b28eb    8b              ??          8Bh
ram:065b28ec    cb              ??          CBh
ram:065b28ed    e8              ??          E8h
ram:065b28ee    fe              ??          FEh
ram:065b28ef    06              ??          06h
ram:065b28f0    00              ??          00h
ram:065b28f1    00              ??          00h
ram:065b28f2    8b              ??          8Bh
ram:065b28f3    56              ??          56h    V
ram:065b28f4    08              ??          08h
ram:065b28f5    52              ??          52h    R
ram:065b28f6    ff              ??          FFh
ram:065b28f7    15              ??          15h
ram:065b28f8    10              ??          10h
ram:065b28f9    70              ??          70h    p
ram:065b28fa    5b              ??          5Bh    [
ram:065b28fb    06              ??          06h
ram:065b28fc    8b              ??          8Bh
ram:065b28fd    46              ??          46h    F
ram:065b28fe    04              ??          04h
ram:065b28ff    8b              ??          8Bh
ram:065b2900    0e              ??          0Eh
ram:065b2901    89              ??          89h
ram:065b2902    08              ??          08h
ram:065b2903    8b              ??          8Bh
ram:065b2904    16              ??          16h
ram:065b2905    8b              ??          8Bh
ram:065b2906    46              ??          46h    F
ram:065b2907    04              ??          04h
ram:065b2908    89              ??          89h
ram:065b2909    42              ??          42h    B
ram:065b290a    04              ??          04h
ram:065b290b    8b              ??          8Bh
ram:065b290c    4e              ??          4Eh    N
ram:065b290d    0c              ??          0Ch
ram:065b290e    51              ??          51h    Q
ram:065b290f    e8              ??          E8h
ram:065b2910    ae              ??          AEh
ram:065b2911    35              ??          35h    5
ram:065b2912    00              ??          00h
ram:065b2913    00              ??          00h
ram:065b2914    56              ??          56h    V
ram:065b2915    c7              ??          C7h
ram:065b2916    46              ??          46h    F
ram:065b2917    0c              ??          0Ch
ram:065b2918    00              ??          00h
ram:065b2919    00              ??          00h
ram:065b291a    00              ??          00h
ram:065b291b    00              ??          00h
ram:065b291c    e8              ??          E8h
ram:065b291d    a1              ??          A1h
ram:065b291e    35              ??          35h    5
ram:065b291f    00              ??          00h
ram:065b2920    00              ??          00h
ram:065b2921    8b              ??          8Bh
ram:065b2922    43              ??          43h    C
ram:065b2923    24              ??          24h    $
ram:065b2924    83              ??          83h
ram:065b2925    c4              ??          C4h
ram:065b2926    08              ??          08h
ram:065b2927    48              ??          48h    H
ram:065b2928    5f              ??          5Fh    _
ram:065b2929    5e              ??          5Eh    ^
ram:065b292a    89              ??          89h
ram:065b292b    43              ??          43h    C
ram:065b292c    24              ??          24h    $
ram:065b292d    5d              ??          5Dh    ]
ram:065b292e    33              ??          33h    3
ram:065b292f    c0              ??          C0h
ram:065b2930    5b              ??          5Bh    [
ram:065b2931    81              ??          81h
ram:065b2932    c4              ??          C4h
ram:065b2933    04              ??          04h
ram:065b2934    01              ??          01h
ram:065b2935    00              ??          00h
ram:065b2936    00              ??          00h
ram:065b2937    c2              ??          C2h
ram:065b2938    08              ??          08h
ram:065b2939    00              ??          00h
ram:065b293a    90              ??          90h
ram:065b293b    90              ??          90h
ram:065b293c    90              ??          90h
ram:065b293d    90              ??          90h
ram:065b293e    90              ??          90h
ram:065b293f    90              ??          90h
ram:065b2940    55              ??          55h    U
ram:065b2941    8b              ??          8Bh
ram:065b2942    6c              ??          6Ch    l
ram:065b2943    24              ??          24h    $
ram:065b2944    08              ??          08h
ram:065b2945    56              ??          56h    V
ram:065b2946    57              ??          57h    W
ram:065b2947    8b              ??          8Bh
ram:065b2948    45              ??          45h    E
ram:065b2949    2c              ??          2Ch    ,
ram:065b294a    85              ??          85h
ram:065b294b    c0              ??          C0h
ram:065b294c    74              ??          74h    t
ram:065b294d    0d              ??          0Dh
ram:065b294e    8b              ??          8Bh
ram:065b294f    08              ??          08h
ram:065b2950    50              ??          50h    P
ram:065b2951    ff              ??          FFh
ram:065b2952    51              ??          51h    Q
ram:065b2953    08              ??          08h
ram:065b2954    c7              ??          C7h
ram:065b2955    45              ??          45h    E
ram:065b2956    2c              ??          2Ch    ,
ram:065b2957    00              ??          00h
ram:065b2958    00              ??          00h
ram:065b2959    00              ??          00h
ram:065b295a    00              ??          00h
ram:065b295b    8b              ??          8Bh
ram:065b295c    45              ??          45h    E
ram:065b295d    0c              ??          0Ch
ram:065b295e    8b              ??          8Bh
ram:065b295f    38              ??          38h    8
ram:065b2960    3b              ??          3Bh    ;
ram:065b2961    f8              ??          F8h
ram:065b2962    74              ??          74h    t
ram:065b2963    56              ??          56h    V
ram:065b2964    53              ??          53h    S
ram:065b2965    8d              ??          8Dh
ram:065b2966    5d              ??          5Dh    ]
ram:065b2967    08              ??          08h
ram:065b2968    8b              ??          8Bh
ram:065b2969    47              ??          47h    G
ram:065b296a    14              ??          14h
ram:065b296b    8b              ??          8Bh
ram:065b296c    30              ??          30h    0
ram:065b296d    3b              ??          3Bh    ;
ram:065b296e    f0              ??          F0h
ram:065b296f    74              ??          74h    t
ram:065b2970    32              ??          32h    2
ram:065b2971    8b              ??          8Bh
ram:065b2972    56              ??          56h    V
ram:065b2973    04              ??          04h
ram:065b2974    8b              ??          8Bh
ram:065b2975    06              ??          06h
ram:065b2976    6a              ??          6Ah    j
ram:065b2977    00              ??          00h
ram:065b2978    89              ??          89h
ram:065b2979    02              ??          02h
ram:065b297a    8b              ??          8Bh
ram:065b297b    0e              ??          0Eh
ram:065b297c    8b              ??          8Bh
ram:065b297d    56              ??          56h    V
ram:065b297e    04              ??          04h
ram:065b297f    89              ??          89h
ram:065b2980    51              ??          51h    Q
ram:065b2981    04              ??          04h
ram:065b2982    8d              ??          8Dh
ram:065b2983    4e              ??          4Eh    N
ram:065b2984    08              ??          08h
ram:065b2985    e8              ??          E8h
ram:065b2986    96              ??          96h
ram:065b2987    19              ??          19h
ram:065b2988    00              ??          00h
ram:065b2989    00              ??          00h
ram:065b298a    56              ??          56h    V
ram:065b298b    e8              ??          E8h
ram:065b298c    32              ??          32h    2
ram:065b298d    35              ??          35h    5
ram:065b298e    00              ??          00h
ram:065b298f    00              ??          00h
ram:065b2990    8b              ??          8Bh
ram:065b2991    57              ??          57h    W
ram:065b2992    18              ??          18h
ram:065b2993    8b              ??          8Bh
ram:065b2994    47              ??          47h    G
ram:065b2995    14              ??          14h
ram:065b2996    83              ??          83h
ram:065b2997    c4              ??          C4h
ram:065b2998    04              ??          04h
ram:065b2999    4a              ??          4Ah    J
ram:065b299a    89              ??          89h
ram:065b299b    57              ??          57h    W
ram:065b299c    18              ??          18h
ram:065b299d    8b              ??          8Bh
ram:065b299e    30              ??          30h    0
ram:065b299f    3b              ??          3Bh    ;
ram:065b29a0    f0              ??          F0h
ram:065b29a1    75              ??          75h    u
ram:065b29a2    ce              ??          CEh
ram:065b29a3    8d              ??          8Dh
ram:065b29a4    44              ??          44h    D
ram:065b29a5    24              ??          24h    $
ram:065b29a6    14              ??          14h
ram:065b29a7    57              ??          57h    W
ram:065b29a8    50              ??          50h    P
ram:065b29a9    8b              ??          8Bh
ram:065b29aa    cb              ??          CBh
ram:065b29ab    e8              ??          E8h
ram:065b29ac    90              ??          90h
ram:065b29ad    0c              ??          0Ch
ram:065b29ae    00              ??          00h
ram:065b29af    00              ??          00h
ram:065b29b0    8b              ??          8Bh
ram:065b29b1    45              ??          45h    E
ram:065b29b2    0c              ??          0Ch
ram:065b29b3    8b              ??          8Bh
ram:065b29b4    38              ??          38h    8
ram:065b29b5    3b              ??          3Bh    ;
ram:065b29b6    f8              ??          F8h
ram:065b29b7    75              ??          75h    u
ram:065b29b8    af              ??          AFh
ram:065b29b9    5b              ??          5Bh    [
ram:065b29ba    8b              ??          8Bh
ram:065b29bb    45              ??          45h    E
ram:065b29bc    20              ??          20h
ram:065b29bd    8b              ??          8Bh
ram:065b29be    30              ??          30h    0
ram:065b29bf    3b              ??          3Bh    ;
ram:065b29c0    f0              ??          F0h
ram:065b29c1    74              ??          74h    t
ram:065b29c2    44              ??          44h    D
ram:065b29c3    8b              ??          8Bh
ram:065b29c4    3d              ??          3Dh    =
ram:065b29c5    10              ??          10h
ram:065b29c6    70              ??          70h    p
ram:065b29c7    5b              ??          5Bh    [
ram:065b29c8    06              ??          06h
ram:065b29c9    8b              ??          8Bh
ram:065b29ca    4e              ??          4Eh    N
ram:065b29cb    08              ??          08h
ram:065b29cc    51              ??          51h    Q
ram:065b29cd    ff              ??          FFh
ram:065b29ce    d7              ??          D7h
ram:065b29cf    8b              ??          8Bh
ram:065b29d0    56              ??          56h    V
ram:065b29d1    04              ??          04h
ram:065b29d2    8b              ??          8Bh
ram:065b29d3    06              ??          06h
ram:065b29d4    89              ??          89h
ram:065b29d5    02              ??          02h
ram:065b29d6    8b              ??          8Bh
ram:065b29d7    0e              ??          0Eh
ram:065b29d8    8b              ??          8Bh
ram:065b29d9    56              ??          56h    V
ram:065b29da    04              ??          04h
ram:065b29db    89              ??          89h
ram:065b29dc    51              ??          51h    Q
ram:065b29dd    04              ??          04h
ram:065b29de    8b              ??          8Bh
ram:065b29df    46              ??          46h    F
ram:065b29e0    0c              ??          0Ch
ram:065b29e1    50              ??          50h    P
ram:065b29e2    e8              ??          E8h
ram:065b29e3    db              ??          DBh
ram:065b29e4    34              ??          34h    4
ram:065b29e5    00              ??          00h
ram:065b29e6    00              ??          00h
ram:065b29e7    56              ??          56h    V
ram:065b29e8    c7              ??          C7h
ram:065b29e9    46              ??          46h    F
ram:065b29ea    0c              ??          0Ch
ram:065b29eb    00              ??          00h
ram:065b29ec    00              ??          00h
ram:065b29ed    00              ??          00h
ram:065b29ee    00              ??          00h
ram:065b29ef    e8              ??          E8h
ram:065b29f0    ce              ??          CEh
ram:065b29f1    34              ??          34h    4
ram:065b29f2    00              ??          00h
ram:065b29f3    00              ??          00h
ram:065b29f4    8b              ??          8Bh
ram:065b29f5    55              ??          55h    U
ram:065b29f6    24              ??          24h    $
ram:065b29f7    83              ??          83h
ram:065b29f8    c4              ??          C4h
ram:065b29f9    08              ??          08h
ram:065b29fa    4a              ??          4Ah    J
ram:065b29fb    89              ??          89h
ram:065b29fc    55              ??          55h    U
ram:065b29fd    24              ??          24h    $
ram:065b29fe    8b              ??          8Bh
ram:065b29ff    45              ??          45h    E
ram:065b2a00    20              ??          20h
ram:065b2a01    8b              ??          8Bh
ram:065b2a02    30              ??          30h    0
ram:065b2a03    3b              ??          3Bh    ;
ram:065b2a04    f0              ??          F0h
ram:065b2a05    75              ??          75h    u
ram:065b2a06    c2              ??          C2h
ram:065b2a07    8b              ??          8Bh
ram:065b2a08    8d              ??          8Dh
ram:065b2a09    34              ??          34h    4
ram:065b2a0a    01              ??          01h
ram:065b2a0b    00              ??          00h
ram:065b2a0c    00              ??          00h
ram:065b2a0d    51              ??          51h    Q
ram:065b2a0e    e8              ??          E8h
ram:065b2a0f    af              ??          AFh
ram:065b2a10    34              ??          34h    4
ram:065b2a11    00              ??          00h
ram:065b2a12    00              ??          00h
ram:065b2a13    83              ??          83h
ram:065b2a14    c4              ??          C4h
ram:065b2a15    04              ??          04h
ram:065b2a16    c7              ??          C7h
ram:065b2a17    85              ??          85h
ram:065b2a18    34              ??          34h    4
ram:065b2a19    01              ??          01h
ram:065b2a1a    00              ??          00h
ram:065b2a1b    00              ??          00h
ram:065b2a1c    00              ??          00h
ram:065b2a1d    00              ??          00h
ram:065b2a1e    00              ??          00h
ram:065b2a1f    00              ??          00h
ram:065b2a20    c6              ??          C6h
ram:065b2a21    45              ??          45h    E
ram:065b2a22    04              ??          04h
ram:065b2a23    00              ??          00h
ram:065b2a24    33              ??          33h    3
ram:065b2a25    c0              ??          C0h
ram:065b2a26    5f              ??          5Fh    _
ram:065b2a27    5e              ??          5Eh    ^
ram:065b2a28    5d              ??          5Dh    ]
ram:065b2a29    c2              ??          C2h
ram:065b2a2a    04              ??          04h
ram:065b2a2b    00              ??          00h
ram:065b2a2c    90              ??          90h
ram:065b2a2d    90              ??          90h
ram:065b2a2e    90              ??          90h
ram:065b2a2f    90              ??          90h
ram:065b2a30    83              ??          83h
ram:065b2a31    ec              ??          ECh
ram:065b2a32    0c              ??          0Ch
ram:065b2a33    8d              ??          8Dh
ram:065b2a34    44              ??          44h    D
ram:065b2a35    24              ??          24h    $
ram:065b2a36    00              ??          00h
ram:065b2a37    8d              ??          8Dh
ram:065b2a38    4c              ??          4Ch    L
ram:065b2a39    24              ??          24h    $
ram:065b2a3a    04              ??          04h
ram:065b2a3b    8d              ??          8Dh
ram:065b2a3c    54              ??          54h    T
ram:065b2a3d    24              ??          24h    $
ram:065b2a3e    08              ??          08h
ram:065b2a3f    56              ??          56h    V
ram:065b2a40    57              ??          57h    W
ram:065b2a41    50              ??          50h    P
ram:065b2a42    51              ??          51h    Q
ram:065b2a43    52              ??          52h    R
ram:065b2a44    33              ??          33h    3
ram:065b2a45    ff              ??          FFh
ram:065b2a46    be              ??          BEh
ram:065b2a47    fe              ??          FEh
ram:065b2a48    ff              ??          FFh
ram:065b2a49    ff              ??          FFh
ram:065b2a4a    ff              ??          FFh
ram:065b2a4b    e8              ??          E8h
ram:065b2a4c    10              ??          10h
ram:065b2a4d    0a              ??          0Ah
ram:065b2a4e    00              ??          00h
ram:065b2a4f    00              ??          00h
ram:065b2a50    8b              ??          8Bh
ram:065b2a51    44              ??          44h    D
ram:065b2a52    24              ??          24h    $
ram:065b2a53    2c              ??          2Ch    ,
ram:065b2a54    83              ??          83h
ram:065b2a55    c4              ??          C4h
ram:065b2a56    0c              ??          0Ch
ram:065b2a57    8b              ??          8Bh
ram:065b2a58    c8              ??          C8h
ram:065b2a59    83              ??          83h
ram:065b2a5a    e1              ??          E1h
ram:065b2a5b    03              ??          03h
ram:065b2a5c    80              ??          80h
ram:065b2a5d    f9              ??          F9h
ram:065b2a5e    03              ??          03h
ram:065b2a5f    75              ??          75h    u
ram:065b2a60    0a              ??          0Ah
ram:065b2a61    8b              ??          8Bh
ram:065b2a62    c6              ??          C6h
ram:065b2a63    5f              ??          5Fh    _
ram:065b2a64    5e              ??          5Eh    ^
ram:065b2a65    83              ??          83h
ram:065b2a66    c4              ??          C4h
ram:065b2a67    0c              ??          0Ch
ram:065b2a68    c2              ??          C2h
ram:065b2a69    0c              ??          0Ch
ram:065b2a6a    00              ??          00h
ram:065b2a6b    a8              ??          A8h
ram:065b2a6c    02              ??          02h
ram:065b2a6d    53              ??          53h    S
ram:065b2a6e    74              ??          74h    t
ram:065b2a6f    4a              ??          4Ah    J
ram:065b2a70    8b              ??          8Bh
ram:065b2a71    5c              ??          5Ch    \
ram:065b2a72    24              ??          24h    $
ram:065b2a73    1c              ??          1Ch
ram:065b2a74    8d              ??          8Dh
ram:065b2a75    4c              ??          4Ch    L
ram:065b2a76    24              ??          24h    $
ram:065b2a77    1c              ??          1Ch
ram:065b2a78    51              ??          51h    Q
ram:065b2a79    68              ??          68h    h
ram:065b2a7a    f4              ??          F4h
ram:065b2a7b    81              ??          81h
ram:065b2a7c    5b              ??          5Bh    [
ram:065b2a7d    06              ??          06h
ram:065b2a7e    8b              ??          8Bh
ram:065b2a7f    43              ??          43h    C
ram:065b2a80    28              ??          28h    (
ram:065b2a81    50              ??          50h    P
ram:065b2a82    8b              ??          8Bh
ram:065b2a83    10              ??          10h
ram:065b2a84    ff              ??          FFh
ram:065b2a85    12              ??          12h
ram:065b2a86    85              ??          85h
ram:065b2a87    c0              ??          C0h
ram:065b2a88    7c              ??          7Ch    |
ram:065b2a89    64              ??          64h    d
ram:065b2a8a    8b              ??          8Bh
ram:065b2a8b    74              ??          74h    t
ram:065b2a8c    24              ??          24h    $
ram:065b2a8d    20              ??          20h
ram:065b2a8e    83              ??          83h
ram:065b2a8f    c9              ??          C9h
ram:065b2a90    ff              ??          FFh
ram:065b2a91    8b              ??          8Bh
ram:065b2a92    fe              ??          FEh
ram:065b2a93    33              ??          33h    3
ram:065b2a94    c0              ??          C0h
ram:065b2a95    f2              ??          F2h
ram:065b2a96    ae              ??          AEh
ram:065b2a97    8b              ??          8Bh
ram:065b2a98    54              ??          54h    T
ram:065b2a99    24              ??          24h    $
ram:065b2a9a    1c              ??          1Ch
ram:065b2a9b    55              ??          55h    U
ram:065b2a9c    f7              ??          F7h
ram:065b2a9d    d1              ??          D1h
ram:065b2a9e    8b              ??          8Bh
ram:065b2a9f    2a              ??          2Ah    *
ram:065b2aa0    49              ??          49h    I
ram:065b2aa1    51              ??          51h    Q
ram:065b2aa2    56              ??          56h    V
ram:065b2aa3    52              ??          52h    R
ram:065b2aa4    ff              ??          FFh
ram:065b2aa5    55              ??          55h    U
ram:065b2aa6    10              ??          10h
ram:065b2aa7    8b              ??          8Bh
ram:065b2aa8    f0              ??          F0h
ram:065b2aa9    5d              ??          5Dh    ]
ram:065b2aaa    8b              ??          8Bh
ram:065b2aab    44              ??          44h    D
ram:065b2aac    24              ??          24h    $
ram:065b2aad    1c              ??          1Ch
ram:065b2aae    85              ??          85h
ram:065b2aaf    c0              ??          C0h
ram:065b2ab0    74              ??          74h    t
ram:065b2ab1    26              ??          26h    &
ram:065b2ab2    8b              ??          8Bh
ram:065b2ab3    10              ??          10h
ram:065b2ab4    50              ??          50h    P
ram:065b2ab5    ff              ??          FFh
ram:065b2ab6    52              ??          52h    R
ram:065b2ab7    08              ??          08h
ram:065b2ab8    eb              ??          EBh
ram:065b2ab9    1e              ??          1Eh
ram:065b2aba    a8              ??          A8h
ram:065b2abb    01              ??          01h
ram:065b2abc    74              ??          74h    t
ram:065b2abd    05              ??          05h
ram:065b2abe    bf              ??          BFh
ram:065b2abf    01              ??          01h
ram:065b2ac0    00              ??          00h
ram:065b2ac1    00              ??          00h
ram:065b2ac2    00              ??          00h
ram:065b2ac3    8b              ??          8Bh
ram:065b2ac4    5c              ??          5Ch    \
ram:065b2ac5    24              ??          24h    $
ram:065b2ac6    1c              ??          1Ch
ram:065b2ac7    8b              ??          8Bh
ram:065b2ac8    54              ??          54h    T
ram:065b2ac9    24              ??          24h    $
ram:065b2aca    20              ??          20h
ram:065b2acb    57              ??          57h    W
ram:065b2acc    52              ??          52h    R
ram:065b2acd    8b              ??          8Bh
ram:065b2ace    43              ??          43h    C
ram:065b2acf    28              ??          28h    (
ram:065b2ad0    50              ??          50h    P
ram:065b2ad1    8b              ??          8Bh
ram:065b2ad2    08              ??          08h
ram:065b2ad3    ff              ??          FFh
ram:065b2ad4    51              ??          51h    Q
ram:065b2ad5    0c              ??          0Ch
ram:065b2ad6    8b              ??          8Bh
ram:065b2ad7    f0              ??          F0h
ram:065b2ad8    85              ??          85h
ram:065b2ad9    f6              ??          F6h
ram:065b2ada    75              ??          75h    u
ram:065b2adb    12              ??          12h
ram:065b2adc    8b              ??          8Bh
ram:065b2add    cb              ??          CBh
ram:065b2ade    e8              ??          E8h
ram:065b2adf    3d              ??          3Dh    =
ram:065b2ae0    00              ??          00h
ram:065b2ae1    00              ??          00h
ram:065b2ae2    00              ??          00h
ram:065b2ae3    5b              ??          5Bh    [
ram:065b2ae4    8b              ??          8Bh
ram:065b2ae5    c6              ??          C6h
ram:065b2ae6    5f              ??          5Fh    _
ram:065b2ae7    5e              ??          5Eh    ^
ram:065b2ae8    83              ??          83h
ram:065b2ae9    c4              ??          C4h
ram:065b2aea    0c              ??          0Ch
ram:065b2aeb    c2              ??          C2h
ram:065b2aec    0c              ??          0Ch
ram:065b2aed    00              ??          00h
ram:065b2aee    68              ??          68h    h
ram:065b2aef    c0              ??          C0h
ram:065b2af0    81              ??          81h
ram:065b2af1    5b              ??          5Bh    [
ram:065b2af2    06              ??          06h
ram:065b2af3    68              ??          68h    h
ram:065b2af4    e6              ??          E6h
ram:065b2af5    02              ??          02h
ram:065b2af6    00              ??          00h
ram:065b2af7    00              ??          00h
ram:065b2af8    b8              ??          B8h
ram:065b2af9    02              ??          02h
ram:065b2afa    00              ??          00h
ram:065b2afb    10              ??          10h
ram:065b2afc    00              ??          00h
ram:065b2afd    68              ??          68h    h
ram:065b2afe    30              ??          30h    0
ram:065b2aff    81              ??          81h
ram:065b2b00    5b              ??          5Bh    [
ram:065b2b01    06              ??          06h
ram:065b2b02    68              ??          68h    h
ram:065b2b03    a4              ??          A4h
ram:065b2b04    81              ??          81h
ram:065b2b05    5b              ??          5Bh    [
ram:065b2b06    06              ??          06h
ram:065b2b07    50              ??          50h    P
ram:065b2b08    ff              ??          FFh
ram:065b2b09    15              ??          15h
ram:065b2b0a    34              ??          34h    4
ram:065b2b0b    8a              ??          8Ah
ram:065b2b0c    5b              ??          5Bh    [
ram:065b2b0d    06              ??          06h
ram:065b2b0e    83              ??          83h
ram:065b2b0f    c4              ??          C4h
ram:065b2b10    14              ??          14h
ram:065b2b11    8b              ??          8Bh
ram:065b2b12    c6              ??          C6h
ram:065b2b13    5b              ??          5Bh    [
ram:065b2b14    5f              ??          5Fh    _
ram:065b2b15    5e              ??          5Eh    ^
ram:065b2b16    83              ??          83h
ram:065b2b17    c4              ??          C4h
ram:065b2b18    0c              ??          0Ch
ram:065b2b19    c2              ??          C2h
ram:065b2b1a    0c              ??          0Ch
ram:065b2b1b    00              ??          00h
ram:065b2b1c    90              ??          90h
ram:065b2b1d    90              ??          90h
ram:065b2b1e    90              ??          90h
ram:065b2b1f    90              ??          90h
ram:065b2b20    b8              ??          B8h
ram:065b2b21    34              ??          34h    4
ram:065b2b22    27              ??          27h    '
ram:065b2b23    00              ??          00h
ram:065b2b24    00              ??          00h
ram:065b2b25    e8              ??          E8h
ram:065b2b26    b6              ??          B6h
ram:065b2b27    33              ??          33h    3
ram:065b2b28    00              ??          00h
ram:065b2b29    00              ??          00h
ram:065b2b2a    53              ??          53h    S
ram:065b2b2b    8b              ??          8Bh
ram:065b2b2c    d9              ??          D9h
ram:065b2b2d    8a              ??          8Ah
ram:065b2b2e    43              ??          43h    C
ram:065b2b2f    04              ??          04h
ram:065b2b30    84              ??          84h
ram:065b2b31    c0              ??          C0h
ram:065b2b32    0f              ??          0Fh
ram:065b2b33    85              ??          85h
ram:065b2b34    67              ??          67h    g
ram:065b2b35    03              ??          03h
ram:065b2b36    00              ??          00h
ram:065b2b37    00              ??          00h
ram:065b2b38    8b              ??          8Bh
ram:065b2b39    43              ??          43h    C
ram:065b2b3a    28              ??          28h    (
ram:065b2b3b    55              ??          55h    U
ram:065b2b3c    56              ??          56h    V
ram:065b2b3d    57              ??          57h    W
ram:065b2b3e    8b              ??          8Bh
ram:065b2b3f    08              ??          08h
ram:065b2b40    6a              ??          6Ah    j
ram:065b2b41    03              ??          03h
ram:065b2b42    68              ??          68h    h
ram:065b2b43    cc              ??          CCh
ram:065b2b44    82              ??          82h
ram:065b2b45    5b              ??          5Bh    [
ram:065b2b46    06              ??          06h
ram:065b2b47    50              ??          50h    P
ram:065b2b48    ff              ??          FFh
ram:065b2b49    51              ??          51h    Q
ram:065b2b4a    14              ??          14h
ram:065b2b4b    8b              ??          8Bh
ram:065b2b4c    e8              ??          E8h
ram:065b2b4d    85              ??          85h
ram:065b2b4e    ed              ??          EDh
ram:065b2b4f    0f              ??          0Fh
ram:065b2b50    84              ??          84h
ram:065b2b51    8a              ??          8Ah
ram:065b2b52    02              ??          02h
ram:065b2b53    00              ??          00h
ram:065b2b54    00              ??          00h
ram:065b2b55    8b              ??          8Bh
ram:065b2b56    43              ??          43h    C
ram:065b2b57    28              ??          28h    (
ram:065b2b58    8d              ??          8Dh
ram:065b2b59    8c              ??          8Ch
ram:065b2b5a    24              ??          24h    $
ram:065b2b5b    38              ??          38h    8
ram:065b2b5c    01              ??          01h
ram:065b2b5d    00              ??          00h
ram:065b2b5e    00              ??          00h
ram:065b2b5f    68              ??          68h    h
ram:065b2b60    00              ??          00h
ram:065b2b61    04              ??          04h
ram:065b2b62    00              ??          00h
ram:065b2b63    00              ??          00h
ram:065b2b64    51              ??          51h    Q
ram:065b2b65    8b              ??          8Bh
ram:065b2b66    10              ??          10h
ram:065b2b67    68              ??          68h    h
ram:065b2b68    c4              ??          C4h
ram:065b2b69    82              ??          82h
ram:065b2b6a    5b              ??          5Bh    [
ram:065b2b6b    06              ??          06h
ram:065b2b6c    55              ??          55h    U
ram:065b2b6d    50              ??          50h    P
ram:065b2b6e    ff              ??          FFh
ram:065b2b6f    52              ??          52h    R
ram:065b2b70    20              ??          20h
ram:065b2b71    85              ??          85h
ram:065b2b72    c0              ??          C0h
ram:065b2b73    0f              ??          0Fh
ram:065b2b74    84              ??          84h
ram:065b2b75    db              ??          DBh
ram:065b2b76    01              ??          01h
ram:065b2b77    00              ??          00h
ram:065b2b78    00              ??          00h
ram:065b2b79    8d              ??          8Dh
ram:065b2b7a    94              ??          94h
ram:065b2b7b    24              ??          24h    $
ram:065b2b7c    3c              ??          3Ch    <
ram:065b2b7d    05              ??          05h
ram:065b2b7e    00              ??          00h
ram:065b2b7f    00              ??          00h
ram:065b2b80    68              ??          68h    h
ram:065b2b81    04              ??          04h
ram:065b2b82    01              ??          01h
ram:065b2b83    00              ??          00h
ram:065b2b84    00              ??          00h
ram:065b2b85    52              ??          52h    R
ram:065b2b86    6a              ??          6Ah    j
ram:065b2b87    00              ??          00h
ram:065b2b88    ff              ??          FFh
ram:065b2b89    15              ??          15h
ram:065b2b8a    14              ??          14h
ram:065b2b8b    70              ??          70h    p
ram:065b2b8c    5b              ??          5Bh    [
ram:065b2b8d    06              ??          06h
ram:065b2b8e    6a              ??          6Ah    j
ram:065b2b8f    00              ??          00h
ram:065b2b90    8d              ??          8Dh
ram:065b2b91    84              ??          84h
ram:065b2b92    24              ??          24h    $
ram:065b2b93    44              ??          44h    D
ram:065b2b94    06              ??          06h
ram:065b2b95    00              ??          00h
ram:065b2b96    00              ??          00h
ram:065b2b97    6a              ??          6Ah    j
ram:065b2b98    00              ??          00h
ram:065b2b99    8d              ??          8Dh
ram:065b2b9a    4c              ??          4Ch    L
ram:065b2b9b    24              ??          24h    $
ram:065b2b9c    1c              ??          1Ch
ram:065b2b9d    50              ??          50h    P
ram:065b2b9e    8d              ??          8Dh
ram:065b2b9f    94              ??          94h
ram:065b2ba0    24              ??          24h    $
ram:065b2ba1    48              ??          48h    H
ram:065b2ba2    05              ??          05h
ram:065b2ba3    00              ??          00h
ram:065b2ba4    00              ??          00h
ram:065b2ba5    51              ??          51h    Q
ram:065b2ba6    52              ??          52h    R
ram:065b2ba7    ff              ??          FFh
ram:065b2ba8    15              ??          15h
ram:065b2ba9    44              ??          44h    D
ram:065b2baa    70              ??          70h    p
ram:065b2bab    5b              ??          5Bh    [
ram:065b2bac    06              ??          06h
ram:065b2bad    6a              ??          6Ah    j
ram:065b2bae    00              ??          00h
ram:065b2baf    8d              ??          8Dh
ram:065b2bb0    84              ??          84h
ram:065b2bb1    24              ??          24h    $
ram:065b2bb2    58              ??          58h    X
ram:065b2bb3    06              ??          06h
ram:065b2bb4    00              ??          00h
ram:065b2bb5    00              ??          00h
ram:065b2bb6    6a              ??          6Ah    j
ram:065b2bb7    00              ??          00h
ram:065b2bb8    8d              ??          8Dh
ram:065b2bb9    4c              ??          4Ch    L
ram:065b2bba    24              ??          24h    $
ram:065b2bbb    30              ??          30h    0
ram:065b2bbc    50              ??          50h    P
ram:065b2bbd    8d              ??          8Dh
ram:065b2bbe    54              ??          54h    T
ram:065b2bbf    24              ??          24h    $
ram:065b2bc0    54              ??          54h    T
ram:065b2bc1    51              ??          51h    Q
ram:065b2bc2    52              ??          52h    R
ram:065b2bc3    ff              ??          FFh
ram:065b2bc4    15              ??          15h
ram:065b2bc5    6c              ??          6Ch    l
ram:065b2bc6    70              ??          70h    p
ram:065b2bc7    5b              ??          5Bh    [
ram:065b2bc8    06              ??          06h
ram:065b2bc9    8a              ??          8Ah
ram:065b2bca    94              ??          94h
ram:065b2bcb    24              ??          24h    $
ram:065b2bcc    60              ??          60h    `
ram:065b2bcd    01              ??          01h
ram:065b2bce    00              ??          00h
ram:065b2bcf    00              ??          00h
ram:065b2bd0    83              ??          83h
ram:065b2bd1    c4              ??          C4h
ram:065b2bd2    28              ??          28h    (
ram:065b2bd3    80              ??          80h
ram:065b2bd4    fa              ??          FAh
ram:065b2bd5    5c              ??          5Ch    \
ram:065b2bd6    8d              ??          8Dh
ram:065b2bd7    b4              ??          B4h
ram:065b2bd8    24              ??          24h    $
ram:065b2bd9    38              ??          38h    8
ram:065b2bda    01              ??          01h
ram:065b2bdb    00              ??          00h
ram:065b2bdc    00              ??          00h
ram:065b2bdd    0f              ??          0Fh
ram:065b2bde    84              ??          84h
ram:065b2bdf    33              ??          33h    3
ram:065b2be0    01              ??          01h
ram:065b2be1    00              ??          00h
ram:065b2be2    00              ??          00h
ram:065b2be3    80              ??          80h
ram:065b2be4    fa              ??          FAh
ram:065b2be5    2f              ??          2Fh    /
ram:065b2be6    0f              ??          0Fh
ram:065b2be7    84              ??          84h
ram:065b2be8    2a              ??          2Ah    *
ram:065b2be9    01              ??          01h
ram:065b2bea    00              ??          00h
ram:065b2beb    00              ??          00h
ram:065b2bec    80              ??          80h
ram:065b2bed    bc              ??          BCh
ram:065b2bee    24              ??          24h    $
ram:065b2bef    39              ??          39h    9
ram:065b2bf0    01              ??          01h
ram:065b2bf1    00              ??          00h
ram:065b2bf2    00              ??          00h
ram:065b2bf3    3a              ??          3Ah    :
ram:065b2bf4    0f              ??          0Fh
ram:065b2bf5    84              ??          84h
ram:065b2bf6    1c              ??          1Ch
ram:065b2bf7    01              ??          01h
ram:065b2bf8    00              ??          00h
ram:065b2bf9    00              ??          00h
ram:065b2bfa    8d              ??          8Dh
ram:065b2bfb    7c              ??          7Ch    |
ram:065b2bfc    24              ??          24h    $
ram:065b2bfd    34              ??          34h    4
ram:065b2bfe    83              ??          83h
ram:065b2bff    c9              ??          C9h
ram:065b2c00    ff              ??          FFh
ram:065b2c01    33              ??          33h    3
ram:065b2c02    c0              ??          C0h
ram:065b2c03    f2              ??          F2h
ram:065b2c04    ae              ??          AEh
ram:065b2c05    f7              ??          F7h
ram:065b2c06    d1              ??          D1h
ram:065b2c07    49              ??          49h    I
ram:065b2c08    8d              ??          8Dh
ram:065b2c09    44              ??          44h    D
ram:065b2c0a    0c              ??          0Ch
ram:065b2c0b    33              ??          33h    3
ram:065b2c0c    8a              ??          8Ah
ram:065b2c0d    4c              ??          4Ch    L
ram:065b2c0e    0c              ??          0Ch
ram:065b2c0f    33              ??          33h    3
ram:065b2c10    80              ??          80h
ram:065b2c11    f9              ??          F9h
ram:065b2c12    2f              ??          2Fh    /
ram:065b2c13    74              ??          74h    t
ram:065b2c14    05              ??          05h
ram:065b2c15    80              ??          80h
ram:065b2c16    f9              ??          F9h
ram:065b2c17    5c              ??          5Ch    \
ram:065b2c18    75              ??          75h    u
ram:065b2c19    03              ??          03h
ram:065b2c1a    c6              ??          C6h
ram:065b2c1b    00              ??          00h
ram:065b2c1c    00              ??          00h
ram:065b2c1d    80              ??          80h
ram:065b2c1e    fa              ??          FAh
ram:065b2c1f    2e              ??          2Eh    .
ram:065b2c20    0f              ??          0Fh
ram:065b2c21    85              ??          85h
ram:065b2c22    80              ??          80h
ram:065b2c23    00              ??          00h
ram:065b2c24    00              ??          00h
ram:065b2c25    00              ??          00h
ram:065b2c26    8a              ??          8Ah
ram:065b2c27    4e              ??          4Eh    N
ram:065b2c28    01              ??          01h
ram:065b2c29    80              ??          80h
ram:065b2c2a    f9              ??          F9h
ram:065b2c2b    2e              ??          2Eh    .
ram:065b2c2c    75              ??          75h    u
ram:065b2c2d    66              ??          66h    f
ram:065b2c2e    8d              ??          8Dh
ram:065b2c2f    4c              ??          4Ch    L
ram:065b2c30    24              ??          24h    $
ram:065b2c31    34              ??          34h    4
ram:065b2c32    3b              ??          3Bh    ;
ram:065b2c33    c1              ??          C1h
ram:065b2c34    74              ??          74h    t
ram:065b2c35    15              ??          15h
ram:065b2c36    8a              ??          8Ah
ram:065b2c37    08              ??          08h
ram:065b2c38    80              ??          80h
ram:065b2c39    f9              ??          F9h
ram:065b2c3a    2f              ??          2Fh    /
ram:065b2c3b    74              ??          74h    t
ram:065b2c3c    0e              ??          0Eh
ram:065b2c3d    80              ??          80h
ram:065b2c3e    f9              ??          F9h
ram:065b2c3f    5c              ??          5Ch    \
ram:065b2c40    74              ??          74h    t
ram:065b2c41    09              ??          09h
ram:065b2c42    48              ??          48h    H
ram:065b2c43    8d              ??          8Dh
ram:065b2c44    54              ??          54h    T
ram:065b2c45    24              ??          24h    $
ram:065b2c46    34              ??          34h    4
ram:065b2c47    3b              ??          3Bh    ;
ram:065b2c48    c2              ??          C2h
ram:065b2c49    75              ??          75h    u
ram:065b2c4a    eb              ??          EBh
ram:065b2c4b    85              ??          85h
ram:065b2c4c    c0              ??          C0h
ram:065b2c4d    74              ??          74h    t
ram:065b2c4e    08              ??          08h
ram:065b2c4f    c6              ??          C6h
ram:065b2c50    00              ??          00h
ram:065b2c51    00              ??          00h
ram:065b2c52    83              ??          83h
ram:065b2c53    c6              ??          C6h
ram:065b2c54    03              ??          03h
ram:065b2c55    eb              ??          EBh
ram:065b2c56    4a              ??          4Ah    J
ram:065b2c57    68              ??          68h    h
ram:065b2c58    94              ??          94h
ram:065b2c59    82              ??          82h
ram:065b2c5a    5b              ??          5Bh    [
ram:065b2c5b    06              ??          06h
ram:065b2c5c    68              ??          68h    h
ram:065b2c5d    28              ??          28h    (
ram:065b2c5e    03              ??          03h
ram:065b2c5f    00              ??          00h
ram:065b2c60    00              ??          00h
ram:065b2c61    b8              ??          B8h
ram:065b2c62    01              ??          01h
ram:065b2c63    00              ??          00h
ram:065b2c64    10              ??          10h
ram:065b2c65    00              ??          00h
ram:065b2c66    68              ??          68h    h
ram:065b2c67    30              ??          30h    0
ram:065b2c68    81              ??          81h
ram:065b2c69    5b              ??          5Bh    [
ram:065b2c6a    06              ??          06h
ram:065b2c6b    68              ??          68h    h
ram:065b2c6c    14              ??          14h
ram:065b2c6d    81              ??          81h
ram:065b2c6e    5b              ??          5Bh    [
ram:065b2c6f    06              ??          06h
ram:065b2c70    50              ??          50h    P
ram:065b2c71    ff              ??          FFh
ram:065b2c72    15              ??          15h
ram:065b2c73    34              ??          34h    4
ram:065b2c74    8a              ??          8Ah
ram:065b2c75    5b              ??          5Bh    [
ram:065b2c76    06              ??          06h
ram:065b2c77    83              ??          83h
ram:065b2c78    c4              ??          C4h
ram:065b2c79    14              ??          14h
ram:065b2c7a    33              ??          33h    3
ram:065b2c7b    c0              ??          C0h
ram:065b2c7c    8a              ??          8Ah
ram:065b2c7d    88              ??          88h
ram:065b2c7e    90              ??          90h
ram:065b2c7f    82              ??          82h
ram:065b2c80    5b              ??          5Bh    [
ram:065b2c81    06              ??          06h
ram:065b2c82    88              ??          88h
ram:065b2c83    4c              ??          4Ch    L
ram:065b2c84    04              ??          04h
ram:065b2c85    34              ??          34h    4
ram:065b2c86    40              ??          40h    @
ram:065b2c87    84              ??          84h
ram:065b2c88    c9              ??          C9h
ram:065b2c89    75              ??          75h    u
ram:065b2c8a    f1              ??          F1h
ram:065b2c8b    8d              ??          8Dh
ram:065b2c8c    44              ??          44h    D
ram:065b2c8d    24              ??          24h    $
ram:065b2c8e    34              ??          34h    4
ram:065b2c8f    83              ??          83h
ram:065b2c90    c6              ??          C6h
ram:065b2c91    03              ??          03h
ram:065b2c92    eb              ??          EBh
ram:065b2c93    0d              ??          0Dh
ram:065b2c94    80              ??          80h
ram:065b2c95    f9              ??          F9h
ram:065b2c96    5c              ??          5Ch    \
ram:065b2c97    74              ??          74h    t
ram:065b2c98    05              ??          05h
ram:065b2c99    80              ??          80h
ram:065b2c9a    f9              ??          F9h
ram:065b2c9b    2f              ??          2Fh    /
ram:065b2c9c    75              ??          75h    u
ram:065b2c9d    03              ??          03h
ram:065b2c9e    83              ??          83h
ram:065b2c9f    c6              ??          C6h
ram:065b2ca0    02              ??          02h
ram:065b2ca1    80              ??          80h
ram:065b2ca2    3e              ??          3Eh    >
ram:065b2ca3    2e              ??          2Eh    .
ram:065b2ca4    74              ??          74h    t
ram:065b2ca5    80              ??          80h
ram:065b2ca6    8d              ??          8Dh
ram:065b2ca7    7c              ??          7Ch    |
ram:065b2ca8    24              ??          24h    $
ram:065b2ca9    34              ??          34h    4
ram:065b2caa    83              ??          83h
ram:065b2cab    c9              ??          C9h
ram:065b2cac    ff              ??          FFh
ram:065b2cad    33              ??          33h    3
ram:065b2cae    c0              ??          C0h
ram:065b2caf    8d              ??          8Dh
ram:065b2cb0    54              ??          54h    T
ram:065b2cb1    24              ??          24h    $
ram:065b2cb2    34              ??          34h    4
ram:065b2cb3    f2              ??          F2h
ram:065b2cb4    ae              ??          AEh
ram:065b2cb5    66              ??          66h    f
ram:065b2cb6    a1              ??          A1h
ram:065b2cb7    90              ??          90h
ram:065b2cb8    82              ??          82h
ram:065b2cb9    5b              ??          5Bh    [
ram:065b2cba    06              ??          06h
ram:065b2cbb    83              ??          83h
ram:065b2cbc    c9              ??          C9h
ram:065b2cbd    ff              ??          FFh
ram:065b2cbe    66              ??          66h    f
ram:065b2cbf    89              ??          89h
ram:065b2cc0    47              ??          47h    G
ram:065b2cc1    ff              ??          FFh
ram:065b2cc2    8b              ??          8Bh
ram:065b2cc3    fe              ??          FEh
ram:065b2cc4    33              ??          33h    3
ram:065b2cc5    c0              ??          C0h
ram:065b2cc6    f2              ??          F2h
ram:065b2cc7    ae              ??          AEh
ram:065b2cc8    f7              ??          F7h
ram:065b2cc9    d1              ??          D1h
ram:065b2cca    2b              ??          2Bh    +
ram:065b2ccb    f9              ??          F9h
ram:065b2ccc    8b              ??          8Bh
ram:065b2ccd    c1              ??          C1h
ram:065b2cce    8b              ??          8Bh
ram:065b2ccf    f7              ??          F7h
ram:065b2cd0    8b              ??          8Bh
ram:065b2cd1    fa              ??          FAh
ram:065b2cd2    8b              ??          8Bh
ram:065b2cd3    d0              ??          D0h
ram:065b2cd4    83              ??          83h
ram:065b2cd5    c9              ??          C9h
ram:065b2cd6    ff              ??          FFh
ram:065b2cd7    33              ??          33h    3
ram:065b2cd8    c0              ??          C0h
ram:065b2cd9    f2              ??          F2h
ram:065b2cda    ae              ??          AEh
ram:065b2cdb    8b              ??          8Bh
ram:065b2cdc    ca              ??          CAh
ram:065b2cdd    4f              ??          4Fh    O
ram:065b2cde    c1              ??          C1h
ram:065b2cdf    e9              ??          E9h
ram:065b2ce0    02              ??          02h
ram:065b2ce1    f3              ??          F3h
ram:065b2ce2    a5              ??          A5h
ram:065b2ce3    8b              ??          8Bh
ram:065b2ce4    ca              ??          CAh
ram:065b2ce5    83              ??          83h
ram:065b2ce6    e1              ??          E1h
ram:065b2ce7    03              ??          03h
ram:065b2ce8    f3              ??          F3h
ram:065b2ce9    a4              ??          A4h
ram:065b2cea    8d              ??          8Dh
ram:065b2ceb    7c              ??          7Ch    |
ram:065b2cec    24              ??          24h    $
ram:065b2ced    34              ??          34h    4
ram:065b2cee    83              ??          83h
ram:065b2cef    c9              ??          C9h
ram:065b2cf0    ff              ??          FFh
ram:065b2cf1    f2              ??          F2h
ram:065b2cf2    ae              ??          AEh
ram:065b2cf3    f7              ??          F7h
ram:065b2cf4    d1              ??          D1h
ram:065b2cf5    51              ??          51h    Q
ram:065b2cf6    e8              ??          E8h
ram:065b2cf7    d3              ??          D3h
ram:065b2cf8    31              ??          31h    1
ram:065b2cf9    00              ??          00h
ram:065b2cfa    00              ??          00h
ram:065b2cfb    83              ??          83h
ram:065b2cfc    c4              ??          C4h
ram:065b2cfd    04              ??          04h
ram:065b2cfe    89              ??          89h
ram:065b2cff    83              ??          83h
ram:065b2d00    34              ??          34h    4
ram:065b2d01    01              ??          01h
ram:065b2d02    00              ??          00h
ram:065b2d03    00              ??          00h
ram:065b2d04    8d              ??          8Dh
ram:065b2d05    4c              ??          4Ch    L
ram:065b2d06    24              ??          24h    $
ram:065b2d07    34              ??          34h    4
ram:065b2d08    8b              ??          8Bh
ram:065b2d09    d0              ??          D0h
ram:065b2d0a    8a              ??          8Ah
ram:065b2d0b    01              ??          01h
ram:065b2d0c    41              ??          41h    A
ram:065b2d0d    88              ??          88h
ram:065b2d0e    02              ??          02h
ram:065b2d0f    42              ??          42h    B
ram:065b2d10    84              ??          84h
ram:065b2d11    c0              ??          C0h
ram:065b2d12    75              ??          75h    u
ram:065b2d13    f6              ??          F6h
ram:065b2d14    eb              ??          EBh
ram:065b2d15    3e              ??          3Eh    >
ram:065b2d16    8b              ??          8Bh
ram:065b2d17    83              ??          83h
ram:065b2d18    34              ??          34h    4
ram:065b2d19    01              ??          01h
ram:065b2d1a    00              ??          00h
ram:065b2d1b    00              ??          00h
ram:065b2d1c    50              ??          50h    P
ram:065b2d1d    e8              ??          E8h
ram:065b2d1e    a0              ??          A0h
ram:065b2d1f    31              ??          31h    1
ram:065b2d20    00              ??          00h
ram:065b2d21    00              ??          00h
ram:065b2d22    8d              ??          8Dh
ram:065b2d23    bc              ??          BCh
ram:065b2d24    24              ??          24h    $
ram:065b2d25    3c              ??          3Ch    <
ram:065b2d26    01              ??          01h
ram:065b2d27    00              ??          00h
ram:065b2d28    00              ??          00h
ram:065b2d29    83              ??          83h
ram:065b2d2a    c9              ??          C9h
ram:065b2d2b    ff              ??          FFh
ram:065b2d2c    33              ??          33h    3
ram:065b2d2d    c0              ??          C0h
ram:065b2d2e    f2              ??          F2h
ram:065b2d2f    ae              ??          AEh
ram:065b2d30    f7              ??          F7h
ram:065b2d31    d1              ??          D1h
ram:065b2d32    51              ??          51h    Q
ram:065b2d33    e8              ??          E8h
ram:065b2d34    96              ??          96h
ram:065b2d35    31              ??          31h    1
ram:065b2d36    00              ??          00h
ram:065b2d37    00              ??          00h
ram:065b2d38    83              ??          83h
ram:065b2d39    c4              ??          C4h
ram:065b2d3a    08              ??          08h
ram:065b2d3b    89              ??          89h
ram:065b2d3c    83              ??          83h
ram:065b2d3d    34              ??          34h    4
ram:065b2d3e    01              ??          01h
ram:065b2d3f    00              ??          00h
ram:065b2d40    00              ??          00h
ram:065b2d41    8d              ??          8Dh
ram:065b2d42    8c              ??          8Ch
ram:065b2d43    24              ??          24h    $
ram:065b2d44    38              ??          38h    8
ram:065b2d45    01              ??          01h
ram:065b2d46    00              ??          00h
ram:065b2d47    00              ??          00h
ram:065b2d48    8b              ??          8Bh
ram:065b2d49    d0              ??          D0h
ram:065b2d4a    8a              ??          8Ah
ram:065b2d4b    01              ??          01h
ram:065b2d4c    41              ??          41h    A
ram:065b2d4d    88              ??          88h
ram:065b2d4e    02              ??          02h
ram:065b2d4f    42              ??          42h    B
ram:065b2d50    84              ??          84h
ram:065b2d51    c0              ??          C0h
ram:065b2d52    75              ??          75h    u
ram:065b2d53    f6              ??          F6h
ram:065b2d54    8b              ??          8Bh
ram:065b2d55    43              ??          43h    C
ram:065b2d56    28              ??          28h    (
ram:065b2d57    8d              ??          8Dh
ram:065b2d58    94              ??          94h
ram:065b2d59    24              ??          24h    $
ram:065b2d5a    38              ??          38h    8
ram:065b2d5b    01              ??          01h
ram:065b2d5c    00              ??          00h
ram:065b2d5d    00              ??          00h
ram:065b2d5e    68              ??          68h    h
ram:065b2d5f    00              ??          00h
ram:065b2d60    04              ??          04h
ram:065b2d61    00              ??          00h
ram:065b2d62    00              ??          00h
ram:065b2d63    52              ??          52h    R
ram:065b2d64    8b              ??          8Bh
ram:065b2d65    08              ??          08h
ram:065b2d66    68              ??          68h    h
ram:065b2d67    80              ??          80h
ram:065b2d68    82              ??          82h
ram:065b2d69    5b              ??          5Bh    [
ram:065b2d6a    06              ??          06h
ram:065b2d6b    55              ??          55h    U
ram:065b2d6c    50              ??          50h    P
ram:065b2d6d    ff              ??          FFh
ram:065b2d6e    51              ??          51h    Q
ram:065b2d6f    20              ??          20h
ram:065b2d70    85              ??          85h
ram:065b2d71    c0              ??          C0h
ram:065b2d72    74              ??          74h    t
ram:065b2d73    6b              ??          6Bh    k
ram:065b2d74    bf              ??          BFh
ram:065b2d75    78              ??          78h    x
ram:065b2d76    82              ??          82h
ram:065b2d77    5b              ??          5Bh    [
ram:065b2d78    06              ??          06h
ram:065b2d79    83              ??          83h
ram:065b2d7a    c9              ??          C9h
ram:065b2d7b    ff              ??          FFh
ram:065b2d7c    33              ??          33h    3
ram:065b2d7d    c0              ??          C0h
ram:065b2d7e    8b              ??          8Bh
ram:065b2d7f    35              ??          35h    5
ram:065b2d80    2c              ??          2Ch    ,
ram:065b2d81    70              ??          70h    p
ram:065b2d82    5b              ??          5Bh    [
ram:065b2d83    06              ??          06h
ram:065b2d84    f2              ??          F2h
ram:065b2d85    ae              ??          AEh
ram:065b2d86    f7              ??          F7h
ram:065b2d87    d1              ??          D1h
ram:065b2d88    49              ??          49h    I
ram:065b2d89    8d              ??          8Dh
ram:065b2d8a    84              ??          84h
ram:065b2d8b    24              ??          24h    $
ram:065b2d8c    38              ??          38h    8
ram:065b2d8d    01              ??          01h
ram:065b2d8e    00              ??          00h
ram:065b2d8f    00              ??          00h
ram:065b2d90    51              ??          51h    Q
ram:065b2d91    68              ??          68h    h
ram:065b2d92    78              ??          78h    x
ram:065b2d93    82              ??          82h
ram:065b2d94    5b              ??          5Bh    [
ram:065b2d95    06              ??          06h
ram:065b2d96    50              ??          50h    P
ram:065b2d97    ff              ??          FFh
ram:065b2d98    d6              ??          D6h
ram:065b2d99    83              ??          83h
ram:065b2d9a    c4              ??          C4h
ram:065b2d9b    0c              ??          0Ch
ram:065b2d9c    85              ??          85h
ram:065b2d9d    c0              ??          C0h
ram:065b2d9e    0f              ??          0Fh
ram:065b2d9f    84              ??          84h
ram:065b2da0    83              ??          83h
ram:065b2da1    00              ??          00h
ram:065b2da2    00              ??          00h
ram:065b2da3    00              ??          00h
ram:065b2da4    bf              ??          BFh
ram:065b2da5    70              ??          70h    p
ram:065b2da6    82              ??          82h
ram:065b2da7    5b              ??          5Bh    [
ram:065b2da8    06              ??          06h
ram:065b2da9    83              ??          83h
ram:065b2daa    c9              ??          C9h
ram:065b2dab    ff              ??          FFh
ram:065b2dac    33              ??          33h    3
ram:065b2dad    c0              ??          C0h
ram:065b2dae    f2              ??          F2h
ram:065b2daf    ae              ??          AEh
ram:065b2db0    f7              ??          F7h
ram:065b2db1    d1              ??          D1h
ram:065b2db2    49              ??          49h    I
ram:065b2db3    51              ??          51h    Q
ram:065b2db4    8d              ??          8Dh
ram:065b2db5    8c              ??          8Ch
ram:065b2db6    24              ??          24h    $
ram:065b2db7    3c              ??          3Ch    <
ram:065b2db8    01              ??          01h
ram:065b2db9    00              ??          00h
ram:065b2dba    00              ??          00h
ram:065b2dbb    68              ??          68h    h
ram:065b2dbc    70              ??          70h    p
ram:065b2dbd    82              ??          82h
ram:065b2dbe    5b              ??          5Bh    [
ram:065b2dbf    06              ??          06h
ram:065b2dc0    51              ??          51h    Q
ram:065b2dc1    ff              ??          FFh
ram:065b2dc2    d6              ??          D6h
ram:065b2dc3    83              ??          83h
ram:065b2dc4    c4              ??          C4h
ram:065b2dc5    0c              ??          0Ch
ram:065b2dc6    85              ??          85h
ram:065b2dc7    c0              ??          C0h
ram:065b2dc8    74              ??          74h    t
ram:065b2dc9    15              ??          15h
ram:065b2dca    8d              ??          8Dh
ram:065b2dcb    94              ??          94h
ram:065b2dcc    24              ??          24h    $
ram:065b2dcd    38              ??          38h    8
ram:065b2dce    01              ??          01h
ram:065b2dcf    00              ??          00h
ram:065b2dd0    00              ??          00h
ram:065b2dd1    52              ??          52h    R
ram:065b2dd2    ff              ??          FFh
ram:065b2dd3    15              ??          15h
ram:065b2dd4    68              ??          68h    h
ram:065b2dd5    70              ??          70h    p
ram:065b2dd6    5b              ??          5Bh    [
ram:065b2dd7    06              ??          06h
ram:065b2dd8    83              ??          83h
ram:065b2dd9    c4              ??          C4h
ram:065b2dda    04              ??          04h
ram:065b2ddb    85              ??          85h
ram:065b2ddc    c0              ??          C0h
ram:065b2ddd    75              ??          75h    u
ram:065b2dde    48              ??          48h    H
ram:065b2ddf    68              ??          68h    h
ram:065b2de0    cc              ??          CCh
ram:065b2de1    82              ??          82h
ram:065b2de2    5b              ??          5Bh    [
ram:065b2de3    06              ??          06h
ram:065b2de4    ff              ??          FFh
ram:065b2de5    15              ??          15h
ram:065b2de6    24              ??          24h    $
ram:065b2de7    70              ??          70h    p
ram:065b2de8    5b              ??          5Bh    [
ram:065b2de9    06              ??          06h
ram:065b2dea    8b              ??          8Bh
ram:065b2deb    f0              ??          F0h
ram:065b2dec    83              ??          83h
ram:065b2ded    c4              ??          C4h
ram:065b2dee    04              ??          04h
ram:065b2def    85              ??          85h
ram:065b2df0    f6              ??          F6h
ram:065b2df1    74              ??          74h    t
ram:065b2df2    34              ??          34h    4
ram:065b2df3    8b              ??          8Bh
ram:065b2df4    83              ??          83h
ram:065b2df5    34              ??          34h    4
ram:065b2df6    01              ??          01h
ram:065b2df7    00              ??          00h
ram:065b2df8    00              ??          00h
ram:065b2df9    50              ??          50h    P
ram:065b2dfa    e8              ??          E8h
ram:065b2dfb    c3              ??          C3h
ram:065b2dfc    30              ??          30h    0
ram:065b2dfd    00              ??          00h
ram:065b2dfe    00              ??          00h
ram:065b2dff    8b              ??          8Bh
ram:065b2e00    fe              ??          FEh
ram:065b2e01    83              ??          83h
ram:065b2e02    c9              ??          C9h
ram:065b2e03    ff              ??          FFh
ram:065b2e04    33              ??          33h    3
ram:065b2e05    c0              ??          C0h
ram:065b2e06    f2              ??          F2h
ram:065b2e07    ae              ??          AEh
ram:065b2e08    f7              ??          F7h
ram:065b2e09    d1              ??          D1h
ram:065b2e0a    51              ??          51h    Q
ram:065b2e0b    e8              ??          E8h
ram:065b2e0c    be              ??          BEh
ram:065b2e0d    30              ??          30h    0
ram:065b2e0e    00              ??          00h
ram:065b2e0f    00              ??          00h
ram:065b2e10    83              ??          83h
ram:065b2e11    c4              ??          C4h
ram:065b2e12    08              ??          08h
ram:065b2e13    89              ??          89h
ram:065b2e14    83              ??          83h
ram:065b2e15    34              ??          34h    4
ram:065b2e16    01              ??          01h
ram:065b2e17    00              ??          00h
ram:065b2e18    00              ??          00h
ram:065b2e19    8b              ??          8Bh
ram:065b2e1a    ce              ??          CEh
ram:065b2e1b    8b              ??          8Bh
ram:065b2e1c    d0              ??          D0h
ram:065b2e1d    8a              ??          8Ah
ram:065b2e1e    01              ??          01h
ram:065b2e1f    41              ??          41h    A
ram:065b2e20    88              ??          88h
ram:065b2e21    02              ??          02h
ram:065b2e22    42              ??          42h    B
ram:065b2e23    84              ??          84h
ram:065b2e24    c0              ??          C0h
ram:065b2e25    75              ??          75h    u
ram:065b2e26    f6              ??          F6h
ram:065b2e27    8b              ??          8Bh
ram:065b2e28    8b              ??          8Bh
ram:065b2e29    34              ??          34h    4
ram:065b2e2a    01              ??          01h
ram:065b2e2b    00              ??          00h
ram:065b2e2c    00              ??          00h
ram:065b2e2d    8d              ??          8Dh
ram:065b2e2e    94              ??          94h
ram:065b2e2f    24              ??          24h    $
ram:065b2e30    44              ??          44h    D
ram:065b2e31    07              ??          07h
ram:065b2e32    00              ??          00h
ram:065b2e33    00              ??          00h
ram:065b2e34    51              ??          51h    Q
ram:065b2e35    68              ??          68h    h
ram:065b2e36    4c              ??          4Ch    L
ram:065b2e37    82              ??          82h
ram:065b2e38    5b              ??          5Bh    [
ram:065b2e39    06              ??          06h
ram:065b2e3a    52              ??          52h    R
ram:065b2e3b    e8              ??          E8h
ram:065b2e3c    a0              ??          A0h
ram:065b2e3d    f9              ??          F9h
ram:065b2e3e    ff              ??          FFh
ram:065b2e3f    ff              ??          FFh
ram:065b2e40    50              ??          50h    P
ram:065b2e41    68              ??          68h    h
ram:065b2e42    54              ??          54h    T
ram:065b2e43    03              ??          03h
ram:065b2e44    00              ??          00h
ram:065b2e45    00              ??          00h
ram:065b2e46    b9              ??          B9h
ram:065b2e47    03              ??          03h
ram:065b2e48    00              ??          00h
ram:065b2e49    10              ??          10h
ram:065b2e4a    00              ??          00h
ram:065b2e4b    68              ??          68h    h
ram:065b2e4c    30              ??          30h    0
ram:065b2e4d    81              ??          81h
ram:065b2e4e    5b              ??          5Bh    [
ram:065b2e4f    06              ??          06h
ram:065b2e50    68              ??          68h    h
ram:065b2e51    94              ??          94h
ram:065b2e52    80              ??          80h
ram:065b2e53    5b              ??          5Bh    [
ram:065b2e54    06              ??          06h
ram:065b2e55    51              ??          51h    Q
ram:065b2e56    ff              ??          FFh
ram:065b2e57    15              ??          15h
ram:065b2e58    34              ??          34h    4
ram:065b2e59    8a              ??          8Ah
ram:065b2e5a    5b              ??          5Bh    [
ram:065b2e5b    06              ??          06h
ram:065b2e5c    83              ??          83h
ram:065b2e5d    c4              ??          C4h
ram:065b2e5e    20              ??          20h
ram:065b2e5f    8b              ??          8Bh
ram:065b2e60    cb              ??          CBh
ram:065b2e61    e8              ??          E8h
ram:065b2e62    4a              ??          4Ah    J
ram:065b2e63    00              ??          00h
ram:065b2e64    00              ??          00h
ram:065b2e65    00              ??          00h
ram:065b2e66    5f              ??          5Fh    _
ram:065b2e67    5e              ??          5Eh    ^
ram:065b2e68    84              ??          84h
ram:065b2e69    c0              ??          C0h
ram:065b2e6a    5d              ??          5Dh    ]
ram:065b2e6b    75              ??          75h    u
ram:065b2e6c    2d              ??          2Dh    -
ram:065b2e6d    68              ??          68h    h
ram:065b2e6e    0c              ??          0Ch
ram:065b2e6f    82              ??          82h
ram:065b2e70    5b              ??          5Bh    [
ram:065b2e71    06              ??          06h
ram:065b2e72    68              ??          68h    h
ram:065b2e73    57              ??          57h    W
ram:065b2e74    03              ??          03h
ram:065b2e75    00              ??          00h
ram:065b2e76    00              ??          00h
ram:065b2e77    b8              ??          B8h
ram:065b2e78    02              ??          02h
ram:065b2e79    00              ??          00h
ram:065b2e7a    10              ??          10h
ram:065b2e7b    00              ??          00h
ram:065b2e7c    68              ??          68h    h
ram:065b2e7d    30              ??          30h    0
ram:065b2e7e    81              ??          81h
ram:065b2e7f    5b              ??          5Bh    [
ram:065b2e80    06              ??          06h
ram:065b2e81    68              ??          68h    h
ram:065b2e82    a4              ??          A4h
ram:065b2e83    81              ??          81h
ram:065b2e84    5b              ??          5Bh    [
ram:065b2e85    06              ??          06h
ram:065b2e86    50              ??          50h    P
ram:065b2e87    ff              ??          FFh
ram:065b2e88    15              ??          15h
ram:065b2e89    34              ??          34h    4
ram:065b2e8a    8a              ??          8Ah
ram:065b2e8b    5b              ??          5Bh    [
ram:065b2e8c    06              ??          06h
ram:065b2e8d    83              ??          83h
ram:065b2e8e    c4              ??          C4h
ram:065b2e8f    14              ??          14h
ram:065b2e90    32              ??          32h    2
ram:065b2e91    c0              ??          C0h
ram:065b2e92    5b              ??          5Bh    [
ram:065b2e93    81              ??          81h
ram:065b2e94    c4              ??          C4h
ram:065b2e95    34              ??          34h    4
ram:065b2e96    27              ??          27h    '
ram:065b2e97    00              ??          00h
ram:065b2e98    00              ??          00h
ram:065b2e99    c3              ??          C3h
ram:065b2e9a    b0              ??          B0h
ram:065b2e9b    01              ??          01h
ram:065b2e9c    88              ??          88h
ram:065b2e9d    43              ??          43h    C
ram:065b2e9e    04              ??          04h
ram:065b2e9f    5b              ??          5Bh    [
ram:065b2ea0    81              ??          81h
ram:065b2ea1    c4              ??          C4h
ram:065b2ea2    34              ??          34h    4
ram:065b2ea3    27              ??          27h    '
ram:065b2ea4    00              ??          00h
ram:065b2ea5    00              ??          00h
ram:065b2ea6    c3              ??          C3h
ram:065b2ea7    90              ??          90h
ram:065b2ea8    90              ??          90h
ram:065b2ea9    90              ??          90h
ram:065b2eaa    90              ??          90h
ram:065b2eab    90              ??          90h
ram:065b2eac    90              ??          90h
ram:065b2ead    90              ??          90h
ram:065b2eae    90              ??          90h
ram:065b2eaf    90              ??          90h
ram:065b2eb0    81              ??          81h
ram:065b2eb1    ec              ??          ECh
ram:065b2eb2    08              ??          08h
ram:065b2eb3    01              ??          01h
ram:065b2eb4    00              ??          00h
ram:065b2eb5    00              ??          00h
ram:065b2eb6    53              ??          53h    S
ram:065b2eb7    55              ??          55h    U
ram:065b2eb8    56              ??          56h    V
ram:065b2eb9    8b              ??          8Bh
ram:065b2eba    f1              ??          F1h
ram:065b2ebb    57              ??          57h    W
ram:065b2ebc    6a              ??          6Ah    j
ram:065b2ebd    03              ??          03h
ram:065b2ebe    8b              ??          8Bh
ram:065b2ebf    46              ??          46h    F
ram:065b2ec0    28              ??          28h    (
ram:065b2ec1    32              ??          32h    2
ram:065b2ec2    db              ??          DBh
ram:065b2ec3    68              ??          68h    h
ram:065b2ec4    4c              ??          4Ch    L
ram:065b2ec5    83              ??          83h
ram:065b2ec6    5b              ??          5Bh    [
ram:065b2ec7    06              ??          06h
ram:065b2ec8    50              ??          50h    P
ram:065b2ec9    8b              ??          8Bh
ram:065b2eca    08              ??          08h
ram:065b2ecb    88              ??          88h
ram:065b2ecc    5c              ??          5Ch    \
ram:065b2ecd    24              ??          24h    $
ram:065b2ece    1f              ??          1Fh
ram:065b2ecf    ff              ??          FFh
ram:065b2ed0    51              ??          51h    Q
ram:065b2ed1    14              ??          14h
ram:065b2ed2    8b              ??          8Bh
ram:065b2ed3    e8              ??          E8h
ram:065b2ed4    85              ??          85h
ram:065b2ed5    ed              ??          EDh
ram:065b2ed6    75              ??          75h    u
ram:065b2ed7    30              ??          30h    0
ram:065b2ed8    68              ??          68h    h
ram:065b2ed9    10              ??          10h
ram:065b2eda    83              ??          83h
ram:065b2edb    5b              ??          5Bh    [
ram:065b2edc    06              ??          06h
ram:065b2edd    68              ??          68h    h
ram:065b2ede    69              ??          69h    i
ram:065b2edf    03              ??          03h
ram:065b2ee0    00              ??          00h
ram:065b2ee1    00              ??          00h
ram:065b2ee2    b8              ??          B8h
ram:065b2ee3    01              ??          01h
ram:065b2ee4    00              ??          00h
ram:065b2ee5    10              ??          10h
ram:065b2ee6    00              ??          00h
ram:065b2ee7    68              ??          68h    h
ram:065b2ee8    30              ??          30h    0
ram:065b2ee9    81              ??          81h
ram:065b2eea    5b              ??          5Bh    [
ram:065b2eeb    06              ??          06h
ram:065b2eec    68              ??          68h    h
ram:065b2eed    14              ??          14h
ram:065b2eee    81              ??          81h
ram:065b2eef    5b              ??          5Bh    [
ram:065b2ef0    06              ??          06h
ram:065b2ef1    50              ??          50h    P
ram:065b2ef2    ff              ??          FFh
ram:065b2ef3    15              ??          15h
ram:065b2ef4    34              ??          34h    4
ram:065b2ef5    8a              ??          8Ah
ram:065b2ef6    5b              ??          5Bh    [
ram:065b2ef7    06              ??          06h
ram:065b2ef8    83              ??          83h
ram:065b2ef9    c4              ??          C4h
ram:065b2efa    14              ??          14h
ram:065b2efb    5f              ??          5Fh    _
ram:065b2efc    5e              ??          5Eh    ^
ram:065b2efd    8a              ??          8Ah
ram:065b2efe    c3              ??          C3h
ram:065b2eff    5d              ??          5Dh    ]
ram:065b2f00    5b              ??          5Bh    [
ram:065b2f01    81              ??          81h
ram:065b2f02    c4              ??          C4h
ram:065b2f03    08              ??          08h
ram:065b2f04    01              ??          01h
ram:065b2f05    00              ??          00h
ram:065b2f06    00              ??          00h
ram:065b2f07    c3              ??          C3h
ram:065b2f08    68              ??          68h    h
ram:065b2f09    d4              ??          D4h
ram:065b2f0a    82              ??          82h
ram:065b2f0b    5b              ??          5Bh    [
ram:065b2f0c    06              ??          06h
ram:065b2f0d    68              ??          68h    h
ram:065b2f0e    70              ??          70h    p
ram:065b2f0f    03              ??          03h
ram:065b2f10    00              ??          00h
ram:065b2f11    00              ??          00h
ram:065b2f12    b8              ??          B8h
ram:065b2f13    03              ??          03h
ram:065b2f14    00              ??          00h
ram:065b2f15    10              ??          10h
ram:065b2f16    00              ??          00h
ram:065b2f17    68              ??          68h    h
ram:065b2f18    30              ??          30h    0
ram:065b2f19    81              ??          81h
ram:065b2f1a    5b              ??          5Bh    [
ram:065b2f1b    06              ??          06h
ram:065b2f1c    68              ??          68h    h
ram:065b2f1d    94              ??          94h
ram:065b2f1e    80              ??          80h
ram:065b2f1f    5b              ??          5Bh    [
ram:065b2f20    06              ??          06h
ram:065b2f21    50              ??          50h    P
ram:065b2f22    ff              ??          FFh
ram:065b2f23    15              ??          15h
ram:065b2f24    34              ??          34h    4
ram:065b2f25    8a              ??          8Ah
ram:065b2f26    5b              ??          5Bh    [
ram:065b2f27    06              ??          06h
ram:065b2f28    8b              ??          8Bh
ram:065b2f29    46              ??          46h    F
ram:065b2f2a    28              ??          28h    (
ram:065b2f2b    83              ??          83h
ram:065b2f2c    c4              ??          C4h
ram:065b2f2d    14              ??          14h
ram:065b2f2e    8d              ??          8Dh
ram:065b2f2f    4c              ??          4Ch    L
ram:065b2f30    24              ??          24h    $
ram:065b2f31    14              ??          14h
ram:065b2f32    bf              ??          BFh
ram:065b2f33    01              ??          01h
ram:065b2f34    00              ??          00h
ram:065b2f35    00              ??          00h
ram:065b2f36    00              ??          00h
ram:065b2f37    8b              ??          8Bh
ram:065b2f38    10              ??          10h
ram:065b2f39    68              ??          68h    h
ram:065b2f3a    04              ??          04h
ram:065b2f3b    01              ??          01h
ram:065b2f3c    00              ??          00h
ram:065b2f3d    00              ??          00h
ram:065b2f3e    51              ??          51h    Q
ram:065b2f3f    6a              ??          6Ah    j
ram:065b2f40    00              ??          00h
ram:065b2f41    55              ??          55h    U
ram:065b2f42    50              ??          50h    P
ram:065b2f43    ff              ??          FFh
ram:065b2f44    52              ??          52h    R
ram:065b2f45    1c              ??          1Ch
ram:065b2f46    85              ??          85h
ram:065b2f47    c0              ??          C0h
ram:065b2f48    74              ??          74h    t
ram:065b2f49    b1              ??          B1h
ram:065b2f4a    8a              ??          8Ah
ram:065b2f4b    44              ??          44h    D
ram:065b2f4c    24              ??          24h    $
ram:065b2f4d    14              ??          14h
ram:065b2f4e    8d              ??          8Dh
ram:065b2f4f    4c              ??          4Ch    L
ram:065b2f50    24              ??          24h    $
ram:065b2f51    14              ??          14h
ram:065b2f52    84              ??          84h
ram:065b2f53    c0              ??          C0h
ram:065b2f54    74              ??          74h    t
ram:065b2f55    18              ??          18h
ram:065b2f56    3c              ??          3Ch    <
ram:065b2f57    20              ??          20h
ram:065b2f58    74              ??          74h    t
ram:065b2f59    0c              ??          0Ch
ram:065b2f5a    3c              ??          3Ch    <
ram:065b2f5b    09              ??          09h
ram:065b2f5c    74              ??          74h    t
ram:065b2f5d    08              ??          08h
ram:065b2f5e    3c              ??          3Ch    <
ram:065b2f5f    0a              ??          0Ah
ram:065b2f60    74              ??          74h    t
ram:065b2f61    04              ??          04h
ram:065b2f62    3c              ??          3Ch    <
ram:065b2f63    0d              ??          0Dh
ram:065b2f64    75              ??          75h    u
ram:065b2f65    08              ??          08h
ram:065b2f66    8a              ??          8Ah
ram:065b2f67    41              ??          41h    A
ram:065b2f68    01              ??          01h
ram:065b2f69    41              ??          41h    A
ram:065b2f6a    84              ??          84h
ram:065b2f6b    c0              ??          C0h
ram:065b2f6c    75              ??          75h    u
ram:065b2f6d    e8              ??          E8h
ram:065b2f6e    8a              ??          8Ah
ram:065b2f6f    01              ??          01h
ram:065b2f70    8b              ??          8Bh
ram:065b2f71    d1              ??          D1h
ram:065b2f72    3c              ??          3Ch    <
ram:065b2f73    3b              ??          3Bh    ;
ram:065b2f74    74              ??          74h    t
ram:065b2f75    4b              ??          4Bh    K
ram:065b2f76    3c              ??          3Ch    <
ram:065b2f77    22              ??          22h    "
ram:065b2f78    75              ??          75h    u
ram:065b2f79    12              ??          12h
ram:065b2f7a    3c              ??          3Ch    <
ram:065b2f7b    22              ??          22h    "
ram:065b2f7c    74              ??          74h    t
ram:065b2f7d    08              ??          08h
ram:065b2f7e    8a              ??          8Ah
ram:065b2f7f    41              ??          41h    A
ram:065b2f80    01              ??          01h
ram:065b2f81    41              ??          41h    A
ram:065b2f82    84              ??          84h
ram:065b2f83    c0              ??          C0h
ram:065b2f84    75              ??          75h    u
ram:065b2f85    f4              ??          F4h
ram:065b2f86    c6              ??          C6h
ram:065b2f87    41              ??          41h    A
ram:065b2f88    01              ??          01h
ram:065b2f89    00              ??          00h
ram:065b2f8a    eb              ??          EBh
ram:065b2f8b    25              ??          25h    %
ram:065b2f8c    8a              ??          8Ah
ram:065b2f8d    01              ??          01h
ram:065b2f8e    84              ??          84h
ram:065b2f8f    c0              ??          C0h
ram:065b2f90    74              ??          74h    t
ram:065b2f91    1c              ??          1Ch
ram:065b2f92    3c              ??          3Ch    <
ram:065b2f93    20              ??          20h
ram:065b2f94    74              ??          74h    t
ram:065b2f95    18              ??          18h
ram:065b2f96    3c              ??          3Ch    <
ram:065b2f97    09              ??          09h
ram:065b2f98    74              ??          74h    t
ram:065b2f99    14              ??          14h
ram:065b2f9a    3c              ??          3Ch    <
ram:065b2f9b    3b              ??          3Bh    ;
ram:065b2f9c    74              ??          74h    t
ram:065b2f9d    10              ??          10h
ram:065b2f9e    3c              ??          3Ch    <
ram:065b2f9f    0a              ??          0Ah
ram:065b2fa0    74              ??          74h    t
ram:065b2fa1    0c              ??          0Ch
ram:065b2fa2    3c              ??          3Ch    <
ram:065b2fa3    0d              ??          0Dh
ram:065b2fa4    74              ??          74h    t
ram:065b2fa5    08              ??          08h
ram:065b2fa6    8a              ??          8Ah
ram:065b2fa7    41              ??          41h    A
ram:065b2fa8    01              ??          01h
ram:065b2fa9    41              ??          41h    A
ram:065b2faa    84              ??          84h
ram:065b2fab    c0              ??          C0h
ram:065b2fac    75              ??          75h    u
ram:065b2fad    e4              ??          E4h
ram:065b2fae    c6              ??          C6h
ram:065b2faf    01              ??          01h
ram:065b2fb0    00              ??          00h
ram:065b2fb1    8b              ??          8Bh
ram:065b2fb2    06              ??          06h
ram:065b2fb3    52              ??          52h    R
ram:065b2fb4    56              ??          56h    V
ram:065b2fb5    ff              ??          FFh
ram:065b2fb6    50              ??          50h    P
ram:065b2fb7    1c              ??          1Ch
ram:065b2fb8    85              ??          85h
ram:065b2fb9    c0              ??          C0h
ram:065b2fba    7c              ??          7Ch    |
ram:065b2fbb    05              ??          05h
ram:065b2fbc    c6              ??          C6h
ram:065b2fbd    44              ??          44h    D
ram:065b2fbe    24              ??          24h    $
ram:065b2fbf    13              ??          13h
ram:065b2fc0    01              ??          01h
ram:065b2fc1    8b              ??          8Bh
ram:065b2fc2    46              ??          46h    F
ram:065b2fc3    28              ??          28h    (
ram:065b2fc4    8d              ??          8Dh
ram:065b2fc5    5c              ??          5Ch    \
ram:065b2fc6    24              ??          24h    $
ram:065b2fc7    14              ??          14h
ram:065b2fc8    8b              ??          8Bh
ram:065b2fc9    cf              ??          CFh
ram:065b2fca    68              ??          68h    h
ram:065b2fcb    04              ??          04h
ram:065b2fcc    01              ??          01h
ram:065b2fcd    00              ??          00h
ram:065b2fce    00              ??          00h
ram:065b2fcf    8b              ??          8Bh
ram:065b2fd0    10              ??          10h
ram:065b2fd1    53              ??          53h    S
ram:065b2fd2    51              ??          51h    Q
ram:065b2fd3    55              ??          55h    U
ram:065b2fd4    50              ??          50h    P
ram:065b2fd5    47              ??          47h    G
ram:065b2fd6    ff              ??          FFh
ram:065b2fd7    52              ??          52h    R
ram:065b2fd8    1c              ??          1Ch
ram:065b2fd9    85              ??          85h
ram:065b2fda    c0              ??          C0h
ram:065b2fdb    0f              ??          0Fh
ram:065b2fdc    85              ??          85h
ram:065b2fdd    69              ??          69h    i
ram:065b2fde    ff              ??          FFh
ram:065b2fdf    ff              ??          FFh
ram:065b2fe0    ff              ??          FFh
ram:065b2fe1    8a              ??          8Ah
ram:065b2fe2    44              ??          44h    D
ram:065b2fe3    24              ??          24h    $
ram:065b2fe4    13              ??          13h
ram:065b2fe5    5f              ??          5Fh    _
ram:065b2fe6    5e              ??          5Eh    ^
ram:065b2fe7    5d              ??          5Dh    ]
ram:065b2fe8    5b              ??          5Bh    [
ram:065b2fe9    81              ??          81h
ram:065b2fea    c4              ??          C4h
ram:065b2feb    08              ??          08h
ram:065b2fec    01              ??          01h
ram:065b2fed    00              ??          00h
ram:065b2fee    00              ??          00h
ram:065b2fef    c3              ??          C3h
ram:065b2ff0    83              ??          83h
ram:065b2ff1    ec              ??          ECh
ram:065b2ff2    08              ??          08h
ram:065b2ff3    53              ??          53h    S
ram:065b2ff4    8b              ??          8Bh
ram:065b2ff5    d9              ??          D9h
ram:065b2ff6    57              ??          57h    W
ram:065b2ff7    89              ??          89h
ram:065b2ff8    5c              ??          5Ch    \
ram:065b2ff9    24              ??          24h    $
ram:065b2ffa    08              ??          08h
ram:065b2ffb    8b              ??          8Bh
ram:065b2ffc    43              ??          43h    C
ram:065b2ffd    0c              ??          0Ch
ram:065b2ffe    8b              ??          8Bh
ram:065b2fff    38              ??          38h    8
ram:065b3000    3b              ??          3Bh    ;
ram:065b3001    f8              ??          F8h
ram:065b3002    0f              ??          0Fh
ram:065b3003    84              ??          84h
ram:065b3004    cd              ??          CDh
ram:065b3005    00              ??          00h
ram:065b3006    00              ??          00h
ram:065b3007    00              ??          00h
ram:065b3008    55              ??          55h    U
ram:065b3009    56              ??          56h    V
ram:065b300a    8b              ??          8Bh
ram:065b300b    47              ??          47h    G
ram:065b300c    14              ??          14h
ram:065b300d    8b              ??          8Bh
ram:065b300e    30              ??          30h    0
ram:065b300f    3b              ??          3Bh    ;
ram:065b3010    f0              ??          F0h
ram:065b3011    74              ??          74h    t
ram:065b3012    61              ??          61h    a
ram:065b3013    8b              ??          8Bh
ram:065b3014    46              ??          46h    F
ram:065b3015    14              ??          14h
ram:065b3016    8b              ??          8Bh
ram:065b3017    4c              ??          4Ch    L
ram:065b3018    24              ??          24h    $
ram:065b3019    1c              ??          1Ch
ram:065b301a    50              ??          50h    P
ram:065b301b    51              ??          51h    Q
ram:065b301c    ff              ??          FFh
ram:065b301d    15              ??          15h
ram:065b301e    30              ??          30h    0
ram:065b301f    70              ??          70h    p
ram:065b3020    5b              ??          5Bh    [
ram:065b3021    06              ??          06h
ram:065b3022    83              ??          83h
ram:065b3023    c4              ??          C4h
ram:065b3024    08              ??          08h
ram:065b3025    85              ??          85h
ram:065b3026    c0              ??          C0h
ram:065b3027    75              ??          75h    u
ram:065b3028    44              ??          44h    D
ram:065b3029    8b              ??          8Bh
ram:065b302a    46              ??          46h    F
ram:065b302b    08              ??          08h
ram:065b302c    8d              ??          8Dh
ram:065b302d    5e              ??          5Eh    ^
ram:065b302e    08              ??          08h
ram:065b302f    85              ??          85h
ram:065b3030    c0              ??          C0h
ram:065b3031    74              ??          74h    t
ram:065b3032    0c              ??          0Ch
ram:065b3033    8b              ??          8Bh
ram:065b3034    10              ??          10h
ram:065b3035    50              ??          50h    P
ram:065b3036    ff              ??          FFh
ram:065b3037    52              ??          52h    R
ram:065b3038    08              ??          08h
ram:065b3039    c7              ??          C7h
ram:065b303a    03              ??          03h
ram:065b303b    00              ??          00h
ram:065b303c    00              ??          00h
ram:065b303d    00              ??          00h
ram:065b303e    00              ??          00h
ram:065b303f    8b              ??          8Bh
ram:065b3040    46              ??          46h    F
ram:065b3041    04              ??          04h
ram:065b3042    8b              ??          8Bh
ram:065b3043    2e              ??          2Eh    .
ram:065b3044    89              ??          89h
ram:065b3045    28              ??          28h    (
ram:065b3046    8b              ??          8Bh
ram:065b3047    0e              ??          0Eh
ram:065b3048    8b              ??          8Bh
ram:065b3049    56              ??          56h    V
ram:065b304a    04              ??          04h
ram:065b304b    89              ??          89h
ram:065b304c    51              ??          51h    Q
ram:065b304d    04              ??          04h
ram:065b304e    8b              ??          8Bh
ram:065b304f    cb              ??          CBh
ram:065b3050    e8              ??          E8h
ram:065b3051    3b              ??          3Bh    ;
ram:065b3052    f4              ??          F4h
ram:065b3053    ff              ??          FFh
ram:065b3054    ff              ??          FFh
ram:065b3055    56              ??          56h    V
ram:065b3056    e8              ??          E8h
ram:065b3057    67              ??          67h    g
ram:065b3058    2e              ??          2Eh    .
ram:065b3059    00              ??          00h
ram:065b305a    00              ??          00h
ram:065b305b    8b              ??          8Bh
ram:065b305c    47              ??          47h    G
ram:065b305d    18              ??          18h
ram:065b305e    8b              ??          8Bh
ram:065b305f    5c              ??          5Ch    \
ram:065b3060    24              ??          24h    $
ram:065b3061    14              ??          14h
ram:065b3062    83              ??          83h
ram:065b3063    c4              ??          C4h
ram:065b3064    04              ??          04h
ram:065b3065    48              ??          48h    H
ram:065b3066    89              ??          89h
ram:065b3067    47              ??          47h    G
ram:065b3068    18              ??          18h
ram:065b3069    8b              ??          8Bh
ram:065b306a    f5              ??          F5h
ram:065b306b    eb              ??          EBh
ram:065b306c    02              ??          02h
ram:065b306d    8b              ??          8Bh
ram:065b306e    36              ??          36h    6
ram:065b306f    3b              ??          3Bh    ;
ram:065b3070    77              ??          77h    w
ram:065b3071    14              ??          14h
ram:065b3072    75              ??          75h    u
ram:065b3073    9f              ??          9Fh
ram:065b3074    8b              ??          8Bh
ram:065b3075    47              ??          47h    G
ram:065b3076    18              ??          18h
ram:065b3077    85              ??          85h
ram:065b3078    c0              ??          C0h
ram:065b3079    75              ??          75h    u
ram:065b307a    14              ??          14h
ram:065b307b    8d              ??          8Dh
ram:065b307c    44              ??          44h    D
ram:065b307d    24              ??          24h    $
ram:065b307e    14              ??          14h
ram:065b307f    57              ??          57h    W
ram:065b3080    50              ??          50h    P
ram:065b3081    8d              ??          8Dh
ram:065b3082    4b              ??          4Bh    K
ram:065b3083    08              ??          08h
ram:065b3084    e8              ??          E8h
ram:065b3085    b7              ??          B7h
ram:065b3086    05              ??          05h
ram:065b3087    00              ??          00h
ram:065b3088    00              ??          00h
ram:065b3089    8b              ??          8Bh
ram:065b308a    7c              ??          7Ch    |
ram:065b308b    24              ??          24h    $
ram:065b308c    14              ??          14h
ram:065b308d    eb              ??          EBh
ram:065b308e    3b              ??          3Bh    ;
ram:065b308f    8b              ??          8Bh
ram:065b3090    47              ??          47h    G
ram:065b3091    08              ??          08h
ram:065b3092    8a              ??          8Ah
ram:065b3093    48              ??          48h    H
ram:065b3094    1d              ??          1Dh
ram:065b3095    84              ??          84h
ram:065b3096    c9              ??          C9h
ram:065b3097    75              ??          75h    u
ram:065b3098    18              ??          18h
ram:065b3099    8b              ??          8Bh
ram:065b309a    f8              ??          F8h
ram:065b309b    8b              ??          8Bh
ram:065b309c    07              ??          07h
ram:065b309d    8a              ??          8Ah
ram:065b309e    48              ??          48h    H
ram:065b309f    1d              ??          1Dh
ram:065b30a0    84              ??          84h
ram:065b30a1    c9              ??          C9h
ram:065b30a2    75              ??          75h    u
ram:065b30a3    26              ??          26h    &
ram:065b30a4    8b              ??          8Bh
ram:065b30a5    f8              ??          F8h
ram:065b30a6    8b              ??          8Bh
ram:065b30a7    07              ??          07h
ram:065b30a8    8a              ??          8Ah
ram:065b30a9    48              ??          48h    H
ram:065b30aa    1d              ??          1Dh
ram:065b30ab    84              ??          84h
ram:065b30ac    c9              ??          C9h
ram:065b30ad    74              ??          74h    t
ram:065b30ae    f5              ??          F5h
ram:065b30af    eb              ??          EBh
ram:065b30b0    19              ??          19h
ram:065b30b1    8b              ??          8Bh
ram:065b30b2    47              ??          47h    G
ram:065b30b3    04              ??          04h
ram:065b30b4    3b              ??          3Bh    ;
ram:065b30b5    78              ??          78h    x
ram:065b30b6    08              ??          08h
ram:065b30b7    75              ??          75h    u
ram:065b30b8    0a              ??          0Ah
ram:065b30b9    8b              ??          8Bh
ram:065b30ba    f8              ??          F8h
ram:065b30bb    8b              ??          8Bh
ram:065b30bc    40              ??          40h    @
ram:065b30bd    04              ??          04h
ram:065b30be    3b              ??          3Bh    ;
ram:065b30bf    78              ??          78h    x
ram:065b30c0    08              ??          08h
ram:065b30c1    74              ??          74h    t
ram:065b30c2    f6              ??          F6h
ram:065b30c3    39              ??          39h    9
ram:065b30c4    47              ??          47h    G
ram:065b30c5    08              ??          08h
ram:065b30c6    74              ??          74h    t
ram:065b30c7    02              ??          02h
ram:065b30c8    8b              ??          8Bh
ram:065b30c9    f8              ??          F8h
ram:065b30ca    3b              ??          3Bh    ;
ram:065b30cb    7b              ??          7Bh    {
ram:065b30cc    0c              ??          0Ch
ram:065b30cd    0f              ??          0Fh
ram:065b30ce    85              ??          85h
ram:065b30cf    37              ??          37h    7
ram:065b30d0    ff              ??          FFh
ram:065b30d1    ff              ??          FFh
ram:065b30d2    ff              ??          FFh
ram:065b30d3    5e              ??          5Eh    ^
ram:065b30d4    5d              ??          5Dh    ]
ram:065b30d5    5f              ??          5Fh    _
ram:065b30d6    b0              ??          B0h
ram:065b30d7    01              ??          01h
ram:065b30d8    5b              ??          5Bh    [
ram:065b30d9    83              ??          83h
ram:065b30da    c4              ??          C4h
ram:065b30db    08              ??          08h
ram:065b30dc    c2              ??          C2h
ram:065b30dd    04              ??          04h
ram:065b30de    00              ??          00h
ram:065b30df    90              ??          90h
                            LAB_065b30e0:                 ;XREF[1,0]:   065b31b2
ram:065b30e0    b800100000      MOV         EAX,0x1000
ram:065b30e5    e8f62d0000      CALL        FUN_065b5ee0                            ;undefined FUN_065b5ee0(void)
ram:065b30ea    8b8c24081...    MOV         ECX,dword ptr [ESP + 0x1008]
ram:065b30f1    56              PUSH        ESI
ram:065b30f2    8d8424101...    LEA         EAX,[ESP + 0x1010]
ram:065b30f9    57              PUSH        EDI
ram:065b30fa    50              PUSH        EAX
ram:065b30fb    8d54240c        LEA         EDX,[ESP + 0xc]
ram:065b30ff    51              PUSH        ECX
ram:065b3100    52              PUSH        EDX
ram:065b3101    ff1574705b06    CALL        dword ptr [DAT_065b7074]
ram:065b3107    8b3d18705b06    MOV         EDI,dword ptr [DAT_065b7018]
ram:065b310d    83c40c          ADD         ESP,0xc
ram:065b3110    8d442408        LEA         EAX,[ESP + 0x8]
ram:065b3114    50              PUSH        EAX
ram:065b3115    ffd7            CALL        EDI
ram:065b3117    8bb4240c1...    MOV         ESI,dword ptr [ESP + 0x100c]
ram:065b311e    c1e61c          SHL         ESI,0x1c
ram:065b3121    c1fe1c          SAR         ESI,0x1c
ram:065b3124    83fe03          CMP         ESI,0x3
ram:065b3127    7307            JNC         LAB_065b3130
ram:065b3129    6870835b06      PUSH        0x65b8370
ram:065b312e    ffd7            CALL        EDI
                            LAB_065b3130:                 ;XREF[1,0]:   065b3127
ram:065b3130    85f6            TEST        ESI,ESI
ram:065b3132    7413            JZ          LAB_065b3147
ram:065b3134    83fe01          CMP         ESI,0x1
ram:065b3137    740e            JZ          LAB_065b3147
ram:065b3139    a0308a5b06      MOV         AL,[DAT_065b8a30]
ram:065b313e    84c0            TEST        AL,AL
ram:065b3140    7533            JNZ         LAB_065b3175
ram:065b3142    83fe02          CMP         ESI,0x2
ram:065b3145    752e            JNZ         LAB_065b3175
                            LAB_065b3147:                 ;XREF[2,0]:   065b3132,065b3137
ram:065b3147    6812000400      PUSH        0x40012
ram:065b314c    8d4c240c        LEA         ECX,[ESP + 0xc]
ram:065b3150    6858835b06      PUSH        0x65b8358
ram:065b3155    51              PUSH        ECX
ram:065b3156    6a00            PUSH        0x0
ram:065b3158    ff1590705b06    CALL        dword ptr [DAT_065b7090]
ram:065b315e    83e803          SUB         EAX,0x3
ram:065b3161    742c            JZ          LAB_065b318f
ram:065b3163    48              DEC         EAX
ram:065b3164    741a            JZ          LAB_065b3180
ram:065b3166    48              DEC         EAX
ram:065b3167    750c            JNZ         LAB_065b3175
ram:065b3169    83fe02          CMP         ESI,0x2
ram:065b316c    7507            JNZ         LAB_065b3175
ram:065b316e    c605308a5...    MOV         byte ptr [DAT_065b8a30],0x1
                            LAB_065b3175:                 ;XREF[4,0]:   065b3140,065b3145,065b3167,065b316c
ram:065b3175    5f              POP         EDI
ram:065b3176    33c0            XOR         EAX,EAX
ram:065b3178    5e              POP         ESI
ram:065b3179    81c400100000    ADD         ESP,0x1000
ram:065b317f    c3              RET
                            LAB_065b3180:                 ;XREF[1,0]:   065b3164
ram:065b3180    cc              INT3
ram:065b3181    5f              ??          5Fh    _
ram:065b3182    b8              ??          B8h
ram:065b3183    01              ??          01h
ram:065b3184    00              ??          00h
ram:065b3185    00              ??          00h
ram:065b3186    00              ??          00h
ram:065b3187    5e              ??          5Eh    ^
ram:065b3188    81              ??          81h
ram:065b3189    c4              ??          C4h
ram:065b318a    00              ??          00h
ram:065b318b    10              ??          10h
ram:065b318c    00              ??          00h
ram:065b318d    00              ??          00h
ram:065b318e    c3              ??          C3h
                            LAB_065b318f:                 ;XREF[1,0]:   065b3161
ram:065b318f    6aff            PUSH        -0x1
ram:065b3191    ff1594705b06    CALL        dword ptr [DAT_065b7094]
ram:065b3197    ff2570705b06    JMP         dword ptr [DAT_065b7070]
ram:065b319d    90              ??          90h
ram:065b319e    90              ??          90h
ram:065b319f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b31a0(undefined4 param_1, int param_2)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b31a7
          ;param_2       int                  8                      ;XREF[1,0]:   065b31a0
                                                          ;XREF[1,0]:   065b6050
ram:065b31a0    8b442408        MOV         EAX,dword ptr [ESP + param_2]
ram:065b31a4    48              DEC         EAX
ram:065b31a5    751a            JNZ         LAB_065b31c1
ram:065b31a7    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b31ab    50              PUSH        EAX
ram:065b31ac    ff1504705b06    CALL        dword ptr [DAT_065b7004]
ram:065b31b2    c705348a5...    MOV         dword ptr [DAT_065b8a34],LAB_065b30e0
ram:065b31bc    e87f2a0000      CALL        FUN_065b5c40                            ;undefined FUN_065b5c40(void)
                            LAB_065b31c1:                 ;XREF[1,0]:   065b31a5
ram:065b31c1    b801000000      MOV         EAX,0x1
ram:065b31c6    c20c00          RET         0xc
ram:065b31c9    90              ??          90h
ram:065b31ca    90              ??          90h
ram:065b31cb    90              ??          90h
ram:065b31cc    90              ??          90h
ram:065b31cd    90              ??          90h
ram:065b31ce    90              ??          90h
ram:065b31cf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 DACOM_Acquire(void)
                                                          ;XREF[1,0]:   065b5c65
ram:065b31d0    8a0d388a5b06    MOV         CL,byte ptr [DAT_065b8a38]
ram:065b31d6    b001            MOV         AL,0x1
ram:065b31d8    84c8            TEST        AL,CL
ram:065b31da    7521            JNZ         LAB_065b31fd
ram:065b31dc    8ad1            MOV         DL,CL
ram:065b31de    b9408a5b06      MOV         ECX,0x65b8a40
ram:065b31e3    0ad0            OR          DL,AL
ram:065b31e5    8815388a5b06    MOV         byte ptr [DAT_065b8a38],DL
ram:065b31eb    e890edffff      CALL        FUN_065b1f80                            ;undefined4 * FUN_065b1f80(undefined4...
ram:065b31f0    6810325b06      PUSH        LAB_065b3210
ram:065b31f5    e8412d0000      CALL        FUN_065b5f3b                            ;int FUN_065b5f3b(undefined4 param_1)
ram:065b31fa    83c404          ADD         ESP,0x4
                            LAB_065b31fd:                 ;XREF[1,0]:   065b31da
ram:065b31fd    b8408a5b06      MOV         EAX,0x65b8a40
ram:065b3202    c3              RET
ram:065b3203    90              ??          90h
ram:065b3204    90              ??          90h
ram:065b3205    90              ??          90h
ram:065b3206    90              ??          90h
ram:065b3207    90              ??          90h
ram:065b3208    90              ??          90h
ram:065b3209    90              ??          90h
ram:065b320a    90              ??          90h
ram:065b320b    90              ??          90h
ram:065b320c    90              ??          90h
ram:065b320d    90              ??          90h
ram:065b320e    90              ??          90h
ram:065b320f    90              ??          90h
                            LAB_065b3210:                 ;XREF[1,0]:   065b31f0
ram:065b3210    a1608a5b06      MOV         EAX,[DAT_065b8a60]
ram:065b3215    83ec0c          SUB         ESP,0xc
ram:065b3218    53              PUSH        EBX
ram:065b3219    56              PUSH        ESI
ram:065b321a    8b30            MOV         ESI,dword ptr [EAX]
ram:065b321c    57              PUSH        EDI
ram:065b321d    3bf0            CMP         ESI,EAX
ram:065b321f    8bf8            MOV         EDI,EAX
ram:065b3221    741d            JZ          LAB_065b3240
                            LAB_065b3223:                 ;XREF[1,0]:   065b3239
ram:065b3223    8bc6            MOV         EAX,ESI
ram:065b3225    8b36            MOV         ESI,dword ptr [ESI]
ram:065b3227    50              PUSH        EAX
ram:065b3228    8d442410        LEA         EAX,[ESP + 0x10]
ram:065b322c    50              PUSH        EAX
ram:065b322d    b95c8a5b06      MOV         ECX,0x65b8a5c
ram:065b3232    e8e9020000      CALL        FUN_065b3520                            ;undefined FUN_065b3520(void * this, ...
ram:065b3237    3bf7            CMP         ESI,EDI
ram:065b3239    75e8            JNZ         LAB_065b3223
ram:065b323b    a1608a5b06      MOV         EAX,[DAT_065b8a60]
                            LAB_065b3240:                 ;XREF[1,0]:   065b3221
ram:065b3240    50              PUSH        EAX
ram:065b3241    e87c2c0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3246    8b0d4c8a5b06    MOV         ECX,dword ptr [DAT_065b8a4c]
ram:065b324c    8b15588a5b06    MOV         EDX,dword ptr [DAT_065b8a58]
ram:065b3252    33db            XOR         EBX,EBX
ram:065b3254    83c404          ADD         ESP,0x4
ram:065b3257    891d608a5b06    MOV         dword ptr [DAT_065b8a60],EBX
ram:065b325d    891d648a5b06    MOV         dword ptr [DAT_065b8a64],EBX
ram:065b3263    8b01            MOV         EAX,dword ptr [ECX]
ram:065b3265    3bd3            CMP         EDX,EBX
ram:065b3267    8bf9            MOV         EDI,ECX
ram:065b3269    8944240c        MOV         dword ptr [ESP + 0xc],EAX
ram:065b326d    7448            JZ          LAB_065b32b7
ram:065b326f    8bd0            MOV         EDX,EAX
ram:065b3271    3bc2            CMP         EAX,EDX
ram:065b3273    7542            JNZ         LAB_065b32b7
ram:065b3275    8b4904          MOV         ECX,dword ptr [ECX + 0x4]
ram:065b3278    51              PUSH        ECX
ram:065b3279    b9488a5b06      MOV         ECX,0x65b8a48
ram:065b327e    e89d0a0000      CALL        FUN_065b3d20                            ;undefined FUN_065b3d20(void * this, ...
ram:065b3283    8b154c8a5b06    MOV         EDX,dword ptr [DAT_065b8a4c]
ram:065b3289    a1508a5b06      MOV         EAX,[DAT_065b8a50]
ram:065b328e    8d4c2410        LEA         ECX,[ESP + 0x10]
ram:065b3292    894204          MOV         dword ptr [EDX + 0x4],EAX
ram:065b3295    a14c8a5b06      MOV         EAX,[DAT_065b8a4c]
ram:065b329a    891d588a5b06    MOV         dword ptr [DAT_065b8a58],EBX
ram:065b32a0    51              PUSH        ECX
ram:065b32a1    8900            MOV         dword ptr [EAX],EAX
ram:065b32a3    a14c8a5b06      MOV         EAX,[DAT_065b8a4c]
ram:065b32a8    b9488a5b06      MOV         ECX,0x65b8a48
ram:065b32ad    894008          MOV         dword ptr [EAX + 0x8],EAX
ram:065b32b0    e87b030000      CALL        FUN_065b3630                            ;undefined FUN_065b3630(void * this, ...
ram:065b32b5    eb27            JMP         LAB_065b32de
                            LAB_065b32b7:                 ;XREF[2,0]:   065b326d,065b3273
ram:065b32b7    3bc1            CMP         EAX,ECX
ram:065b32b9    7429            JZ          LAB_065b32e4
                            LAB_065b32bb:                 ;XREF[1,0]:   065b32dc
ram:065b32bb    8d4c240c        LEA         ECX,[ESP + 0xc]
ram:065b32bf    8bf0            MOV         ESI,EAX
ram:065b32c1    e87a0b0000      CALL        FUN_065b3e40                            ;undefined FUN_065b3e40(int * param_1)
ram:065b32c6    8d542414        LEA         EDX,[ESP + 0x14]
ram:065b32ca    56              PUSH        ESI
ram:065b32cb    52              PUSH        EDX
ram:065b32cc    b9488a5b06      MOV         ECX,0x65b8a48
ram:065b32d1    e86a030000      CALL        FUN_065b3640                            ;undefined FUN_065b3640(void * this, ...
ram:065b32d6    8b44240c        MOV         EAX,dword ptr [ESP + 0xc]
ram:065b32da    3bc7            CMP         EAX,EDI
ram:065b32dc    75dd            JNZ         LAB_065b32bb
                            LAB_065b32de:                 ;XREF[1,0]:   065b32b5
ram:065b32de    8b0d4c8a5b06    MOV         ECX,dword ptr [DAT_065b8a4c]
                            LAB_065b32e4:                 ;XREF[1,0]:   065b32b9
ram:065b32e4    51              PUSH        ECX
ram:065b32e5    e8d82b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b32ea    a1508a5b06      MOV         EAX,[DAT_065b8a50]
ram:065b32ef    891d4c8a5b06    MOV         dword ptr [DAT_065b8a4c],EBX
ram:065b32f5    50              PUSH        EAX
ram:065b32f6    891d588a5b06    MOV         dword ptr [DAT_065b8a58],EBX
ram:065b32fc    e8c12b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3301    83c408          ADD         ESP,0x8
ram:065b3304    891d508a5b06    MOV         dword ptr [DAT_065b8a50],EBX
ram:065b330a    5f              POP         EDI
ram:065b330b    5e              POP         ESI
ram:065b330c    5b              POP         EBX
ram:065b330d    83c40c          ADD         ESP,0xc
ram:065b3310    c3              RET
ram:065b3311    90              ??          90h
ram:065b3312    90              ??          90h
ram:065b3313    90              ??          90h
ram:065b3314    90              ??          90h
ram:065b3315    90              ??          90h
ram:065b3316    90              ??          90h
ram:065b3317    90              ??          90h
ram:065b3318    90              ??          90h
ram:065b3319    90              ??          90h
ram:065b331a    90              ??          90h
ram:065b331b    90              ??          90h
ram:065b331c    90              ??          90h
ram:065b331d    90              ??          90h
ram:065b331e    90              ??          90h
ram:065b331f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 DACOM_GetDllVersion(undefined4 param_1, uint * param_2, undefined4 * param_3, undefined4 * param_4)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b3328
          ;param_2       uint *               8                      ;XREF[1,0]:   065b3334
          ;param_3       undefined4 *         c                      ;XREF[1,0]:   065b3320
          ;param_4       undefined4 *        10                      ;XREF[1,0]:   065b3324
                                                          ;XREF[1,0]:   065b348b
ram:065b3320    8b44240c        MOV         EAX,dword ptr [ESP + param_3]
ram:065b3324    8b4c2410        MOV         ECX,dword ptr [ESP + param_4]
ram:065b3328    8b542404        MOV         EDX,dword ptr [ESP + param_1]
ram:065b332c    81ec44010000    SUB         ESP,0x144
ram:065b3332    53              PUSH        EBX
ram:065b3333    55              PUSH        EBP
ram:065b3334    8bac24540...    MOV         EBP,dword ptr [ESP + param_2+0x14c]
ram:065b333b    56              PUSH        ESI
ram:065b333c    52              PUSH        EDX
ram:065b333d    c74500000...    MOV         dword ptr [EBP],0x0
ram:065b3344    c70000000000    MOV         dword ptr [EAX],0x0
ram:065b334a    c70100000000    MOV         dword ptr [ECX],0x0
ram:065b3350    ff1500705b06    CALL        dword ptr [DAT_065b7000]                ;; GetModuleHandleA
ram:065b3356    85c0            TEST        EAX,EAX
ram:065b3358    750d            JNZ         LAB_065b3367
ram:065b335a    5e              POP         ESI
ram:065b335b    5d              POP         EBP
ram:065b335c    83c8ff          OR          EAX,0xffffffff
ram:065b335f    5b              POP         EBX
ram:065b3360    81c444010000    ADD         ESP,0x144
ram:065b3366    c3              RET
                            LAB_065b3367:                 ;XREF[1,0]:   065b3358
ram:065b3367    8d4c244c        LEA         ECX,[ESP + 0x4c]
ram:065b336b    6804010000      PUSH        0x104
ram:065b3370    51              PUSH        ECX
ram:065b3371    50              PUSH        EAX
ram:065b3372    ff1514705b06    CALL        dword ptr [DAT_065b7014]                ;GetModuleFileNameA
ram:065b3378    85c0            TEST        EAX,EAX
ram:065b337a    770d            JA          LAB_065b3389
ram:065b337c    5e              POP         ESI
ram:065b337d    5d              POP         EBP
ram:065b337e    83c8ff          OR          EAX,0xffffffff
ram:065b3381    5b              POP         EBX
ram:065b3382    81c444010000    ADD         ESP,0x144
ram:065b3388    c3              RET
                            LAB_065b3389:                 ;XREF[1,0]:   065b337a
ram:065b3389    8d542414        LEA         EDX,[ESP + 0x14]
ram:065b338d    8d44244c        LEA         EAX,[ESP + 0x4c]
ram:065b3391    52              PUSH        EDX
ram:065b3392    50              PUSH        EAX
ram:065b3393    e8242b0000      CALL        GetFileVersionInfoSizeA                 ;undefined GetFileVersionInfoSizeA(void)
ram:065b3398    8bf0            MOV         ESI,EAX
ram:065b339a    85f6            TEST        ESI,ESI
ram:065b339c    770d            JA          LAB_065b33ab
ram:065b339e    5e              POP         ESI
ram:065b339f    5d              POP         EBP
ram:065b33a0    83c8ff          OR          EAX,0xffffffff
ram:065b33a3    5b              POP         EBX
ram:065b33a4    81c444010000    ADD         ESP,0x144
ram:065b33aa    c3              RET
                            LAB_065b33ab:                 ;XREF[1,0]:   065b339c
ram:065b33ab    56              PUSH        ESI
ram:065b33ac    e81d2b0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b33b1    83c404          ADD         ESP,0x4
ram:065b33b4    8bd8            MOV         EBX,EAX
ram:065b33b6    8d4c244c        LEA         ECX,[ESP + 0x4c]
ram:065b33ba    53              PUSH        EBX
ram:065b33bb    56              PUSH        ESI
ram:065b33bc    6a00            PUSH        0x0
ram:065b33be    51              PUSH        ECX
ram:065b33bf    e8f22a0000      CALL        GetFileVersionInfoA                     ;undefined GetFileVersionInfoA(void)
ram:065b33c4    85c0            TEST        EAX,EAX
ram:065b33c6    7516            JNZ         LAB_065b33de
ram:065b33c8    53              PUSH        EBX
ram:065b33c9    e8f42a0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b33ce    83c404          ADD         ESP,0x4
ram:065b33d1    83c8ff          OR          EAX,0xffffffff
ram:065b33d4    5e              POP         ESI
ram:065b33d5    5d              POP         EBP
ram:065b33d6    5b              POP         EBX
ram:065b33d7    81c444010000    ADD         ESP,0x144
ram:065b33dd    c3              RET
                            LAB_065b33de:                 ;XREF[1,0]:   065b33c6
ram:065b33de    8d542410        LEA         EDX,[ESP + 0x10]
ram:065b33e2    8d44240c        LEA         EAX,[ESP + 0xc]
ram:065b33e6    52              PUSH        EDX
ram:065b33e7    50              PUSH        EAX
ram:065b33e8    6890825b06      PUSH        0x65b8290
ram:065b33ed    53              PUSH        EBX
ram:065b33ee    e8bd2a0000      CALL        malloc_new                              ;undefined malloc_new(void)
ram:065b33f3    85c0            TEST        EAX,EAX
ram:065b33f5    750d            JNZ         LAB_065b3404
ram:065b33f7    5e              POP         ESI
ram:065b33f8    5d              POP         EBP
ram:065b33f9    83c8ff          OR          EAX,0xffffffff
ram:065b33fc    5b              POP         EBX
ram:065b33fd    81c444010000    ADD         ESP,0x144
ram:065b3403    c3              RET
                            LAB_065b3404:                 ;XREF[1,0]:   065b33f5
ram:065b3404    8b74240c        MOV         ESI,dword ptr [ESP + 0xc]
ram:065b3408    57              PUSH        EDI
ram:065b3409    b90d000000      MOV         ECX,0xd
ram:065b340e    8d7c241c        LEA         EDI,[ESP + 0x1c]
ram:065b3412    f3a5            MOVSD.REP   ES:EDI,ESI
ram:065b3414    53              PUSH        EBX
ram:065b3415    e8a82a0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b341a    8b442430        MOV         EAX,dword ptr [ESP + 0x30]
ram:065b341e    8b9424640...    MOV         EDX,dword ptr [ESP + 0x164]
ram:065b3425    8bc8            MOV         ECX,EAX
ram:065b3427    25ffff0000      AND         EAX,0xffff
ram:065b342c    c1e910          SHR         ECX,0x10
ram:065b342f    894d00          MOV         dword ptr [EBP],ECX
ram:065b3432    8b8c24680...    MOV         ECX,dword ptr [ESP + 0x168]
ram:065b3439    83c404          ADD         ESP,0x4
ram:065b343c    8902            MOV         dword ptr [EDX],EAX
ram:065b343e    8b442430        MOV         EAX,dword ptr [ESP + 0x30]
ram:065b3442    25ffff0000      AND         EAX,0xffff
ram:065b3447    5f              POP         EDI
ram:065b3448    5e              POP         ESI
ram:065b3449    8901            MOV         dword ptr [ECX],EAX
ram:065b344b    5d              POP         EBP
ram:065b344c    33c0            XOR         EAX,EAX
ram:065b344e    5b              POP         EBX
ram:065b344f    81c444010000    ADD         ESP,0x144
ram:065b3455    c3              RET
ram:065b3456    90              ??          90h
ram:065b3457    90              ??          90h
ram:065b3458    90              ??          90h
ram:065b3459    90              ??          90h
ram:065b345a    90              ??          90h
ram:065b345b    90              ??          90h
ram:065b345c    90              ??          90h
ram:065b345d    90              ??          90h
ram:065b345e    90              ??          90h
ram:065b345f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int DACOM_GetVersion(void)
          ;local_res0    undefined1           0                      ;XREF[1,0]:   065b34a3
ram:065b3460    b800200000      MOV         EAX,0x2000
ram:065b3465    e8762a0000      CALL        FUN_065b5ee0                            ;undefined FUN_065b5ee0(void)
ram:065b346a    53              PUSH        EBX
ram:065b346b    8b9c240c2...    MOV         EBX,dword ptr [ESP + 0x200c]
ram:065b3472    55              PUSH        EBP
ram:065b3473    8bac240c2...    MOV         EBP,dword ptr [ESP + 0x200c]
ram:065b347a    56              PUSH        ESI
ram:065b347b    57              PUSH        EDI
ram:065b347c    8bbc241c2...    MOV         EDI,dword ptr [ESP + 0x201c]
ram:065b3483    57              PUSH        EDI
ram:065b3484    53              PUSH        EBX
ram:065b3485    55              PUSH        EBP
ram:065b3486    68c4835b06      PUSH        0x65b83c4
ram:065b348b    e890feffff      CALL        DACOM_GetDllVersion                     ;undefined4 DACOM_GetDllVersion(undef...
ram:065b3490    8bf0            MOV         ESI,EAX
ram:065b3492    83c410          ADD         ESP,0x10
ram:065b3495    85f6            TEST        ESI,ESI
ram:065b3497    7c6c            JL          LAB_065b3505
ram:065b3499    8b07            MOV         EAX,dword ptr [EDI]
ram:065b349b    8b0b            MOV         ECX,dword ptr [EBX]
ram:065b349d    8b5500          MOV         EDX,dword ptr [EBP]
ram:065b34a0    50              PUSH        EAX
ram:065b34a1    51              PUSH        ECX
ram:065b34a2    52              PUSH        EDX
ram:065b34a3    8d44241c        LEA         EAX=>local_res0,[ESP + 0x1c]
ram:065b34a7    689c835b06      PUSH        0x65b839c
ram:065b34ac    50              PUSH        EAX
ram:065b34ad    e82ef3ffff      CALL        FUN_065b27e0                            ;undefined4 FUN_065b27e0(undefined4 p...
ram:065b34b2    50              PUSH        EAX
ram:065b34b3    6857040000      PUSH        0x457
ram:065b34b8    b903001000      MOV         ECX,0x100003
ram:065b34bd    6830815b06      PUSH        0x65b8130
ram:065b34c2    6894805b06      PUSH        0x65b8094
ram:065b34c7    51              PUSH        ECX
ram:065b34c8    ff15348a5b06    CALL        dword ptr [DAT_065b8a34]
ram:065b34ce    68ad000000      PUSH        0xad
ram:065b34d3    6a0b            PUSH        0xb
ram:065b34d5    6a01            PUSH        0x1
ram:065b34d7    8d4c2444        LEA         ECX,[ESP + 0x44]
ram:065b34db    6874835b06      PUSH        0x65b8374
ram:065b34e0    51              PUSH        ECX
ram:065b34e1    e8faf2ffff      CALL        FUN_065b27e0                            ;undefined4 FUN_065b27e0(undefined4 p...
ram:065b34e6    50              PUSH        EAX
ram:065b34e7    6858040000      PUSH        0x458
ram:065b34ec    b903001000      MOV         ECX,0x100003
ram:065b34f1    6830815b06      PUSH        0x65b8130
ram:065b34f6    6894805b06      PUSH        0x65b8094
ram:065b34fb    51              PUSH        ECX
ram:065b34fc    ff15348a5b06    CALL        dword ptr [DAT_065b8a34]
ram:065b3502    83c450          ADD         ESP,0x50
                            LAB_065b3505:                 ;XREF[1,0]:   065b3497
ram:065b3505    8bc6            MOV         EAX,ESI
ram:065b3507    5f              POP         EDI
ram:065b3508    5e              POP         ESI
ram:065b3509    5d              POP         EBP
ram:065b350a    5b              POP         EBX
ram:065b350b    81c400200000    ADD         ESP,0x2000
ram:065b3511    c3              RET
ram:065b3512    90              ??          90h
ram:065b3513    90              ??          90h
ram:065b3514    90              ??          90h
ram:065b3515    90              ??          90h
ram:065b3516    90              ??          90h
ram:065b3517    90              ??          90h
ram:065b3518    90              ??          90h
ram:065b3519    90              ??          90h
ram:065b351a    90              ??          90h
ram:065b351b    90              ??          90h
ram:065b351c    90              ??          90h
ram:065b351d    90              ??          90h
ram:065b351e    90              ??          90h
ram:065b351f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3520(void * this, int * param_1, int * param_2)
          ;this          void *             ECX
          ;param_1       int *                4                      ;XREF[1,0]:   065b355a
          ;param_2       int *                8                      ;XREF[1,0]:   065b3522
                                                          ;XREF[1,0]:   065b3232
ram:065b3520    53              PUSH        EBX
ram:065b3521    56              PUSH        ESI
ram:065b3522    8b742410        MOV         ESI,dword ptr [ESP + param_2+0x8]
ram:065b3526    57              PUSH        EDI
ram:065b3527    8bf9            MOV         EDI,this
ram:065b3529    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b352c    8b0e            MOV         this,dword ptr [ESI]
ram:065b352e    8b1e            MOV         EBX,dword ptr [ESI]
ram:065b3530    8908            MOV         dword ptr [EAX],this
ram:065b3532    8b16            MOV         EDX,dword ptr [ESI]
ram:065b3534    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3537    894204          MOV         dword ptr [EDX + 0x4],EAX
ram:065b353a    8b4e0c          MOV         this,dword ptr [ESI + 0xc]
ram:065b353d    51              PUSH        this
ram:065b353e    e87f290000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3543    56              PUSH        ESI
ram:065b3544    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b354b    e872290000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3550    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b3553    83c408          ADD         ESP,0x8
ram:065b3556    48              DEC         EAX
ram:065b3557    894708          MOV         dword ptr [EDI + 0x8],EAX
ram:065b355a    8b442410        MOV         EAX,dword ptr [ESP + param_1+0xc]
ram:065b355e    5f              POP         EDI
ram:065b355f    5e              POP         ESI
ram:065b3560    8918            MOV         dword ptr [EAX],EBX
ram:065b3562    5b              POP         EBX
ram:065b3563    c20800          RET         0x8
ram:065b3566    90              ??          90h
ram:065b3567    90              ??          90h
ram:065b3568    90              ??          90h
ram:065b3569    90              ??          90h
ram:065b356a    90              ??          90h
ram:065b356b    90              ??          90h
ram:065b356c    90              ??          90h
ram:065b356d    90              ??          90h
ram:065b356e    90              ??          90h
ram:065b356f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3570(void * this, undefined4 * param_1, uint * param_2)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[3,0]:   065b35cc,065b3607,065b361a
          ;param_2       uint *               8                      ;XREF[4,0]:   065b3575,065b35b1,065b35df,065b35e8
          ;local_4       undefined1          -4                      ;XREF[2,0]:   065b35bd,065b35f8
                                                          ;XREF[1,0]:   065b2249
ram:065b3570    51              PUSH        this
ram:065b3571    53              PUSH        EBX
ram:065b3572    8bd9            MOV         EBX,this
ram:065b3574    55              PUSH        EBP
ram:065b3575    8b6c2414        MOV         EBP,dword ptr [ESP + param_2+0xc]
ram:065b3579    8b5304          MOV         EDX,dword ptr [EBX + 0x4]
ram:065b357c    8b4b08          MOV         this,dword ptr [EBX + 0x8]
ram:065b357f    56              PUSH        ESI
ram:065b3580    57              PUSH        EDI
ram:065b3581    8b7204          MOV         ESI,dword ptr [EDX + 0x4]
ram:065b3584    8bfa            MOV         EDI,EDX
ram:065b3586    3bf1            CMP         ESI,this
ram:065b3588    b001            MOV         AL,0x1
ram:065b358a    741a            JZ          LAB_065b35a6
                            LAB_065b358c:                 ;XREF[1,0]:   065b35a4
ram:065b358c    8b4500          MOV         EAX,dword ptr [EBP]
ram:065b358f    8bfe            MOV         EDI,ESI
ram:065b3591    3b460c          CMP         EAX,dword ptr [ESI + 0xc]
ram:065b3594    0f92c0          SETC        AL
ram:065b3597    84c0            TEST        AL,AL
ram:065b3599    7404            JZ          LAB_065b359f
ram:065b359b    8b36            MOV         ESI,dword ptr [ESI]
ram:065b359d    eb03            JMP         LAB_065b35a2
                            LAB_065b359f:                 ;XREF[1,0]:   065b3599
ram:065b359f    8b7608          MOV         ESI,dword ptr [ESI + 0x8]
                            LAB_065b35a2:                 ;XREF[1,0]:   065b359d
ram:065b35a2    3bf1            CMP         ESI,this
ram:065b35a4    75e6            JNZ         LAB_065b358c
                            LAB_065b35a6:                 ;XREF[1,0]:   065b358a
ram:065b35a6    8a4b0c          MOV         this,byte ptr [EBX + 0xc]
ram:065b35a9    84c9            TEST        this,this
ram:065b35ab    7549            JNZ         LAB_065b35f6
ram:065b35ad    8bcf            MOV         this,EDI
ram:065b35af    84c0            TEST        AL,AL
ram:065b35b1    894c241c        MOV         dword ptr [ESP + param_2+0x14],this
ram:065b35b5    7435            JZ          LAB_065b35ec
ram:065b35b7    3b3a            CMP         EDI,dword ptr [EDX]
ram:065b35b9    7524            JNZ         LAB_065b35df
ram:065b35bb    55              PUSH        EBP
ram:065b35bc    57              PUSH        EDI
ram:065b35bd    8d4c2418        LEA         this=>local_4,[ESP + 0x18]
ram:065b35c1    56              PUSH        ESI
ram:065b35c2    51              PUSH        this
ram:065b35c3    8bcb            MOV         this,EBX
ram:065b35c5    e8c6080000      CALL        FUN_065b3e90                            ;undefined FUN_065b3e90(void * this, ...
ram:065b35ca    8b08            MOV         this,dword ptr [EAX]
ram:065b35cc    8b442418        MOV         EAX,dword ptr [ESP + param_1+0x14]
ram:065b35d0    5f              POP         EDI
ram:065b35d1    b201            MOV         DL,0x1
ram:065b35d3    5e              POP         ESI
ram:065b35d4    5d              POP         EBP
ram:065b35d5    8908            MOV         dword ptr [EAX],this
ram:065b35d7    885004          MOV         byte ptr [EAX + 0x4],DL
ram:065b35da    5b              POP         EBX
ram:065b35db    59              POP         this
ram:065b35dc    c20800          RET         0x8
                            LAB_065b35df:                 ;XREF[1,0]:   065b35b9
ram:065b35df    8d4c241c        LEA         this=>param_2,[ESP + 0x1c]
ram:065b35e3    e8180b0000      CALL        FUN_065b4100                            ;undefined FUN_065b4100(int * param_1)
ram:065b35e8    8b4c241c        MOV         this,dword ptr [ESP + param_2+0x14]
                            LAB_065b35ec:                 ;XREF[1,0]:   065b35b5
ram:065b35ec    8b510c          MOV         EDX,dword ptr [this + 0xc]
ram:065b35ef    8b4500          MOV         EAX,dword ptr [EBP]
ram:065b35f2    3bd0            CMP         EDX,EAX
ram:065b35f4    7324            JNC         LAB_065b361a
                            LAB_065b35f6:                 ;XREF[1,0]:   065b35ab
ram:065b35f6    55              PUSH        EBP
ram:065b35f7    57              PUSH        EDI
ram:065b35f8    8d442418        LEA         EAX=>local_4,[ESP + 0x18]
ram:065b35fc    56              PUSH        ESI
ram:065b35fd    50              PUSH        EAX
ram:065b35fe    8bcb            MOV         this,EBX
ram:065b3600    e88b080000      CALL        FUN_065b3e90                            ;undefined FUN_065b3e90(void * this, ...
ram:065b3605    8b08            MOV         this,dword ptr [EAX]
ram:065b3607    8b442418        MOV         EAX,dword ptr [ESP + param_1+0x14]
ram:065b360b    5f              POP         EDI
ram:065b360c    b201            MOV         DL,0x1
ram:065b360e    5e              POP         ESI
ram:065b360f    5d              POP         EBP
ram:065b3610    8908            MOV         dword ptr [EAX],this
ram:065b3612    885004          MOV         byte ptr [EAX + 0x4],DL
ram:065b3615    5b              POP         EBX
ram:065b3616    59              POP         this
ram:065b3617    c20800          RET         0x8
                            LAB_065b361a:                 ;XREF[1,0]:   065b35f4
ram:065b361a    8b442418        MOV         EAX,dword ptr [ESP + param_1+0x14]
ram:065b361e    5f              POP         EDI
ram:065b361f    32d2            XOR         DL,DL
ram:065b3621    5e              POP         ESI
ram:065b3622    5d              POP         EBP
ram:065b3623    8908            MOV         dword ptr [EAX],this
ram:065b3625    885004          MOV         byte ptr [EAX + 0x4],DL
ram:065b3628    5b              POP         EBX
ram:065b3629    59              POP         this
ram:065b362a    c20800          RET         0x8
ram:065b362d    90              ??          90h
ram:065b362e    90              ??          90h
ram:065b362f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3630(void * this, undefined4 * param_1)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b3635
                                                          ;XREF[1,0]:   065b32b0
ram:065b3630    8b4104          MOV         EAX,dword ptr [this + 0x4]
ram:065b3633    8b08            MOV         this,dword ptr [EAX]
ram:065b3635    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b3639    8908            MOV         dword ptr [EAX],this
ram:065b363b    c20400          RET         0x4
ram:065b363e    90              ??          90h
ram:065b363f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3640(void * this, undefined4 * param_1, int * param_2)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b3a90
          ;param_2       int *                8                      ;XREF[3,0]:   065b3646,065b364d,065b3a81
          ;local_4       undefined1          -4                      ;XREF[1,0]:   065b3a1c
          ;local_8       undefined4          -8                      ;XREF[2,0]:   065b3651,065b3a7d
          ;local_c       undefined4          -c                      ;XREF[2,0]:   065b3a20,065b3a27
          ;local_10      undefined4         -10                      ;XREF[5,0]:   065b3663,065b36ac,065b370b,065b39ff,065b3a6b
                                                          ;XREF[1,0]:   065b32d1
ram:065b3640    83ec10          SUB         ESP,0x10
ram:065b3643    53              PUSH        EBX
ram:065b3644    55              PUSH        EBP
ram:065b3645    56              PUSH        ESI
ram:065b3646    8b742424        MOV         ESI,dword ptr [ESP + param_2+0x1c]
ram:065b364a    57              PUSH        EDI
ram:065b364b    8bf9            MOV         EDI,this
ram:065b364d    8d4c2428        LEA         this=>param_2,[ESP + 0x28]
ram:065b3651    897c2418        MOV         dword ptr [ESP + local_8+0x20],EDI
ram:065b3655    e8e6070000      CALL        FUN_065b3e40                            ;undefined FUN_065b3e40(int * param_1)
ram:065b365a    8b16            MOV         EDX,dword ptr [ESI]
ram:065b365c    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b365f    8bee            MOV         EBP,ESI
ram:065b3661    3bd0            CMP         EDX,EAX
ram:065b3663    896c2410        MOV         dword ptr [ESP + local_10+0x20],EBP
ram:065b3667    751d            JNZ         LAB_065b3686
ram:065b3669    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
                            LAB_065b366c:                 ;XREF[2,0]:   065b368f,065b36b0
ram:065b366c    8b4d04          MOV         this,dword ptr [EBP + 0x4]
ram:065b366f    894804          MOV         dword ptr [EAX + 0x4],this
ram:065b3672    8b4f04          MOV         this,dword ptr [EDI + 0x4]
ram:065b3675    397104          CMP         dword ptr [this + 0x4],ESI
ram:065b3678    0f8593000000    JNZ         LAB_065b3711
ram:065b367e    894104          MOV         dword ptr [this + 0x4],EAX
ram:065b3681    e999000000      JMP         LAB_065b371f
                            LAB_065b3686:                 ;XREF[1,0]:   065b3667
ram:065b3686    8b4e08          MOV         this,dword ptr [ESI + 0x8]
ram:065b3689    3bc8            CMP         this,EAX
ram:065b368b    7504            JNZ         LAB_065b3691
ram:065b368d    8bc2            MOV         EAX,EDX
ram:065b368f    ebdb            JMP         LAB_065b366c
                            LAB_065b3691:                 ;XREF[1,0]:   065b368b
ram:065b3691    8b01            MOV         EAX,dword ptr [this]
ram:065b3693    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b3696    84db            TEST        BL,BL
ram:065b3698    750b            JNZ         LAB_065b36a5
                            LAB_065b369a:                 ;XREF[1,0]:   065b36a3
ram:065b369a    8bc8            MOV         this,EAX
ram:065b369c    8b01            MOV         EAX,dword ptr [this]
ram:065b369e    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b36a1    84db            TEST        BL,BL
ram:065b36a3    74f5            JZ          LAB_065b369a
                            LAB_065b36a5:                 ;XREF[1,0]:   065b3698
ram:065b36a5    8b4108          MOV         EAX,dword ptr [this + 0x8]
ram:065b36a8    8be9            MOV         EBP,this
ram:065b36aa    3bce            CMP         this,ESI
ram:065b36ac    896c2410        MOV         dword ptr [ESP + local_10+0x20],EBP
ram:065b36b0    74ba            JZ          LAB_065b366c
ram:065b36b2    894a04          MOV         dword ptr [EDX + 0x4],this
ram:065b36b5    8b16            MOV         EDX,dword ptr [ESI]
ram:065b36b7    8911            MOV         dword ptr [this],EDX
ram:065b36b9    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b36bc    3bca            CMP         this,EDX
ram:065b36be    7505            JNZ         LAB_065b36c5
ram:065b36c0    894804          MOV         dword ptr [EAX + 0x4],this
ram:065b36c3    eb17            JMP         LAB_065b36dc
                            LAB_065b36c5:                 ;XREF[1,0]:   065b36be
ram:065b36c5    8b5104          MOV         EDX,dword ptr [this + 0x4]
ram:065b36c8    895004          MOV         dword ptr [EAX + 0x4],EDX
ram:065b36cb    8b5104          MOV         EDX,dword ptr [this + 0x4]
ram:065b36ce    8902            MOV         dword ptr [EDX],EAX
ram:065b36d0    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b36d3    895108          MOV         dword ptr [this + 0x8],EDX
ram:065b36d6    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b36d9    894a04          MOV         dword ptr [EDX + 0x4],this
                            LAB_065b36dc:                 ;XREF[1,0]:   065b36c3
ram:065b36dc    8b5704          MOV         EDX,dword ptr [EDI + 0x4]
ram:065b36df    397204          CMP         dword ptr [EDX + 0x4],ESI
ram:065b36e2    7505            JNZ         LAB_065b36e9
ram:065b36e4    894a04          MOV         dword ptr [EDX + 0x4],this
ram:065b36e7    eb0e            JMP         LAB_065b36f7
                            LAB_065b36e9:                 ;XREF[1,0]:   065b36e2
ram:065b36e9    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b36ec    3932            CMP         dword ptr [EDX],ESI
ram:065b36ee    7504            JNZ         LAB_065b36f4
ram:065b36f0    890a            MOV         dword ptr [EDX],this
ram:065b36f2    eb03            JMP         LAB_065b36f7
                            LAB_065b36f4:                 ;XREF[1,0]:   065b36ee
ram:065b36f4    894a08          MOV         dword ptr [EDX + 0x8],this
                            LAB_065b36f7:                 ;XREF[2,0]:   065b36e7,065b36f2
ram:065b36f7    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b36fa    8bee            MOV         EBP,ESI
ram:065b36fc    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b36ff    8a5e1c          MOV         BL,byte ptr [ESI + 0x1c]
ram:065b3702    8a511c          MOV         DL,byte ptr [this + 0x1c]
ram:065b3705    88591c          MOV         byte ptr [this + 0x1c],BL
ram:065b3708    88561c          MOV         byte ptr [ESI + 0x1c],DL
ram:065b370b    896c2410        MOV         dword ptr [ESP + local_10+0x20],EBP
ram:065b370f    eb6e            JMP         LAB_065b377f
                            LAB_065b3711:                 ;XREF[1,0]:   065b3678
ram:065b3711    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3714    3931            CMP         dword ptr [this],ESI
ram:065b3716    7504            JNZ         LAB_065b371c
ram:065b3718    8901            MOV         dword ptr [this],EAX
ram:065b371a    eb03            JMP         LAB_065b371f
                            LAB_065b371c:                 ;XREF[1,0]:   065b3716
ram:065b371c    894108          MOV         dword ptr [this + 0x8],EAX
                            LAB_065b371f:                 ;XREF[2,0]:   065b3681,065b371a
ram:065b371f    8b5f04          MOV         EBX,dword ptr [EDI + 0x4]
ram:065b3722    3933            CMP         dword ptr [EBX],ESI
ram:065b3724    7527            JNZ         LAB_065b374d
ram:065b3726    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b3729    8b4f08          MOV         this,dword ptr [EDI + 0x8]
ram:065b372c    3bd1            CMP         EDX,this
ram:065b372e    7507            JNZ         LAB_065b3737
ram:065b3730    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3733    890b            MOV         dword ptr [EBX],this
ram:065b3735    eb16            JMP         LAB_065b374d
                            LAB_065b3737:                 ;XREF[1,0]:   065b372e
ram:065b3737    8b08            MOV         this,dword ptr [EAX]
ram:065b3739    8bd0            MOV         EDX,EAX
ram:065b373b    80791d00        CMP         byte ptr [this + 0x1d],0x0
ram:065b373f    750a            JNZ         LAB_065b374b
                            LAB_065b3741:                 ;XREF[1,0]:   065b3749
ram:065b3741    8bd1            MOV         EDX,this
ram:065b3743    8b0a            MOV         this,dword ptr [EDX]
ram:065b3745    80791d00        CMP         byte ptr [this + 0x1d],0x0
ram:065b3749    74f6            JZ          LAB_065b3741
                            LAB_065b374b:                 ;XREF[1,0]:   065b373f
ram:065b374b    8913            MOV         dword ptr [EBX],EDX
                            LAB_065b374d:                 ;XREF[2,0]:   065b3724,065b3735
ram:065b374d    8b5f04          MOV         EBX,dword ptr [EDI + 0x4]
ram:065b3750    397308          CMP         dword ptr [EBX + 0x8],ESI
ram:065b3753    752a            JNZ         LAB_065b377f
ram:065b3755    8b16            MOV         EDX,dword ptr [ESI]
ram:065b3757    8b4f08          MOV         this,dword ptr [EDI + 0x8]
ram:065b375a    3bd1            CMP         EDX,this
ram:065b375c    7508            JNZ         LAB_065b3766
ram:065b375e    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3761    894b08          MOV         dword ptr [EBX + 0x8],this
ram:065b3764    eb19            JMP         LAB_065b377f
                            LAB_065b3766:                 ;XREF[1,0]:   065b375c
ram:065b3766    8b4808          MOV         this,dword ptr [EAX + 0x8]
ram:065b3769    8bd0            MOV         EDX,EAX
ram:065b376b    80791d00        CMP         byte ptr [this + 0x1d],0x0
ram:065b376f    750b            JNZ         LAB_065b377c
                            LAB_065b3771:                 ;XREF[1,0]:   065b377a
ram:065b3771    8bd1            MOV         EDX,this
ram:065b3773    8b4a08          MOV         this,dword ptr [EDX + 0x8]
ram:065b3776    80791d00        CMP         byte ptr [this + 0x1d],0x0
ram:065b377a    74f5            JZ          LAB_065b3771
                            LAB_065b377c:                 ;XREF[1,0]:   065b376f
ram:065b377c    895308          MOV         dword ptr [EBX + 0x8],EDX
                            LAB_065b377f:                 ;XREF[3,0]:   065b370f,065b3753,065b3764
ram:065b377f    807d1c01        CMP         byte ptr [EBP + 0x1c],0x1
ram:065b3783    0f8576020000    JNZ         LAB_065b39ff
ram:065b3789    8b5704          MOV         EDX,dword ptr [EDI + 0x4]
ram:065b378c    3b4204          CMP         EAX,dword ptr [EDX + 0x4]
ram:065b378f    0f8466020000    JZ          LAB_065b39fb
                            LAB_065b3795:                 ;XREF[1,0]:   065b38d4
ram:065b3795    80781c01        CMP         byte ptr [EAX + 0x1c],0x1
ram:065b3799    0f855c020000    JNZ         LAB_065b39fb
ram:065b379f    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b37a2    8b0a            MOV         this,dword ptr [EDX]
ram:065b37a4    3bc1            CMP         EAX,this
ram:065b37a6    0f85ae000000    JNZ         LAB_065b385a
ram:065b37ac    8b4a08          MOV         this,dword ptr [EDX + 0x8]
ram:065b37af    8a511c          MOV         DL,byte ptr [this + 0x1c]
ram:065b37b2    84d2            TEST        DL,DL
ram:065b37b4    754c            JNZ         LAB_065b3802
ram:065b37b6    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b37ba    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b37bd    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b37c1    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b37c4    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b37c7    8b32            MOV         ESI,dword ptr [EDX]
ram:065b37c9    897108          MOV         dword ptr [this + 0x8],ESI
ram:065b37cc    8b32            MOV         ESI,dword ptr [EDX]
ram:065b37ce    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b37d1    7403            JZ          LAB_065b37d6
ram:065b37d3    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b37d6:                 ;XREF[1,0]:   065b37d1
ram:065b37d6    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b37d9    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b37dc    8b7704          MOV         ESI,dword ptr [EDI + 0x4]
ram:065b37df    3b4e04          CMP         this,dword ptr [ESI + 0x4]
ram:065b37e2    7505            JNZ         LAB_065b37e9
ram:065b37e4    895604          MOV         dword ptr [ESI + 0x4],EDX
ram:065b37e7    eb0e            JMP         LAB_065b37f7
                            LAB_065b37e9:                 ;XREF[1,0]:   065b37e2
ram:065b37e9    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b37ec    3b0e            CMP         this,dword ptr [ESI]
ram:065b37ee    7504            JNZ         LAB_065b37f4
ram:065b37f0    8916            MOV         dword ptr [ESI],EDX
ram:065b37f2    eb03            JMP         LAB_065b37f7
                            LAB_065b37f4:                 ;XREF[1,0]:   065b37ee
ram:065b37f4    895608          MOV         dword ptr [ESI + 0x8],EDX
                            LAB_065b37f7:                 ;XREF[2,0]:   065b37e7,065b37f2
ram:065b37f7    890a            MOV         dword ptr [EDX],this
ram:065b37f9    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b37fc    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b37ff    8b4a08          MOV         this,dword ptr [EDX + 0x8]
                            LAB_065b3802:                 ;XREF[1,0]:   065b37b4
ram:065b3802    8b11            MOV         EDX,dword ptr [this]
ram:065b3804    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b3808    750d            JNZ         LAB_065b3817
ram:065b380a    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b380d    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b3811    0f84b0000000    JZ          LAB_065b38c7
                            LAB_065b3817:                 ;XREF[1,0]:   065b3808
ram:065b3817    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b381a    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b381e    0f85d6000000    JNZ         LAB_065b38fa
ram:065b3824    8b11            MOV         EDX,dword ptr [this]
ram:065b3826    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b382a    8b11            MOV         EDX,dword ptr [this]
ram:065b382c    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b3830    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b3833    8931            MOV         dword ptr [this],ESI
ram:065b3835    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b3838    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b383b    7403            JZ          LAB_065b3840
ram:065b383d    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b3840:                 ;XREF[1,0]:   065b383b
ram:065b3840    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3843    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b3846    8b7704          MOV         ESI,dword ptr [EDI + 0x4]
ram:065b3849    3b4e04          CMP         this,dword ptr [ESI + 0x4]
ram:065b384c    0f858d000000    JNZ         LAB_065b38df
ram:065b3852    895604          MOV         dword ptr [ESI + 0x4],EDX
ram:065b3855    e994000000      JMP         LAB_065b38ee
                            LAB_065b385a:                 ;XREF[1,0]:   065b37a6
ram:065b385a    8a511c          MOV         DL,byte ptr [this + 0x1c]
ram:065b385d    84d2            TEST        DL,DL
ram:065b385f    754d            JNZ         LAB_065b38ae
ram:065b3861    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b3865    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b3868    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b386c    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b386f    8b11            MOV         EDX,dword ptr [this]
ram:065b3871    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b3874    8931            MOV         dword ptr [this],ESI
ram:065b3876    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b3879    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b387c    7403            JZ          LAB_065b3881
ram:065b387e    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b3881:                 ;XREF[1,0]:   065b387c
ram:065b3881    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3884    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b3887    8b7704          MOV         ESI,dword ptr [EDI + 0x4]
ram:065b388a    3b4e04          CMP         this,dword ptr [ESI + 0x4]
ram:065b388d    7505            JNZ         LAB_065b3894
ram:065b388f    895604          MOV         dword ptr [ESI + 0x4],EDX
ram:065b3892    eb0f            JMP         LAB_065b38a3
                            LAB_065b3894:                 ;XREF[1,0]:   065b388d
ram:065b3894    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3897    3b4e08          CMP         this,dword ptr [ESI + 0x8]
ram:065b389a    7505            JNZ         LAB_065b38a1
ram:065b389c    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b389f    eb02            JMP         LAB_065b38a3
                            LAB_065b38a1:                 ;XREF[1,0]:   065b389a
ram:065b38a1    8916            MOV         dword ptr [ESI],EDX
                            LAB_065b38a3:                 ;XREF[2,0]:   065b3892,065b389f
ram:065b38a3    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b38a6    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b38a9    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b38ac    8b0a            MOV         this,dword ptr [EDX]
                            LAB_065b38ae:                 ;XREF[1,0]:   065b385f
ram:065b38ae    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b38b1    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b38b5    0f859d000000    JNZ         LAB_065b3958
ram:065b38bb    8b11            MOV         EDX,dword ptr [this]
ram:065b38bd    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b38c1    0f8591000000    JNZ         LAB_065b3958
                            LAB_065b38c7:                 ;XREF[1,0]:   065b3811
ram:065b38c7    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b38cb    8b4f04          MOV         this,dword ptr [EDI + 0x4]
ram:065b38ce    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b38d1    3b4104          CMP         EAX,dword ptr [this + 0x4]
ram:065b38d4    0f85bbfeffff    JNZ         LAB_065b3795
ram:065b38da    e91c010000      JMP         LAB_065b39fb
                            LAB_065b38df:                 ;XREF[1,0]:   065b384c
ram:065b38df    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b38e2    3b4e08          CMP         this,dword ptr [ESI + 0x8]
ram:065b38e5    7505            JNZ         LAB_065b38ec
ram:065b38e7    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b38ea    eb02            JMP         LAB_065b38ee
                            LAB_065b38ec:                 ;XREF[1,0]:   065b38e5
ram:065b38ec    8916            MOV         dword ptr [ESI],EDX
                            LAB_065b38ee:                 ;XREF[2,0]:   065b3855,065b38ea
ram:065b38ee    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b38f1    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b38f4    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b38f7    8b4908          MOV         this,dword ptr [this + 0x8]
                            LAB_065b38fa:                 ;XREF[1,0]:   065b381e
ram:065b38fa    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b38fd    8a521c          MOV         DL,byte ptr [EDX + 0x1c]
ram:065b3900    88511c          MOV         byte ptr [this + 0x1c],DL
ram:065b3903    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3906    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b390a    8b4908          MOV         this,dword ptr [this + 0x8]
ram:065b390d    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b3911    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b3914    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b3917    8b32            MOV         ESI,dword ptr [EDX]
ram:065b3919    897108          MOV         dword ptr [this + 0x8],ESI
ram:065b391c    8b32            MOV         ESI,dword ptr [EDX]
ram:065b391e    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b3921    7403            JZ          LAB_065b3926
ram:065b3923    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b3926:                 ;XREF[1,0]:   065b3921
ram:065b3926    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3929    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b392c    8b7f04          MOV         EDI,dword ptr [EDI + 0x4]
ram:065b392f    3b4f04          CMP         this,dword ptr [EDI + 0x4]
ram:065b3932    750a            JNZ         LAB_065b393e
ram:065b3934    895704          MOV         dword ptr [EDI + 0x4],EDX
ram:065b3937    890a            MOV         dword ptr [EDX],this
ram:065b3939    e9ba000000      JMP         LAB_065b39f8
                            LAB_065b393e:                 ;XREF[1,0]:   065b3932
ram:065b393e    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3941    3b0e            CMP         this,dword ptr [ESI]
ram:065b3943    7509            JNZ         LAB_065b394e
ram:065b3945    8916            MOV         dword ptr [ESI],EDX
ram:065b3947    890a            MOV         dword ptr [EDX],this
ram:065b3949    e9aa000000      JMP         LAB_065b39f8
                            LAB_065b394e:                 ;XREF[1,0]:   065b3943
ram:065b394e    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b3951    890a            MOV         dword ptr [EDX],this
ram:065b3953    e9a0000000      JMP         LAB_065b39f8
                            LAB_065b3958:                 ;XREF[2,0]:   065b38b5,065b38c1
ram:065b3958    8b11            MOV         EDX,dword ptr [this]
ram:065b395a    807a1c01        CMP         byte ptr [EDX + 0x1c],0x1
ram:065b395e    7548            JNZ         LAB_065b39a8
ram:065b3960    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b3963    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b3967    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b396a    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b396e    8b32            MOV         ESI,dword ptr [EDX]
ram:065b3970    897108          MOV         dword ptr [this + 0x8],ESI
ram:065b3973    8b32            MOV         ESI,dword ptr [EDX]
ram:065b3975    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b3978    7403            JZ          LAB_065b397d
ram:065b397a    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b397d:                 ;XREF[1,0]:   065b3978
ram:065b397d    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3980    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b3983    8b7704          MOV         ESI,dword ptr [EDI + 0x4]
ram:065b3986    3b4e04          CMP         this,dword ptr [ESI + 0x4]
ram:065b3989    7505            JNZ         LAB_065b3990
ram:065b398b    895604          MOV         dword ptr [ESI + 0x4],EDX
ram:065b398e    eb0e            JMP         LAB_065b399e
                            LAB_065b3990:                 ;XREF[1,0]:   065b3989
ram:065b3990    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b3993    3b0e            CMP         this,dword ptr [ESI]
ram:065b3995    7504            JNZ         LAB_065b399b
ram:065b3997    8916            MOV         dword ptr [ESI],EDX
ram:065b3999    eb03            JMP         LAB_065b399e
                            LAB_065b399b:                 ;XREF[1,0]:   065b3995
ram:065b399b    895608          MOV         dword ptr [ESI + 0x8],EDX
                            LAB_065b399e:                 ;XREF[2,0]:   065b398e,065b3999
ram:065b399e    890a            MOV         dword ptr [EDX],this
ram:065b39a0    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b39a3    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b39a6    8b09            MOV         this,dword ptr [this]
                            LAB_065b39a8:                 ;XREF[1,0]:   065b395e
ram:065b39a8    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b39ab    8a521c          MOV         DL,byte ptr [EDX + 0x1c]
ram:065b39ae    88511c          MOV         byte ptr [this + 0x1c],DL
ram:065b39b1    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b39b4    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b39b8    8b09            MOV         this,dword ptr [this]
ram:065b39ba    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b39be    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b39c1    8b11            MOV         EDX,dword ptr [this]
ram:065b39c3    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b39c6    8931            MOV         dword ptr [this],ESI
ram:065b39c8    8b7208          MOV         ESI,dword ptr [EDX + 0x8]
ram:065b39cb    3b7708          CMP         ESI,dword ptr [EDI + 0x8]
ram:065b39ce    7403            JZ          LAB_065b39d3
ram:065b39d0    894e04          MOV         dword ptr [ESI + 0x4],this
                            LAB_065b39d3:                 ;XREF[1,0]:   065b39ce
ram:065b39d3    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b39d6    897204          MOV         dword ptr [EDX + 0x4],ESI
ram:065b39d9    8b7f04          MOV         EDI,dword ptr [EDI + 0x4]
ram:065b39dc    3b4f04          CMP         this,dword ptr [EDI + 0x4]
ram:065b39df    7505            JNZ         LAB_065b39e6
ram:065b39e1    895704          MOV         dword ptr [EDI + 0x4],EDX
ram:065b39e4    eb0f            JMP         LAB_065b39f5
                            LAB_065b39e6:                 ;XREF[1,0]:   065b39df
ram:065b39e6    8b7104          MOV         ESI,dword ptr [this + 0x4]
ram:065b39e9    3b4e08          CMP         this,dword ptr [ESI + 0x8]
ram:065b39ec    7505            JNZ         LAB_065b39f3
ram:065b39ee    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b39f1    eb02            JMP         LAB_065b39f5
                            LAB_065b39f3:                 ;XREF[1,0]:   065b39ec
ram:065b39f3    8916            MOV         dword ptr [ESI],EDX
                            LAB_065b39f5:                 ;XREF[2,0]:   065b39e4,065b39f1
ram:065b39f5    894a08          MOV         dword ptr [EDX + 0x8],this
                            LAB_065b39f8:                 ;XREF[3,0]:   065b3939,065b3949,065b3953
ram:065b39f8    895104          MOV         dword ptr [this + 0x4],EDX
                            LAB_065b39fb:                 ;XREF[3,0]:   065b378f,065b3799,065b38da
ram:065b39fb    c6401c01        MOV         byte ptr [EAX + 0x1c],0x1
                            LAB_065b39ff:                 ;XREF[1,0]:   065b3783
ram:065b39ff    8b542410        MOV         EDX,dword ptr [ESP + local_10+0x20]
ram:065b3a03    8b5a14          MOV         EBX,dword ptr [EDX + 0x14]
ram:065b3a06    8d6a10          LEA         EBP,[EDX + 0x10]
ram:065b3a09    8b3b            MOV         EDI,dword ptr [EBX]
ram:065b3a0b    3bfb            CMP         EDI,EBX
ram:065b3a0d    7453            JZ          LAB_065b3a62
                            LAB_065b3a0f:                 ;XREF[1,0]:   065b3a60
ram:065b3a0f    57              PUSH        EDI
ram:065b3a10    8bf7            MOV         ESI,EDI
ram:065b3a12    e8f9020000      CALL        FUN_065b3d10                            ;undefined4 FUN_065b3d10(undefined4 p...
ram:065b3a17    8b38            MOV         EDI,dword ptr [EAX]
ram:065b3a19    83c404          ADD         ESP,0x4
ram:065b3a1c    8d44241c        LEA         EAX=>local_4,[ESP + 0x1c]
ram:065b3a20    8d4c2414        LEA         this=>local_c,[ESP + 0x14]
ram:065b3a24    6a00            PUSH        0x0
ram:065b3a26    50              PUSH        EAX
ram:065b3a27    8974241c        MOV         dword ptr [ESP + local_c+0x28],ESI
ram:065b3a2b    e870000000      CALL        FUN_065b3aa0                            ;undefined FUN_065b3aa0(void * this, ...
ram:065b3a30    8b30            MOV         ESI,dword ptr [EAX]
ram:065b3a32    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3a35    8b16            MOV         EDX,dword ptr [ESI]
ram:065b3a37    8911            MOV         dword ptr [this],EDX
ram:065b3a39    8b06            MOV         EAX,dword ptr [ESI]
ram:065b3a3b    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3a3e    8d5608          LEA         EDX,[ESI + 0x8]
ram:065b3a41    52              PUSH        EDX
ram:065b3a42    894804          MOV         dword ptr [EAX + 0x4],this
ram:065b3a45    e8c6070000      CALL        FUN_065b4210                            ;undefined FUN_065b4210(int * param_1)
ram:065b3a4a    83c404          ADD         ESP,0x4
ram:065b3a4d    8bcd            MOV         this,EBP
ram:065b3a4f    6a01            PUSH        0x1
ram:065b3a51    56              PUSH        ESI
ram:065b3a52    e8d9030000      CALL        FUN_065b3e30                            ;undefined FUN_065b3e30(void)
ram:065b3a57    8b4d08          MOV         this,dword ptr [EBP + 0x8]
ram:065b3a5a    49              DEC         this
ram:065b3a5b    3bfb            CMP         EDI,EBX
ram:065b3a5d    894d08          MOV         dword ptr [EBP + 0x8],this
ram:065b3a60    75ad            JNZ         LAB_065b3a0f
                            LAB_065b3a62:                 ;XREF[1,0]:   065b3a0d
ram:065b3a62    8b4504          MOV         EAX,dword ptr [EBP + 0x4]
ram:065b3a65    50              PUSH        EAX
ram:065b3a66    e857240000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3a6b    8b4c2414        MOV         this,dword ptr [ESP + local_10+0x24]
ram:065b3a6f    33c0            XOR         EAX,EAX
ram:065b3a71    51              PUSH        this
ram:065b3a72    894504          MOV         dword ptr [EBP + 0x4],EAX
ram:065b3a75    894508          MOV         dword ptr [EBP + 0x8],EAX
ram:065b3a78    e845240000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3a7d    8b442420        MOV         EAX,dword ptr [ESP + local_8+0x28]
ram:065b3a81    8b542430        MOV         EDX,dword ptr [ESP + param_2+0x28]
ram:065b3a85    83c408          ADD         ESP,0x8
ram:065b3a88    8b4810          MOV         this,dword ptr [EAX + 0x10]
ram:065b3a8b    49              DEC         this
ram:065b3a8c    5f              POP         EDI
ram:065b3a8d    894810          MOV         dword ptr [EAX + 0x10],this
ram:065b3a90    8b442420        MOV         EAX,dword ptr [ESP + param_1+0x1c]
ram:065b3a94    5e              POP         ESI
ram:065b3a95    5d              POP         EBP
ram:065b3a96    8910            MOV         dword ptr [EAX],EDX
ram:065b3a98    5b              POP         EBX
ram:065b3a99    83c410          ADD         ESP,0x10
ram:065b3a9c    c20800          RET         0x8
ram:065b3a9f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3aa0(void * this, undefined4 * param_1)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b3aa6
                                                          ;XREF[1,0]:   065b3a2b
ram:065b3aa0    8b11            MOV         EDX,dword ptr [this]
ram:065b3aa2    8b02            MOV         EAX,dword ptr [EDX]
ram:065b3aa4    8901            MOV         dword ptr [this],EAX
ram:065b3aa6    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b3aaa    8910            MOV         dword ptr [EAX],EDX
ram:065b3aac    c20800          RET         0x8
ram:065b3aaf    90              ??          90h
ram:065b3ab0    51              ??          51h    Q
ram:065b3ab1    8b              ??          8Bh
ram:065b3ab2    51              ??          51h    Q
ram:065b3ab3    04              ??          04h
ram:065b3ab4    8b              ??          8Bh
ram:065b3ab5    49              ??          49h    I
ram:065b3ab6    08              ??          08h
ram:065b3ab7    53              ??          53h    S
ram:065b3ab8    8b              ??          8Bh
ram:065b3ab9    5c              ??          5Ch    \
ram:065b3aba    24              ??          24h    $
ram:065b3abb    10              ??          10h
ram:065b3abc    8b              ??          8Bh
ram:065b3abd    42              ??          42h    B
ram:065b3abe    04              ??          04h
ram:065b3abf    56              ??          56h    V
ram:065b3ac0    3b              ??          3Bh    ;
ram:065b3ac1    c1              ??          C1h
ram:065b3ac2    8b              ??          8Bh
ram:065b3ac3    f2              ??          F2h
ram:065b3ac4    74              ??          74h    t
ram:065b3ac5    16              ??          16h
ram:065b3ac6    57              ??          57h    W
ram:065b3ac7    8b              ??          8Bh
ram:065b3ac8    3b              ??          3Bh    ;
ram:065b3ac9    39              ??          39h    9
ram:065b3aca    78              ??          78h    x
ram:065b3acb    0c              ??          0Ch
ram:065b3acc    73              ??          73h    s
ram:065b3acd    05              ??          05h
ram:065b3ace    8b              ??          8Bh
ram:065b3acf    40              ??          40h    @
ram:065b3ad0    08              ??          08h
ram:065b3ad1    eb              ??          EBh
ram:065b3ad2    04              ??          04h
ram:065b3ad3    8b              ??          8Bh
ram:065b3ad4    f0              ??          F0h
ram:065b3ad5    8b              ??          8Bh
ram:065b3ad6    00              ??          00h
ram:065b3ad7    3b              ??          3Bh    ;
ram:065b3ad8    c1              ??          C1h
ram:065b3ad9    75              ??          75h    u
ram:065b3ada    ee              ??          EEh
ram:065b3adb    5f              ??          5Fh    _
ram:065b3adc    3b              ??          3Bh    ;
ram:065b3add    f2              ??          F2h
ram:065b3ade    89              ??          89h
ram:065b3adf    74              ??          74h    t
ram:065b3ae0    24              ??          24h    $
ram:065b3ae1    14              ??          14h
ram:065b3ae2    74              ??          74h    t
ram:065b3ae3    1b              ??          1Bh
ram:065b3ae4    8b              ??          8Bh
ram:065b3ae5    03              ??          03h
ram:065b3ae6    8b              ??          8Bh
ram:065b3ae7    4e              ??          4Eh    N
ram:065b3ae8    0c              ??          0Ch
ram:065b3ae9    3b              ??          3Bh    ;
ram:065b3aea    c1              ??          C1h
ram:065b3aeb    72              ??          72h    r
ram:065b3aec    12              ??          12h
ram:065b3aed    8d              ??          8Dh
ram:065b3aee    44              ??          44h    D
ram:065b3aef    24              ??          24h    $
ram:065b3af0    14              ??          14h
ram:065b3af1    5e              ??          5Eh    ^
ram:065b3af2    5b              ??          5Bh    [
ram:065b3af3    8b              ??          8Bh
ram:065b3af4    08              ??          08h
ram:065b3af5    8b              ??          8Bh
ram:065b3af6    44              ??          44h    D
ram:065b3af7    24              ??          24h    $
ram:065b3af8    08              ??          08h
ram:065b3af9    89              ??          89h
ram:065b3afa    08              ??          08h
ram:065b3afb    59              ??          59h    Y
ram:065b3afc    c2              ??          C2h
ram:065b3afd    08              ??          08h
ram:065b3afe    00              ??          00h
ram:065b3aff    8d              ??          8Dh
ram:065b3b00    44              ??          44h    D
ram:065b3b01    24              ??          24h    $
ram:065b3b02    08              ??          08h
ram:065b3b03    89              ??          89h
ram:065b3b04    54              ??          54h    T
ram:065b3b05    24              ??          24h    $
ram:065b3b06    08              ??          08h
ram:065b3b07    5e              ??          5Eh    ^
ram:065b3b08    5b              ??          5Bh    [
ram:065b3b09    8b              ??          8Bh
ram:065b3b0a    08              ??          08h
ram:065b3b0b    8b              ??          8Bh
ram:065b3b0c    44              ??          44h    D
ram:065b3b0d    24              ??          24h    $
ram:065b3b0e    08              ??          08h
ram:065b3b0f    89              ??          89h
ram:065b3b10    08              ??          08h
ram:065b3b11    59              ??          59h    Y
ram:065b3b12    c2              ??          C2h
ram:065b3b13    08              ??          08h
ram:065b3b14    00              ??          00h
ram:065b3b15    90              ??          90h
ram:065b3b16    90              ??          90h
ram:065b3b17    90              ??          90h
ram:065b3b18    90              ??          90h
ram:065b3b19    90              ??          90h
ram:065b3b1a    90              ??          90h
ram:065b3b1b    90              ??          90h
ram:065b3b1c    90              ??          90h
ram:065b3b1d    90              ??          90h
ram:065b3b1e    90              ??          90h
ram:065b3b1f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;void * FUN_065b3b20(void * this, undefined4 * param_1, undefined1 * param_2)
          ;this          void *             ECX
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b3b20
          ;param_2       undefined1 *         8                      ;XREF[1,0]:   065b3b27
                                                          ;XREF[1,0]:   065b2237
ram:065b3b20    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b3b24    53              PUSH        EBX
ram:065b3b25    55              PUSH        EBP
ram:065b3b26    56              PUSH        ESI
ram:065b3b27    8b742414        MOV         ESI,dword ptr [ESP + param_2+0xc]
ram:065b3b2b    8bd9            MOV         EBX,this
ram:065b3b2d    8b08            MOV         this,dword ptr [EAX]
ram:065b3b2f    57              PUSH        EDI
ram:065b3b30    890b            MOV         dword ptr [EBX],this
ram:065b3b32    8a16            MOV         DL,byte ptr [ESI]
ram:065b3b34    6a18            PUSH        0x18
ram:065b3b36    885304          MOV         byte ptr [EBX + 0x4],DL
ram:065b3b39    e890230000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3b3e    8900            MOV         dword ptr [EAX],EAX
ram:065b3b40    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b3b43    894308          MOV         dword ptr [EBX + 0x8],EAX
ram:065b3b46    c7430c000...    MOV         dword ptr [EBX + 0xc],0x0
ram:065b3b4d    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3b50    8b28            MOV         EBP,dword ptr [EAX]
ram:065b3b52    83c404          ADD         ESP,0x4
ram:065b3b55    894c2414        MOV         dword ptr [ESP + 0x14],this
ram:065b3b59    8b39            MOV         EDI,dword ptr [this]
ram:065b3b5b    3bf9            CMP         EDI,this
ram:065b3b5d    746b            JZ          LAB_065b3bca
                            LAB_065b3b5f:                 ;XREF[1,0]:   065b3bc8
ram:065b3b5f    8b7504          MOV         ESI,dword ptr [EBP + 0x4]
ram:065b3b62    6a18            PUSH        0x18
ram:065b3b64    e865230000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3b69    33c9            XOR         this,this
ram:065b3b6b    83c404          ADD         ESP,0x4
ram:065b3b6e    3bf1            CMP         ESI,this
ram:065b3b70    8928            MOV         dword ptr [EAX],EBP
ram:065b3b72    7502            JNZ         LAB_065b3b76
ram:065b3b74    8bf0            MOV         ESI,EAX
                            LAB_065b3b76:                 ;XREF[1,0]:   065b3b72
ram:065b3b76    897004          MOV         dword ptr [EAX + 0x4],ESI
ram:065b3b79    894504          MOV         dword ptr [EBP + 0x4],EAX
ram:065b3b7c    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3b7f    8d7008          LEA         ESI,[EAX + 0x8]
ram:065b3b82    3bf1            CMP         ESI,this
ram:065b3b84    8902            MOV         dword ptr [EDX],EAX
ram:065b3b86    7431            JZ          LAB_065b3bb9
ram:065b3b88    894e0c          MOV         dword ptr [ESI + 0xc],this
ram:065b3b8b    894e04          MOV         dword ptr [ESI + 0x4],this
ram:065b3b8e    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b3b91    3bc1            CMP         EAX,this
ram:065b3b93    8906            MOV         dword ptr [ESI],EAX
ram:065b3b95    7406            JZ          LAB_065b3b9d
ram:065b3b97    8b08            MOV         this,dword ptr [EAX]
ram:065b3b99    50              PUSH        EAX
ram:065b3b9a    ff5104          CALL        dword ptr [this + 0x4]
                            LAB_065b3b9d:                 ;XREF[1,0]:   065b3b95
ram:065b3b9d    8b5710          MOV         EDX,dword ptr [EDI + 0x10]
ram:065b3ba0    8bce            MOV         this,ESI
ram:065b3ba2    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b3ba5    8b470c          MOV         EAX,dword ptr [EDI + 0xc]
ram:065b3ba8    50              PUSH        EAX
ram:065b3ba9    e882000000      CALL        FUN_065b3c30                            ;undefined FUN_065b3c30(void * this, ...
ram:065b3bae    8b4f14          MOV         this,dword ptr [EDI + 0x14]
ram:065b3bb1    51              PUSH        this
ram:065b3bb2    8bce            MOV         this,ESI
ram:065b3bb4    e827000000      CALL        FUN_065b3be0                            ;undefined FUN_065b3be0(void * this, ...
                            LAB_065b3bb9:                 ;XREF[1,0]:   065b3b86
ram:065b3bb9    8b4b0c          MOV         this,dword ptr [EBX + 0xc]
ram:065b3bbc    8b442414        MOV         EAX,dword ptr [ESP + 0x14]
ram:065b3bc0    41              INC         this
ram:065b3bc1    894b0c          MOV         dword ptr [EBX + 0xc],this
ram:065b3bc4    8b3f            MOV         EDI,dword ptr [EDI]
ram:065b3bc6    3bf8            CMP         EDI,EAX
ram:065b3bc8    7595            JNZ         LAB_065b3b5f
                            LAB_065b3bca:                 ;XREF[1,0]:   065b3b5d
ram:065b3bca    5f              POP         EDI
ram:065b3bcb    5e              POP         ESI
ram:065b3bcc    8bc3            MOV         EAX,EBX
ram:065b3bce    5d              POP         EBP
ram:065b3bcf    5b              POP         EBX
ram:065b3bd0    c20800          RET         0x8
ram:065b3bd3    90              ??          90h
ram:065b3bd4    90              ??          90h
ram:065b3bd5    90              ??          90h
ram:065b3bd6    90              ??          90h
ram:065b3bd7    90              ??          90h
ram:065b3bd8    90              ??          90h
ram:065b3bd9    90              ??          90h
ram:065b3bda    90              ??          90h
ram:065b3bdb    90              ??          90h
ram:065b3bdc    90              ??          90h
ram:065b3bdd    90              ??          90h
ram:065b3bde    90              ??          90h
ram:065b3bdf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3be0(void * this, char * param_1)
          ;this          void *             ECX
          ;param_1       char *               4                      ;XREF[1,0]:   065b3bed
                                                          ;XREF[2,0]:   065b3bb4,065b42fb
ram:065b3be0    53              PUSH        EBX
ram:065b3be1    56              PUSH        ESI
ram:065b3be2    8bf1            MOV         ESI,this
ram:065b3be4    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b3be7    50              PUSH        EAX
ram:065b3be8    e8d5220000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3bed    8b5c2410        MOV         EBX,dword ptr [ESP + param_1+0xc]
ram:065b3bf1    83c404          ADD         ESP,0x4
ram:065b3bf4    85db            TEST        EBX,EBX
ram:065b3bf6    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b3bfd    7427            JZ          LAB_065b3c26
ram:065b3bff    57              PUSH        EDI
ram:065b3c00    8bfb            MOV         EDI,EBX
ram:065b3c02    83c9ff          OR          this,0xffffffff
ram:065b3c05    33c0            XOR         EAX,EAX
ram:065b3c07    f2ae            SCASB.REPNE ES:EDI
ram:065b3c09    f7d1            NOT         this
ram:065b3c0b    51              PUSH        this
ram:065b3c0c    e8bd220000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3c11    83c404          ADD         ESP,0x4
ram:065b3c14    89460c          MOV         dword ptr [ESI + 0xc],EAX
ram:065b3c17    8bcb            MOV         this,EBX
ram:065b3c19    8bd0            MOV         EDX,EAX
ram:065b3c1b    5f              POP         EDI
                            LAB_065b3c1c:                 ;XREF[1,0]:   065b3c24
ram:065b3c1c    8a01            MOV         AL,byte ptr [this]
ram:065b3c1e    41              INC         this
ram:065b3c1f    8802            MOV         byte ptr [EDX],AL
ram:065b3c21    42              INC         EDX
ram:065b3c22    84c0            TEST        AL,AL
ram:065b3c24    75f6            JNZ         LAB_065b3c1c
                            LAB_065b3c26:                 ;XREF[1,0]:   065b3bfd
ram:065b3c26    5e              POP         ESI
ram:065b3c27    5b              POP         EBX
ram:065b3c28    c20400          RET         0x4
ram:065b3c2b    90              ??          90h
ram:065b3c2c    90              ??          90h
ram:065b3c2d    90              ??          90h
ram:065b3c2e    90              ??          90h
ram:065b3c2f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3c30(void * this, char * param_1)
          ;this          void *             ECX
          ;param_1       char *               4                      ;XREF[1,0]:   065b3c3d
                                                          ;XREF[2,0]:   065b3ba9,065b42f0
ram:065b3c30    53              PUSH        EBX
ram:065b3c31    56              PUSH        ESI
ram:065b3c32    8bf1            MOV         ESI,this
ram:065b3c34    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3c37    50              PUSH        EAX
ram:065b3c38    e885220000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3c3d    8b5c2410        MOV         EBX,dword ptr [ESP + param_1+0xc]
ram:065b3c41    83c404          ADD         ESP,0x4
ram:065b3c44    85db            TEST        EBX,EBX
ram:065b3c46    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b3c4d    7427            JZ          LAB_065b3c76
ram:065b3c4f    57              PUSH        EDI
ram:065b3c50    8bfb            MOV         EDI,EBX
ram:065b3c52    83c9ff          OR          this,0xffffffff
ram:065b3c55    33c0            XOR         EAX,EAX
ram:065b3c57    f2ae            SCASB.REPNE ES:EDI
ram:065b3c59    f7d1            NOT         this
ram:065b3c5b    51              PUSH        this
ram:065b3c5c    e86d220000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3c61    83c404          ADD         ESP,0x4
ram:065b3c64    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b3c67    8bcb            MOV         this,EBX
ram:065b3c69    8bd0            MOV         EDX,EAX
ram:065b3c6b    5f              POP         EDI
                            LAB_065b3c6c:                 ;XREF[1,0]:   065b3c74
ram:065b3c6c    8a01            MOV         AL,byte ptr [this]
ram:065b3c6e    41              INC         this
ram:065b3c6f    8802            MOV         byte ptr [EDX],AL
ram:065b3c71    42              INC         EDX
ram:065b3c72    84c0            TEST        AL,AL
ram:065b3c74    75f6            JNZ         LAB_065b3c6c
                            LAB_065b3c76:                 ;XREF[1,0]:   065b3c4d
ram:065b3c76    5e              POP         ESI
ram:065b3c77    5b              POP         EBX
ram:065b3c78    c20400          RET         0x4
ram:065b3c7b    90              ??          90h
ram:065b3c7c    90              ??          90h
ram:065b3c7d    90              ??          90h
ram:065b3c7e    90              ??          90h
ram:065b3c7f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3c80(int param_1)
          ;param_1       int                ECX
                                                          ;XREF[2,0]:   065b2258,065b2261
ram:065b3c80    53              PUSH        EBX
ram:065b3c81    8bd9            MOV         EBX,param_1
ram:065b3c83    55              PUSH        EBP
ram:065b3c84    57              PUSH        EDI
ram:065b3c85    8b6b04          MOV         EBP,dword ptr [EBX + 0x4]
ram:065b3c88    8b7d00          MOV         EDI,dword ptr [EBP]
ram:065b3c8b    3bfd            CMP         EDI,EBP
ram:065b3c8d    7431            JZ          LAB_065b3cc0
ram:065b3c8f    56              PUSH        ESI
                            LAB_065b3c90:                 ;XREF[1,0]:   065b3cbd
ram:065b3c90    8bf7            MOV         ESI,EDI
ram:065b3c92    8b3f            MOV         EDI,dword ptr [EDI]
ram:065b3c94    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3c97    8b0e            MOV         param_1,dword ptr [ESI]
ram:065b3c99    8908            MOV         dword ptr [EAX],param_1
ram:065b3c9b    8b16            MOV         EDX,dword ptr [ESI]
ram:065b3c9d    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3ca0    8d4e08          LEA         param_1,[ESI + 0x8]
ram:065b3ca3    894204          MOV         dword ptr [EDX + 0x4],EAX
ram:065b3ca6    e8e5e7ffff      CALL        FUN_065b2490                            ;undefined FUN_065b2490(int * param_1)
ram:065b3cab    56              PUSH        ESI
ram:065b3cac    e811220000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3cb1    8b4b08          MOV         param_1,dword ptr [EBX + 0x8]
ram:065b3cb4    83c404          ADD         ESP,0x4
ram:065b3cb7    49              DEC         param_1
ram:065b3cb8    3bfd            CMP         EDI,EBP
ram:065b3cba    894b08          MOV         dword ptr [EBX + 0x8],param_1
ram:065b3cbd    75d1            JNZ         LAB_065b3c90
ram:065b3cbf    5e              POP         ESI
                            LAB_065b3cc0:                 ;XREF[1,0]:   065b3c8d
ram:065b3cc0    8b4b04          MOV         param_1,dword ptr [EBX + 0x4]
ram:065b3cc3    51              PUSH        param_1
ram:065b3cc4    e8f9210000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3cc9    83c404          ADD         ESP,0x4
ram:065b3ccc    33c0            XOR         EAX,EAX
ram:065b3cce    894304          MOV         dword ptr [EBX + 0x4],EAX
ram:065b3cd1    894308          MOV         dword ptr [EBX + 0x8],EAX
ram:065b3cd4    5f              POP         EDI
ram:065b3cd5    5d              POP         EBP
ram:065b3cd6    5b              POP         EBX
ram:065b3cd7    c3              RET
ram:065b3cd8    90              ??          90h
ram:065b3cd9    90              ??          90h
ram:065b3cda    90              ??          90h
ram:065b3cdb    90              ??          90h
ram:065b3cdc    90              ??          90h
ram:065b3cdd    90              ??          90h
ram:065b3cde    90              ??          90h
ram:065b3cdf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3ce0(int * param_1, int param_2)
          ;param_1       int *                4
          ;param_2       int                  8
                                                          ;XREF[1,0]:   065b221c
ram:065b3ce0    6a18            PUSH        0x18
ram:065b3ce2    e8e7210000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3ce7    8b4c2408        MOV         ECX,dword ptr [ESP + 0x8]
ram:065b3ceb    83c404          ADD         ESP,0x4
ram:065b3cee    85c9            TEST        ECX,ECX
ram:065b3cf0    7502            JNZ         LAB_065b3cf4
ram:065b3cf2    8bc8            MOV         ECX,EAX
                            LAB_065b3cf4:                 ;XREF[1,0]:   065b3cf0
ram:065b3cf4    8908            MOV         dword ptr [EAX],ECX
ram:065b3cf6    8b4c2408        MOV         ECX,dword ptr [ESP + 0x8]
ram:065b3cfa    85c9            TEST        ECX,ECX
ram:065b3cfc    7406            JZ          LAB_065b3d04
ram:065b3cfe    894804          MOV         dword ptr [EAX + 0x4],ECX
ram:065b3d01    c20800          RET         0x8
                            LAB_065b3d04:                 ;XREF[1,0]:   065b3cfc
ram:065b3d04    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b3d07    c20800          RET         0x8
ram:065b3d0a    90              ??          90h
ram:065b3d0b    90              ??          90h
ram:065b3d0c    90              ??          90h
ram:065b3d0d    90              ??          90h
ram:065b3d0e    90              ??          90h
ram:065b3d0f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b3d10(undefined4 param_1)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b3d10
                                                          ;XREF[2,0]:   065b3a12,065b3d5f
ram:065b3d10    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b3d14    c3              RET
ram:065b3d15    90              ??          90h
ram:065b3d16    90              ??          90h
ram:065b3d17    90              ??          90h
ram:065b3d18    90              ??          90h
ram:065b3d19    90              ??          90h
ram:065b3d1a    90              ??          90h
ram:065b3d1b    90              ??          90h
ram:065b3d1c    90              ??          90h
ram:065b3d1d    90              ??          90h
ram:065b3d1e    90              ??          90h
ram:065b3d1f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3d20(void * this, int * param_1)
          ;this          void *             ECX
          ;param_1       int *                4                      ;XREF[4,0]:   065b3d28,065b3d3a,065b3d87,065b3da0
          ;local_4       undefined1          -4                      ;XREF[1,0]:   065b3d6d
          ;local_8       undefined4          -8                      ;XREF[2,0]:   065b3d5b,065b3d64
          ;local_c       undefined4          -c                      ;XREF[3,0]:   065b3d2e,065b3d3e,065b3d99
                                                          ;XREF[2,0]:   065b327e,065b3d46
ram:065b3d20    83ec0c          SUB         ESP,0xc
ram:065b3d23    8b4108          MOV         EAX,dword ptr [this + 0x8]
ram:065b3d26    55              PUSH        EBP
ram:065b3d27    57              PUSH        EDI
ram:065b3d28    8b7c2418        MOV         EDI,dword ptr [ESP + param_1+0x14]
ram:065b3d2c    3bf8            CMP         EDI,EAX
ram:065b3d2e    894c2408        MOV         dword ptr [ESP + local_c+0x14],this
ram:065b3d32    8bef            MOV         EBP,EDI
ram:065b3d34    7475            JZ          LAB_065b3dab
ram:065b3d36    53              PUSH        EBX
ram:065b3d37    56              PUSH        ESI
ram:065b3d38    eb08            JMP         LAB_065b3d42
                            LAB_065b3d3a:                 ;XREF[1,0]:   065b3da7
ram:065b3d3a    8b7c2420        MOV         EDI,dword ptr [ESP + param_1+0x1c]
ram:065b3d3e    8b4c2410        MOV         this,dword ptr [ESP + local_c+0x1c]
                            LAB_065b3d42:                 ;XREF[1,0]:   065b3d38
ram:065b3d42    8b4508          MOV         EAX,dword ptr [EBP + 0x8]
ram:065b3d45    50              PUSH        EAX
ram:065b3d46    e8d5ffffff      CALL        FUN_065b3d20                            ;undefined FUN_065b3d20(void * this, ...
ram:065b3d4b    8b5f14          MOV         EBX,dword ptr [EDI + 0x14]
ram:065b3d4e    83c710          ADD         EDI,0x10
ram:065b3d51    8b6d00          MOV         EBP,dword ptr [EBP]
ram:065b3d54    8b33            MOV         ESI,dword ptr [EBX]
ram:065b3d56    3bf3            CMP         ESI,EBX
ram:065b3d58    7424            JZ          LAB_065b3d7e
                            LAB_065b3d5a:                 ;XREF[1,0]:   065b3d7c
ram:065b3d5a    56              PUSH        ESI
ram:065b3d5b    89742418        MOV         dword ptr [ESP + local_8+0x20],ESI
ram:065b3d5f    e8acffffff      CALL        FUN_065b3d10                            ;undefined4 FUN_065b3d10(undefined4 p...
ram:065b3d64    8b4c2418        MOV         this,dword ptr [ESP + local_8+0x20]
ram:065b3d68    8b30            MOV         ESI,dword ptr [EAX]
ram:065b3d6a    83c404          ADD         ESP,0x4
ram:065b3d6d    8d542418        LEA         EDX=>local_4,[ESP + 0x18]
ram:065b3d71    51              PUSH        this
ram:065b3d72    52              PUSH        EDX
ram:065b3d73    8bcf            MOV         this,EDI
ram:065b3d75    e846000000      CALL        FUN_065b3dc0                            ;undefined FUN_065b3dc0(void * this, ...
ram:065b3d7a    3bf3            CMP         ESI,EBX
ram:065b3d7c    75dc            JNZ         LAB_065b3d5a
                            LAB_065b3d7e:                 ;XREF[1,0]:   065b3d58
ram:065b3d7e    8b4704          MOV         EAX,dword ptr [EDI + 0x4]
ram:065b3d81    50              PUSH        EAX
ram:065b3d82    e83b210000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3d87    8b4c2424        MOV         this,dword ptr [ESP + param_1+0x20]
ram:065b3d8b    33c0            XOR         EAX,EAX
ram:065b3d8d    51              PUSH        this
ram:065b3d8e    894704          MOV         dword ptr [EDI + 0x4],EAX
ram:065b3d91    894708          MOV         dword ptr [EDI + 0x8],EAX
ram:065b3d94    e829210000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3d99    8b542418        MOV         EDX,dword ptr [ESP + local_c+0x24]
ram:065b3d9d    83c408          ADD         ESP,0x8
ram:065b3da0    896c2420        MOV         dword ptr [ESP + param_1+0x1c],EBP
ram:065b3da4    3b6a08          CMP         EBP,dword ptr [EDX + 0x8]
ram:065b3da7    7591            JNZ         LAB_065b3d3a
ram:065b3da9    5e              POP         ESI
ram:065b3daa    5b              POP         EBX
                            LAB_065b3dab:                 ;XREF[1,0]:   065b3d34
ram:065b3dab    5f              POP         EDI
ram:065b3dac    5d              POP         EBP
ram:065b3dad    83c40c          ADD         ESP,0xc
ram:065b3db0    c20400          RET         0x4
ram:065b3db3    90              ??          90h
ram:065b3db4    90              ??          90h
ram:065b3db5    90              ??          90h
ram:065b3db6    90              ??          90h
ram:065b3db7    90              ??          90h
ram:065b3db8    90              ??          90h
ram:065b3db9    90              ??          90h
ram:065b3dba    90              ??          90h
ram:065b3dbb    90              ??          90h
ram:065b3dbc    90              ??          90h
ram:065b3dbd    90              ??          90h
ram:065b3dbe    90              ??          90h
ram:065b3dbf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3dc0(void * this, int * param_1, int * param_2)
          ;this          void *             ECX
          ;param_1       int *                4
          ;param_2       int *                8                      ;XREF[1,0]:   065b3dc3
                                                          ;XREF[1,0]:   065b3d75
ram:065b3dc0    53              PUSH        EBX
ram:065b3dc1    55              PUSH        EBP
ram:065b3dc2    56              PUSH        ESI
ram:065b3dc3    8b742414        MOV         ESI,dword ptr [ESP + param_2+0xc]
ram:065b3dc7    57              PUSH        EDI
ram:065b3dc8    8bf9            MOV         EDI,this
ram:065b3dca    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3dcd    8b0e            MOV         this,dword ptr [ESI]
ram:065b3dcf    8b1e            MOV         EBX,dword ptr [ESI]
ram:065b3dd1    33ed            XOR         EBP,EBP
ram:065b3dd3    8908            MOV         dword ptr [EAX],this
ram:065b3dd5    8b16            MOV         EDX,dword ptr [ESI]
ram:065b3dd7    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3dda    894204          MOV         dword ptr [EDX + 0x4],EAX
ram:065b3ddd    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b3de0    3bc5            CMP         EAX,EBP
ram:065b3de2    7409            JZ          LAB_065b3ded
ram:065b3de4    8b08            MOV         this,dword ptr [EAX]
ram:065b3de6    50              PUSH        EAX
ram:065b3de7    ff5108          CALL        dword ptr [this + 0x8]
ram:065b3dea    896e08          MOV         dword ptr [ESI + 0x8],EBP
                            LAB_065b3ded:                 ;XREF[1,0]:   065b3de2
ram:065b3ded    8b560c          MOV         EDX,dword ptr [ESI + 0xc]
ram:065b3df0    896e10          MOV         dword ptr [ESI + 0x10],EBP
ram:065b3df3    52              PUSH        EDX
ram:065b3df4    e8c9200000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3df9    8b4614          MOV         EAX,dword ptr [ESI + 0x14]
ram:065b3dfc    896e0c          MOV         dword ptr [ESI + 0xc],EBP
ram:065b3dff    50              PUSH        EAX
ram:065b3e00    e8bd200000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3e05    56              PUSH        ESI
ram:065b3e06    896e14          MOV         dword ptr [ESI + 0x14],EBP
ram:065b3e09    e8b4200000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3e0e    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b3e11    83c40c          ADD         ESP,0xc
ram:065b3e14    48              DEC         EAX
ram:065b3e15    894708          MOV         dword ptr [EDI + 0x8],EAX
ram:065b3e18    8b442414        MOV         EAX,dword ptr [ESP + 0x14]
ram:065b3e1c    5f              POP         EDI
ram:065b3e1d    5e              POP         ESI
ram:065b3e1e    8918            MOV         dword ptr [EAX],EBX
ram:065b3e20    5d              POP         EBP
ram:065b3e21    5b              POP         EBX
ram:065b3e22    c20800          RET         0x8
ram:065b3e25    90              ??          90h
ram:065b3e26    90              ??          90h
ram:065b3e27    90              ??          90h
ram:065b3e28    90              ??          90h
ram:065b3e29    90              ??          90h
ram:065b3e2a    90              ??          90h
ram:065b3e2b    90              ??          90h
ram:065b3e2c    90              ??          90h
ram:065b3e2d    90              ??          90h
ram:065b3e2e    90              ??          90h
ram:065b3e2f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3e30(void)
                                                          ;XREF[1,0]:   065b3a52
ram:065b3e30    8b442404        MOV         EAX,dword ptr [ESP + Stack[0x4]]
ram:065b3e34    50              PUSH        EAX
ram:065b3e35    e888200000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b3e3a    59              POP         ECX
ram:065b3e3b    c20800          RET         0x8
ram:065b3e3e    90              ??          90h
ram:065b3e3f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3e40(int * param_1)
          ;param_1       int *              ECX
                                                          ;XREF[2,0]:   065b32c1,065b3655
ram:065b3e40    8b01            MOV         EAX,dword ptr [param_1]
ram:065b3e42    53              PUSH        EBX
ram:065b3e43    8b5008          MOV         EDX,dword ptr [EAX + 0x8]
ram:065b3e46    8a5a1d          MOV         BL,byte ptr [EDX + 0x1d]
ram:065b3e49    84db            TEST        BL,BL
ram:065b3e4b    7518            JNZ         LAB_065b3e65
ram:065b3e4d    8b02            MOV         EAX,dword ptr [EDX]
ram:065b3e4f    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b3e52    84db            TEST        BL,BL
ram:065b3e54    750b            JNZ         LAB_065b3e61
                            LAB_065b3e56:                 ;XREF[1,0]:   065b3e5f
ram:065b3e56    8bd0            MOV         EDX,EAX
ram:065b3e58    8b02            MOV         EAX,dword ptr [EDX]
ram:065b3e5a    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b3e5d    84db            TEST        BL,BL
ram:065b3e5f    74f5            JZ          LAB_065b3e56
                            LAB_065b3e61:                 ;XREF[1,0]:   065b3e54
ram:065b3e61    8911            MOV         dword ptr [param_1],EDX
ram:065b3e63    5b              POP         EBX
ram:065b3e64    c3              RET
                            LAB_065b3e65:                 ;XREF[1,0]:   065b3e4b
ram:065b3e65    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b3e68    8b11            MOV         EDX,dword ptr [param_1]
ram:065b3e6a    3b5008          CMP         EDX,dword ptr [EAX + 0x8]
ram:065b3e6d    750c            JNZ         LAB_065b3e7b
                            LAB_065b3e6f:                 ;XREF[1,0]:   065b3e79
ram:065b3e6f    8901            MOV         dword ptr [param_1],EAX
ram:065b3e71    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b3e74    8b11            MOV         EDX,dword ptr [param_1]
ram:065b3e76    3b5008          CMP         EDX,dword ptr [EAX + 0x8]
ram:065b3e79    74f4            JZ          LAB_065b3e6f
                            LAB_065b3e7b:                 ;XREF[1,0]:   065b3e6d
ram:065b3e7b    8b11            MOV         EDX,dword ptr [param_1]
ram:065b3e7d    394208          CMP         dword ptr [EDX + 0x8],EAX
ram:065b3e80    7402            JZ          LAB_065b3e84
ram:065b3e82    8901            MOV         dword ptr [param_1],EAX
                            LAB_065b3e84:                 ;XREF[1,0]:   065b3e80
ram:065b3e84    5b              POP         EBX
ram:065b3e85    c3              RET
ram:065b3e86    90              ??          90h
ram:065b3e87    90              ??          90h
ram:065b3e88    90              ??          90h
ram:065b3e89    90              ??          90h
ram:065b3e8a    90              ??          90h
ram:065b3e8b    90              ??          90h
ram:065b3e8c    90              ??          90h
ram:065b3e8d    90              ??          90h
ram:065b3e8e    90              ??          90h
ram:065b3e8f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b3e90(void * this, undefined4 * param_1, int param_2, int * param_3, uint * param_4)
          ;this          void *             ECX
          ;param_1       undefined4 *         4
          ;param_2       int                  8
          ;param_3       int *                c
          ;param_4       uint *              10
                                                          ;XREF[2,0]:   065b35c5,065b3600
ram:065b3e90    53              PUSH        EBX
ram:065b3e91    55              PUSH        EBP
ram:065b3e92    56              PUSH        ESI
ram:065b3e93    57              PUSH        EDI
ram:065b3e94    6a20            PUSH        0x20
ram:065b3e96    8bf1            MOV         ESI,this
ram:065b3e98    e831200000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b3e9d    8b7c2420        MOV         EDI,dword ptr [ESP + 0x20]
ram:065b3ea1    8b6c2424        MOV         EBP,dword ptr [ESP + 0x24]
ram:065b3ea5    8bd8            MOV         EBX,EAX
ram:065b3ea7    55              PUSH        EBP
ram:065b3ea8    897b04          MOV         dword ptr [EBX + 0x4],EDI
ram:065b3eab    c6431c00        MOV         byte ptr [EBX + 0x1c],0x0
ram:065b3eaf    c6431d00        MOV         byte ptr [EBX + 0x1d],0x0
ram:065b3eb3    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b3eb6    8903            MOV         dword ptr [EBX],EAX
ram:065b3eb8    8b4e08          MOV         this,dword ptr [ESI + 0x8]
ram:065b3ebb    8d530c          LEA         EDX,[EBX + 0xc]
ram:065b3ebe    894b08          MOV         dword ptr [EBX + 0x8],this
ram:065b3ec1    52              PUSH        EDX
ram:065b3ec2    e899030000      CALL        FUN_065b4260                            ;undefined FUN_065b4260(undefined4 * ...
ram:065b3ec7    8b4e10          MOV         this,dword ptr [ESI + 0x10]
ram:065b3eca    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3ecd    83c40c          ADD         ESP,0xc
ram:065b3ed0    41              INC         this
ram:065b3ed1    3bf8            CMP         EDI,EAX
ram:065b3ed3    894e10          MOV         dword ptr [ESI + 0x10],this
ram:065b3ed6    7425            JZ          LAB_065b3efd
ram:065b3ed8    8b442418        MOV         EAX,dword ptr [ESP + 0x18]
ram:065b3edc    8b4e08          MOV         this,dword ptr [ESI + 0x8]
ram:065b3edf    3bc1            CMP         EAX,this
ram:065b3ee1    751a            JNZ         LAB_065b3efd
ram:065b3ee3    8b4d00          MOV         this,dword ptr [EBP]
ram:065b3ee6    8b470c          MOV         EAX,dword ptr [EDI + 0xc]
ram:065b3ee9    3bc8            CMP         this,EAX
ram:065b3eeb    7210            JC          LAB_065b3efd
ram:065b3eed    895f08          MOV         dword ptr [EDI + 0x8],EBX
ram:065b3ef0    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3ef3    3b7808          CMP         EDI,dword ptr [EAX + 0x8]
ram:065b3ef6    751f            JNZ         LAB_065b3f17
ram:065b3ef8    895808          MOV         dword ptr [EAX + 0x8],EBX
ram:065b3efb    eb1a            JMP         LAB_065b3f17
                            LAB_065b3efd:                 ;XREF[3,0]:   065b3ed6,065b3ee1,065b3eeb
ram:065b3efd    891f            MOV         dword ptr [EDI],EBX
ram:065b3eff    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b3f02    3bf8            CMP         EDI,EAX
ram:065b3f04    750b            JNZ         LAB_065b3f11
ram:065b3f06    895804          MOV         dword ptr [EAX + 0x4],EBX
ram:065b3f09    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b3f0c    895a08          MOV         dword ptr [EDX + 0x8],EBX
ram:065b3f0f    eb06            JMP         LAB_065b3f17
                            LAB_065b3f11:                 ;XREF[1,0]:   065b3f04
ram:065b3f11    3b38            CMP         EDI,dword ptr [EAX]
ram:065b3f13    7502            JNZ         LAB_065b3f17
ram:065b3f15    8918            MOV         dword ptr [EAX],EBX
                            LAB_065b3f17:                 ;XREF[4,0]:   065b3ef6,065b3efb,065b3f0f,065b3f13
ram:065b3f17    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b3f1a    8bc3            MOV         EAX,EBX
ram:065b3f1c    3b5904          CMP         EBX,dword ptr [this + 0x4]
ram:065b3f1f    0f849d010000    JZ          LAB_065b40c2
                            LAB_065b3f25:                 ;XREF[1,0]:   065b40bc
ram:065b3f25    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b3f28    8a511c          MOV         DL,byte ptr [this + 0x1c]
ram:065b3f2b    84d2            TEST        DL,DL
ram:065b3f2d    0f858f010000    JNZ         LAB_065b40c2
ram:065b3f33    8b7904          MOV         EDI,dword ptr [this + 0x4]
ram:065b3f36    8b17            MOV         EDX,dword ptr [EDI]
ram:065b3f38    3bca            CMP         this,EDX
ram:065b3f3a    0f85c4000000    JNZ         LAB_065b4004
ram:065b3f40    8b5708          MOV         EDX,dword ptr [EDI + 0x8]
ram:065b3f43    807a1c00        CMP         byte ptr [EDX + 0x1c],0x0
ram:065b3f47    751d            JNZ         LAB_065b3f66
ram:065b3f49    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b3f4d    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b3f51    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3f54    8b4a04          MOV         this,dword ptr [EDX + 0x4]
ram:065b3f57    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b3f5b    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3f5e    8b4204          MOV         EAX,dword ptr [EDX + 0x4]
ram:065b3f61    e950010000      JMP         LAB_065b40b6
                            LAB_065b3f66:                 ;XREF[1,0]:   065b3f47
ram:065b3f66    3b4108          CMP         EAX,dword ptr [this + 0x8]
ram:065b3f69    753a            JNZ         LAB_065b3fa5
ram:065b3f6b    8bc1            MOV         EAX,this
ram:065b3f6d    8b4808          MOV         this,dword ptr [EAX + 0x8]
ram:065b3f70    8b11            MOV         EDX,dword ptr [this]
ram:065b3f72    895008          MOV         dword ptr [EAX + 0x8],EDX
ram:065b3f75    8b11            MOV         EDX,dword ptr [this]
ram:065b3f77    3b5608          CMP         EDX,dword ptr [ESI + 0x8]
ram:065b3f7a    7403            JZ          LAB_065b3f7f
ram:065b3f7c    894204          MOV         dword ptr [EDX + 0x4],EAX
                            LAB_065b3f7f:                 ;XREF[1,0]:   065b3f7a
ram:065b3f7f    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3f82    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b3f85    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b3f88    3b4204          CMP         EAX,dword ptr [EDX + 0x4]
ram:065b3f8b    7505            JNZ         LAB_065b3f92
ram:065b3f8d    894a04          MOV         dword ptr [EDX + 0x4],this
ram:065b3f90    eb0e            JMP         LAB_065b3fa0
                            LAB_065b3f92:                 ;XREF[1,0]:   065b3f8b
ram:065b3f92    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3f95    3b02            CMP         EAX,dword ptr [EDX]
ram:065b3f97    7504            JNZ         LAB_065b3f9d
ram:065b3f99    890a            MOV         dword ptr [EDX],this
ram:065b3f9b    eb03            JMP         LAB_065b3fa0
                            LAB_065b3f9d:                 ;XREF[1,0]:   065b3f97
ram:065b3f9d    894a08          MOV         dword ptr [EDX + 0x8],this
                            LAB_065b3fa0:                 ;XREF[2,0]:   065b3f90,065b3f9b
ram:065b3fa0    8901            MOV         dword ptr [this],EAX
ram:065b3fa2    894804          MOV         dword ptr [EAX + 0x4],this
                            LAB_065b3fa5:                 ;XREF[1,0]:   065b3f69
ram:065b3fa5    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b3fa8    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b3fac    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3faf    8b4a04          MOV         this,dword ptr [EDX + 0x4]
ram:065b3fb2    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b3fb6    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b3fb9    8b4a04          MOV         this,dword ptr [EDX + 0x4]
ram:065b3fbc    8b11            MOV         EDX,dword ptr [this]
ram:065b3fbe    8b7a08          MOV         EDI,dword ptr [EDX + 0x8]
ram:065b3fc1    8939            MOV         dword ptr [this],EDI
ram:065b3fc3    8b7a08          MOV         EDI,dword ptr [EDX + 0x8]
ram:065b3fc6    3b7e08          CMP         EDI,dword ptr [ESI + 0x8]
ram:065b3fc9    7403            JZ          LAB_065b3fce
ram:065b3fcb    894f04          MOV         dword ptr [EDI + 0x4],this
                            LAB_065b3fce:                 ;XREF[1,0]:   065b3fc9
ram:065b3fce    8b7904          MOV         EDI,dword ptr [this + 0x4]
ram:065b3fd1    897a04          MOV         dword ptr [EDX + 0x4],EDI
ram:065b3fd4    8b7e04          MOV         EDI,dword ptr [ESI + 0x4]
ram:065b3fd7    3b4f04          CMP         this,dword ptr [EDI + 0x4]
ram:065b3fda    750b            JNZ         LAB_065b3fe7
ram:065b3fdc    895704          MOV         dword ptr [EDI + 0x4],EDX
ram:065b3fdf    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b3fe2    e9cc000000      JMP         LAB_065b40b3
                            LAB_065b3fe7:                 ;XREF[1,0]:   065b3fda
ram:065b3fe7    8b7904          MOV         EDI,dword ptr [this + 0x4]
ram:065b3fea    3b4f08          CMP         this,dword ptr [EDI + 0x8]
ram:065b3fed    750b            JNZ         LAB_065b3ffa
ram:065b3fef    895708          MOV         dword ptr [EDI + 0x8],EDX
ram:065b3ff2    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b3ff5    e9b9000000      JMP         LAB_065b40b3
                            LAB_065b3ffa:                 ;XREF[1,0]:   065b3fed
ram:065b3ffa    8917            MOV         dword ptr [EDI],EDX
ram:065b3ffc    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b3fff    e9af000000      JMP         LAB_065b40b3
                            LAB_065b4004:                 ;XREF[1,0]:   065b3f3a
ram:065b4004    807a1c00        CMP         byte ptr [EDX + 0x1c],0x0
ram:065b4008    751d            JNZ         LAB_065b4027
ram:065b400a    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b400e    c6421c01        MOV         byte ptr [EDX + 0x1c],0x1
ram:065b4012    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b4015    8b5104          MOV         EDX,dword ptr [this + 0x4]
ram:065b4018    c6421c00        MOV         byte ptr [EDX + 0x1c],0x0
ram:065b401c    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b401f    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b4022    e98f000000      JMP         LAB_065b40b6
                            LAB_065b4027:                 ;XREF[1,0]:   065b4008
ram:065b4027    3b01            CMP         EAX,dword ptr [this]
ram:065b4029    753c            JNZ         LAB_065b4067
ram:065b402b    8bc1            MOV         EAX,this
ram:065b402d    8b08            MOV         this,dword ptr [EAX]
ram:065b402f    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b4032    8910            MOV         dword ptr [EAX],EDX
ram:065b4034    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b4037    3b5608          CMP         EDX,dword ptr [ESI + 0x8]
ram:065b403a    7403            JZ          LAB_065b403f
ram:065b403c    894204          MOV         dword ptr [EDX + 0x4],EAX
                            LAB_065b403f:                 ;XREF[1,0]:   065b403a
ram:065b403f    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b4042    895104          MOV         dword ptr [this + 0x4],EDX
ram:065b4045    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b4048    3b4204          CMP         EAX,dword ptr [EDX + 0x4]
ram:065b404b    7505            JNZ         LAB_065b4052
ram:065b404d    894a04          MOV         dword ptr [EDX + 0x4],this
ram:065b4050    eb0f            JMP         LAB_065b4061
                            LAB_065b4052:                 ;XREF[1,0]:   065b404b
ram:065b4052    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b4055    3b4208          CMP         EAX,dword ptr [EDX + 0x8]
ram:065b4058    7505            JNZ         LAB_065b405f
ram:065b405a    894a08          MOV         dword ptr [EDX + 0x8],this
ram:065b405d    eb02            JMP         LAB_065b4061
                            LAB_065b405f:                 ;XREF[1,0]:   065b4058
ram:065b405f    890a            MOV         dword ptr [EDX],this
                            LAB_065b4061:                 ;XREF[2,0]:   065b4050,065b405d
ram:065b4061    894108          MOV         dword ptr [this + 0x8],EAX
ram:065b4064    894804          MOV         dword ptr [EAX + 0x4],this
                            LAB_065b4067:                 ;XREF[1,0]:   065b4029
ram:065b4067    8b4804          MOV         this,dword ptr [EAX + 0x4]
ram:065b406a    c6411c01        MOV         byte ptr [this + 0x1c],0x1
ram:065b406e    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b4071    8b4a04          MOV         this,dword ptr [EDX + 0x4]
ram:065b4074    c6411c00        MOV         byte ptr [this + 0x1c],0x0
ram:065b4078    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b407b    8b4a04          MOV         this,dword ptr [EDX + 0x4]
ram:065b407e    8b5108          MOV         EDX,dword ptr [this + 0x8]
ram:065b4081    8b3a            MOV         EDI,dword ptr [EDX]
ram:065b4083    897908          MOV         dword ptr [this + 0x8],EDI
ram:065b4086    8b3a            MOV         EDI,dword ptr [EDX]
ram:065b4088    3b7e08          CMP         EDI,dword ptr [ESI + 0x8]
ram:065b408b    7403            JZ          LAB_065b4090
ram:065b408d    894f04          MOV         dword ptr [EDI + 0x4],this
                            LAB_065b4090:                 ;XREF[1,0]:   065b408b
ram:065b4090    8b7904          MOV         EDI,dword ptr [this + 0x4]
ram:065b4093    897a04          MOV         dword ptr [EDX + 0x4],EDI
ram:065b4096    8b7e04          MOV         EDI,dword ptr [ESI + 0x4]
ram:065b4099    3b4f04          CMP         this,dword ptr [EDI + 0x4]
ram:065b409c    7505            JNZ         LAB_065b40a3
ram:065b409e    895704          MOV         dword ptr [EDI + 0x4],EDX
ram:065b40a1    eb0e            JMP         LAB_065b40b1
                            LAB_065b40a3:                 ;XREF[1,0]:   065b409c
ram:065b40a3    8b7904          MOV         EDI,dword ptr [this + 0x4]
ram:065b40a6    3b0f            CMP         this,dword ptr [EDI]
ram:065b40a8    7504            JNZ         LAB_065b40ae
ram:065b40aa    8917            MOV         dword ptr [EDI],EDX
ram:065b40ac    eb03            JMP         LAB_065b40b1
                            LAB_065b40ae:                 ;XREF[1,0]:   065b40a8
ram:065b40ae    895708          MOV         dword ptr [EDI + 0x8],EDX
                            LAB_065b40b1:                 ;XREF[2,0]:   065b40a1,065b40ac
ram:065b40b1    890a            MOV         dword ptr [EDX],this
                            LAB_065b40b3:                 ;XREF[3,0]:   065b3fe2,065b3ff5,065b3fff
ram:065b40b3    895104          MOV         dword ptr [this + 0x4],EDX
                            LAB_065b40b6:                 ;XREF[2,0]:   065b3f61,065b4022
ram:065b40b6    8b4e04          MOV         this,dword ptr [ESI + 0x4]
ram:065b40b9    3b4104          CMP         EAX,dword ptr [this + 0x4]
ram:065b40bc    0f8563feffff    JNZ         LAB_065b3f25
                            LAB_065b40c2:                 ;XREF[2,0]:   065b3f1f,065b3f2d
ram:065b40c2    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b40c5    5f              POP         EDI
ram:065b40c6    5e              POP         ESI
ram:065b40c7    5d              POP         EBP
ram:065b40c8    8b4204          MOV         EAX,dword ptr [EDX + 0x4]
ram:065b40cb    c6401c01        MOV         byte ptr [EAX + 0x1c],0x1
ram:065b40cf    8b442408        MOV         EAX,dword ptr [ESP + 0x8]
ram:065b40d3    8918            MOV         dword ptr [EAX],EBX
ram:065b40d5    5b              POP         EBX
ram:065b40d6    c21000          RET         0x10
ram:065b40d9    90              ??          90h
ram:065b40da    90              ??          90h
ram:065b40db    90              ??          90h
ram:065b40dc    90              ??          90h
ram:065b40dd    90              ??          90h
ram:065b40de    90              ??          90h
ram:065b40df    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b40e0(undefined4 param_1, undefined1 param_2)
          ;param_1       undefined4           4
          ;param_2       undefined1           8
                                                          ;XREF[1,0]:   065b1fcb
ram:065b40e0    6a20            PUSH        0x20
ram:065b40e2    e8e71d0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b40e7    8b4c2408        MOV         ECX,dword ptr [ESP + 0x8]
ram:065b40eb    8a54240c        MOV         DL,byte ptr [ESP + 0xc]
ram:065b40ef    83c404          ADD         ESP,0x4
ram:065b40f2    894804          MOV         dword ptr [EAX + 0x4],ECX
ram:065b40f5    88501c          MOV         byte ptr [EAX + 0x1c],DL
ram:065b40f8    c6401d00        MOV         byte ptr [EAX + 0x1d],0x0
ram:065b40fc    c20800          RET         0x8
ram:065b40ff    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b4100(int * param_1)
          ;param_1       int *              ECX
                                                          ;XREF[1,0]:   065b35e3
ram:065b4100    8b01            MOV         EAX,dword ptr [param_1]
ram:065b4102    53              PUSH        EBX
ram:065b4103    8a501c          MOV         DL,byte ptr [EAX + 0x1c]
ram:065b4106    84d2            TEST        DL,DL
ram:065b4108    750f            JNZ         LAB_065b4119
ram:065b410a    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b410d    394204          CMP         dword ptr [EDX + 0x4],EAX
ram:065b4110    7507            JNZ         LAB_065b4119
ram:065b4112    8b4008          MOV         EAX,dword ptr [EAX + 0x8]
ram:065b4115    8901            MOV         dword ptr [param_1],EAX
ram:065b4117    5b              POP         EBX
ram:065b4118    c3              RET
                            LAB_065b4119:                 ;XREF[2,0]:   065b4108,065b4110
ram:065b4119    8b10            MOV         EDX,dword ptr [EAX]
ram:065b411b    8a5a1d          MOV         BL,byte ptr [EDX + 0x1d]
ram:065b411e    84db            TEST        BL,BL
ram:065b4120    751a            JNZ         LAB_065b413c
ram:065b4122    8b4208          MOV         EAX,dword ptr [EDX + 0x8]
ram:065b4125    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b4128    84db            TEST        BL,BL
ram:065b412a    750c            JNZ         LAB_065b4138
                            LAB_065b412c:                 ;XREF[1,0]:   065b4136
ram:065b412c    8bd0            MOV         EDX,EAX
ram:065b412e    8b4208          MOV         EAX,dword ptr [EDX + 0x8]
ram:065b4131    8a581d          MOV         BL,byte ptr [EAX + 0x1d]
ram:065b4134    84db            TEST        BL,BL
ram:065b4136    74f4            JZ          LAB_065b412c
                            LAB_065b4138:                 ;XREF[1,0]:   065b412a
ram:065b4138    8911            MOV         dword ptr [param_1],EDX
ram:065b413a    5b              POP         EBX
ram:065b413b    c3              RET
                            LAB_065b413c:                 ;XREF[1,0]:   065b4120
ram:065b413c    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b413f    8b11            MOV         EDX,dword ptr [param_1]
ram:065b4141    3b10            CMP         EDX,dword ptr [EAX]
ram:065b4143    750b            JNZ         LAB_065b4150
                            LAB_065b4145:                 ;XREF[1,0]:   065b414e
ram:065b4145    8901            MOV         dword ptr [param_1],EAX
ram:065b4147    8b4004          MOV         EAX,dword ptr [EAX + 0x4]
ram:065b414a    8b11            MOV         EDX,dword ptr [param_1]
ram:065b414c    3b10            CMP         EDX,dword ptr [EAX]
ram:065b414e    74f5            JZ          LAB_065b4145
                            LAB_065b4150:                 ;XREF[1,0]:   065b4143
ram:065b4150    8901            MOV         dword ptr [param_1],EAX
ram:065b4152    5b              POP         EBX
ram:065b4153    c3              RET
ram:065b4154    90              ??          90h
ram:065b4155    90              ??          90h
ram:065b4156    90              ??          90h
ram:065b4157    90              ??          90h
ram:065b4158    90              ??          90h
ram:065b4159    90              ??          90h
ram:065b415a    90              ??          90h
ram:065b415b    90              ??          90h
ram:065b415c    90              ??          90h
ram:065b415d    90              ??          90h
ram:065b415e    90              ??          90h
ram:065b415f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b4160(int * param_1, int * param_2)
          ;param_1       int *                4                      ;XREF[1,0]:   065b4162
          ;param_2       int *                8                      ;XREF[1,0]:   065b4172
                                                          ;XREF[1,0]:   065b2337
ram:065b4160    55              PUSH        EBP
ram:065b4161    56              PUSH        ESI
ram:065b4162    8b74240c        MOV         ESI,dword ptr [ESP + param_1+0x8]
ram:065b4166    57              PUSH        EDI
ram:065b4167    33ff            XOR         EDI,EDI
ram:065b4169    3bf7            CMP         ESI,EDI
ram:065b416b    0f8498000000    JZ          LAB_065b4209
ram:065b4171    53              PUSH        EBX
ram:065b4172    8b5c2418        MOV         EBX,dword ptr [ESP + param_2+0x10]
ram:065b4176    897e0c          MOV         dword ptr [ESI + 0xc],EDI
ram:065b4179    897e04          MOV         dword ptr [ESI + 0x4],EDI
ram:065b417c    8b03            MOV         EAX,dword ptr [EBX]
ram:065b417e    3bc7            CMP         EAX,EDI
ram:065b4180    8906            MOV         dword ptr [ESI],EAX
ram:065b4182    7406            JZ          LAB_065b418a
ram:065b4184    8b08            MOV         ECX,dword ptr [EAX]
ram:065b4186    50              PUSH        EAX
ram:065b4187    ff5104          CALL        dword ptr [ECX + 0x4]
                            LAB_065b418a:                 ;XREF[1,0]:   065b4182
ram:065b418a    8b5308          MOV         EDX,dword ptr [EBX + 0x8]
ram:065b418d    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b4190    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b4193    8b6b04          MOV         EBP,dword ptr [EBX + 0x4]
ram:065b4196    50              PUSH        EAX
ram:065b4197    e8261d0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b419c    83c404          ADD         ESP,0x4
ram:065b419f    3bef            CMP         EBP,EDI
ram:065b41a1    897e04          MOV         dword ptr [ESI + 0x4],EDI
ram:065b41a4    7427            JZ          LAB_065b41cd
ram:065b41a6    8bfd            MOV         EDI,EBP
ram:065b41a8    83c9ff          OR          ECX,0xffffffff
ram:065b41ab    33c0            XOR         EAX,EAX
ram:065b41ad    f2ae            SCASB.REPNE ES:EDI
ram:065b41af    f7d1            NOT         ECX
ram:065b41b1    51              PUSH        ECX
ram:065b41b2    e8171d0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b41b7    83c404          ADD         ESP,0x4
ram:065b41ba    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b41bd    8bcd            MOV         ECX,EBP
ram:065b41bf    8bd0            MOV         EDX,EAX
                            LAB_065b41c1:                 ;XREF[1,0]:   065b41c9
ram:065b41c1    8a01            MOV         AL,byte ptr [ECX]
ram:065b41c3    41              INC         ECX
ram:065b41c4    8802            MOV         byte ptr [EDX],AL
ram:065b41c6    42              INC         EDX
ram:065b41c7    84c0            TEST        AL,AL
ram:065b41c9    75f6            JNZ         LAB_065b41c1
ram:065b41cb    33ff            XOR         EDI,EDI
                            LAB_065b41cd:                 ;XREF[1,0]:   065b41a4
ram:065b41cd    8b4e0c          MOV         ECX,dword ptr [ESI + 0xc]
ram:065b41d0    8b6b0c          MOV         EBP,dword ptr [EBX + 0xc]
ram:065b41d3    51              PUSH        ECX
ram:065b41d4    e8e91c0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b41d9    83c404          ADD         ESP,0x4
ram:065b41dc    3bef            CMP         EBP,EDI
ram:065b41de    897e0c          MOV         dword ptr [ESI + 0xc],EDI
ram:065b41e1    5b              POP         EBX
ram:065b41e2    7425            JZ          LAB_065b4209
ram:065b41e4    8bfd            MOV         EDI,EBP
ram:065b41e6    83c9ff          OR          ECX,0xffffffff
ram:065b41e9    33c0            XOR         EAX,EAX
ram:065b41eb    f2ae            SCASB.REPNE ES:EDI
ram:065b41ed    f7d1            NOT         ECX
ram:065b41ef    51              PUSH        ECX
ram:065b41f0    e8d91c0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b41f5    83c404          ADD         ESP,0x4
ram:065b41f8    89460c          MOV         dword ptr [ESI + 0xc],EAX
ram:065b41fb    8bcd            MOV         ECX,EBP
ram:065b41fd    8bd0            MOV         EDX,EAX
                            LAB_065b41ff:                 ;XREF[1,0]:   065b4207
ram:065b41ff    8a01            MOV         AL,byte ptr [ECX]
ram:065b4201    41              INC         ECX
ram:065b4202    8802            MOV         byte ptr [EDX],AL
ram:065b4204    42              INC         EDX
ram:065b4205    84c0            TEST        AL,AL
ram:065b4207    75f6            JNZ         LAB_065b41ff
                            LAB_065b4209:                 ;XREF[2,0]:   065b416b,065b41e2
ram:065b4209    5f              POP         EDI
ram:065b420a    5e              POP         ESI
ram:065b420b    5d              POP         EBP
ram:065b420c    c3              RET
ram:065b420d    90              ??          90h
ram:065b420e    90              ??          90h
ram:065b420f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b4210(int * param_1)
          ;param_1       int *                4                      ;XREF[1,0]:   065b4211
                                                          ;XREF[1,0]:   065b3a45
ram:065b4210    56              PUSH        ESI
ram:065b4211    8b742408        MOV         ESI,dword ptr [ESP + param_1+0x4]
ram:065b4215    8b06            MOV         EAX,dword ptr [ESI]
ram:065b4217    85c0            TEST        EAX,EAX
ram:065b4219    740c            JZ          LAB_065b4227
ram:065b421b    8b08            MOV         ECX,dword ptr [EAX]
ram:065b421d    50              PUSH        EAX
ram:065b421e    ff5108          CALL        dword ptr [ECX + 0x8]
ram:065b4221    c70600000000    MOV         dword ptr [ESI],0x0
                            LAB_065b4227:                 ;XREF[1,0]:   065b4219
ram:065b4227    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b422a    c74608000...    MOV         dword ptr [ESI + 0x8],0x0
ram:065b4231    52              PUSH        EDX
ram:065b4232    e88b1c0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b4237    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b423a    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b4241    50              PUSH        EAX
ram:065b4242    e87b1c0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b4247    83c408          ADD         ESP,0x8
ram:065b424a    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b4251    5e              POP         ESI
ram:065b4252    c3              RET
ram:065b4253    90              ??          90h
ram:065b4254    90              ??          90h
ram:065b4255    90              ??          90h
ram:065b4256    90              ??          90h
ram:065b4257    90              ??          90h
ram:065b4258    90              ??          90h
ram:065b4259    90              ??          90h
ram:065b425a    90              ??          90h
ram:065b425b    90              ??          90h
ram:065b425c    90              ??          90h
ram:065b425d    90              ??          90h
ram:065b425e    90              ??          90h
ram:065b425f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b4260(undefined4 * param_1, undefined4 * param_2)
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b4261
          ;param_2       undefined4 *         8                      ;XREF[1,0]:   065b4270
                                                          ;XREF[1,0]:   065b3ec2
ram:065b4260    53              PUSH        EBX
ram:065b4261    8b5c2408        MOV         EBX,dword ptr [ESP + param_1+0x4]
ram:065b4265    55              PUSH        EBP
ram:065b4266    56              PUSH        ESI
ram:065b4267    85db            TEST        EBX,EBX
ram:065b4269    57              PUSH        EDI
ram:065b426a    0f84a1000000    JZ          LAB_065b4311
ram:065b4270    8b742418        MOV         ESI,dword ptr [ESP + param_2+0x10]
ram:065b4274    6a18            PUSH        0x18
ram:065b4276    8b06            MOV         EAX,dword ptr [ESI]
ram:065b4278    8903            MOV         dword ptr [EBX],EAX
ram:065b427a    8a4e04          MOV         CL,byte ptr [ESI + 0x4]
ram:065b427d    884b04          MOV         byte ptr [EBX + 0x4],CL
ram:065b4280    e8491c0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b4285    8900            MOV         dword ptr [EAX],EAX
ram:065b4287    894004          MOV         dword ptr [EAX + 0x4],EAX
ram:065b428a    894308          MOV         dword ptr [EBX + 0x8],EAX
ram:065b428d    c7430c000...    MOV         dword ptr [EBX + 0xc],0x0
ram:065b4294    8b7608          MOV         ESI,dword ptr [ESI + 0x8]
ram:065b4297    8b28            MOV         EBP,dword ptr [EAX]
ram:065b4299    83c404          ADD         ESP,0x4
ram:065b429c    89742414        MOV         dword ptr [ESP + 0x14],ESI
ram:065b42a0    8b3e            MOV         EDI,dword ptr [ESI]
ram:065b42a2    3bfe            CMP         EDI,ESI
ram:065b42a4    746b            JZ          LAB_065b4311
                            LAB_065b42a6:                 ;XREF[1,0]:   065b430f
ram:065b42a6    8b7504          MOV         ESI,dword ptr [EBP + 0x4]
ram:065b42a9    6a18            PUSH        0x18
ram:065b42ab    e81e1c0000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b42b0    33c9            XOR         ECX,ECX
ram:065b42b2    83c404          ADD         ESP,0x4
ram:065b42b5    3bf1            CMP         ESI,ECX
ram:065b42b7    8928            MOV         dword ptr [EAX],EBP
ram:065b42b9    7502            JNZ         LAB_065b42bd
ram:065b42bb    8bf0            MOV         ESI,EAX
                            LAB_065b42bd:                 ;XREF[1,0]:   065b42b9
ram:065b42bd    897004          MOV         dword ptr [EAX + 0x4],ESI
ram:065b42c0    894504          MOV         dword ptr [EBP + 0x4],EAX
ram:065b42c3    8b5004          MOV         EDX,dword ptr [EAX + 0x4]
ram:065b42c6    8d7008          LEA         ESI,[EAX + 0x8]
ram:065b42c9    3bf1            CMP         ESI,ECX
ram:065b42cb    8902            MOV         dword ptr [EDX],EAX
ram:065b42cd    7431            JZ          LAB_065b4300
ram:065b42cf    894e0c          MOV         dword ptr [ESI + 0xc],ECX
ram:065b42d2    894e04          MOV         dword ptr [ESI + 0x4],ECX
ram:065b42d5    8b4708          MOV         EAX,dword ptr [EDI + 0x8]
ram:065b42d8    3bc1            CMP         EAX,ECX
ram:065b42da    8906            MOV         dword ptr [ESI],EAX
ram:065b42dc    7406            JZ          LAB_065b42e4
ram:065b42de    8b08            MOV         ECX,dword ptr [EAX]
ram:065b42e0    50              PUSH        EAX
ram:065b42e1    ff5104          CALL        dword ptr [ECX + 0x4]
                            LAB_065b42e4:                 ;XREF[1,0]:   065b42dc
ram:065b42e4    8b5710          MOV         EDX,dword ptr [EDI + 0x10]
ram:065b42e7    8bce            MOV         ECX,ESI
ram:065b42e9    895608          MOV         dword ptr [ESI + 0x8],EDX
ram:065b42ec    8b470c          MOV         EAX,dword ptr [EDI + 0xc]
ram:065b42ef    50              PUSH        EAX
ram:065b42f0    e83bf9ffff      CALL        FUN_065b3c30                            ;undefined FUN_065b3c30(void * this, ...
ram:065b42f5    8b4f14          MOV         ECX,dword ptr [EDI + 0x14]
ram:065b42f8    51              PUSH        ECX
ram:065b42f9    8bce            MOV         ECX,ESI
ram:065b42fb    e8e0f8ffff      CALL        FUN_065b3be0                            ;undefined FUN_065b3be0(void * this, ...
                            LAB_065b4300:                 ;XREF[1,0]:   065b42cd
ram:065b4300    8b4b0c          MOV         ECX,dword ptr [EBX + 0xc]
ram:065b4303    8b442414        MOV         EAX,dword ptr [ESP + 0x14]
ram:065b4307    41              INC         ECX
ram:065b4308    894b0c          MOV         dword ptr [EBX + 0xc],ECX
ram:065b430b    8b3f            MOV         EDI,dword ptr [EDI]
ram:065b430d    3bf8            CMP         EDI,EAX
ram:065b430f    7595            JNZ         LAB_065b42a6
                            LAB_065b4311:                 ;XREF[2,0]:   065b426a,065b42a4
ram:065b4311    5f              POP         EDI
ram:065b4312    5e              POP         ESI
ram:065b4313    5d              POP         EBP
ram:065b4314    5b              POP         EBX
ram:065b4315    c3              RET
ram:065b4316    90              ??          90h
ram:065b4317    90              ??          90h
ram:065b4318    90              ??          90h
ram:065b4319    90              ??          90h
ram:065b431a    90              ??          90h
ram:065b431b    90              ??          90h
ram:065b431c    90              ??          90h
ram:065b431d    90              ??          90h
ram:065b431e    90              ??          90h
ram:065b431f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;void * FUN_065b4320(void * this, byte param_1)
          ;this          void *             ECX
          ;param_1       byte                 4
ram:065b4320    56              PUSH        ESI
ram:065b4321    8bf1            MOV         ESI,this
ram:065b4323    8b06            MOV         EAX,dword ptr [ESI]
ram:065b4325    85c0            TEST        EAX,EAX
ram:065b4327    740c            JZ          LAB_065b4335
ram:065b4329    8b08            MOV         this,dword ptr [EAX]
ram:065b432b    50              PUSH        EAX
ram:065b432c    ff5108          CALL        dword ptr [this + 0x8]
ram:065b432f    c70600000000    MOV         dword ptr [ESI],0x0
                            LAB_065b4335:                 ;XREF[1,0]:   065b4327
ram:065b4335    8b5604          MOV         EDX,dword ptr [ESI + 0x4]
ram:065b4338    c74608000...    MOV         dword ptr [ESI + 0x8],0x0
ram:065b433f    52              PUSH        EDX
ram:065b4340    e87d1b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b4345    8b460c          MOV         EAX,dword ptr [ESI + 0xc]
ram:065b4348    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
ram:065b434f    50              PUSH        EAX
ram:065b4350    e86d1b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b4355    8a442410        MOV         AL,byte ptr [ESP + 0x10]
ram:065b4359    83c408          ADD         ESP,0x8
ram:065b435c    a801            TEST        AL,0x1
ram:065b435e    c7460c000...    MOV         dword ptr [ESI + 0xc],0x0
ram:065b4365    7409            JZ          LAB_065b4370
ram:065b4367    56              PUSH        ESI
ram:065b4368    e8551b0000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b436d    83c404          ADD         ESP,0x4
                            LAB_065b4370:                 ;XREF[1,0]:   065b4365
ram:065b4370    8bc6            MOV         EAX,ESI
ram:065b4372    5e              POP         ESI
ram:065b4373    c20400          RET         0x4
ram:065b4376    90              ??          90h
ram:065b4377    90              ??          90h
ram:065b4378    90              ??          90h
ram:065b4379    90              ??          90h
ram:065b437a    90              ??          90h
ram:065b437b    90              ??          90h
ram:065b437c    90              ??          90h
ram:065b437d    90              ??          90h
ram:065b437e    90              ??          90h
ram:065b437f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint ?GetCRC32@DACOM_CRC@@YAKPBD@Z(char * param_1)
          ;param_1       char *               4                      ;XREF[1,0]:   065b60f0
                                                          ;XREF[1,0]:   065b2202
ram:065b4380    e96b1d0000      JMP         FUN_065b60f0
ram:065b4385    90              ??          90h
ram:065b4386    90              ??          90h
ram:065b4387    90              ??          90h
ram:065b4388    90              ??          90h
ram:065b4389    90              ??          90h
ram:065b438a    90              ??          90h
ram:065b438b    90              ??          90h
ram:065b438c    90              ??          90h
ram:065b438d    90              ??          90h
ram:065b438e    90              ??          90h
ram:065b438f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 ?GetCRC32@DACOM_CRC@@YAKPBD0@Z(int param_1, int param_2)
          ;param_1       int                  4                      ;XREF[1,0]:   065b60b0
          ;param_2       int                  8                      ;XREF[1,0]:   065b60b4
ram:065b4390    e91b1d0000      JMP         FUN_065b60b0
ram:065b4395    90              ??          90h
ram:065b4396    90              ??          90h
ram:065b4397    90              ??          90h
ram:065b4398    90              ??          90h
ram:065b4399    90              ??          90h
ram:065b439a    90              ??          90h
ram:065b439b    90              ??          90h
ram:065b439c    90              ??          90h
ram:065b439d    90              ??          90h
ram:065b439e    90              ??          90h
ram:065b439f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint ?GetContinuedCRC32@DACOM_CRC@@YAKKPBD@Z(uint param_1, char * param_2)
          ;param_1       uint                 4                      ;XREF[1,0]:   065b6144
          ;param_2       char *               8                      ;XREF[1,0]:   065b6140
ram:065b43a0    e99b1d0000      JMP         FUN_065b6140
ram:065b43a5    90              ??          90h
ram:065b43a6    90              ??          90h
ram:065b43a7    90              ??          90h
ram:065b43a8    90              ??          90h
ram:065b43a9    90              ??          90h
ram:065b43aa    90              ??          90h
ram:065b43ab    90              ??          90h
ram:065b43ac    90              ??          90h
ram:065b43ad    90              ??          90h
ram:065b43ae    90              ??          90h
ram:065b43af    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined ?GetContinuedCRC32@DACOM_CRC@@YAKKD@Z(uint param_1, char param_2)
          ;param_1       uint                 4
          ;param_2       char                 8                      ;XREF[2,0]:   065b43b0,065b43b4
ram:065b43b0    8b442408        MOV         EAX,dword ptr [ESP + param_2]
ram:065b43b4    89442408        MOV         dword ptr [ESP + param_2],EAX
ram:065b43b8    e9d31d0000      JMP         FUN_065b6190                            ;uint FUN_065b6190(uint param_1, char...
ram:065b43bd    90              ??          90h
ram:065b43be    90              ??          90h
ram:065b43bf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined ?CompareStringsI@DACOM_CRC@@YAHPBD0@Z(void)
ram:065b43c0    ff2530705b06    JMP         dword ptr [DAT_065b7030]
ram:065b43c6    90              ??          90h
ram:065b43c7    90              ??          90h
ram:065b43c8    90              ??          90h
ram:065b43c9    90              ??          90h
ram:065b43ca    90              ??          90h
ram:065b43cb    90              ??          90h
ram:065b43cc    90              ??          90h
ram:065b43cd    90              ??          90h
ram:065b43ce    90              ??          90h
ram:065b43cf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined1 LogStream_NoOp(void)
ram:065b43d0    32c0            XOR         AL,AL                                   ;// Export aliases:
                                                                                    ;// Ordinal 2: LogStream::FlushToDisk()
                                                                                    ;// Ordinal 7: LogStream::LogEvent(co...
                                                                                    ;// Ordinal 8: LogStream::LogNamedEve...
ram:065b43d2    c3              RET
ram:065b43d3    90              ??          90h
ram:065b43d4    90              ??          90h
ram:065b43d5    90              ??          90h
ram:065b43d6    90              ??          90h
ram:065b43d7    90              ??          90h
ram:065b43d8    90              ??          90h
ram:065b43d9    90              ??          90h
ram:065b43da    90              ??          90h
ram:065b43db    90              ??          90h
ram:065b43dc    90              ??          90h
ram:065b43dd    90              ??          90h
ram:065b43de    90              ??          90h
ram:065b43df    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined ?FlushToDisk@LogStream@@YAXXZ(void)
ram:065b43e0    c3              RET
ram:065b43e1    90              ??          90h
ram:065b43e2    90              ??          90h
ram:065b43e3    90              ??          90h
ram:065b43e4    90              ??          90h
ram:065b43e5    90              ??          90h
ram:065b43e6    90              ??          90h
ram:065b43e7    90              ??          90h
ram:065b43e8    90              ??          90h
ram:065b43e9    90              ??          90h
ram:065b43ea    90              ??          90h
ram:065b43eb    90              ??          90h
ram:065b43ec    90              ??          90h
ram:065b43ed    90              ??          90h
ram:065b43ee    90              ??          90h
ram:065b43ef    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b43f0(int param_1)
          ;param_1       int                ECX
ram:065b43f0    56              PUSH        ESI
ram:065b43f1    8bf1            MOV         ESI,param_1
ram:065b43f3    8d4e08          LEA         param_1,[ESI + 0x8]
ram:065b43f6    e8e5cfffff      CALL        FUN_065b13e0                            ;undefined1 * FUN_065b13e0(undefined1...
ram:065b43fb    8bc6            MOV         EAX,ESI
ram:065b43fd    5e              POP         ESI
ram:065b43fe    c3              RET
ram:065b43ff    90              ??          90h
ram:065b4400    56              ??          56h    V
ram:065b4401    8d              ??          8Dh
ram:065b4402    71              ??          71h    q
ram:065b4403    08              ??          08h
ram:065b4404    8b              ??          8Bh
ram:065b4405    ce              ??          CEh
ram:065b4406    e8              ??          E8h
ram:065b4407    e5              ??          E5h
ram:065b4408    d0              ??          D0h
ram:065b4409    ff              ??          FFh
ram:065b440a    ff              ??          FFh
ram:065b440b    8b              ??          8Bh
ram:065b440c    ce              ??          CEh
ram:065b440d    5e              ??          5Eh    ^
ram:065b440e    e9              ??          E9h
ram:065b440f    0d              ??          0Dh
ram:065b4410    d0              ??          D0h
ram:065b4411    ff              ??          FFh
ram:065b4412    ff              ??          FFh
ram:065b4413    90              ??          90h
ram:065b4414    90              ??          90h
ram:065b4415    90              ??          90h
ram:065b4416    90              ??          90h
ram:065b4417    90              ??          90h
ram:065b4418    90              ??          90h
ram:065b4419    90              ??          90h
ram:065b441a    90              ??          90h
ram:065b441b    90              ??          90h
ram:065b441c    90              ??          90h
ram:065b441d    90              ??          90h
ram:065b441e    90              ??          90h
ram:065b441f    90              ??          90h
ram:065b4420    33              ??          33h    3
ram:065b4421    c0              ??          C0h
ram:065b4422    c2              ??          C2h
ram:065b4423    04              ??          04h
ram:065b4424    00              ??          00h
ram:065b4425    90              ??          90h
ram:065b4426    90              ??          90h
ram:065b4427    90              ??          90h
ram:065b4428    90              ??          90h
ram:065b4429    90              ??          90h
ram:065b442a    90              ??          90h
ram:065b442b    90              ??          90h
ram:065b442c    90              ??          90h
ram:065b442d    90              ??          90h
ram:065b442e    90              ??          90h
ram:065b442f    90              ??          90h
ram:065b4430    f6              ??          F6h
ram:065b4431    44              ??          44h    D
ram:065b4432    24              ??          24h    $
ram:065b4433    0c              ??          0Ch
ram:065b4434    01              ??          01h
ram:065b4435    74              ??          74h    t
ram:065b4436    06              ??          06h
ram:065b4437    83              ??          83h
ram:065b4438    c8              ??          C8h
ram:065b4439    ff              ??          FFh
ram:065b443a    c2              ??          C2h
ram:065b443b    0c              ??          0Ch
ram:065b443c    00              ??          00h
ram:065b443d    8b              ??          8Bh
ram:065b443e    44              ??          44h    D
ram:065b443f    24              ??          24h    $
ram:065b4440    08              ??          08h
ram:065b4441    8b              ??          8Bh
ram:065b4442    4c              ??          4Ch    L
ram:065b4443    24              ??          24h    $
ram:065b4444    04              ??          04h
ram:065b4445    50              ??          50h    P
ram:065b4446    83              ??          83h
ram:065b4447    c1              ??          C1h
ram:065b4448    08              ??          08h
ram:065b4449    e8              ??          E8h
ram:065b444a    32              ??          32h    2
ram:065b444b    d0              ??          D0h
ram:065b444c    ff              ??          FFh
ram:065b444d    ff              ??          FFh
ram:065b444e    f6              ??          F6h
ram:065b444f    d8              ??          D8h
ram:065b4450    1b              ??          1Bh
ram:065b4451    c0              ??          C0h
ram:065b4452    f7              ??          F7h
ram:065b4453    d8              ??          D8h
ram:065b4454    48              ??          48h    H
ram:065b4455    c2              ??          C2h
ram:065b4456    0c              ??          0Ch
ram:065b4457    00              ??          00h
ram:065b4458    90              ??          90h
ram:065b4459    90              ??          90h
ram:065b445a    90              ??          90h
ram:065b445b    90              ??          90h
ram:065b445c    90              ??          90h
ram:065b445d    90              ??          90h
ram:065b445e    90              ??          90h
ram:065b445f    90              ??          90h
ram:065b4460    8b              ??          8Bh
ram:065b4461    44              ??          44h    D
ram:065b4462    24              ??          24h    $
ram:065b4463    08              ??          08h
ram:065b4464    53              ??          53h    S
ram:065b4465    55              ??          55h    U
ram:065b4466    56              ??          56h    V
ram:065b4467    85              ??          85h
ram:065b4468    c0              ??          C0h
ram:065b4469    57              ??          57h    W
ram:065b446a    75              ??          75h    u
ram:065b446b    09              ??          09h
ram:065b446c    5f              ??          5Fh    _
ram:065b446d    5e              ??          5Eh    ^
ram:065b446e    5d              ??          5Dh    ]
ram:065b446f    33              ??          33h    3
ram:065b4470    c0              ??          C0h
ram:065b4471    5b              ??          5Bh    [
ram:065b4472    c2              ??          C2h
ram:065b4473    0c              ??          0Ch
ram:065b4474    00              ??          00h
ram:065b4475    8b              ??          8Bh
ram:065b4476    7c              ??          7Ch    |
ram:065b4477    24              ??          24h    $
ram:065b4478    14              ??          14h
ram:065b4479    8b              ??          8Bh
ram:065b447a    5f              ??          5Fh    _
ram:065b447b    0c              ??          0Ch
ram:065b447c    8b              ??          8Bh
ram:065b447d    33              ??          33h    3
ram:065b447e    3b              ??          3Bh    ;
ram:065b447f    f3              ??          F3h
ram:065b4480    74              ??          74h    t
ram:065b4481    1a              ??          1Ah
ram:065b4482    8b              ??          8Bh
ram:065b4483    6c              ??          6Ch    l
ram:065b4484    24              ??          24h    $
ram:065b4485    1c              ??          1Ch
ram:065b4486    8b              ??          8Bh
ram:065b4487    46              ??          46h    F
ram:065b4488    08              ??          08h
ram:065b4489    55              ??          55h    U
ram:065b448a    8b              ??          8Bh
ram:065b448b    08              ??          08h
ram:065b448c    51              ??          51h    Q
ram:065b448d    57              ??          57h    W
ram:065b448e    ff              ??          FFh
ram:065b448f    54              ??          54h    T
ram:065b4490    24              ??          24h    $
ram:065b4491    24              ??          24h    $
ram:065b4492    85              ??          85h
ram:065b4493    c0              ??          C0h
ram:065b4494    74              ??          74h    t
ram:065b4495    d6              ??          D6h
ram:065b4496    8b              ??          8Bh
ram:065b4497    36              ??          36h    6
ram:065b4498    3b              ??          3Bh    ;
ram:065b4499    f3              ??          F3h
ram:065b449a    75              ??          75h    u
ram:065b449b    ea              ??          EAh
ram:065b449c    5f              ??          5Fh    _
ram:065b449d    5e              ??          5Eh    ^
ram:065b449e    5d              ??          5Dh    ]
ram:065b449f    b8              ??          B8h
ram:065b44a0    01              ??          01h
ram:065b44a1    00              ??          00h
ram:065b44a2    00              ??          00h
ram:065b44a3    00              ??          00h
ram:065b44a4    5b              ??          5Bh    [
ram:065b44a5    c2              ??          C2h
ram:065b44a6    0c              ??          0Ch
ram:065b44a7    00              ??          00h
ram:065b44a8    90              ??          90h
ram:065b44a9    90              ??          90h
ram:065b44aa    90              ??          90h
ram:065b44ab    90              ??          90h
ram:065b44ac    90              ??          90h
ram:065b44ad    90              ??          90h
ram:065b44ae    90              ??          90h
ram:065b44af    90              ??          90h
ram:065b44b0    83              ??          83h
ram:065b44b1    7c              ??          7Ch    |
ram:065b44b2    24              ??          24h    $
ram:065b44b3    0c              ??          0Ch
ram:065b44b4    03              ??          03h
ram:065b44b5    74              ??          74h    t
ram:065b44b6    05              ??          05h
ram:065b44b7    33              ??          33h    3
ram:065b44b8    c0              ??          C0h
ram:065b44b9    c2              ??          C2h
ram:065b44ba    0c              ??          0Ch
ram:065b44bb    00              ??          00h
ram:065b44bc    8b              ??          8Bh
ram:065b44bd    44              ??          44h    D
ram:065b44be    24              ??          24h    $
ram:065b44bf    08              ??          08h
ram:065b44c0    8b              ??          8Bh
ram:065b44c1    4c              ??          4Ch    L
ram:065b44c2    24              ??          24h    $
ram:065b44c3    04              ??          04h
ram:065b44c4    50              ??          50h    P
ram:065b44c5    83              ??          83h
ram:065b44c6    c1              ??          C1h
ram:065b44c7    08              ??          08h
ram:065b44c8    e8              ??          E8h
ram:065b44c9    83              ??          83h
ram:065b44ca    d0              ??          D0h
ram:065b44cb    ff              ??          FFh
ram:065b44cc    ff              ??          FFh
ram:065b44cd    c2              ??          C2h
ram:065b44ce    0c              ??          0Ch
ram:065b44cf    00              ??          00h
ram:065b44d0    b8              ??          B8h
ram:065b44d1    01              ??          01h
ram:065b44d2    00              ??          00h
ram:065b44d3    00              ??          00h
ram:065b44d4    00              ??          00h
ram:065b44d5    c2              ??          C2h
ram:065b44d6    08              ??          08h
ram:065b44d7    00              ??          00h
ram:065b44d8    90              ??          90h
ram:065b44d9    90              ??          90h
ram:065b44da    90              ??          90h
ram:065b44db    90              ??          90h
ram:065b44dc    90              ??          90h
ram:065b44dd    90              ??          90h
ram:065b44de    90              ??          90h
ram:065b44df    90              ??          90h
ram:065b44e0    8b              ??          8Bh
ram:065b44e1    44              ??          44h    D
ram:065b44e2    24              ??          24h    $
ram:065b44e3    08              ??          08h
ram:065b44e4    8b              ??          8Bh
ram:065b44e5    4c              ??          4Ch    L
ram:065b44e6    24              ??          24h    $
ram:065b44e7    04              ??          04h
ram:065b44e8    56              ??          56h    V
ram:065b44e9    57              ??          57h    W
ram:065b44ea    50              ??          50h    P
ram:065b44eb    83              ??          83h
ram:065b44ec    c1              ??          C1h
ram:065b44ed    08              ??          08h
ram:065b44ee    33              ??          33h    3
ram:065b44ef    f6              ??          F6h
ram:065b44f0    e8              ??          E8h
ram:065b44f1    6b              ??          6Bh    k
ram:065b44f2    d0              ??          D0h
ram:065b44f3    ff              ??          FFh
ram:065b44f4    ff              ??          FFh
ram:065b44f5    8b              ??          8Bh
ram:065b44f6    c8              ??          C8h
ram:065b44f7    85              ??          85h
ram:065b44f8    c9              ??          C9h
ram:065b44f9    74              ??          74h    t
ram:065b44fa    3e              ??          3Eh    >
ram:065b44fb    8b              ??          8Bh
ram:065b44fc    7c              ??          7Ch    |
ram:065b44fd    24              ??          24h    $
ram:065b44fe    18              ??          18h
ram:065b44ff    85              ??          85h
ram:065b4500    ff              ??          FFh
ram:065b4501    74              ??          74h    t
ram:065b4502    26              ??          26h    &
ram:065b4503    8b              ??          8Bh
ram:065b4504    44              ??          44h    D
ram:065b4505    24              ??          24h    $
ram:065b4506    14              ??          14h
ram:065b4507    8b              ??          8Bh
ram:065b4508    54              ??          54h    T
ram:065b4509    24              ??          24h    $
ram:065b450a    1c              ??          1Ch
ram:065b450b    57              ??          57h    W
ram:065b450c    40              ??          40h    @
ram:065b450d    52              ??          52h    R
ram:065b450e    50              ??          50h    P
ram:065b450f    e8              ??          E8h
ram:065b4510    1c              ??          1Ch
ram:065b4511    cd              ??          CDh
ram:065b4512    ff              ??          FFh
ram:065b4513    ff              ??          FFh
ram:065b4514    84              ??          84h
ram:065b4515    c0              ??          C0h
ram:065b4516    74              ??          74h    t
ram:065b4517    21              ??          21h    !
ram:065b4518    83              ??          83h
ram:065b4519    c9              ??          C9h
ram:065b451a    ff              ??          FFh
ram:065b451b    33              ??          33h    3
ram:065b451c    c0              ??          C0h
ram:065b451d    f2              ??          F2h
ram:065b451e    ae              ??          AEh
ram:065b451f    f7              ??          F7h
ram:065b4520    d1              ??          D1h
ram:065b4521    49              ??          49h    I
ram:065b4522    5f              ??          5Fh    _
ram:065b4523    8b              ??          8Bh
ram:065b4524    c1              ??          C1h
ram:065b4525    5e              ??          5Eh    ^
ram:065b4526    c2              ??          C2h
ram:065b4527    14              ??          14h
ram:065b4528    00              ??          00h
ram:065b4529    8b              ??          8Bh
ram:065b452a    54              ??          54h    T
ram:065b452b    24              ??          24h    $
ram:065b452c    14              ??          14h
ram:065b452d    42              ??          42h    B
ram:065b452e    52              ??          52h    R
ram:065b452f    e8              ??          E8h
ram:065b4530    6c              ??          6Ch    l
ram:065b4531    cd              ??          CDh
ram:065b4532    ff              ??          FFh
ram:065b4533    ff              ??          FFh
ram:065b4534    5f              ??          5Fh    _
ram:065b4535    5e              ??          5Eh    ^
ram:065b4536    c2              ??          C2h
ram:065b4537    14              ??          14h
ram:065b4538    00              ??          00h
ram:065b4539    8b              ??          8Bh
ram:065b453a    c6              ??          C6h
ram:065b453b    5f              ??          5Fh    _
ram:065b453c    5e              ??          5Eh    ^
ram:065b453d    c2              ??          C2h
ram:065b453e    14              ??          14h
ram:065b453f    00              ??          00h
ram:065b4540    8b              ??          8Bh
ram:065b4541    44              ??          44h    D
ram:065b4542    24              ??          24h    $
ram:065b4543    08              ??          08h
ram:065b4544    8b              ??          8Bh
ram:065b4545    4c              ??          4Ch    L
ram:065b4546    24              ??          24h    $
ram:065b4547    04              ??          04h
ram:065b4548    56              ??          56h    V
ram:065b4549    57              ??          57h    W
ram:065b454a    50              ??          50h    P
ram:065b454b    83              ??          83h
ram:065b454c    c1              ??          C1h
ram:065b454d    08              ??          08h
ram:065b454e    33              ??          33h    3
ram:065b454f    f6              ??          F6h
ram:065b4550    e8              ??          E8h
ram:065b4551    0b              ??          0Bh
ram:065b4552    d0              ??          D0h
ram:065b4553    ff              ??          FFh
ram:065b4554    ff              ??          FFh
ram:065b4555    8b              ??          8Bh
ram:065b4556    c8              ??          C8h
ram:065b4557    85              ??          85h
ram:065b4558    c9              ??          C9h
ram:065b4559    74              ??          74h    t
ram:065b455a    3c              ??          3Ch    <
ram:065b455b    8b              ??          8Bh
ram:065b455c    7c              ??          7Ch    |
ram:065b455d    24              ??          24h    $
ram:065b455e    18              ??          18h
ram:065b455f    85              ??          85h
ram:065b4560    ff              ??          FFh
ram:065b4561    74              ??          74h    t
ram:065b4562    25              ??          25h    %
ram:065b4563    8b              ??          8Bh
ram:065b4564    54              ??          54h    T
ram:065b4565    24              ??          24h    $
ram:065b4566    1c              ??          1Ch
ram:065b4567    8b              ??          8Bh
ram:065b4568    44              ??          44h    D
ram:065b4569    24              ??          24h    $
ram:065b456a    14              ??          14h
ram:065b456b    57              ??          57h    W
ram:065b456c    52              ??          52h    R
ram:065b456d    50              ??          50h    P
ram:065b456e    e8              ??          E8h
ram:065b456f    8d              ??          8Dh
ram:065b4570    cd              ??          CDh
ram:065b4571    ff              ??          FFh
ram:065b4572    ff              ??          FFh
ram:065b4573    84              ??          84h
ram:065b4574    c0              ??          C0h
ram:065b4575    74              ??          74h    t
ram:065b4576    20              ??          20h
ram:065b4577    83              ??          83h
ram:065b4578    c9              ??          C9h
ram:065b4579    ff              ??          FFh
ram:065b457a    33              ??          33h    3
ram:065b457b    c0              ??          C0h
ram:065b457c    f2              ??          F2h
ram:065b457d    ae              ??          AEh
ram:065b457e    f7              ??          F7h
ram:065b457f    d1              ??          D1h
ram:065b4580    49              ??          49h    I
ram:065b4581    5f              ??          5Fh    _
ram:065b4582    8b              ??          8Bh
ram:065b4583    c1              ??          C1h
ram:065b4584    5e              ??          5Eh    ^
ram:065b4585    c2              ??          C2h
ram:065b4586    14              ??          14h
ram:065b4587    00              ??          00h
ram:065b4588    8b              ??          8Bh
ram:065b4589    54              ??          54h    T
ram:065b458a    24              ??          24h    $
ram:065b458b    14              ??          14h
ram:065b458c    52              ??          52h    R
ram:065b458d    e8              ??          E8h
ram:065b458e    ee              ??          EEh
ram:065b458f    cd              ??          CDh
ram:065b4590    ff              ??          FFh
ram:065b4591    ff              ??          FFh
ram:065b4592    5f              ??          5Fh    _
ram:065b4593    5e              ??          5Eh    ^
ram:065b4594    c2              ??          C2h
ram:065b4595    14              ??          14h
ram:065b4596    00              ??          00h
ram:065b4597    8b              ??          8Bh
ram:065b4598    c6              ??          C6h
ram:065b4599    5f              ??          5Fh    _
ram:065b459a    5e              ??          5Eh    ^
ram:065b459b    c2              ??          C2h
ram:065b459c    14              ??          14h
ram:065b459d    00              ??          00h
ram:065b459e    90              ??          90h
ram:065b459f    90              ??          90h
ram:065b45a0    8b              ??          8Bh
ram:065b45a1    44              ??          44h    D
ram:065b45a2    24              ??          24h    $
ram:065b45a3    0c              ??          0Ch
ram:065b45a4    8b              ??          8Bh
ram:065b45a5    4c              ??          4Ch    L
ram:065b45a6    24              ??          24h    $
ram:065b45a7    08              ??          08h
ram:065b45a8    8b              ??          8Bh
ram:065b45a9    54              ??          54h    T
ram:065b45aa    24              ??          24h    $
ram:065b45ab    04              ??          04h
ram:065b45ac    50              ??          50h    P
ram:065b45ad    51              ??          51h    Q
ram:065b45ae    8d              ??          8Dh
ram:065b45af    4a              ??          4Ah    J
ram:065b45b0    04              ??          04h
ram:065b45b1    e8              ??          E8h
ram:065b45b2    fa              ??          FAh
ram:065b45b3    ce              ??          CEh
ram:065b45b4    ff              ??          FFh
ram:065b45b5    ff              ??          FFh
ram:065b45b6    f6              ??          F6h
ram:065b45b7    d8              ??          D8h
ram:065b45b8    1b              ??          1Bh
ram:065b45b9    c0              ??          C0h
ram:065b45ba    f7              ??          F7h
ram:065b45bb    d8              ??          D8h
ram:065b45bc    48              ??          48h    H
ram:065b45bd    c2              ??          C2h
ram:065b45be    0c              ??          0Ch
ram:065b45bf    00              ??          00h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b45c0(uint param_1, undefined4 * param_2, undefined4 param_3)
          ;param_1       uint                 4                      ;XREF[1,0]:   065b45d5
          ;param_2       undefined4 *         8                      ;XREF[2,0]:   065b45c4,065b45dc
          ;param_3       undefined4           c                      ;XREF[1,0]:   065b45e9
ram:065b45c0    53              PUSH        EBX
ram:065b45c1    55              PUSH        EBP
ram:065b45c2    56              PUSH        ESI
ram:065b45c3    57              PUSH        EDI
ram:065b45c4    8b7c2418        MOV         EDI,dword ptr [ESP + param_2+0x10]
ram:065b45c8    85ff            TEST        EDI,EDI
ram:065b45ca    7509            JNZ         LAB_065b45d5
                            LAB_065b45cc:                 ;XREF[1,0]:   065b4606
ram:065b45cc    5f              POP         EDI
ram:065b45cd    5e              POP         ESI
ram:065b45ce    5d              POP         EBP
ram:065b45cf    33c0            XOR         EAX,EAX
ram:065b45d1    5b              POP         EBX
ram:065b45d2    c20c00          RET         0xc
                            LAB_065b45d5:                 ;XREF[1,0]:   065b45ca
ram:065b45d5    8b5c2414        MOV         EBX,dword ptr [ESP + param_1+0x10]
ram:065b45d9    8b4308          MOV         EAX,dword ptr [EBX + 0x8]
ram:065b45dc    89442418        MOV         dword ptr [ESP + param_2+0x10],EAX
ram:065b45e0    8b30            MOV         ESI,dword ptr [EAX]
ram:065b45e2    3bf0            CMP         ESI,EAX
ram:065b45e4    742c            JZ          LAB_065b4612
ram:065b45e6    8d6bfc          LEA         EBP,[EBX + -0x4]
                            LAB_065b45e9:                 ;XREF[1,0]:   065b4610
ram:065b45e9    8b54241c        MOV         EDX,dword ptr [ESP + param_3+0x10]
ram:065b45ed    8bc5            MOV         EAX,EBP
ram:065b45ef    8b0f            MOV         ECX,dword ptr [EDI]
ram:065b45f1    52              PUSH        EDX
ram:065b45f2    8b5608          MOV         EDX,dword ptr [ESI + 0x8]
ram:065b45f5    6a00            PUSH        0x0
ram:065b45f7    f7d8            NEG         EAX
ram:065b45f9    8b12            MOV         EDX,dword ptr [EDX]
ram:065b45fb    1bc0            SBB         EAX,EAX
ram:065b45fd    52              PUSH        EDX
ram:065b45fe    23c3            AND         EAX,EBX
ram:065b4600    50              PUSH        EAX
ram:065b4601    57              PUSH        EDI
ram:065b4602    ff11            CALL        dword ptr [ECX]
ram:065b4604    85c0            TEST        EAX,EAX
ram:065b4606    74c4            JZ          LAB_065b45cc
ram:065b4608    8b36            MOV         ESI,dword ptr [ESI]
ram:065b460a    8b442418        MOV         EAX,dword ptr [ESP + 0x18]
ram:065b460e    3bf0            CMP         ESI,EAX
ram:065b4610    75d7            JNZ         LAB_065b45e9
                            LAB_065b4612:                 ;XREF[1,0]:   065b45e4
ram:065b4612    5f              POP         EDI
ram:065b4613    5e              POP         ESI
ram:065b4614    5d              POP         EBP
ram:065b4615    b801000000      MOV         EAX,0x1
ram:065b461a    5b              POP         EBX
ram:065b461b    c20c00          RET         0xc
ram:065b461e    90              ??          90h
ram:065b461f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b4620(uint param_1, undefined4 * param_2, int param_3, undefined4 param_4)
          ;param_1       uint                 4                      ;XREF[1,0]:   065b4634
          ;param_2       undefined4 *         8                      ;XREF[2,0]:   065b4624,065b4648
          ;param_3       int                  c                      ;XREF[1,0]:   065b462c
          ;param_4       undefined4          10                      ;XREF[1,0]:   065b4655
ram:065b4620    53              PUSH        EBX
ram:065b4621    55              PUSH        EBP
ram:065b4622    56              PUSH        ESI
ram:065b4623    57              PUSH        EDI
ram:065b4624    8b7c2418        MOV         EDI,dword ptr [ESP + param_2+0x10]
ram:065b4628    85ff            TEST        EDI,EDI
ram:065b462a    745e            JZ          LAB_065b468a
ram:065b462c    8b44241c        MOV         EAX,dword ptr [ESP + param_3+0x10]
ram:065b4630    85c0            TEST        EAX,EAX
ram:065b4632    7456            JZ          LAB_065b468a
ram:065b4634    8b5c2414        MOV         EBX,dword ptr [ESP + param_1+0x10]
ram:065b4638    50              PUSH        EAX
ram:065b4639    8d4b04          LEA         ECX,[EBX + 0x4]
ram:065b463c    e81fcfffff      CALL        FUN_065b1560                            ;undefined4 FUN_065b1560(undefined4 p...
ram:065b4641    85c0            TEST        EAX,EAX
ram:065b4643    7445            JZ          LAB_065b468a
ram:065b4645    8b4008          MOV         EAX,dword ptr [EAX + 0x8]
ram:065b4648    89442418        MOV         dword ptr [ESP + param_2+0x10],EAX
ram:065b464c    8b30            MOV         ESI,dword ptr [EAX]
ram:065b464e    3bf0            CMP         ESI,EAX
ram:065b4650    742c            JZ          LAB_065b467e
                            LAB_065b4652:                 ;XREF[1,0]:   065b467c
ram:065b4652    8b4e08          MOV         ECX,dword ptr [ESI + 0x8]
ram:065b4655    8b6c2420        MOV         EBP,dword ptr [ESP + param_4+0x10]
ram:065b4659    8d43fc          LEA         EAX,[EBX + -0x4]
ram:065b465c    8b17            MOV         EDX,dword ptr [EDI]
ram:065b465e    f7d8            NEG         EAX
ram:065b4660    55              PUSH        EBP
ram:065b4661    8b6904          MOV         EBP,dword ptr [ECX + 0x4]
ram:065b4664    8b09            MOV         ECX,dword ptr [ECX]
ram:065b4666    55              PUSH        EBP
ram:065b4667    1bc0            SBB         EAX,EAX
ram:065b4669    51              PUSH        ECX
ram:065b466a    23c3            AND         EAX,EBX
ram:065b466c    50              PUSH        EAX
ram:065b466d    57              PUSH        EDI
ram:065b466e    ff12            CALL        dword ptr [EDX]
ram:065b4670    85c0            TEST        EAX,EAX
ram:065b4672    7416            JZ          LAB_065b468a
ram:065b4674    8b36            MOV         ESI,dword ptr [ESI]
ram:065b4676    8b442418        MOV         EAX,dword ptr [ESP + 0x18]
ram:065b467a    3bf0            CMP         ESI,EAX
ram:065b467c    75d4            JNZ         LAB_065b4652
                            LAB_065b467e:                 ;XREF[1,0]:   065b4650
ram:065b467e    5f              POP         EDI
ram:065b467f    5e              POP         ESI
ram:065b4680    5d              POP         EBP
ram:065b4681    b801000000      MOV         EAX,0x1
ram:065b4686    5b              POP         EBX
ram:065b4687    c21000          RET         0x10
                            LAB_065b468a:                 ;XREF[4,0]:   065b462a,065b4632,065b4643,065b4672
ram:065b468a    5f              POP         EDI
ram:065b468b    5e              POP         ESI
ram:065b468c    5d              POP         EBP
ram:065b468d    33c0            XOR         EAX,EAX
ram:065b468f    5b              POP         EBX
ram:065b4690    c21000          RET         0x10
ram:065b4693    90              ??          90h
ram:065b4694    90              ??          90h
ram:065b4695    90              ??          90h
ram:065b4696    90              ??          90h
ram:065b4697    90              ??          90h
ram:065b4698    90              ??          90h
ram:065b4699    90              ??          90h
ram:065b469a    90              ??          90h
ram:065b469b    90              ??          90h
ram:065b469c    90              ??          90h
ram:065b469d    90              ??          90h
ram:065b469e    90              ??          90h
ram:065b469f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 * FUN_065b46a0(void)
                                                          ;XREF[1,0]:   065b2033
ram:065b46a0    6a0c            PUSH        0xc
ram:065b46a2    e827180000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b46a7    83c404          ADD         ESP,0x4
ram:065b46aa    85c0            TEST        EAX,EAX
ram:065b46ac    7415            JZ          LAB_065b46c3
ram:065b46ae    c74004010...    MOV         dword ptr [EAX + 0x4],0x1
ram:065b46b5    c74008648...    MOV         dword ptr [EAX + 0x8],0x65b8064
ram:065b46bc    c700f8705b06    MOV         dword ptr [EAX],0x65b70f8
ram:065b46c2    c3              RET
                            LAB_065b46c3:                 ;XREF[1,0]:   065b46ac
ram:065b46c3    33c0            XOR         EAX,EAX
ram:065b46c5    c3              RET
ram:065b46c6    90              ??          90h
ram:065b46c7    90              ??          90h
ram:065b46c8    90              ??          90h
ram:065b46c9    90              ??          90h
ram:065b46ca    90              ??          90h
ram:065b46cb    90              ??          90h
ram:065b46cc    90              ??          90h
ram:065b46cd    90              ??          90h
ram:065b46ce    90              ??          90h
ram:065b46cf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 * FUN_065b46d0(void)
                                                          ;XREF[1,0]:   065b2015
ram:065b46d0    6a0c            PUSH        0xc
ram:065b46d2    e8f7170000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b46d7    83c404          ADD         ESP,0x4
ram:065b46da    85c0            TEST        EAX,EAX
ram:065b46dc    7415            JZ          LAB_065b46f3
ram:065b46de    c74004010...    MOV         dword ptr [EAX + 0x4],0x1
ram:065b46e5    c74008748...    MOV         dword ptr [EAX + 0x8],0x65b8074
ram:065b46ec    c70008715b06    MOV         dword ptr [EAX],0x65b7108
ram:065b46f2    c3              RET
                            LAB_065b46f3:                 ;XREF[1,0]:   065b46dc
ram:065b46f3    33c0            XOR         EAX,EAX
ram:065b46f5    c3              RET
ram:065b46f6    90              ??          90h
ram:065b46f7    90              ??          90h
ram:065b46f8    90              ??          90h
ram:065b46f9    90              ??          90h
ram:065b46fa    90              ??          90h
ram:065b46fb    90              ??          90h
ram:065b46fc    90              ??          90h
ram:065b46fd    90              ??          90h
ram:065b46fe    90              ??          90h
ram:065b46ff    90              ??          90h
ram:065b4700    8b              ??          8Bh
ram:065b4701    54              ??          54h    T
ram:065b4702    24              ??          24h    $
ram:065b4703    0c              ??          0Ch
ram:065b4704    56              ??          56h    V
ram:065b4705    8b              ??          8Bh
ram:065b4706    74              ??          74h    t
ram:065b4707    24              ??          24h    $
ram:065b4708    0c              ??          0Ch
ram:065b4709    57              ??          57h    W
ram:065b470a    bf              ??          BFh
ram:065b470b    d0              ??          D0h
ram:065b470c    83              ??          83h
ram:065b470d    5b              ??          5Bh    [
ram:065b470e    06              ??          06h
ram:065b470f    b9              ??          B9h
ram:065b4710    17              ??          17h
ram:065b4711    00              ??          00h
ram:065b4712    00              ??          00h
ram:065b4713    00              ??          00h
ram:065b4714    33              ??          33h    3
ram:065b4715    c0              ??          C0h
ram:065b4716    c7              ??          C7h
ram:065b4717    02              ??          02h
ram:065b4718    00              ??          00h
ram:065b4719    00              ??          00h
ram:065b471a    00              ??          00h
ram:065b471b    00              ??          00h
ram:065b471c    f3              ??          F3h
ram:065b471d    a6              ??          A6h
ram:065b471e    5f              ??          5Fh    _
ram:065b471f    5e              ??          5Eh    ^
ram:065b4720    74              ??          74h    t
ram:065b4721    08              ??          08h
ram:065b4722    b8              ??          B8h
ram:065b4723    fd              ??          FDh
ram:065b4724    ff              ??          FFh
ram:065b4725    ff              ??          FFh
ram:065b4726    ff              ??          FFh
ram:065b4727    c2              ??          C2h
ram:065b4728    0c              ??          0Ch
ram:065b4729    00              ??          00h
ram:065b472a    8b              ??          8Bh
ram:065b472b    44              ??          44h    D
ram:065b472c    24              ??          24h    $
ram:065b472d    04              ??          04h
ram:065b472e    89              ??          89h
ram:065b472f    02              ??          02h
ram:065b4730    50              ??          50h    P
ram:065b4731    8b              ??          8Bh
ram:065b4732    08              ??          08h
ram:065b4733    ff              ??          FFh
ram:065b4734    51              ??          51h    Q
ram:065b4735    04              ??          04h
ram:065b4736    33              ??          33h    3
ram:065b4737    c0              ??          C0h
ram:065b4738    c2              ??          C2h
ram:065b4739    0c              ??          0Ch
ram:065b473a    00              ??          00h
ram:065b473b    90              ??          90h
ram:065b473c    90              ??          90h
ram:065b473d    90              ??          90h
ram:065b473e    90              ??          90h
ram:065b473f    90              ??          90h
ram:065b4740    8b              ??          8Bh
ram:065b4741    44              ??          44h    D
ram:065b4742    24              ??          24h    $
ram:065b4743    04              ??          04h
ram:065b4744    8b              ??          8Bh
ram:065b4745    48              ??          48h    H
ram:065b4746    04              ??          04h
ram:065b4747    41              ??          41h    A
ram:065b4748    89              ??          89h
ram:065b4749    48              ??          48h    H
ram:065b474a    04              ??          04h
ram:065b474b    8b              ??          8Bh
ram:065b474c    c1              ??          C1h
ram:065b474d    c2              ??          C2h
ram:065b474e    04              ??          04h
ram:065b474f    00              ??          00h
ram:065b4750    55              ??          55h    U
ram:065b4751    8b              ??          8Bh
ram:065b4752    6c              ??          6Ch    l
ram:065b4753    24              ??          24h    $
ram:065b4754    0c              ??          0Ch
ram:065b4755    56              ??          56h    V
ram:065b4756    57              ??          57h    W
ram:065b4757    8b              ??          8Bh
ram:065b4758    45              ??          45h    E
ram:065b4759    00              ??          00h
ram:065b475a    33              ??          33h    3
ram:065b475b    ff              ??          FFh
ram:065b475c    83              ??          83h
ram:065b475d    f8              ??          F8h
ram:065b475e    14              ??          14h
ram:065b475f    0f              ??          0Fh
ram:065b4760    85              ??          85h
ram:065b4761    da              ??          DAh
ram:065b4762    00              ??          00h
ram:065b4763    00              ??          00h
ram:065b4764    00              ??          00h
ram:065b4765    8b              ??          8Bh
ram:065b4766    44              ??          44h    D
ram:065b4767    24              ??          24h    $
ram:065b4768    10              ??          10h
ram:065b4769    53              ??          53h    S
ram:065b476a    8b              ??          8Bh
ram:065b476b    70              ??          70h    p
ram:065b476c    08              ??          08h
ram:065b476d    8b              ??          8Bh
ram:065b476e    45              ??          45h    E
ram:065b476f    04              ??          04h
ram:065b4770    8a              ??          8Ah
ram:065b4771    10              ??          10h
ram:065b4772    8a              ??          8Ah
ram:065b4773    1e              ??          1Eh
ram:065b4774    8a              ??          8Ah
ram:065b4775    ca              ??          CAh
ram:065b4776    3a              ??          3Ah    :
ram:065b4777    d3              ??          D3h
ram:065b4778    75              ??          75h    u
ram:065b4779    1e              ??          1Eh
ram:065b477a    84              ??          84h
ram:065b477b    c9              ??          C9h
ram:065b477c    74              ??          74h    t
ram:065b477d    16              ??          16h
ram:065b477e    8a              ??          8Ah
ram:065b477f    50              ??          50h    P
ram:065b4780    01              ??          01h
ram:065b4781    8a              ??          8Ah
ram:065b4782    5e              ??          5Eh    ^
ram:065b4783    01              ??          01h
ram:065b4784    8a              ??          8Ah
ram:065b4785    ca              ??          CAh
ram:065b4786    3a              ??          3Ah    :
ram:065b4787    d3              ??          D3h
ram:065b4788    75              ??          75h    u
ram:065b4789    0e              ??          0Eh
ram:065b478a    83              ??          83h
ram:065b478b    c0              ??          C0h
ram:065b478c    02              ??          02h
ram:065b478d    83              ??          83h
ram:065b478e    c6              ??          C6h
ram:065b478f    02              ??          02h
ram:065b4790    84              ??          84h
ram:065b4791    c9              ??          C9h
ram:065b4792    75              ??          75h    u
ram:065b4793    dc              ??          DCh
ram:065b4794    33              ??          33h    3
ram:065b4795    c0              ??          C0h
ram:065b4796    eb              ??          EBh
ram:065b4797    05              ??          05h
ram:065b4798    1b              ??          1Bh
ram:065b4799    c0              ??          C0h
ram:065b479a    83              ??          83h
ram:065b479b    d8              ??          D8h
ram:065b479c    ff              ??          FFh
ram:065b479d    85              ??          85h
ram:065b479e    c0              ??          C0h
ram:065b479f    5b              ??          5Bh    [
ram:065b47a0    0f              ??          0Fh
ram:065b47a1    85              ??          85h
ram:065b47a2    99              ??          99h
ram:065b47a3    00              ??          00h
ram:065b47a4    00              ??          00h
ram:065b47a5    00              ??          00h
ram:065b47a6    6a              ??          6Ah    j
ram:065b47a7    28              ??          28h    (
ram:065b47a8    e8              ??          E8h
ram:065b47a9    21              ??          21h    !
ram:065b47aa    17              ??          17h
ram:065b47ab    00              ??          00h
ram:065b47ac    00              ??          00h
ram:065b47ad    8b              ??          8Bh
ram:065b47ae    f0              ??          F0h
ram:065b47af    83              ??          83h
ram:065b47b0    c4              ??          C4h
ram:065b47b1    04              ??          04h
ram:065b47b2    85              ??          85h
ram:065b47b3    f6              ??          F6h
ram:065b47b4    74              ??          74h    t
ram:065b47b5    76              ??          76h    v
ram:065b47b6    8b              ??          8Bh
ram:065b47b7    ce              ??          CEh
ram:065b47b8    e8              ??          E8h
ram:065b47b9    33              ??          33h    3
ram:065b47ba    fc              ??          FCh
ram:065b47bb    ff              ??          FFh
ram:065b47bc    ff              ??          FFh
ram:065b47bd    8d              ??          8Dh
ram:065b47be    46              ??          46h    F
ram:065b47bf    1c              ??          1Ch
ram:065b47c0    c7              ??          C7h
ram:065b47c1    00              ??          00h
ram:065b47c2    68              ??          68h    h
ram:065b47c3    71              ??          71h    q
ram:065b47c4    5b              ??          5Bh    [
ram:065b47c5    06              ??          06h
ram:065b47c6    c7              ??          C7h
ram:065b47c7    40              ??          40h    @
ram:065b47c8    04              ??          04h
ram:065b47c9    01              ??          01h
ram:065b47ca    00              ??          00h
ram:065b47cb    00              ??          00h
ram:065b47cc    00              ??          00h
ram:065b47cd    89              ??          89h
ram:065b47ce    70              ??          70h    p
ram:065b47cf    08              ??          08h
ram:065b47d0    c7              ??          C7h
ram:065b47d1    06              ??          06h
ram:065b47d2    44              ??          44h    D
ram:065b47d3    71              ??          71h    q
ram:065b47d4    5b              ??          5Bh    [
ram:065b47d5    06              ??          06h
ram:065b47d6    c7              ??          C7h
ram:065b47d7    46              ??          46h    F
ram:065b47d8    04              ??          04h
ram:065b47d9    18              ??          18h
ram:065b47da    71              ??          71h    q
ram:065b47db    5b              ??          5Bh    [
ram:065b47dc    06              ??          06h
ram:065b47dd    8b              ??          8Bh
ram:065b47de    4d              ??          4Dh    M
ram:065b47df    08              ??          08h
ram:065b47e0    85              ??          85h
ram:065b47e1    c9              ??          C9h
ram:065b47e2    89              ??          89h
ram:065b47e3    4e              ??          4Eh    N
ram:065b47e4    18              ??          18h
ram:065b47e5    75              ??          75h    u
ram:065b47e6    3e              ??          3Eh    >
ram:065b47e7    89              ??          89h
ram:065b47e8    46              ??          46h    F
ram:065b47e9    18              ??          18h
ram:065b47ea    55              ??          55h    U
ram:065b47eb    8b              ??          8Bh
ram:065b47ec    ce              ??          CEh
ram:065b47ed    e8              ??          E8h
ram:065b47ee    2e              ??          2Eh    .
ram:065b47ef    fc              ??          FCh
ram:065b47f0    ff              ??          FFh
ram:065b47f1    ff              ??          FFh
ram:065b47f2    8b              ??          8Bh
ram:065b47f3    f8              ??          F8h
ram:065b47f4    85              ??          85h
ram:065b47f5    ff              ??          FFh
ram:065b47f6    74              ??          74h    t
ram:065b47f7    58              ??          58h    X
ram:065b47f8    8b              ??          8Bh
ram:065b47f9    45              ??          45h    E
ram:065b47fa    0c              ??          0Ch
ram:065b47fb    85              ??          85h
ram:065b47fc    c0              ??          C0h
ram:065b47fd    74              ??          74h    t
ram:065b47fe    06              ??          06h
ram:065b47ff    c7              ??          C7h
ram:065b4800    00              ??          00h
ram:065b4801    00              ??          00h
ram:065b4802    00              ??          00h
ram:065b4803    00              ??          00h
ram:065b4804    00              ??          00h
ram:065b4805    8b              ??          8Bh
ram:065b4806    ce              ??          CEh
ram:065b4807    e8              ??          E8h
ram:065b4808    f4              ??          F4h
ram:065b4809    fb              ??          FBh
ram:065b480a    ff              ??          FFh
ram:065b480b    ff              ??          FFh
ram:065b480c    56              ??          56h    V
ram:065b480d    e8              ??          E8h
ram:065b480e    b0              ??          B0h
ram:065b480f    16              ??          16h
ram:065b4810    00              ??          00h
ram:065b4811    00              ??          00h
ram:065b4812    8b              ??          8Bh
ram:065b4813    4c              ??          4Ch    L
ram:065b4814    24              ??          24h    $
ram:065b4815    1c              ??          1Ch
ram:065b4816    83              ??          83h
ram:065b4817    c4              ??          C4h
ram:065b4818    04              ??          04h
ram:065b4819    33              ??          33h    3
ram:065b481a    c0              ??          C0h
ram:065b481b    89              ??          89h
ram:065b481c    01              ??          01h
ram:065b481d    8b              ??          8Bh
ram:065b481e    c7              ??          C7h
ram:065b481f    5f              ??          5Fh    _
ram:065b4820    5e              ??          5Eh    ^
ram:065b4821    5d              ??          5Dh    ]
ram:065b4822    c2              ??          C2h
ram:065b4823    0c              ??          0Ch
ram:065b4824    00              ??          00h
ram:065b4825    8b              ??          8Bh
ram:065b4826    4d              ??          4Dh    M
ram:065b4827    0c              ??          0Ch
ram:065b4828    89              ??          89h
ram:065b4829    01              ??          01h
ram:065b482a    eb              ??          EBh
ram:065b482b    be              ??          BEh
ram:065b482c    8b              ??          8Bh
ram:065b482d    54              ??          54h    T
ram:065b482e    24              ??          24h    $
ram:065b482f    18              ??          18h
ram:065b4830    33              ??          33h    3
ram:065b4831    c9              ??          C9h
ram:065b4832    5f              ??          5Fh    _
ram:065b4833    5e              ??          5Eh    ^
ram:065b4834    b8              ??          B8h
ram:065b4835    fc              ??          FCh
ram:065b4836    ff              ??          FFh
ram:065b4837    ff              ??          FFh
ram:065b4838    ff              ??          FFh
ram:065b4839    89              ??          89h
ram:065b483a    0a              ??          0Ah
ram:065b483b    5d              ??          5Dh    ]
ram:065b483c    c2              ??          C2h
ram:065b483d    0c              ??          0Ch
ram:065b483e    00              ??          00h
ram:065b483f    8b              ??          8Bh
ram:065b4840    54              ??          54h    T
ram:065b4841    24              ??          24h    $
ram:065b4842    18              ??          18h
ram:065b4843    b8              ??          B8h
ram:065b4844    fd              ??          FDh
ram:065b4845    ff              ??          FFh
ram:065b4846    ff              ??          FFh
ram:065b4847    ff              ??          FFh
ram:065b4848    89              ??          89h
ram:065b4849    3a              ??          3Ah    :
ram:065b484a    5f              ??          5Fh    _
ram:065b484b    5e              ??          5Eh    ^
ram:065b484c    5d              ??          5Dh    ]
ram:065b484d    c2              ??          C2h
ram:065b484e    0c              ??          0Ch
ram:065b484f    00              ??          00h
ram:065b4850    8b              ??          8Bh
ram:065b4851    44              ??          44h    D
ram:065b4852    24              ??          24h    $
ram:065b4853    18              ??          18h
ram:065b4854    89              ??          89h
ram:065b4855    30              ??          30h    0
ram:065b4856    8b              ??          8Bh
ram:065b4857    c7              ??          C7h
ram:065b4858    5f              ??          5Fh    _
ram:065b4859    5e              ??          5Eh    ^
ram:065b485a    5d              ??          5Dh    ]
ram:065b485b    c2              ??          C2h
ram:065b485c    0c              ??          0Ch
ram:065b485d    00              ??          00h
ram:065b485e    90              ??          90h
ram:065b485f    90              ??          90h
ram:065b4860    a1              ??          A1h
ram:065b4861    74              ??          74h    t
ram:065b4862    71              ??          71h    q
ram:065b4863    5b              ??          5Bh    [
ram:065b4864    06              ??          06h
ram:065b4865    53              ??          53h    S
ram:065b4866    55              ??          55h    U
ram:065b4867    56              ??          56h    V
ram:065b4868    57              ??          57h    W
ram:065b4869    33              ??          33h    3
ram:065b486a    ff              ??          FFh
ram:065b486b    85              ??          85h
ram:065b486c    c0              ??          C0h
ram:065b486d    74              ??          74h    t
ram:065b486e    43              ??          43h    C
ram:065b486f    8b              ??          8Bh
ram:065b4870    6c              ??          6Ch    l
ram:065b4871    24              ??          24h    $
ram:065b4872    18              ??          18h
ram:065b4873    8b              ??          8Bh
ram:065b4874    f5              ??          F5h
ram:065b4875    8a              ??          8Ah
ram:065b4876    10              ??          10h
ram:065b4877    8a              ??          8Ah
ram:065b4878    1e              ??          1Eh
ram:065b4879    8a              ??          8Ah
ram:065b487a    ca              ??          CAh
ram:065b487b    3a              ??          3Ah    :
ram:065b487c    d3              ??          D3h
ram:065b487d    75              ??          75h    u
ram:065b487e    1e              ??          1Eh
ram:065b487f    84              ??          84h
ram:065b4880    c9              ??          C9h
ram:065b4881    74              ??          74h    t
ram:065b4882    16              ??          16h
ram:065b4883    8a              ??          8Ah
ram:065b4884    50              ??          50h    P
ram:065b4885    01              ??          01h
ram:065b4886    8a              ??          8Ah
ram:065b4887    5e              ??          5Eh    ^
ram:065b4888    01              ??          01h
ram:065b4889    8a              ??          8Ah
ram:065b488a    ca              ??          CAh
ram:065b488b    3a              ??          3Ah    :
ram:065b488c    d3              ??          D3h
ram:065b488d    75              ??          75h    u
ram:065b488e    0e              ??          0Eh
ram:065b488f    83              ??          83h
ram:065b4890    c0              ??          C0h
ram:065b4891    02              ??          02h
ram:065b4892    83              ??          83h
ram:065b4893    c6              ??          C6h
ram:065b4894    02              ??          02h
ram:065b4895    84              ??          84h
ram:065b4896    c9              ??          C9h
ram:065b4897    75              ??          75h    u
ram:065b4898    dc              ??          DCh
ram:065b4899    33              ??          33h    3
ram:065b489a    c0              ??          C0h
ram:065b489b    eb              ??          EBh
ram:065b489c    05              ??          05h
ram:065b489d    1b              ??          1Bh
ram:065b489e    c0              ??          C0h
ram:065b489f    83              ??          83h
ram:065b48a0    d8              ??          D8h
ram:065b48a1    ff              ??          FFh
ram:065b48a2    85              ??          85h
ram:065b48a3    c0              ??          C0h
ram:065b48a4    74              ??          74h    t
ram:065b48a5    22              ??          22h    "
ram:065b48a6    8b              ??          8Bh
ram:065b48a7    04              ??          04h
ram:065b48a8    fd              ??          FDh
ram:065b48a9    7c              ??          7Ch    |
ram:065b48aa    71              ??          71h    q
ram:065b48ab    5b              ??          5Bh    [
ram:065b48ac    06              ??          06h
ram:065b48ad    47              ??          47h    G
ram:065b48ae    85              ??          85h
ram:065b48af    c0              ??          C0h
ram:065b48b0    75              ??          75h    u
ram:065b48b1    c1              ??          C1h
ram:065b48b2    8b              ??          8Bh
ram:065b48b3    4c              ??          4Ch    L
ram:065b48b4    24              ??          24h    $
ram:065b48b5    1c              ??          1Ch
ram:065b48b6    5f              ??          5Fh    _
ram:065b48b7    5e              ??          5Eh    ^
ram:065b48b8    5d              ??          5Dh    ]
ram:065b48b9    c7              ??          C7h
ram:065b48ba    01              ??          01h
ram:065b48bb    00              ??          00h
ram:065b48bc    00              ??          00h
ram:065b48bd    00              ??          00h
ram:065b48be    00              ??          00h
ram:065b48bf    b8              ??          B8h
ram:065b48c0    fd              ??          FDh
ram:065b48c1    ff              ??          FFh
ram:065b48c2    ff              ??          FFh
ram:065b48c3    ff              ??          FFh
ram:065b48c4    5b              ??          5Bh    [
ram:065b48c5    c2              ??          C2h
ram:065b48c6    0c              ??          0Ch
ram:065b48c7    00              ??          00h
ram:065b48c8    8b              ??          8Bh
ram:065b48c9    04              ??          04h
ram:065b48ca    fd              ??          FDh
ram:065b48cb    78              ??          78h    x
ram:065b48cc    71              ??          71h    q
ram:065b48cd    5b              ??          5Bh    [
ram:065b48ce    06              ??          06h
ram:065b48cf    8b              ??          8Bh
ram:065b48d0    4c              ??          4Ch    L
ram:065b48d1    24              ??          24h    $
ram:065b48d2    14              ??          14h
ram:065b48d3    85              ??          85h
ram:065b48d4    c0              ??          C0h
ram:065b48d5    79              ??          79h    y
ram:065b48d6    20              ??          20h
ram:065b48d7    8b              ??          8Bh
ram:065b48d8    51              ??          51h    Q
ram:065b48d9    08              ??          08h
ram:065b48da    25              ??          25h    %
ram:065b48db    ff              ??          FFh
ram:065b48dc    ff              ??          FFh
ram:065b48dd    ff              ??          FFh
ram:065b48de    7f              ??          7Fh    
ram:065b48df    8b              ??          8Bh
ram:065b48e0    34              ??          34h    4
ram:065b48e1    10              ??          10h
ram:065b48e2    56              ??          56h    V
ram:065b48e3    8b              ??          8Bh
ram:065b48e4    16              ??          16h
ram:065b48e5    ff              ??          FFh
ram:065b48e6    52              ??          52h    R
ram:065b48e7    04              ??          04h
ram:065b48e8    5f              ??          5Fh    _
ram:065b48e9    8b              ??          8Bh
ram:065b48ea    44              ??          44h    D
ram:065b48eb    24              ??          24h    $
ram:065b48ec    18              ??          18h
ram:065b48ed    89              ??          89h
ram:065b48ee    30              ??          30h    0
ram:065b48ef    5e              ??          5Eh    ^
ram:065b48f0    5d              ??          5Dh    ]
ram:065b48f1    33              ??          33h    3
ram:065b48f2    c0              ??          C0h
ram:065b48f3    5b              ??          5Bh    [
ram:065b48f4    c2              ??          C2h
ram:065b48f5    0c              ??          0Ch
ram:065b48f6    00              ??          00h
ram:065b48f7    8b              ??          8Bh
ram:065b48f8    71              ??          71h    q
ram:065b48f9    08              ??          08h
ram:065b48fa    03              ??          03h
ram:065b48fb    f0              ??          F0h
ram:065b48fc    56              ??          56h    V
ram:065b48fd    8b              ??          8Bh
ram:065b48fe    16              ??          16h
ram:065b48ff    ff              ??          FFh
ram:065b4900    52              ??          52h    R
ram:065b4901    04              ??          04h
ram:065b4902    5f              ??          5Fh    _
ram:065b4903    8b              ??          8Bh
ram:065b4904    44              ??          44h    D
ram:065b4905    24              ??          24h    $
ram:065b4906    18              ??          18h
ram:065b4907    89              ??          89h
ram:065b4908    30              ??          30h    0
ram:065b4909    5e              ??          5Eh    ^
ram:065b490a    5d              ??          5Dh    ]
ram:065b490b    33              ??          33h    3
ram:065b490c    c0              ??          C0h
ram:065b490d    5b              ??          5Bh    [
ram:065b490e    c2              ??          C2h
ram:065b490f    0c              ??          0Ch
ram:065b4910    00              ??          00h
ram:065b4911    90              ??          90h
ram:065b4912    90              ??          90h
ram:065b4913    90              ??          90h
ram:065b4914    90              ??          90h
ram:065b4915    90              ??          90h
ram:065b4916    90              ??          90h
ram:065b4917    90              ??          90h
ram:065b4918    90              ??          90h
ram:065b4919    90              ??          90h
ram:065b491a    90              ??          90h
ram:065b491b    90              ??          90h
ram:065b491c    90              ??          90h
ram:065b491d    90              ??          90h
ram:065b491e    90              ??          90h
ram:065b491f    90              ??          90h
ram:065b4920    8b              ??          8Bh
ram:065b4921    4c              ??          4Ch    L
ram:065b4922    24              ??          24h    $
ram:065b4923    04              ??          04h
ram:065b4924    8b              ??          8Bh
ram:065b4925    41              ??          41h    A
ram:065b4926    04              ??          04h
ram:065b4927    85              ??          85h
ram:065b4928    c0              ??          C0h
ram:065b4929    76              ??          76h    v
ram:065b492a    04              ??          04h
ram:065b492b    48              ??          48h    H
ram:065b492c    89              ??          89h
ram:065b492d    41              ??          41h    A
ram:065b492e    04              ??          04h
ram:065b492f    8b              ??          8Bh
ram:065b4930    41              ??          41h    A
ram:065b4931    04              ??          04h
ram:065b4932    85              ??          85h
ram:065b4933    c0              ??          C0h
ram:065b4934    75              ??          75h    u
ram:065b4935    22              ??          22h    "
ram:065b4936    56              ??          56h    V
ram:065b4937    8b              ??          8Bh
ram:065b4938    71              ??          71h    q
ram:065b4939    08              ??          08h
ram:065b493a    85              ??          85h
ram:065b493b    f6              ??          F6h
ram:065b493c    c7              ??          C7h
ram:065b493d    41              ??          41h    A
ram:065b493e    04              ??          04h
ram:065b493f    01              ??          01h
ram:065b4940    00              ??          00h
ram:065b4941    00              ??          00h
ram:065b4942    00              ??          00h
ram:065b4943    74              ??          74h    t
ram:065b4944    10              ??          10h
ram:065b4945    8b              ??          8Bh
ram:065b4946    ce              ??          CEh
ram:065b4947    e8              ??          E8h
ram:065b4948    b4              ??          B4h
ram:065b4949    fa              ??          FAh
ram:065b494a    ff              ??          FFh
ram:065b494b    ff              ??          FFh
ram:065b494c    56              ??          56h    V
ram:065b494d    e8              ??          E8h
ram:065b494e    70              ??          70h    p
ram:065b494f    15              ??          15h
ram:065b4950    00              ??          00h
ram:065b4951    00              ??          00h
ram:065b4952    83              ??          83h
ram:065b4953    c4              ??          C4h
ram:065b4954    04              ??          04h
ram:065b4955    33              ??          33h    3
ram:065b4956    c0              ??          C0h
ram:065b4957    5e              ??          5Eh    ^
ram:065b4958    c2              ??          C2h
ram:065b4959    04              ??          04h
ram:065b495a    00              ??          00h
ram:065b495b    90              ??          90h
ram:065b495c    90              ??          90h
ram:065b495d    90              ??          90h
ram:065b495e    90              ??          90h
ram:065b495f    90              ??          90h
ram:065b4960    8b              ??          8Bh
ram:065b4961    44              ??          44h    D
ram:065b4962    24              ??          24h    $
ram:065b4963    04              ??          04h
ram:065b4964    8b              ??          8Bh
ram:065b4965    40              ??          40h    @
ram:065b4966    18              ??          18h
ram:065b4967    89              ??          89h
ram:065b4968    44              ??          44h    D
ram:065b4969    24              ??          24h    $
ram:065b496a    04              ??          04h
ram:065b496b    8b              ??          8Bh
ram:065b496c    08              ??          08h
ram:065b496d    ff              ??          FFh
ram:065b496e    21              ??          21h    !
ram:065b496f    90              ??          90h
ram:065b4970    8b              ??          8Bh
ram:065b4971    44              ??          44h    D
ram:065b4972    24              ??          24h    $
ram:065b4973    04              ??          04h
ram:065b4974    8b              ??          8Bh
ram:065b4975    40              ??          40h    @
ram:065b4976    18              ??          18h
ram:065b4977    89              ??          89h
ram:065b4978    44              ??          44h    D
ram:065b4979    24              ??          24h    $
ram:065b497a    04              ??          04h
ram:065b497b    8b              ??          8Bh
ram:065b497c    08              ??          08h
ram:065b497d    ff              ??          FFh
ram:065b497e    61              ??          61h    a
ram:065b497f    04              ??          04h
ram:065b4980    8b              ??          8Bh
ram:065b4981    44              ??          44h    D
ram:065b4982    24              ??          24h    $
ram:065b4983    04              ??          04h
ram:065b4984    8b              ??          8Bh
ram:065b4985    40              ??          40h    @
ram:065b4986    18              ??          18h
ram:065b4987    89              ??          89h
ram:065b4988    44              ??          44h    D
ram:065b4989    24              ??          24h    $
ram:065b498a    04              ??          04h
ram:065b498b    8b              ??          8Bh
ram:065b498c    08              ??          08h
ram:065b498d    ff              ??          FFh
ram:065b498e    61              ??          61h    a
ram:065b498f    08              ??          08h
ram:065b4990    83              ??          83h
ram:065b4991    6c              ??          6Ch    l
ram:065b4992    24              ??          24h    $
ram:065b4993    04              ??          04h
ram:065b4994    04              ??          04h
ram:065b4995    e9              ??          E9h
ram:065b4996    96              ??          96h
ram:065b4997    fa              ??          FAh
ram:065b4998    ff              ??          FFh
ram:065b4999    ff              ??          FFh
ram:065b499a    cc              ??          CCh
ram:065b499b    cc              ??          CCh
ram:065b499c    cc              ??          CCh
ram:065b499d    cc              ??          CCh
ram:065b499e    cc              ??          CCh
ram:065b499f    cc              ??          CCh
ram:065b49a0    83              ??          83h
ram:065b49a1    6c              ??          6Ch    l
ram:065b49a2    24              ??          24h    $
ram:065b49a3    04              ??          04h
ram:065b49a4    04              ??          04h
ram:065b49a5    e9              ??          E9h
ram:065b49a6    06              ??          06h
ram:065b49a7    fb              ??          FBh
ram:065b49a8    ff              ??          FFh
ram:065b49a9    ff              ??          FFh
ram:065b49aa    cc              ??          CCh
ram:065b49ab    cc              ??          CCh
ram:065b49ac    cc              ??          CCh
ram:065b49ad    cc              ??          CCh
ram:065b49ae    cc              ??          CCh
ram:065b49af    cc              ??          CCh
ram:065b49b0    83              ??          83h
ram:065b49b1    6c              ??          6Ch    l
ram:065b49b2    24              ??          24h    $
ram:065b49b3    04              ??          04h
ram:065b49b4    04              ??          04h
ram:065b49b5    e9              ??          E9h
ram:065b49b6    16              ??          16h
ram:065b49b7    fb              ??          FBh
ram:065b49b8    ff              ??          FFh
ram:065b49b9    ff              ??          FFh
ram:065b49ba    cc              ??          CCh
ram:065b49bb    cc              ??          CCh
ram:065b49bc    cc              ??          CCh
ram:065b49bd    cc              ??          CCh
ram:065b49be    cc              ??          CCh
ram:065b49bf    cc              ??          CCh
ram:065b49c0    83              ??          83h
ram:065b49c1    6c              ??          6Ch    l
ram:065b49c2    24              ??          24h    $
ram:065b49c3    04              ??          04h
ram:065b49c4    04              ??          04h
ram:065b49c5    e9              ??          E9h
ram:065b49c6    16              ??          16h
ram:065b49c7    fb              ??          FBh
ram:065b49c8    ff              ??          FFh
ram:065b49c9    ff              ??          FFh
ram:065b49ca    cc              ??          CCh
ram:065b49cb    cc              ??          CCh
ram:065b49cc    cc              ??          CCh
ram:065b49cd    cc              ??          CCh
ram:065b49ce    cc              ??          CCh
ram:065b49cf    cc              ??          CCh
ram:065b49d0    83              ??          83h
ram:065b49d1    6c              ??          6Ch    l
ram:065b49d2    24              ??          24h    $
ram:065b49d3    04              ??          04h
ram:065b49d4    04              ??          04h
ram:065b49d5    e9              ??          E9h
ram:065b49d6    66              ??          66h    f
ram:065b49d7    fb              ??          FBh
ram:065b49d8    ff              ??          FFh
ram:065b49d9    ff              ??          FFh
ram:065b49da    cc              ??          CCh
ram:065b49db    cc              ??          CCh
ram:065b49dc    cc              ??          CCh
ram:065b49dd    cc              ??          CCh
ram:065b49de    cc              ??          CCh
ram:065b49df    cc              ??          CCh
ram:065b49e0    83              ??          83h
ram:065b49e1    6c              ??          6Ch    l
ram:065b49e2    24              ??          24h    $
ram:065b49e3    04              ??          04h
ram:065b49e4    04              ??          04h
ram:065b49e5    e9              ??          E9h
ram:065b49e6    76              ??          76h    v
ram:065b49e7    ff              ??          FFh
ram:065b49e8    ff              ??          FFh
ram:065b49e9    ff              ??          FFh
ram:065b49ea    cc              ??          CCh
ram:065b49eb    cc              ??          CCh
ram:065b49ec    cc              ??          CCh
ram:065b49ed    cc              ??          CCh
ram:065b49ee    cc              ??          CCh
ram:065b49ef    cc              ??          CCh
ram:065b49f0    83              ??          83h
ram:065b49f1    6c              ??          6Ch    l
ram:065b49f2    24              ??          24h    $
ram:065b49f3    04              ??          04h
ram:065b49f4    04              ??          04h
ram:065b49f5    e9              ??          E9h
ram:065b49f6    76              ??          76h    v
ram:065b49f7    ff              ??          FFh
ram:065b49f8    ff              ??          FFh
ram:065b49f9    ff              ??          FFh
ram:065b49fa    cc              ??          CCh
ram:065b49fb    cc              ??          CCh
ram:065b49fc    cc              ??          CCh
ram:065b49fd    cc              ??          CCh
ram:065b49fe    cc              ??          CCh
ram:065b49ff    cc              ??          CCh
ram:065b4a00    83              ??          83h
ram:065b4a01    6c              ??          6Ch    l
ram:065b4a02    24              ??          24h    $
ram:065b4a03    04              ??          04h
ram:065b4a04    04              ??          04h
ram:065b4a05    e9              ??          E9h
ram:065b4a06    76              ??          76h    v
ram:065b4a07    ff              ??          FFh
ram:065b4a08    ff              ??          FFh
ram:065b4a09    ff              ??          FFh
ram:065b4a0a    cc              ??          CCh
ram:065b4a0b    cc              ??          CCh
ram:065b4a0c    cc              ??          CCh
ram:065b4a0d    cc              ??          CCh
ram:065b4a0e    cc              ??          CCh
ram:065b4a0f    cc              ??          CCh
ram:065b4a10    51              ??          51h    Q
ram:065b4a11    53              ??          53h    S
ram:065b4a12    55              ??          55h    U
ram:065b4a13    56              ??          56h    V
ram:065b4a14    8b              ??          8Bh
ram:065b4a15    74              ??          74h    t
ram:065b4a16    24              ??          24h    $
ram:065b4a17    14              ??          14h
ram:065b4a18    57              ??          57h    W
ram:065b4a19    33              ??          33h    3
ram:065b4a1a    ff              ??          FFh
ram:065b4a1b    3b              ??          3Bh    ;
ram:065b4a1c    f7              ??          F7h
ram:065b4a1d    75              ??          75h    u
ram:065b4a1e    08              ??          08h
ram:065b4a1f    5f              ??          5Fh    _
ram:065b4a20    5e              ??          5Eh    ^
ram:065b4a21    5d              ??          5Dh    ]
ram:065b4a22    33              ??          33h    3
ram:065b4a23    c0              ??          C0h
ram:065b4a24    5b              ??          5Bh    [
ram:065b4a25    59              ??          59h    Y
ram:065b4a26    c3              ??          C3h
ram:065b4a27    bb              ??          BBh
ram:065b4a28    01              ??          01h
ram:065b4a29    00              ??          00h
ram:065b4a2a    00              ??          00h
ram:065b4a2b    00              ??          00h
ram:065b4a2c    68              ??          68h    h
ram:065b4a2d    9c              ??          9Ch
ram:065b4a2e    00              ??          00h
ram:065b4a2f    00              ??          00h
ram:065b4a30    00              ??          00h
ram:065b4a31    89              ??          89h
ram:065b4a32    35              ??          35h    5
ram:065b4a33    80              ??          80h
ram:065b4a34    8b              ??          8Bh
ram:065b4a35    5b              ??          5Bh    [
ram:065b4a36    06              ??          06h
ram:065b4a37    89              ??          89h
ram:065b4a38    1d              ??          1Dh
ram:065b4a39    78              ??          78h    x
ram:065b4a3a    8b              ??          8Bh
ram:065b4a3b    5b              ??          5Bh    [
ram:065b4a3c    06              ??          06h
ram:065b4a3d    89              ??          89h
ram:065b4a3e    3d              ??          3Dh    =
ram:065b4a3f    8c              ??          8Ch
ram:065b4a40    8b              ??          8Bh
ram:065b4a41    5b              ??          5Bh    [
ram:065b4a42    06              ??          06h
ram:065b4a43    c7              ??          C7h
ram:065b4a44    05              ??          05h
ram:065b4a45    88              ??          88h
ram:065b4a46    8b              ??          8Bh
ram:065b4a47    5b              ??          5Bh    [
ram:065b4a48    06              ??          06h
ram:065b4a49    84              ??          84h
ram:065b4a4a    8b              ??          8Bh
ram:065b4a4b    5b              ??          5Bh    [
ram:065b4a4c    06              ??          06h
ram:065b4a4d    e8              ??          E8h
ram:065b4a4e    2e              ??          2Eh    .
ram:065b4a4f    09              ??          09h
ram:065b4a50    00              ??          00h
ram:065b4a51    00              ??          00h
ram:065b4a52    8d              ??          8Dh
ram:065b4a53    44              ??          44h    D
ram:065b4a54    24              ??          24h    $
ram:065b4a55    1c              ??          1Ch
ram:065b4a56    50              ??          50h    P
ram:065b4a57    57              ??          57h    W
ram:065b4a58    e8              ??          E8h
ram:065b4a59    03              ??          03h
ram:065b4a5a    01              ??          01h
ram:065b4a5b    00              ??          00h
ram:065b4a5c    00              ??          00h
ram:065b4a5d    83              ??          83h
ram:065b4a5e    c4              ??          C4h
ram:065b4a5f    0c              ??          0Ch
ram:065b4a60    85              ??          85h
ram:065b4a61    c0              ??          C0h
ram:065b4a62    75              ??          75h    u
ram:065b4a63    06              ??          06h
ram:065b4a64    5f              ??          5Fh    _
ram:065b4a65    5e              ??          5Eh    ^
ram:065b4a66    5d              ??          5Dh    ]
ram:065b4a67    5b              ??          5Bh    [
ram:065b4a68    59              ??          59h    Y
ram:065b4a69    c3              ??          C3h
ram:065b4a6a    a1              ??          A1h
ram:065b4a6b    8c              ??          8Ch
ram:065b4a6c    8b              ??          8Bh
ram:065b4a6d    5b              ??          5Bh    [
ram:065b4a6e    06              ??          06h
ram:065b4a6f    3d              ??          3Dh    =
ram:065b4a70    ff              ??          FFh
ram:065b4a71    7f              ??          7Fh    
ram:065b4a72    00              ??          00h
ram:065b4a73    00              ??          00h
ram:065b4a74    7c              ??          7Ch    |
ram:065b4a75    08              ??          08h
ram:065b4a76    5f              ??          5Fh    _
ram:065b4a77    5e              ??          5Eh    ^
ram:065b4a78    5d              ??          5Dh    ]
ram:065b4a79    33              ??          33h    3
ram:065b4a7a    c0              ??          C0h
ram:065b4a7b    5b              ??          5Bh    [
ram:065b4a7c    59              ??          59h    Y
ram:065b4a7d    c3              ??          C3h
ram:065b4a7e    83              ??          83h
ram:065b4a7f    c0              ??          C0h
ram:065b4a80    60              ??          60h    `
ram:065b4a81    50              ??          50h    P
ram:065b4a82    ff              ??          FFh
ram:065b4a83    15              ??          15h
ram:065b4a84    60              ??          60h    `
ram:065b4a85    70              ??          70h    p
ram:065b4a86    5b              ??          5Bh    [
ram:065b4a87    06              ??          06h
ram:065b4a88    8b              ??          8Bh
ram:065b4a89    e8              ??          E8h
ram:065b4a8a    83              ??          83h
ram:065b4a8b    c4              ??          C4h
ram:065b4a8c    04              ??          04h
ram:065b4a8d    3b              ??          3Bh    ;
ram:065b4a8e    ef              ??          EFh
ram:065b4a8f    75              ??          75h    u
ram:065b4a90    08              ??          08h
ram:065b4a91    5f              ??          5Fh    _
ram:065b4a92    5e              ??          5Eh    ^
ram:065b4a93    5d              ??          5Dh    ]
ram:065b4a94    33              ??          33h    3
ram:065b4a95    c0              ??          C0h
ram:065b4a96    5b              ??          5Bh    [
ram:065b4a97    59              ??          59h    Y
ram:065b4a98    c3              ??          C3h
ram:065b4a99    8d              ??          8Dh
ram:065b4a9a    4d              ??          4Dh    M
ram:065b4a9b    5c              ??          5Ch    \
ram:065b4a9c    68              ??          68h    h
ram:065b4a9d    9c              ??          9Ch
ram:065b4a9e    00              ??          00h
ram:065b4a9f    00              ??          00h
ram:065b4aa0    00              ??          00h
ram:065b4aa1    89              ??          89h
ram:065b4aa2    35              ??          35h    5
ram:065b4aa3    80              ??          80h
ram:065b4aa4    8b              ??          8Bh
ram:065b4aa5    5b              ??          5Bh    [
ram:065b4aa6    06              ??          06h
ram:065b4aa7    89              ??          89h
ram:065b4aa8    1d              ??          1Dh
ram:065b4aa9    78              ??          78h    x
ram:065b4aaa    8b              ??          8Bh
ram:065b4aab    5b              ??          5Bh    [
ram:065b4aac    06              ??          06h
ram:065b4aad    89              ??          89h
ram:065b4aae    0d              ??          0Dh
ram:065b4aaf    88              ??          88h
ram:065b4ab0    8b              ??          8Bh
ram:065b4ab1    5b              ??          5Bh    [
ram:065b4ab2    06              ??          06h
ram:065b4ab3    e8              ??          E8h
ram:065b4ab4    c8              ??          C8h
ram:065b4ab5    08              ??          08h
ram:065b4ab6    00              ??          00h
ram:065b4ab7    00              ??          00h
ram:065b4ab8    8d              ??          8Dh
ram:065b4ab9    54              ??          54h    T
ram:065b4aba    24              ??          24h    $
ram:065b4abb    1c              ??          1Ch
ram:065b4abc    52              ??          52h    R
ram:065b4abd    57              ??          57h    W
ram:065b4abe    e8              ??          E8h
ram:065b4abf    9d              ??          9Dh
ram:065b4ac0    00              ??          00h
ram:065b4ac1    00              ??          00h
ram:065b4ac2    00              ??          00h
ram:065b4ac3    83              ??          83h
ram:065b4ac4    c4              ??          C4h
ram:065b4ac5    0c              ??          0Ch
ram:065b4ac6    85              ??          85h
ram:065b4ac7    c0              ??          C0h
ram:065b4ac8    75              ??          75h    u
ram:065b4ac9    06              ??          06h
ram:065b4aca    5f              ??          5Fh    _
ram:065b4acb    5e              ??          5Eh    ^
ram:065b4acc    5d              ??          5Dh    ]
ram:065b4acd    5b              ??          5Bh    [
ram:065b4ace    59              ??          59h    Y
ram:065b4acf    c3              ??          C3h
ram:065b4ad0    8d              ??          8Dh
ram:065b4ad1    75              ??          75h    u
ram:065b4ad2    5d              ??          5Dh    ]
ram:065b4ad3    c6              ??          C6h
ram:065b4ad4    45              ??          45h    E
ram:065b4ad5    50              ??          50h    P
ram:065b4ad6    00              ??          00h
ram:065b4ad7    56              ??          56h    V
ram:065b4ad8    c6              ??          C6h
ram:065b4ad9    45              ??          45h    E
ram:065b4ada    51              ??          51h    Q
ram:065b4adb    00              ??          00h
ram:065b4adc    89              ??          89h
ram:065b4add    7d              ??          7Dh    }
ram:065b4ade    54              ??          54h    T
ram:065b4adf    89              ??          89h
ram:065b4ae0    7d              ??          7Dh    }
ram:065b4ae1    58              ??          58h    X
ram:065b4ae2    e8              ??          E8h
ram:065b4ae3    19              ??          19h
ram:065b4ae4    0f              ??          0Fh
ram:065b4ae5    00              ??          00h
ram:065b4ae6    00              ??          00h
ram:065b4ae7    8a              ??          8Ah
ram:065b4ae8    08              ??          08h
ram:065b4ae9    83              ??          83h
ram:065b4aea    c4              ??          C4h
ram:065b4aeb    04              ??          04h
ram:065b4aec    84              ??          84h
ram:065b4aed    c9              ??          C9h
ram:065b4aee    75              ??          75h    u
ram:065b4aef    67              ??          67h    g
ram:065b4af0    8a              ??          8Ah
ram:065b4af1    46              ??          46h    F
ram:065b4af2    03              ??          03h
ram:065b4af3    83              ??          83h
ram:065b4af4    c6              ??          C6h
ram:065b4af5    03              ??          03h
ram:065b4af6    3c              ??          3Ch    <
ram:065b4af7    08              ??          08h
ram:065b4af8    75              ??          75h    u
ram:065b4af9    08              ??          08h
ram:065b4afa    8a              ??          8Ah
ram:065b4afb    46              ??          46h    F
ram:065b4afc    03              ??          03h
ram:065b4afd    88              ??          88h
ram:065b4afe    45              ??          45h    E
ram:065b4aff    50              ??          50h    P
ram:065b4b00    eb              ??          EBh
ram:065b4b01    07              ??          07h
ram:065b4b02    3a              ??          3Ah    :
ram:065b4b03    c3              ??          C3h
ram:065b4b04    75              ??          75h    u
ram:065b4b05    03              ??          03h
ram:065b4b06    fe              ??          FEh
ram:065b4b07    45              ??          45h    E
ram:065b4b08    51              ??          51h    Q
ram:065b4b09    f6              ??          F6h
ram:065b4b0a    44              ??          44h    D
ram:065b4b0b    24              ??          24h    $
ram:065b4b0c    18              ??          18h
ram:065b4b0d    04              ??          04h
ram:065b4b0e    74              ??          74h    t
ram:065b4b0f    47              ??          47h    G
ram:065b4b10    89              ??          89h
ram:065b4b11    7c              ??          7Ch    |
ram:065b4b12    24              ??          24h    $
ram:065b4b13    10              ??          10h
ram:065b4b14    33              ??          33h    3
ram:065b4b15    db              ??          DBh
ram:065b4b16    80              ??          80h
ram:065b4b17    3e              ??          3Eh    >
ram:065b4b18    08              ??          08h
ram:065b4b19    75              ??          75h    u
ram:065b4b1a    23              ??          23h    #
ram:065b4b1b    8d              ??          8Dh
ram:065b4b1c    56              ??          56h    V
ram:065b4b1d    03              ??          03h
ram:065b4b1e    83              ??          83h
ram:065b4b1f    c9              ??          C9h
ram:065b4b20    ff              ??          FFh
ram:065b4b21    8b              ??          8Bh
ram:065b4b22    fa              ??          FAh
ram:065b4b23    33              ??          33h    3
ram:065b4b24    c0              ??          C0h
ram:065b4b25    f2              ??          F2h
ram:065b4b26    ae              ??          AEh
ram:065b4b27    f7              ??          F7h
ram:065b4b28    d1              ??          D1h
ram:065b4b29    49              ??          49h    I
ram:065b4b2a    3b              ??          3Bh    ;
ram:065b4b2b    cb              ??          CBh
ram:065b4b2c    7c              ??          7Ch    |
ram:065b4b2d    10              ??          10h
ram:065b4b2e    8b              ??          8Bh
ram:065b4b2f    fa              ??          FAh
ram:065b4b30    83              ??          83h
ram:065b4b31    c9              ??          C9h
ram:065b4b32    ff              ??          FFh
ram:065b4b33    f2              ??          F2h
ram:065b4b34    ae              ??          AEh
ram:065b4b35    f7              ??          F7h
ram:065b4b36    d1              ??          D1h
ram:065b4b37    49              ??          49h    I
ram:065b4b38    89              ??          89h
ram:065b4b39    54              ??          54h    T
ram:065b4b3a    24              ??          24h    $
ram:065b4b3b    10              ??          10h
ram:065b4b3c    8b              ??          8Bh
ram:065b4b3d    d9              ??          D9h
ram:065b4b3e    56              ??          56h    V
ram:065b4b3f    e8              ??          E8h
ram:065b4b40    bc              ??          BCh
ram:065b4b41    0e              ??          0Eh
ram:065b4b42    00              ??          00h
ram:065b4b43    00              ??          00h
ram:065b4b44    8b              ??          8Bh
ram:065b4b45    f0              ??          F0h
ram:065b4b46    83              ??          83h
ram:065b4b47    c4              ??          C4h
ram:065b4b48    04              ??          04h
ram:065b4b49    85              ??          85h
ram:065b4b4a    f6              ??          F6h
ram:065b4b4b    75              ??          75h    u
ram:065b4b4c    c9              ??          C9h
ram:065b4b4d    8b              ??          8Bh
ram:065b4b4e    4c              ??          4Ch    L
ram:065b4b4f    24              ??          24h    $
ram:065b4b50    10              ??          10h
ram:065b4b51    89              ??          89h
ram:065b4b52    5d              ??          5Dh    ]
ram:065b4b53    58              ??          58h    X
ram:065b4b54    89              ??          89h
ram:065b4b55    4d              ??          4Dh    M
ram:065b4b56    54              ??          54h    T
ram:065b4b57    5f              ??          5Fh    _
ram:065b4b58    8b              ??          8Bh
ram:065b4b59    c5              ??          C5h
ram:065b4b5a    5e              ??          5Eh    ^
ram:065b4b5b    5d              ??          5Dh    ]
ram:065b4b5c    5b              ??          5Bh    [
ram:065b4b5d    59              ??          59h    Y
ram:065b4b5e    c3              ??          C3h
ram:065b4b5f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;char * FUN_065b4b60(int param_1, uint * param_2)
          ;param_1       int                  4                      ;XREF[1,0]:   065b4b62
          ;param_2       uint *               8                      ;XREF[4,0]:   065b4b67,065b4ba0,065b4bc7,065b4bf1
                                                          ;XREF[1,0]:   065b5080
ram:065b4b60    53              PUSH        EBX
ram:065b4b61    55              PUSH        EBP
ram:065b4b62    8b6c240c        MOV         EBP,dword ptr [ESP + param_1+0x8]
ram:065b4b66    56              PUSH        ESI
ram:065b4b67    8b742414        MOV         ESI,dword ptr [ESP + param_2+0xc]
ram:065b4b6b    57              PUSH        EDI
ram:065b4b6c    33ff            XOR         EDI,EDI
ram:065b4b6e    85ed            TEST        EBP,EBP
ram:065b4b70    c70601000000    MOV         dword ptr [ESI],0x1
ram:065b4b76    7426            JZ          LAB_065b4b9e
ram:065b4b78    a1788b5b06      MOV         EAX,[DAT_065b8b78]
ram:065b4b7d    83f80a          CMP         EAX,0xa
ram:065b4b80    0f8dde000000    JGE         LAB_065b4c64
ram:065b4b86    8bf8            MOV         EDI,EAX
ram:065b4b88    40              INC         EAX
ram:065b4b89    a3788b5b06      MOV         [DAT_065b8b78],EAX
ram:065b4b8e    8d4714          LEA         EAX,[EDI + 0x14]
ram:065b4b91    50              PUSH        EAX
ram:065b4b92    e8a9070000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4b97    83c404          ADD         ESP,0x4
ram:065b4b9a    8bd8            MOV         EBX,EAX
ram:065b4b9c    eb02            JMP         LAB_065b4ba0
                            LAB_065b4b9e:                 ;XREF[1,0]:   065b4b76
ram:065b4b9e    33db            XOR         EBX,EBX
                            LAB_065b4ba0:                 ;XREF[1,0]:   065b4b9c
ram:065b4ba0    8d4c2418        LEA         ECX=>param_2,[ESP + 0x18]
ram:065b4ba4    51              PUSH        ECX
ram:065b4ba5    e8d6000000      CALL        FUN_065b4c80                            ;undefined4 FUN_065b4c80(uint * param_1)
ram:065b4baa    83c404          ADD         ESP,0x4
ram:065b4bad    85c0            TEST        EAX,EAX
ram:065b4baf    0f84af000000    JZ          LAB_065b4c64
ram:065b4bb5    85db            TEST        EBX,EBX
ram:065b4bb7    740c            JZ          LAB_065b4bc5
ram:065b4bb9    50              PUSH        EAX
ram:065b4bba    53              PUSH        EBX
ram:065b4bbb    e840080000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4bc0    83c408          ADD         ESP,0x8
ram:065b4bc3    eb02            JMP         LAB_065b4bc7
                            LAB_065b4bc5:                 ;XREF[1,0]:   065b4bb7
ram:065b4bc5    8bd8            MOV         EBX,EAX
                            LAB_065b4bc7:                 ;XREF[2,0]:   065b4bc3,065b4c13
ram:065b4bc7    8b442418        MOV         EAX,dword ptr [ESP + param_2+0x10]
ram:065b4bcb    a801            TEST        AL,0x1
ram:065b4bcd    7503            JNZ         LAB_065b4bd2
ram:065b4bcf    8326fe          AND         dword ptr [ESI],0xfffffffe
                            LAB_065b4bd2:                 ;XREF[1,0]:   065b4bcd
ram:065b4bd2    8b0e            MOV         ECX,dword ptr [ESI]
ram:065b4bd4    83e004          AND         EAX,0x4
ram:065b4bd7    0bc8            OR          ECX,EAX
ram:065b4bd9    890e            MOV         dword ptr [ESI],ECX
ram:065b4bdb    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b4be1    8a02            MOV         AL,byte ptr [EDX]
ram:065b4be3    3c7c            CMP         AL,0x7c
ram:065b4be5    7404            JZ          LAB_065b4beb
ram:065b4be7    3c0a            CMP         AL,0xa
ram:065b4be9    752a            JNZ         LAB_065b4c15
                            LAB_065b4beb:                 ;XREF[1,0]:   065b4be5
ram:065b4beb    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b4bf1    8d442418        LEA         EAX=>param_2,[ESP + 0x18]
ram:065b4bf5    42              INC         EDX
ram:065b4bf6    50              PUSH        EAX
ram:065b4bf7    8915808b5b06    MOV         dword ptr [DAT_065b8b80],EDX
ram:065b4bfd    e87e000000      CALL        FUN_065b4c80                            ;undefined4 FUN_065b4c80(uint * param_1)
ram:065b4c02    83c404          ADD         ESP,0x4
ram:065b4c05    85c0            TEST        EAX,EAX
ram:065b4c07    745b            JZ          LAB_065b4c64
ram:065b4c09    50              PUSH        EAX
ram:065b4c0a    53              PUSH        EBX
ram:065b4c0b    e8f0070000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4c10    83c408          ADD         ESP,0x8
ram:065b4c13    ebb2            JMP         LAB_065b4bc7
                            LAB_065b4c15:                 ;XREF[1,0]:   065b4be9
ram:065b4c15    85ed            TEST        EBP,EBP
ram:065b4c17    7405            JZ          LAB_065b4c1e
ram:065b4c19    8d471e          LEA         EAX,[EDI + 0x1e]
ram:065b4c1c    eb02            JMP         LAB_065b4c20
                            LAB_065b4c1e:                 ;XREF[1,0]:   065b4c17
ram:065b4c1e    33c0            XOR         EAX,EAX
                            LAB_065b4c20:                 ;XREF[1,0]:   065b4c1c
ram:065b4c20    50              PUSH        EAX
ram:065b4c21    e81a070000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4c26    8bf8            MOV         EDI,EAX
ram:065b4c28    57              PUSH        EDI
ram:065b4c29    53              PUSH        EBX
ram:065b4c2a    e8d1070000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4c2f    83c40c          ADD         ESP,0xc
ram:065b4c32    8bf3            MOV         ESI,EBX
ram:065b4c34    85db            TEST        EBX,EBX
ram:065b4c36    7416            JZ          LAB_065b4c4e
                            LAB_065b4c38:                 ;XREF[1,0]:   065b4c4c
ram:065b4c38    57              PUSH        EDI
ram:065b4c39    56              PUSH        ESI
ram:065b4c3a    e821080000      CALL        FUN_065b5460                            ;undefined FUN_065b5460(char * param_...
ram:065b4c3f    56              PUSH        ESI
ram:065b4c40    e8bb0d0000      CALL        FUN_065b5a00                            ;char * FUN_065b5a00(char * param_1)
ram:065b4c45    8bf0            MOV         ESI,EAX
ram:065b4c47    83c40c          ADD         ESP,0xc
ram:065b4c4a    85f6            TEST        ESI,ESI
ram:065b4c4c    75ea            JNZ         LAB_065b4c38
                            LAB_065b4c4e:                 ;XREF[1,0]:   065b4c36
ram:065b4c4e    85ed            TEST        EBP,EBP
ram:065b4c50    7419            JZ          LAB_065b4c6b
ram:065b4c52    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4c57    8a08            MOV         CL,byte ptr [EAX]
ram:065b4c59    40              INC         EAX
ram:065b4c5a    80f929          CMP         CL,0x29
ram:065b4c5d    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b4c62    7412            JZ          LAB_065b4c76
                            LAB_065b4c64:                 ;XREF[4,0]:   065b4b80,065b4baf,065b4c07,065b4c74
ram:065b4c64    5f              POP         EDI
ram:065b4c65    5e              POP         ESI
ram:065b4c66    5d              POP         EBP
ram:065b4c67    33c0            XOR         EAX,EAX
ram:065b4c69    5b              POP         EBX
ram:065b4c6a    c3              RET
                            LAB_065b4c6b:                 ;XREF[1,0]:   065b4c50
ram:065b4c6b    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b4c71    803a00          CMP         byte ptr [EDX],0x0
ram:065b4c74    75ee            JNZ         LAB_065b4c64
                            LAB_065b4c76:                 ;XREF[1,0]:   065b4c62
ram:065b4c76    5f              POP         EDI
ram:065b4c77    5e              POP         ESI
ram:065b4c78    8bc3            MOV         EAX,EBX
ram:065b4c7a    5d              POP         EBP
ram:065b4c7b    5b              POP         EBX
ram:065b4c7c    c3              RET
ram:065b4c7d    90              ??          90h
ram:065b4c7e    90              ??          90h
ram:065b4c7f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b4c80(uint * param_1)
          ;param_1       uint *               4                      ;XREF[3,0]:   065b4c83,065b4cb3,065b4cc6
                                                          ;XREF[2,0]:   065b4ba5,065b4bfd
ram:065b4c80    53              PUSH        EBX
ram:065b4c81    55              PUSH        EBP
ram:065b4c82    56              PUSH        ESI
ram:065b4c83    8b742410        MOV         ESI,dword ptr [ESP + param_1+0xc]
ram:065b4c87    57              PUSH        EDI
ram:065b4c88    6a06            PUSH        0x6
ram:065b4c8a    c70600000000    MOV         dword ptr [ESI],0x0
ram:065b4c90    e8ab060000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4c95    8be8            MOV         EBP,EAX
ram:065b4c97    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4c9c    83c404          ADD         ESP,0x4
ram:065b4c9f    33ff            XOR         EDI,EDI
ram:065b4ca1    8a00            MOV         AL,byte ptr [EAX]
ram:065b4ca3    84c0            TEST        AL,AL
ram:065b4ca5    7456            JZ          LAB_065b4cfd
                            LAB_065b4ca7:                 ;XREF[1,0]:   065b4cf7
ram:065b4ca7    3c29            CMP         AL,0x29
ram:065b4ca9    744e            JZ          LAB_065b4cf9
ram:065b4cab    3c0a            CMP         AL,0xa
ram:065b4cad    744a            JZ          LAB_065b4cf9
ram:065b4caf    3c7c            CMP         AL,0x7c
ram:065b4cb1    7446            JZ          LAB_065b4cf9
ram:065b4cb3    8d4c2414        LEA         ECX=>param_1,[ESP + 0x14]
ram:065b4cb7    51              PUSH        ECX
ram:065b4cb8    e863000000      CALL        FUN_065b4d20                            ;char * FUN_065b4d20(uint * param_1)
ram:065b4cbd    8bd8            MOV         EBX,EAX
ram:065b4cbf    83c404          ADD         ESP,0x4
ram:065b4cc2    85db            TEST        EBX,EBX
ram:065b4cc4    7448            JZ          LAB_065b4d0e
ram:065b4cc6    8b442414        MOV         EAX,dword ptr [ESP + param_1+0x10]
ram:065b4cca    8b0e            MOV         ECX,dword ptr [ESI]
ram:065b4ccc    8bd0            MOV         EDX,EAX
ram:065b4cce    83e201          AND         EDX,0x1
ram:065b4cd1    0bca            OR          ECX,EDX
ram:065b4cd3    85ff            TEST        EDI,EDI
ram:065b4cd5    890e            MOV         dword ptr [ESI],ECX
ram:065b4cd7    7509            JNZ         LAB_065b4ce2
ram:065b4cd9    83e004          AND         EAX,0x4
ram:065b4cdc    0bc1            OR          EAX,ECX
ram:065b4cde    8906            MOV         dword ptr [ESI],EAX
ram:065b4ce0    eb0a            JMP         LAB_065b4cec
                            LAB_065b4ce2:                 ;XREF[1,0]:   065b4cd7
ram:065b4ce2    53              PUSH        EBX
ram:065b4ce3    57              PUSH        EDI
ram:065b4ce4    e817070000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4ce9    83c408          ADD         ESP,0x8
                            LAB_065b4cec:                 ;XREF[1,0]:   065b4ce0
ram:065b4cec    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4cf1    8bfb            MOV         EDI,EBX
ram:065b4cf3    8a00            MOV         AL,byte ptr [EAX]
ram:065b4cf5    84c0            TEST        AL,AL
ram:065b4cf7    75ae            JNZ         LAB_065b4ca7
                            LAB_065b4cf9:                 ;XREF[3,0]:   065b4ca9,065b4cad,065b4cb1
ram:065b4cf9    85ff            TEST        EDI,EDI
ram:065b4cfb    750a            JNZ         LAB_065b4d07
                            LAB_065b4cfd:                 ;XREF[1,0]:   065b4ca5
ram:065b4cfd    6a09            PUSH        0x9
ram:065b4cff    e83c060000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4d04    83c404          ADD         ESP,0x4
                            LAB_065b4d07:                 ;XREF[1,0]:   065b4cfb
ram:065b4d07    5f              POP         EDI
ram:065b4d08    8bc5            MOV         EAX,EBP
ram:065b4d0a    5e              POP         ESI
ram:065b4d0b    5d              POP         EBP
ram:065b4d0c    5b              POP         EBX
ram:065b4d0d    c3              RET
                            LAB_065b4d0e:                 ;XREF[1,0]:   065b4cc4
ram:065b4d0e    5f              POP         EDI
ram:065b4d0f    5e              POP         ESI
ram:065b4d10    5d              POP         EBP
ram:065b4d11    33c0            XOR         EAX,EAX
ram:065b4d13    5b              POP         EBX
ram:065b4d14    c3              RET
ram:065b4d15    90              ??          90h
ram:065b4d16    90              ??          90h
ram:065b4d17    90              ??          90h
ram:065b4d18    90              ??          90h
ram:065b4d19    90              ??          90h
ram:065b4d1a    90              ??          90h
ram:065b4d1b    90              ??          90h
ram:065b4d1c    90              ??          90h
ram:065b4d1d    90              ??          90h
ram:065b4d1e    90              ??          90h
ram:065b4d1f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;char * FUN_065b4d20(uint * param_1)
          ;param_1       uint *               4                      ;XREF[2,0]:   065b4d4d,065b4d70
          ;local_4       undefined4          -4                      ;XREF[3,0]:   065b4d21,065b4d51,065b4d5c
                                                          ;XREF[1,0]:   065b4cb8
ram:065b4d20    51              PUSH        ECX
ram:065b4d21    8d442400        LEA         EAX=>local_4,[ESP]
ram:065b4d25    56              PUSH        ESI
ram:065b4d26    50              PUSH        EAX
ram:065b4d27    e864010000      CALL        FUN_065b4e90                            ;int FUN_065b4e90(uint * param_1)
ram:065b4d2c    8bf0            MOV         ESI,EAX
ram:065b4d2e    83c404          ADD         ESP,0x4
ram:065b4d31    85f6            TEST        ESI,ESI
ram:065b4d33    0f844f010000    JZ          LAB_065b4e88
ram:065b4d39    8b0d808b5b06    MOV         ECX,dword ptr [DAT_065b8b80]
ram:065b4d3f    8a01            MOV         AL,byte ptr [ECX]
ram:065b4d41    3c2a            CMP         AL,0x2a
ram:065b4d43    7417            JZ          LAB_065b4d5c
ram:065b4d45    3c2b            CMP         AL,0x2b
ram:065b4d47    7413            JZ          LAB_065b4d5c
ram:065b4d49    3c3f            CMP         AL,0x3f
ram:065b4d4b    740f            JZ          LAB_065b4d5c
ram:065b4d4d    8b54240c        MOV         EDX,dword ptr [ESP + param_1+0x8]
ram:065b4d51    8b442404        MOV         EAX,dword ptr [ESP + local_4+0x8]
ram:065b4d55    8902            MOV         dword ptr [EDX],EAX
ram:065b4d57    8bc6            MOV         EAX,ESI
ram:065b4d59    5e              POP         ESI
ram:065b4d5a    59              POP         ECX
ram:065b4d5b    c3              RET
                            LAB_065b4d5c:                 ;XREF[3,0]:   065b4d43,065b4d47,065b4d4b
ram:065b4d5c    8a4c2404        MOV         CL,byte ptr [ESP + local_4+0x8]
ram:065b4d60    f6c101          TEST        CL,0x1
ram:065b4d63    7508            JNZ         LAB_065b4d6d
ram:065b4d65    3c3f            CMP         AL,0x3f
ram:065b4d67    0f851b010000    JNZ         LAB_065b4e88
                            LAB_065b4d6d:                 ;XREF[1,0]:   065b4d63
ram:065b4d6d    8ad0            MOV         DL,AL
ram:065b4d6f    57              PUSH        EDI
ram:065b4d70    8b7c2410        MOV         EDI,dword ptr [ESP + param_1+0xc]
ram:065b4d74    80ea2b          SUB         DL,0x2b
ram:065b4d77    f6da            NEG         DL
ram:065b4d79    1bd2            SBB         EDX,EDX
ram:065b4d7b    83e203          AND         EDX,0x3
ram:065b4d7e    42              INC         EDX
ram:065b4d7f    3c2a            CMP         AL,0x2a
ram:065b4d81    8917            MOV         dword ptr [EDI],EDX
ram:065b4d83    7555            JNZ         LAB_065b4dda
ram:065b4d85    f6c102          TEST        CL,0x2
ram:065b4d88    56              PUSH        ESI
ram:065b4d89    740f            JZ          LAB_065b4d9a
ram:065b4d8b    6a0a            PUSH        0xa
ram:065b4d8d    e81e060000      CALL        FUN_065b53b0                            ;undefined FUN_065b53b0(undefined1 pa...
ram:065b4d92    83c408          ADD         ESP,0x8
ram:065b4d95    e9cf000000      JMP         LAB_065b4e69
                            LAB_065b4d9a:                 ;XREF[1,0]:   065b4d89
ram:065b4d9a    6a06            PUSH        0x6
ram:065b4d9c    e80f060000      CALL        FUN_065b53b0                            ;undefined FUN_065b53b0(undefined1 pa...
ram:065b4da1    6a07            PUSH        0x7
ram:065b4da3    e898050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4da8    50              PUSH        EAX
ram:065b4da9    56              PUSH        ESI
ram:065b4daa    e8b1060000      CALL        FUN_065b5460                            ;undefined FUN_065b5460(char * param_...
ram:065b4daf    56              PUSH        ESI
ram:065b4db0    56              PUSH        ESI
ram:065b4db1    e8aa060000      CALL        FUN_065b5460                            ;undefined FUN_065b5460(char * param_...
ram:065b4db6    6a06            PUSH        0x6
ram:065b4db8    e883050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4dbd    50              PUSH        EAX
ram:065b4dbe    56              PUSH        ESI
ram:065b4dbf    e83c060000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4dc4    6a09            PUSH        0x9
ram:065b4dc6    e875050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4dcb    50              PUSH        EAX
ram:065b4dcc    56              PUSH        ESI
ram:065b4dcd    e82e060000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4dd2    83c434          ADD         ESP,0x34
ram:065b4dd5    e98f000000      JMP         LAB_065b4e69
                            LAB_065b4dda:                 ;XREF[1,0]:   065b4d83
ram:065b4dda    3c2b            CMP         AL,0x2b
ram:065b4ddc    7557            JNZ         LAB_065b4e35
ram:065b4dde    f6c102          TEST        CL,0x2
ram:065b4de1    740d            JZ          LAB_065b4df0
ram:065b4de3    56              PUSH        ESI
ram:065b4de4    6a0b            PUSH        0xb
ram:065b4de6    e8c5050000      CALL        FUN_065b53b0                            ;undefined FUN_065b53b0(undefined1 pa...
ram:065b4deb    83c408          ADD         ESP,0x8
ram:065b4dee    eb79            JMP         LAB_065b4e69
                            LAB_065b4df0:                 ;XREF[1,0]:   065b4de1
ram:065b4df0    6a06            PUSH        0x6
ram:065b4df2    e849050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4df7    8bf8            MOV         EDI,EAX
ram:065b4df9    57              PUSH        EDI
ram:065b4dfa    56              PUSH        ESI
ram:065b4dfb    e800060000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e00    83c40c          ADD         ESP,0xc
ram:065b4e03    56              PUSH        ESI
ram:065b4e04    6a07            PUSH        0x7
ram:065b4e06    e835050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4e0b    83c404          ADD         ESP,0x4
ram:065b4e0e    50              PUSH        EAX
ram:065b4e0f    e8ec050000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e14    6a06            PUSH        0x6
ram:065b4e16    e825050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4e1b    50              PUSH        EAX
ram:065b4e1c    57              PUSH        EDI
ram:065b4e1d    e8de050000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e22    6a09            PUSH        0x9
ram:065b4e24    e817050000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4e29    50              PUSH        EAX
ram:065b4e2a    56              PUSH        ESI
ram:065b4e2b    e8d0050000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e30    83c420          ADD         ESP,0x20
ram:065b4e33    eb34            JMP         LAB_065b4e69
                            LAB_065b4e35:                 ;XREF[1,0]:   065b4ddc
ram:065b4e35    3c3f            CMP         AL,0x3f
ram:065b4e37    7530            JNZ         LAB_065b4e69
ram:065b4e39    56              PUSH        ESI
ram:065b4e3a    6a06            PUSH        0x6
ram:065b4e3c    e86f050000      CALL        FUN_065b53b0                            ;undefined FUN_065b53b0(undefined1 pa...
ram:065b4e41    6a06            PUSH        0x6
ram:065b4e43    e8f8040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4e48    50              PUSH        EAX
ram:065b4e49    56              PUSH        ESI
ram:065b4e4a    e8b1050000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e4f    6a09            PUSH        0x9
ram:065b4e51    e8ea040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4e56    8bf8            MOV         EDI,EAX
ram:065b4e58    57              PUSH        EDI
ram:065b4e59    56              PUSH        ESI
ram:065b4e5a    e8a1050000      CALL        FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
ram:065b4e5f    57              PUSH        EDI
ram:065b4e60    56              PUSH        ESI
ram:065b4e61    e8fa050000      CALL        FUN_065b5460                            ;undefined FUN_065b5460(char * param_...
ram:065b4e66    83c428          ADD         ESP,0x28
                            LAB_065b4e69:                 ;XREF[5,0]:   065b4d95,065b4dd5,065b4dee,065b4e33
                                                          ;             065b4e37
ram:065b4e69    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4e6e    5f              POP         EDI
ram:065b4e6f    40              INC         EAX
ram:065b4e70    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b4e75    8a00            MOV         AL,byte ptr [EAX]
ram:065b4e77    3c2a            CMP         AL,0x2a
ram:065b4e79    740d            JZ          LAB_065b4e88
ram:065b4e7b    3c2b            CMP         AL,0x2b
ram:065b4e7d    7409            JZ          LAB_065b4e88
ram:065b4e7f    3c3f            CMP         AL,0x3f
ram:065b4e81    7405            JZ          LAB_065b4e88
ram:065b4e83    8bc6            MOV         EAX,ESI
ram:065b4e85    5e              POP         ESI
ram:065b4e86    59              POP         ECX
ram:065b4e87    c3              RET
                            LAB_065b4e88:                 ;XREF[5,0]:   065b4d33,065b4d67,065b4e79,065b4e7d
                                                          ;             065b4e81
ram:065b4e88    33c0            XOR         EAX,EAX
ram:065b4e8a    5e              POP         ESI
ram:065b4e8b    59              POP         ECX
ram:065b4e8c    c3              RET
ram:065b4e8d    90              ??          90h
ram:065b4e8e    90              ??          90h
ram:065b4e8f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b4e90(uint * param_1)
          ;param_1       uint *               4                      ;XREF[3,0]:   065b4e92,065b5079,065b5095
                                                          ;XREF[1,0]:   065b4d27
ram:065b4e90    53              PUSH        EBX
ram:065b4e91    55              PUSH        EBP
ram:065b4e92    8b6c240c        MOV         EBP,dword ptr [ESP + param_1+0x8]
ram:065b4e96    56              PUSH        ESI
ram:065b4e97    57              PUSH        EDI
ram:065b4e98    c74500000...    MOV         dword ptr [EBP],0x0
ram:065b4e9f    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4ea4    0fbe08          MOVSX       ECX,byte ptr [EAX]
ram:065b4ea7    40              INC         EAX
ram:065b4ea8    83f97c          CMP         ECX,0x7c
ram:065b4eab    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b4eb0    0f872f020000    JA          switchD_065b4ebe::caseD_1
ram:065b4eb6    33d2            XOR         EDX,EDX
ram:065b4eb8    8a91c0515b06    MOV         DL,byte ptr [ECX + switchD_065b4ebe::...
                            switchD:                      ; FWD[9,0]:   065b4ec5,065b4ed6,065b4ee7,065b4f02
                                                          ;             065b5079,065b508e,065b50ab,065b50e5
                                                          ;             065b51a0
ram:065b4ebe    ff2495a05...    JMP         dword ptr [EDX*0x4 + switchD_065b4ebe...;= 065b508e
                            caseD_5e:                     ;XREF[2,0]:   065b4ebe,065b51b8
ram:065b4ec5    6a01            PUSH        0x1
ram:065b4ec7    e874040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4ecc    83c404          ADD         ESP,0x4
ram:065b4ecf    8bd8            MOV         EBX,EAX
ram:065b4ed1    5f              POP         EDI
ram:065b4ed2    5e              POP         ESI
ram:065b4ed3    5d              POP         EBP
ram:065b4ed4    5b              POP         EBX
ram:065b4ed5    c3              RET
                            caseD_24:                     ;XREF[2,0]:   065b4ebe,065b51a4
ram:065b4ed6    6a02            PUSH        0x2
ram:065b4ed8    e863040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4edd    83c404          ADD         ESP,0x4
ram:065b4ee0    8bd8            MOV         EBX,EAX
ram:065b4ee2    5f              POP         EDI
ram:065b4ee3    5e              POP         ESI
ram:065b4ee4    5d              POP         EBP
ram:065b4ee5    5b              POP         EBX
ram:065b4ee6    c3              RET
                            caseD_2e:                     ;XREF[2,0]:   065b4ebe,065b51ac
ram:065b4ee7    6a03            PUSH        0x3
ram:065b4ee9    e852040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4eee    8bd8            MOV         EBX,EAX
ram:065b4ef0    8b4500          MOV         EAX,dword ptr [EBP]
ram:065b4ef3    83c404          ADD         ESP,0x4
ram:065b4ef6    0c03            OR          AL,0x3
ram:065b4ef8    894500          MOV         dword ptr [EBP],EAX
ram:065b4efb    8bc3            MOV         EAX,EBX
ram:065b4efd    5f              POP         EDI
ram:065b4efe    5e              POP         ESI
ram:065b4eff    5d              POP         EBP
ram:065b4f00    5b              POP         EBX
ram:065b4f01    c3              RET
                            caseD_5b:                     ;XREF[2,0]:   065b4ebe,065b51b0
ram:065b4f02    80385e          CMP         byte ptr [EAX],0x5e
ram:065b4f05    7519            JNZ         LAB_065b4f20
ram:065b4f07    6a05            PUSH        0x5
ram:065b4f09    e832040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4f0e    8bd8            MOV         EBX,EAX
ram:065b4f10    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4f15    83c404          ADD         ESP,0x4
ram:065b4f18    40              INC         EAX
ram:065b4f19    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b4f1e    eb0c            JMP         LAB_065b4f2c
                            LAB_065b4f20:                 ;XREF[1,0]:   065b4f05
ram:065b4f20    6a04            PUSH        0x4
ram:065b4f22    e819040000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b4f27    83c404          ADD         ESP,0x4
ram:065b4f2a    8bd8            MOV         EBX,EAX
                            LAB_065b4f2c:                 ;XREF[1,0]:   065b4f1e
ram:065b4f2c    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b4f31    8a00            MOV         AL,byte ptr [EAX]
ram:065b4f33    3c5d            CMP         AL,0x5d
ram:065b4f35    7404            JZ          LAB_065b4f3b
ram:065b4f37    3c2d            CMP         AL,0x2d
ram:065b4f39    7519            JNZ         LAB_065b4f54
                            LAB_065b4f3b:                 ;XREF[1,0]:   065b4f35
ram:065b4f3b    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b4f41    0fbec0          MOVSX       EAX,AL
ram:065b4f44    42              INC         EDX
ram:065b4f45    50              PUSH        EAX
ram:065b4f46    8915808b5b06    MOV         dword ptr [DAT_065b8b80],EDX
ram:065b4f4c    e82f040000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b4f51    83c404          ADD         ESP,0x4
                            LAB_065b4f54:                 ;XREF[1,0]:   065b4f39
ram:065b4f54    8b35808b5b06    MOV         ESI,dword ptr [DAT_065b8b80]
ram:065b4f5a    8a06            MOV         AL,byte ptr [ESI]
ram:065b4f5c    84c0            TEST        AL,AL
ram:065b4f5e    0f84dd000000    JZ          LAB_065b5041
                            LAB_065b4f64:                 ;XREF[1,0]:   065b503b
ram:065b4f64    3c5d            CMP         AL,0x5d
ram:065b4f66    0f84d5000000    JZ          LAB_065b5041
ram:065b4f6c    46              INC         ESI
ram:065b4f6d    3c2d            CMP         AL,0x2d
ram:065b4f6f    8935808b5b06    MOV         dword ptr [DAT_065b8b80],ESI
ram:065b4f75    753e            JNZ         LAB_065b4fb5
ram:065b4f77    8a06            MOV         AL,byte ptr [ESI]
ram:065b4f79    3c5d            CMP         AL,0x5d
ram:065b4f7b    745d            JZ          switchD_065b4fd3::caseD_2d
ram:065b4f7d    84c0            TEST        AL,AL
ram:065b4f7f    7459            JZ          switchD_065b4fd3::caseD_2d
ram:065b4f81    33c9            XOR         ECX,ECX
ram:065b4f83    25ff000000      AND         EAX,0xff
ram:065b4f88    8a4efe          MOV         CL,byte ptr [ESI + -0x2]
ram:065b4f8b    8bf8            MOV         EDI,EAX
ram:065b4f8d    8bf1            MOV         ESI,ECX
ram:065b4f8f    46              INC         ESI
ram:065b4f90    8d5701          LEA         EDX,[EDI + 0x1]
ram:065b4f93    3bf2            CMP         ESI,EDX
ram:065b4f95    0f8ff3000000    JG          switchD_065b4ebe::caseD_0
ram:065b4f9b    3bf7            CMP         ESI,EDI
ram:065b4f9d    7f0e            JG          LAB_065b4fad
                            LAB_065b4f9f:                 ;XREF[1,0]:   065b4fab
ram:065b4f9f    56              PUSH        ESI
ram:065b4fa0    e8db030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b4fa5    83c404          ADD         ESP,0x4
ram:065b4fa8    46              INC         ESI
ram:065b4fa9    3bf7            CMP         ESI,EDI
ram:065b4fab    7ef2            JLE         LAB_065b4f9f
                            LAB_065b4fad:                 ;XREF[1,0]:   065b4f9d
ram:065b4fad    ff05808b5b06    INC         dword ptr [DAT_065b8b80]
ram:065b4fb3    eb7c            JMP         switchD_065b4fd3::caseD_2e
                            LAB_065b4fb5:                 ;XREF[1,0]:   065b4f75
ram:065b4fb5    3c5c            CMP         AL,0x5c
ram:065b4fb7    756c            JNZ         LAB_065b5025
ram:065b4fb9    0fbe06          MOVSX       EAX,byte ptr [ESI]
ram:065b4fbc    83e82d          SUB         EAX,0x2d
ram:065b4fbf    46              INC         ESI
ram:065b4fc0    83f847          CMP         EAX,0x47
ram:065b4fc3    8935808b5b06    MOV         dword ptr [DAT_065b8b80],ESI
ram:065b4fc9    7766            JA          switchD_065b4fd3::caseD_2e
ram:065b4fcb    33c9            XOR         ECX,ECX
ram:065b4fcd    8a8860525b06    MOV         CL,byte ptr [EAX + 0x65b5260]=>BYTE_0...;= 7h
                            switchD:                      ; FWD[9,0]:   065b4fda,065b4fde,065b4fe2,065b4fe6
                                                          ;             065b4fea,065b4fee,065b500f,065b5031
                                                          ;             065b5240
ram:065b4fd3    ff248d405...    JMP         dword ptr [ECX*0x4 + switchD_065b4fd3...;= 065b4fda
                            caseD_2d:                     ;XREF[4,0]:   065b4f7b,065b4f7f,065b4fd3,065b5240
ram:065b4fda    6a2d            PUSH        0x2d
ram:065b4fdc    eb4b            JMP         LAB_065b5029
                            caseD_6e:                     ;XREF[2,0]:   065b4fd3,065b524c
ram:065b4fde    6a0a            PUSH        0xa
ram:065b4fe0    eb47            JMP         LAB_065b5029
                            caseD_74:                     ;XREF[2,0]:   065b4fd3,065b5258
ram:065b4fe2    6a09            PUSH        0x9
ram:065b4fe4    eb43            JMP         LAB_065b5029
                            caseD_72:                     ;XREF[2,0]:   065b4fd3,065b5250
ram:065b4fe6    6a0d            PUSH        0xd
ram:065b4fe8    eb3f            JMP         LAB_065b5029
                            caseD_5c:                     ;XREF[2,0]:   065b4fd3,065b5244
ram:065b4fea    6a5c            PUSH        0x5c
ram:065b4fec    eb3b            JMP         LAB_065b5029
                            caseD_73:                     ;XREF[2,0]:   065b4fd3,065b5254
ram:065b4fee    6a20            PUSH        0x20
ram:065b4ff0    e88b030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b4ff5    6a09            PUSH        0x9
ram:065b4ff7    e884030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b4ffc    6a0a            PUSH        0xa
ram:065b4ffe    e87d030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5003    6a0d            PUSH        0xd
ram:065b5005    e876030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b500a    83c410          ADD         ESP,0x10
ram:065b500d    eb22            JMP         switchD_065b4fd3::caseD_2e
                            caseD_64:                     ;XREF[2,0]:   065b4fd3,065b5248
ram:065b500f    be30000000      MOV         ESI,0x30
                            LAB_065b5014:                 ;XREF[1,0]:   065b5021
ram:065b5014    56              PUSH        ESI
ram:065b5015    e866030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b501a    83c404          ADD         ESP,0x4
ram:065b501d    46              INC         ESI
ram:065b501e    83fe39          CMP         ESI,0x39
ram:065b5021    7ef1            JLE         LAB_065b5014
ram:065b5023    eb0c            JMP         switchD_065b4fd3::caseD_2e
                            LAB_065b5025:                 ;XREF[1,0]:   065b4fb7
ram:065b5025    0fbec0          MOVSX       EAX,AL
ram:065b5028    50              PUSH        EAX
                            LAB_065b5029:                 ;XREF[5,0]:   065b4fdc,065b4fe0,065b4fe4,065b4fe8
                                                          ;             065b4fec
ram:065b5029    e852030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b502e    83c404          ADD         ESP,0x4
                            caseD_2f:                     ;XREF[6,0]:   065b4fb3,065b4fc9,065b4fd3,065b500d
                            caseD_30:                     ;             065b5023,065b525c
                            caseD_31:
                            caseD_32:
                            caseD_33:
                            caseD_34:
                            caseD_35:
                            caseD_36:
                            caseD_37:
                            caseD_38:
                            caseD_39:
                            caseD_3a:
                            caseD_3b:
                            caseD_3c:
                            caseD_3d:
                            caseD_3e:
                            caseD_3f:
                            caseD_40:
                            caseD_41:
                            caseD_42:
                            caseD_43:
                            caseD_44:
                            caseD_45:
                            caseD_46:
                            caseD_47:
                            caseD_48:
                            caseD_49:
                            caseD_4a:
                            caseD_4b:
                            caseD_4c:
                            caseD_4d:
                            caseD_4e:
                            caseD_4f:
                            caseD_50:
                            caseD_51:
                            caseD_52:
                            caseD_53:
                            caseD_54:
                            caseD_55:
                            caseD_56:
                            caseD_57:
                            caseD_58:
                            caseD_59:
                            caseD_5a:
                            caseD_5b:
                            caseD_5d:
                            caseD_5e:
                            caseD_5f:
                            caseD_60:
                            caseD_61:
                            caseD_62:
                            caseD_63:
                            caseD_65:
                            caseD_66:
                            caseD_67:
                            caseD_68:
                            caseD_69:
                            caseD_6a:
                            caseD_6b:
                            caseD_6c:
                            caseD_6d:
                            caseD_6f:
                            caseD_70:
                            caseD_71:
                            caseD_2e:
ram:065b5031    8b35808b5b06    MOV         ESI,dword ptr [DAT_065b8b80]
ram:065b5037    8a06            MOV         AL,byte ptr [ESI]
ram:065b5039    84c0            TEST        AL,AL
ram:065b503b    0f8523ffffff    JNZ         LAB_065b4f64
                            LAB_065b5041:                 ;XREF[2,0]:   065b4f5e,065b4f66
ram:065b5041    6a00            PUSH        0x0
ram:065b5043    e838030000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5048    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b504e    83c404          ADD         ESP,0x4
ram:065b5051    803a5d          CMP         byte ptr [EDX],0x5d
ram:065b5054    7407            JZ          LAB_065b505d
ram:065b5056    5f              POP         EDI
ram:065b5057    5e              POP         ESI
ram:065b5058    5d              POP         EBP
ram:065b5059    33c0            XOR         EAX,EAX
ram:065b505b    5b              POP         EBX
ram:065b505c    c3              RET
                            LAB_065b505d:                 ;XREF[1,0]:   065b5054
ram:065b505d    8b0d808b5b06    MOV         ECX,dword ptr [DAT_065b8b80]
ram:065b5063    5f              POP         EDI
ram:065b5064    41              INC         ECX
ram:065b5065    5e              POP         ESI
ram:065b5066    890d808b5b06    MOV         dword ptr [DAT_065b8b80],ECX
ram:065b506c    8b4500          MOV         EAX,dword ptr [EBP]
ram:065b506f    0c03            OR          AL,0x3
ram:065b5071    894500          MOV         dword ptr [EBP],EAX
ram:065b5074    8bc3            MOV         EAX,EBX
ram:065b5076    5d              POP         EBP
ram:065b5077    5b              POP         EBX
ram:065b5078    c3              RET
                            caseD_28:                     ;XREF[2,0]:   065b4ebe,065b51a8
ram:065b5079    8d442414        LEA         EAX=>param_1,[ESP + 0x14]
ram:065b507d    50              PUSH        EAX
ram:065b507e    6a01            PUSH        0x1
ram:065b5080    e8dbfaffff      CALL        FUN_065b4b60                            ;char * FUN_065b4b60(int param_1, uin...
ram:065b5085    8bd8            MOV         EBX,EAX
ram:065b5087    83c408          ADD         ESP,0x8
ram:065b508a    85db            TEST        EBX,EBX
ram:065b508c    7507            JNZ         LAB_065b5095
                            caseD_a:                      ;XREF[4,0]:   065b4ebe,065b4f95,065b50b7,065b51a0
                            caseD_29:
                            caseD_2a:
                            caseD_2b:
                            caseD_3f:
                            caseD_7c:
                            caseD_0:
ram:065b508e    5f              POP         EDI
ram:065b508f    5e              POP         ESI
ram:065b5090    5d              POP         EBP
ram:065b5091    33c0            XOR         EAX,EAX
ram:065b5093    5b              POP         EBX
ram:065b5094    c3              RET
                            LAB_065b5095:                 ;XREF[1,0]:   065b508c
ram:065b5095    8b4c2414        MOV         ECX,dword ptr [ESP + param_1+0x10]
ram:065b5099    8b4500          MOV         EAX,dword ptr [EBP]
ram:065b509c    83e105          AND         ECX,0x5
ram:065b509f    5f              POP         EDI
ram:065b50a0    0bc1            OR          EAX,ECX
ram:065b50a2    5e              POP         ESI
ram:065b50a3    894500          MOV         dword ptr [EBP],EAX
ram:065b50a6    8bc3            MOV         EAX,EBX
ram:065b50a8    5d              POP         EBP
ram:065b50a9    5b              POP         EBX
ram:065b50aa    c3              RET
                            caseD_5c:                     ;XREF[2,0]:   065b4ebe,065b51b4
ram:065b50ab    0fbe08          MOVSX       ECX,byte ptr [EAX]
ram:065b50ae    40              INC         EAX
ram:065b50af    83e900          SUB         ECX,0x0
ram:065b50b2    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b50b7    74d5            JZ          switchD_065b4ebe::caseD_0
ram:065b50b9    83e93c          SUB         ECX,0x3c
ram:065b50bc    7416            JZ          LAB_065b50d4
ram:065b50be    83e902          SUB         ECX,0x2
ram:065b50c1    7522            JNZ         switchD_065b4ebe::caseD_1
ram:065b50c3    6a0d            PUSH        0xd
ram:065b50c5    e876020000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b50ca    83c404          ADD         ESP,0x4
ram:065b50cd    8bd8            MOV         EBX,EAX
ram:065b50cf    5f              POP         EDI
ram:065b50d0    5e              POP         ESI
ram:065b50d1    5d              POP         EBP
ram:065b50d2    5b              POP         EBX
ram:065b50d3    c3              RET
                            LAB_065b50d4:                 ;XREF[1,0]:   065b50bc
ram:065b50d4    6a0c            PUSH        0xc
ram:065b50d6    e865020000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b50db    83c404          ADD         ESP,0x4
ram:065b50de    8bd8            MOV         EBX,EAX
ram:065b50e0    5f              POP         EDI
ram:065b50e1    5e              POP         ESI
ram:065b50e2    5d              POP         EBP
ram:065b50e3    5b              POP         EBX
ram:065b50e4    c3              RET
                            caseD_2:                      ;XREF[4,0]:   065b4eb0,065b4ebe,065b50c1,065b51bc
                            caseD_3:
                            caseD_4:
                            caseD_5:
                            caseD_6:
                            caseD_7:
                            caseD_8:
                            caseD_9:
                            caseD_b:
                            caseD_c:
                            caseD_d:
                            caseD_e:
                            caseD_f:
                            caseD_10:
                            caseD_11:
                            caseD_12:
                            caseD_13:
                            caseD_14:
                            caseD_15:
                            caseD_16:
                            caseD_17:
                            caseD_18:
                            caseD_19:
                            caseD_1a:
                            caseD_1b:
                            caseD_1c:
                            caseD_1d:
                            caseD_1e:
                            caseD_1f:
                            caseD_20:
                            caseD_21:
                            caseD_22:
                            caseD_23:
                            caseD_25:
                            caseD_26:
                            caseD_27:
                            caseD_2c:
                            caseD_2d:
                            caseD_2f:
                            caseD_30:
                            caseD_31:
                            caseD_32:
                            caseD_33:
                            caseD_34:
                            caseD_35:
                            caseD_36:
                            caseD_37:
                            caseD_38:
                            caseD_39:
                            caseD_3a:
                            caseD_3b:
                            caseD_3c:
                            caseD_3d:
                            caseD_3e:
                            caseD_40:
                            caseD_41:
                            caseD_42:
                            caseD_43:
                            caseD_44:
                            caseD_45:
                            caseD_46:
                            caseD_47:
                            caseD_48:
                            caseD_49:
                            caseD_4a:
                            caseD_4b:
                            caseD_4c:
                            caseD_4d:
                            caseD_4e:
                            caseD_4f:
                            caseD_50:
                            caseD_51:
                            caseD_52:
                            caseD_53:
                            caseD_54:
                            caseD_55:
                            caseD_56:
                            caseD_57:
                            caseD_58:
                            caseD_59:
                            caseD_5a:
                            caseD_5d:
                            caseD_5f:
                            caseD_60:
                            caseD_61:
                            caseD_62:
                            caseD_63:
                            caseD_64:
                            caseD_65:
                            caseD_66:
                            caseD_67:
                            caseD_68:
                            caseD_69:
                            caseD_6a:
                            caseD_6b:
                            caseD_6c:
                            caseD_6d:
                            caseD_6e:
                            caseD_6f:
                            caseD_70:
                            caseD_71:
                            caseD_72:
                            caseD_73:
                            caseD_74:
                            caseD_75:
                            caseD_76:
                            caseD_77:
                            caseD_78:
                            caseD_79:
                            caseD_7a:
                            caseD_7b:
                            caseD_1:
ram:065b50e5    48              DEC         EAX
ram:065b50e6    6a08            PUSH        0x8
ram:065b50e8    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b50ed    e84e020000      CALL        FUN_065b5340                            ;undefined FUN_065b5340()
ram:065b50f2    83c404          ADD         ESP,0x4
ram:065b50f5    8bd8            MOV         EBX,EAX
ram:065b50f7    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b50fc    33f6            XOR         ESI,ESI
                            LAB_065b50fe:                 ;XREF[2,0]:   065b514c,065b5161
ram:065b50fe    8a08            MOV         CL,byte ptr [EAX]
ram:065b5100    40              INC         EAX
ram:065b5101    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b5106    0fbe00          MOVSX       EAX,byte ptr [EAX]
ram:065b5109    83f87c          CMP         EAX,0x7c
ram:065b510c    7740            JA          switchD_065b5116::caseD_1
ram:065b510e    33d2            XOR         EDX,EDX
ram:065b5110    8a90b8525b06    MOV         DL,byte ptr [EAX + switchD_065b5116::...
                            switchD:                      ; FWD[5,0]:   065b511d,065b514e,065b5163,065b5167
                                                          ;             065b52a8
ram:065b5116    ff2495a85...    JMP         dword ptr [EDX*0x4 + switchD_065b5116...;= 065b5167
                            caseD_5c:                     ;XREF[2,0]:   065b5116,065b52b0
ram:065b511d    0fbec1          MOVSX       EAX,CL
ram:065b5120    50              PUSH        EAX
ram:065b5121    e85a020000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5126    8b15808b5b06    MOV         EDX,dword ptr [DAT_065b8b80]
ram:065b512c    83c404          ADD         ESP,0x4
ram:065b512f    0fbe4a01        MOVSX       ECX,byte ptr [EDX + 0x1]
ram:065b5133    8d4201          LEA         EAX,[EDX + 0x1]
ram:065b5136    83e900          SUB         ECX,0x0
ram:065b5139    7440            JZ          LAB_065b517b
ram:065b513b    83e93c          SUB         ECX,0x3c
ram:065b513e    743b            JZ          LAB_065b517b
ram:065b5140    83e902          SUB         ECX,0x2
ram:065b5143    7436            JZ          LAB_065b517b
ram:065b5145    8bf2            MOV         ESI,EDX
ram:065b5147    a3808b5b06      MOV         [DAT_065b8b80],EAX
ram:065b514c    ebb0            JMP         LAB_065b50fe
                            caseD_2:                      ;XREF[3,0]:   065b510c,065b5116,065b52b4
                            caseD_3:
                            caseD_4:
                            caseD_5:
                            caseD_6:
                            caseD_7:
                            caseD_8:
                            caseD_9:
                            caseD_b:
                            caseD_c:
                            caseD_d:
                            caseD_e:
                            caseD_f:
                            caseD_10:
                            caseD_11:
                            caseD_12:
                            caseD_13:
                            caseD_14:
                            caseD_15:
                            caseD_16:
                            caseD_17:
                            caseD_18:
                            caseD_19:
                            caseD_1a:
                            caseD_1b:
                            caseD_1c:
                            caseD_1d:
                            caseD_1e:
                            caseD_1f:
                            caseD_20:
                            caseD_21:
                            caseD_22:
                            caseD_23:
                            caseD_25:
                            caseD_26:
                            caseD_27:
                            caseD_2c:
                            caseD_2d:
                            caseD_2f:
                            caseD_30:
                            caseD_31:
                            caseD_32:
                            caseD_33:
                            caseD_34:
                            caseD_35:
                            caseD_36:
                            caseD_37:
                            caseD_38:
                            caseD_39:
                            caseD_3a:
                            caseD_3b:
                            caseD_3c:
                            caseD_3d:
                            caseD_3e:
                            caseD_40:
                            caseD_41:
                            caseD_42:
                            caseD_43:
                            caseD_44:
                            caseD_45:
                            caseD_46:
                            caseD_47:
                            caseD_48:
                            caseD_49:
                            caseD_4a:
                            caseD_4b:
                            caseD_4c:
                            caseD_4d:
                            caseD_4e:
                            caseD_4f:
                            caseD_50:
                            caseD_51:
                            caseD_52:
                            caseD_53:
                            caseD_54:
                            caseD_55:
                            caseD_56:
                            caseD_57:
                            caseD_58:
                            caseD_59:
                            caseD_5a:
                            caseD_5d:
                            caseD_5f:
                            caseD_60:
                            caseD_61:
                            caseD_62:
                            caseD_63:
                            caseD_64:
                            caseD_65:
                            caseD_66:
                            caseD_67:
                            caseD_68:
                            caseD_69:
                            caseD_6a:
                            caseD_6b:
                            caseD_6c:
                            caseD_6d:
                            caseD_6e:
                            caseD_6f:
                            caseD_70:
                            caseD_71:
                            caseD_72:
                            caseD_73:
                            caseD_74:
                            caseD_75:
                            caseD_76:
                            caseD_77:
                            caseD_78:
                            caseD_79:
                            caseD_7a:
                            caseD_7b:
                            caseD_1:
ram:065b514e    0fbec9          MOVSX       ECX,CL
ram:065b5151    51              PUSH        ECX
ram:065b5152    e829020000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5157    a1808b5b06      MOV         EAX,[DAT_065b8b80]
ram:065b515c    83c404          ADD         ESP,0x4
ram:065b515f    8bf0            MOV         ESI,EAX
ram:065b5161    eb9b            JMP         LAB_065b50fe
                            caseD_2b:                     ;XREF[2,0]:   065b5116,065b52ac
                            caseD_3f:
                            caseD_2a:
ram:065b5163    85f6            TEST        ESI,ESI
ram:065b5165    750e            JNZ         LAB_065b5175
                            caseD_a:                      ;XREF[2,0]:   065b5116,065b52a8
                            caseD_24:
                            caseD_28:
                            caseD_29:
                            caseD_2e:
                            caseD_5b:
                            caseD_5e:
                            caseD_7c:
                            caseD_0:
ram:065b5167    0fbed1          MOVSX       EDX,CL
ram:065b516a    52              PUSH        EDX
ram:065b516b    e810020000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5170    83c404          ADD         ESP,0x4
ram:065b5173    eb06            JMP         LAB_065b517b
                            LAB_065b5175:                 ;XREF[1,0]:   065b5165
ram:065b5175    8935808b5b06    MOV         dword ptr [DAT_065b8b80],ESI
                            LAB_065b517b:                 ;XREF[4,0]:   065b5139,065b513e,065b5143,065b5173
ram:065b517b    6a00            PUSH        0x0
ram:065b517d    e8fe010000      CALL        FUN_065b5380                            ;undefined FUN_065b5380(undefined1 pa...
ram:065b5182    8b5500          MOV         EDX,dword ptr [EBP]
ram:065b5185    83c404          ADD         ESP,0x4
ram:065b5188    83ca01          OR          EDX,0x1
ram:065b518b    85f6            TEST        ESI,ESI
ram:065b518d    895500          MOV         dword ptr [EBP],EDX
ram:065b5190    8bc2            MOV         EAX,EDX
ram:065b5192    7505            JNZ         LAB_065b5199
ram:065b5194    0c02            OR          AL,0x2
ram:065b5196    894500          MOV         dword ptr [EBP],EAX
                            LAB_065b5199:                 ;XREF[1,0]:   065b5192
ram:065b5199    5f              POP         EDI
ram:065b519a    5e              POP         ESI
ram:065b519b    8bc3            MOV         EAX,EBX
ram:065b519d    5d              POP         EBP
ram:065b519e    5b              POP         EBX
ram:065b519f    c3              RET
                            switchdataD_065b51a0:         ;XREF[1,0]:   065b4ebe
ram:065b51a0    8e505b06        addr        switchD_065b4ebe::caseD_0
ram:065b51a4    d64e5b06        addr        switchD_065b4ebe::caseD_24
ram:065b51a8    79505b06        addr        switchD_065b4ebe::caseD_28
ram:065b51ac    e74e5b06        addr        switchD_065b4ebe::caseD_2e
ram:065b51b0    024f5b06        addr        switchD_065b4ebe::caseD_5b
ram:065b51b4    ab505b06        addr        switchD_065b4ebe::caseD_5c
ram:065b51b8    c54e5b06        addr        switchD_065b4ebe::caseD_5e
ram:065b51bc    e5505b06        addr        switchD_065b4ebe::caseD_1
                            switchdataD_065b51c0:         ;XREF[1,0]:   065b4eb8
ram:065b51c0    00              db          0h
ram:065b51c1    07              db          7h
ram:065b51c2    07              db          7h
ram:065b51c3    07              db          7h
ram:065b51c4    07              db          7h
ram:065b51c5    07              db          7h
ram:065b51c6    07              db          7h
ram:065b51c7    07              db          7h
ram:065b51c8    07              db          7h
ram:065b51c9    07              db          7h
ram:065b51ca    00              db          0h
ram:065b51cb    07              db          7h
ram:065b51cc    07              db          7h
ram:065b51cd    07              db          7h
ram:065b51ce    07              db          7h
ram:065b51cf    07              db          7h
ram:065b51d0    07              db          7h
ram:065b51d1    07              db          7h
ram:065b51d2    07              db          7h
ram:065b51d3    07              db          7h
ram:065b51d4    07              db          7h
ram:065b51d5    07              db          7h
ram:065b51d6    07              db          7h
ram:065b51d7    07              db          7h
ram:065b51d8    07              db          7h
ram:065b51d9    07              db          7h
ram:065b51da    07              db          7h
ram:065b51db    07              db          7h
ram:065b51dc    07              db          7h
ram:065b51dd    07              db          7h
ram:065b51de    07              db          7h
ram:065b51df    07              db          7h
ram:065b51e0    07              db          7h
ram:065b51e1    07              db          7h
ram:065b51e2    07              db          7h
ram:065b51e3    07              db          7h
ram:065b51e4    01              db          1h
ram:065b51e5    07              db          7h
ram:065b51e6    07              db          7h
ram:065b51e7    07              db          7h
ram:065b51e8    02              db          2h
ram:065b51e9    00              db          0h
ram:065b51ea    00              db          0h
ram:065b51eb    00              db          0h
ram:065b51ec    07              db          7h
ram:065b51ed    07              db          7h
ram:065b51ee    03              db          3h
ram:065b51ef    07              db          7h
ram:065b51f0    07              db          7h
ram:065b51f1    07              db          7h
ram:065b51f2    07              db          7h
ram:065b51f3    07              db          7h
ram:065b51f4    07              db          7h
ram:065b51f5    07              db          7h
ram:065b51f6    07              db          7h
ram:065b51f7    07              db          7h
ram:065b51f8    07              db          7h
ram:065b51f9    07              db          7h
ram:065b51fa    07              db          7h
ram:065b51fb    07              db          7h
ram:065b51fc    07              db          7h
ram:065b51fd    07              db          7h
ram:065b51fe    07              db          7h
ram:065b51ff    00              db          0h
ram:065b5200    07              db          7h
ram:065b5201    07              db          7h
ram:065b5202    07              db          7h
ram:065b5203    07              db          7h
ram:065b5204    07              db          7h
ram:065b5205    07              db          7h
ram:065b5206    07              db          7h
ram:065b5207    07              db          7h
ram:065b5208    07              db          7h
ram:065b5209    07              db          7h
ram:065b520a    07              db          7h
ram:065b520b    07              db          7h
ram:065b520c    07              db          7h
ram:065b520d    07              db          7h
ram:065b520e    07              db          7h
ram:065b520f    07              db          7h
ram:065b5210    07              db          7h
ram:065b5211    07              db          7h
ram:065b5212    07              db          7h
ram:065b5213    07              db          7h
ram:065b5214    07              db          7h
ram:065b5215    07              db          7h
ram:065b5216    07              db          7h
ram:065b5217    07              db          7h
ram:065b5218    07              db          7h
ram:065b5219    07              db          7h
ram:065b521a    07              db          7h
ram:065b521b    04              db          4h
ram:065b521c    05              db          5h
ram:065b521d    07              db          7h
ram:065b521e    06              db          6h
ram:065b521f    07              db          7h
ram:065b5220    07              db          7h
ram:065b5221    07              db          7h
ram:065b5222    07              db          7h
ram:065b5223    07              db          7h
ram:065b5224    07              db          7h
ram:065b5225    07              db          7h
ram:065b5226    07              db          7h
ram:065b5227    07              db          7h
ram:065b5228    07              db          7h
ram:065b5229    07              db          7h
ram:065b522a    07              db          7h
ram:065b522b    07              db          7h
ram:065b522c    07              db          7h
ram:065b522d    07              db          7h
ram:065b522e    07              db          7h
ram:065b522f    07              db          7h
ram:065b5230    07              db          7h
ram:065b5231    07              db          7h
ram:065b5232    07              db          7h
                            BYTE_065b5233:                ;XREF[1,0]:   065b4fcd
ram:065b5233    07              db          7h
ram:065b5234    07              db          7h
ram:065b5235    07              db          7h
ram:065b5236    07              db          7h
ram:065b5237    07              db          7h
ram:065b5238    07              db          7h
ram:065b5239    07              db          7h
ram:065b523a    07              db          7h
ram:065b523b    07              db          7h
ram:065b523c    00              db          0h
ram:065b523d    8d              ??          8Dh
ram:065b523e    49              ??          49h    I
ram:065b523f    00              ??          00h
                            switchdataD_065b5240:         ;XREF[1,0]:   065b4fd3
ram:065b5240    da4f5b06        addr        switchD_065b4fd3::caseD_2d
ram:065b5244    ea4f5b06        addr        switchD_065b4fd3::caseD_5c
ram:065b5248    0f505b06        addr        switchD_065b4fd3::caseD_64
ram:065b524c    de4f5b06        addr        switchD_065b4fd3::caseD_6e
ram:065b5250    e64f5b06        addr        switchD_065b4fd3::caseD_72
ram:065b5254    ee4f5b06        addr        switchD_065b4fd3::caseD_73
ram:065b5258    e24f5b06        addr        switchD_065b4fd3::caseD_74
ram:065b525c    31505b06        addr        switchD_065b4fd3::caseD_2e
                            switchdataD_065b5260:
ram:065b5260    00              db          0h
ram:065b5261    07              db          7h
ram:065b5262    07              db          7h
ram:065b5263    07              db          7h
ram:065b5264    07              db          7h
ram:065b5265    07              db          7h
ram:065b5266    07              db          7h
ram:065b5267    07              db          7h
ram:065b5268    07              db          7h
ram:065b5269    07              db          7h
ram:065b526a    07              db          7h
ram:065b526b    07              db          7h
ram:065b526c    07              db          7h
ram:065b526d    07              db          7h
ram:065b526e    07              db          7h
ram:065b526f    07              db          7h
ram:065b5270    07              db          7h
ram:065b5271    07              db          7h
ram:065b5272    07              db          7h
ram:065b5273    07              db          7h
ram:065b5274    07              db          7h
ram:065b5275    07              db          7h
ram:065b5276    07              db          7h
ram:065b5277    07              db          7h
ram:065b5278    07              db          7h
ram:065b5279    07              db          7h
ram:065b527a    07              db          7h
ram:065b527b    07              db          7h
ram:065b527c    07              db          7h
ram:065b527d    07              db          7h
ram:065b527e    07              db          7h
ram:065b527f    07              db          7h
ram:065b5280    07              db          7h
ram:065b5281    07              db          7h
ram:065b5282    07              db          7h
ram:065b5283    07              db          7h
ram:065b5284    07              db          7h
ram:065b5285    07              db          7h
ram:065b5286    07              db          7h
ram:065b5287    07              db          7h
ram:065b5288    07              db          7h
ram:065b5289    07              db          7h
ram:065b528a    07              db          7h
ram:065b528b    07              db          7h
ram:065b528c    07              db          7h
ram:065b528d    07              db          7h
ram:065b528e    07              db          7h
ram:065b528f    01              db          1h
ram:065b5290    07              db          7h
ram:065b5291    07              db          7h
ram:065b5292    07              db          7h
ram:065b5293    07              db          7h
ram:065b5294    07              db          7h
ram:065b5295    07              db          7h
ram:065b5296    07              db          7h
ram:065b5297    02              db          2h
ram:065b5298    07              db          7h
ram:065b5299    07              db          7h
ram:065b529a    07              db          7h
ram:065b529b    07              db          7h
ram:065b529c    07              db          7h
ram:065b529d    07              db          7h
ram:065b529e    07              db          7h
ram:065b529f    07              db          7h
ram:065b52a0    07              db          7h
ram:065b52a1    03              db          3h
ram:065b52a2    07              db          7h
ram:065b52a3    07              db          7h
ram:065b52a4    07              db          7h
ram:065b52a5    04              db          4h
ram:065b52a6    05              db          5h
ram:065b52a7    06              db          6h
                            switchdataD_065b52a8:         ;XREF[1,0]:   065b5116
ram:065b52a8    67515b06        addr        switchD_065b5116::caseD_0
ram:065b52ac    63515b06        addr        switchD_065b5116::caseD_2a
ram:065b52b0    1d515b06        addr        switchD_065b5116::caseD_5c
ram:065b52b4    4e515b06        addr        switchD_065b5116::caseD_1
                            switchdataD_065b52b8:         ;XREF[1,0]:   065b5110
ram:065b52b8    00              db          0h
ram:065b52b9    03              db          3h
ram:065b52ba    03              db          3h
ram:065b52bb    03              db          3h
ram:065b52bc    03              db          3h
ram:065b52bd    03              db          3h
ram:065b52be    03              db          3h
ram:065b52bf    03              db          3h
ram:065b52c0    03              db          3h
ram:065b52c1    03              db          3h
ram:065b52c2    00              db          0h
ram:065b52c3    03              db          3h
ram:065b52c4    03              db          3h
ram:065b52c5    03              db          3h
ram:065b52c6    03              db          3h
ram:065b52c7    03              db          3h
ram:065b52c8    03              db          3h
ram:065b52c9    03              db          3h
ram:065b52ca    03              db          3h
ram:065b52cb    03              db          3h
ram:065b52cc    03              db          3h
ram:065b52cd    03              db          3h
ram:065b52ce    03              db          3h
ram:065b52cf    03              db          3h
ram:065b52d0    03              db          3h
ram:065b52d1    03              db          3h
ram:065b52d2    03              db          3h
ram:065b52d3    03              db          3h
ram:065b52d4    03              db          3h
ram:065b52d5    03              db          3h
ram:065b52d6    03              db          3h
ram:065b52d7    03              db          3h
ram:065b52d8    03              db          3h
ram:065b52d9    03              db          3h
ram:065b52da    03              db          3h
ram:065b52db    03              db          3h
ram:065b52dc    00              db          0h
ram:065b52dd    03              db          3h
ram:065b52de    03              db          3h
ram:065b52df    03              db          3h
ram:065b52e0    00              db          0h
ram:065b52e1    00              db          0h
ram:065b52e2    01              db          1h
ram:065b52e3    01              db          1h
ram:065b52e4    03              db          3h
ram:065b52e5    03              db          3h
ram:065b52e6    00              db          0h
ram:065b52e7    03              db          3h
ram:065b52e8    03              db          3h
ram:065b52e9    03              db          3h
ram:065b52ea    03              db          3h
ram:065b52eb    03              db          3h
ram:065b52ec    03              db          3h
ram:065b52ed    03              db          3h
ram:065b52ee    03              db          3h
ram:065b52ef    03              db          3h
ram:065b52f0    03              db          3h
ram:065b52f1    03              db          3h
ram:065b52f2    03              db          3h
ram:065b52f3    03              db          3h
ram:065b52f4    03              db          3h
ram:065b52f5    03              db          3h
ram:065b52f6    03              db          3h
ram:065b52f7    01              db          1h
ram:065b52f8    03              db          3h
ram:065b52f9    03              db          3h
ram:065b52fa    03              db          3h
ram:065b52fb    03              db          3h
ram:065b52fc    03              db          3h
ram:065b52fd    03              db          3h
ram:065b52fe    03              db          3h
ram:065b52ff    03              db          3h
ram:065b5300    03              db          3h
ram:065b5301    03              db          3h
ram:065b5302    03              db          3h
ram:065b5303    03              db          3h
ram:065b5304    03              db          3h
ram:065b5305    03              db          3h
ram:065b5306    03              db          3h
ram:065b5307    03              db          3h
ram:065b5308    03              db          3h
ram:065b5309    03              db          3h
ram:065b530a    03              db          3h
ram:065b530b    03              db          3h
ram:065b530c    03              db          3h
ram:065b530d    03              db          3h
ram:065b530e    03              db          3h
ram:065b530f    03              db          3h
ram:065b5310    03              db          3h
ram:065b5311    03              db          3h
ram:065b5312    03              db          3h
ram:065b5313    00              db          0h
ram:065b5314    02              db          2h
ram:065b5315    03              db          3h
ram:065b5316    00              db          0h
ram:065b5317    03              db          3h
ram:065b5318    03              db          3h
ram:065b5319    03              db          3h
ram:065b531a    03              db          3h
ram:065b531b    03              db          3h
ram:065b531c    03              db          3h
ram:065b531d    03              db          3h
ram:065b531e    03              db          3h
ram:065b531f    03              db          3h
ram:065b5320    03              db          3h
ram:065b5321    03              db          3h
ram:065b5322    03              db          3h
ram:065b5323    03              db          3h
ram:065b5324    03              db          3h
ram:065b5325    03              db          3h
ram:065b5326    03              db          3h
ram:065b5327    03              db          3h
ram:065b5328    03              db          3h
ram:065b5329    03              db          3h
ram:065b532a    03              db          3h
ram:065b532b    03              db          3h
ram:065b532c    03              db          3h
ram:065b532d    03              db          3h
ram:065b532e    03              db          3h
ram:065b532f    03              db          3h
ram:065b5330    03              db          3h
ram:065b5331    03              db          3h
ram:065b5332    03              db          3h
ram:065b5333    03              db          3h
ram:065b5334    00              db          0h
ram:065b5335    90              ??          90h
ram:065b5336    90              ??          90h
ram:065b5337    90              ??          90h
ram:065b5338    90              ??          90h
ram:065b5339    90              ??          90h
ram:065b533a    90              ??          90h
ram:065b533b    90              ??          90h
ram:065b533c    90              ??          90h
ram:065b533d    90              ??          90h
ram:065b533e    90              ??          90h
ram:065b533f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5340()
                                                          ;XREF[21,0]:  065b4b92,065b4c21,065b4c90,065b4cff
                                                          ;             065b4da3,065b4db8,065b4dc6,065b4df2
                                                          ;             065b4e06,065b4e16,065b4e24,065b4e43
                                                          ;             065b4e51,065b4ec7,065b4ed8,065b4ee9
                                                          ;             065b4f09,065b4f22,065b50c5,065b50d6
                                                          ;             065b50ed
ram:065b5340    a1888b5b06      MOV         EAX,[DAT_065b8b88]
ram:065b5345    56              PUSH        ESI
ram:065b5346    3d848b5b06      CMP         EAX,0x65b8b84
ram:065b534b    8bf0            MOV         ESI,EAX
ram:065b534d    7511            JNZ         LAB_065b5360
ram:065b534f    8b0d8c8b5b06    MOV         ECX,dword ptr [DAT_065b8b8c]
ram:065b5355    5e              POP         ESI
ram:065b5356    83c103          ADD         ECX,0x3
ram:065b5359    890d8c8b5b06    MOV         dword ptr [DAT_065b8b8c],ECX
ram:065b535f    c3              RET
                            LAB_065b5360:                 ;XREF[1,0]:   065b534d
ram:065b5360    8a542408        MOV         DL,byte ptr [ESP + Stack[0x4]+0x4]
ram:065b5364    8bc8            MOV         ECX,EAX
ram:065b5366    41              INC         ECX
ram:065b5367    8810            MOV         byte ptr [EAX],DL
ram:065b5369    8bc6            MOV         EAX,ESI
ram:065b536b    5e              POP         ESI
ram:065b536c    c60100          MOV         byte ptr [ECX],0x0
ram:065b536f    41              INC         ECX
ram:065b5370    c60100          MOV         byte ptr [ECX],0x0
ram:065b5373    41              INC         ECX
ram:065b5374    890d888b5b06    MOV         dword ptr [DAT_065b8b88],ECX
ram:065b537a    c3              RET
ram:065b537b    90              ??          90h
ram:065b537c    90              ??          90h
ram:065b537d    90              ??          90h
ram:065b537e    90              ??          90h
ram:065b537f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5380(undefined1 param_1)
          ;param_1       undefined1           4                      ;XREF[1,0]:   065b538c
                                                          ;XREF[13,0]:  065b4f4c,065b4fa0,065b4ff0,065b4ff7
                                                          ;             065b4ffe,065b5005,065b5015,065b5029
                                                          ;             065b5043,065b5121,065b5152,065b516b
                                                          ;             065b517d
ram:065b5380    a1888b5b06      MOV         EAX,[DAT_065b8b88]
ram:065b5385    3d848b5b06      CMP         EAX,0x65b8b84
ram:065b538a    7412            JZ          LAB_065b539e
ram:065b538c    8a4c2404        MOV         CL,byte ptr [ESP + param_1]
ram:065b5390    8808            MOV         byte ptr [EAX],CL
ram:065b5392    a1888b5b06      MOV         EAX,[DAT_065b8b88]
ram:065b5397    40              INC         EAX
ram:065b5398    a3888b5b06      MOV         [DAT_065b8b88],EAX
ram:065b539d    c3              RET
                            LAB_065b539e:                 ;XREF[1,0]:   065b538a
ram:065b539e    ff058c8b5b06    INC         dword ptr [DAT_065b8b8c]
ram:065b53a4    c3              RET
ram:065b53a5    90              ??          90h
ram:065b53a6    90              ??          90h
ram:065b53a7    90              ??          90h
ram:065b53a8    90              ??          90h
ram:065b53a9    90              ??          90h
ram:065b53aa    90              ??          90h
ram:065b53ab    90              ??          90h
ram:065b53ac    90              ??          90h
ram:065b53ad    90              ??          90h
ram:065b53ae    90              ??          90h
ram:065b53af    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b53b0(undefined1 param_1, undefined1 * param_2)
          ;param_1       undefined1           4                      ;XREF[1,0]:   065b53e5
          ;param_2       undefined1 *         8                      ;XREF[1,0]:   065b53c7
                                                          ;XREF[4,0]:   065b4d8d,065b4d9c,065b4de6,065b4e3c
ram:065b53b0    8b0d888b5b06    MOV         ECX,dword ptr [DAT_065b8b88]
ram:065b53b6    81f9848b5b06    CMP         ECX,0x65b8b84
ram:065b53bc    7508            JNZ         LAB_065b53c6
ram:065b53be    83058c8b5...    ADD         dword ptr [DAT_065b8b8c],0x3
ram:065b53c5    c3              RET
                            LAB_065b53c6:                 ;XREF[1,0]:   065b53bc
ram:065b53c6    56              PUSH        ESI
ram:065b53c7    8b74240c        MOV         ESI,dword ptr [ESP + param_2+0x4]
ram:065b53cb    8bc1            MOV         EAX,ECX
ram:065b53cd    83c103          ADD         ECX,0x3
ram:065b53d0    3bc6            CMP         EAX,ESI
ram:065b53d2    890d888b5b06    MOV         dword ptr [DAT_065b8b88],ECX
ram:065b53d8    760b            JBE         LAB_065b53e5
                            LAB_065b53da:                 ;XREF[1,0]:   065b53e3
ram:065b53da    8a50ff          MOV         DL,byte ptr [EAX + -0x1]
ram:065b53dd    48              DEC         EAX
ram:065b53de    49              DEC         ECX
ram:065b53df    3bc6            CMP         EAX,ESI
ram:065b53e1    8811            MOV         byte ptr [ECX],DL
ram:065b53e3    77f5            JA          LAB_065b53da
                            LAB_065b53e5:                 ;XREF[1,0]:   065b53d8
ram:065b53e5    8a442408        MOV         AL,byte ptr [ESP + param_1+0x4]
ram:065b53e9    8806            MOV         byte ptr [ESI],AL
ram:065b53eb    32c0            XOR         AL,AL
ram:065b53ed    884601          MOV         byte ptr [ESI + 0x1],AL
ram:065b53f0    884602          MOV         byte ptr [ESI + 0x2],AL
ram:065b53f3    5e              POP         ESI
ram:065b53f4    c3              RET
ram:065b53f5    90              ??          90h
ram:065b53f6    90              ??          90h
ram:065b53f7    90              ??          90h
ram:065b53f8    90              ??          90h
ram:065b53f9    90              ??          90h
ram:065b53fa    90              ??          90h
ram:065b53fb    90              ??          90h
ram:065b53fc    90              ??          90h
ram:065b53fd    90              ??          90h
ram:065b53fe    90              ??          90h
ram:065b53ff    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5400(char * param_1, int param_2)
          ;param_1       char *               4                      ;XREF[1,0]:   065b5401
          ;param_2       int                  8                      ;XREF[2,0]:   065b542e,065b5443
                                                          ;XREF[13,0]:  065b4bbb,065b4c0b,065b4c2a,065b4ce4
                                                          ;             065b4dbf,065b4dcd,065b4dfb,065b4e0f
                                                          ;             065b4e1d,065b4e2b,065b4e4a,065b4e5a
                                                          ;             065b547b
ram:065b5400    56              PUSH        ESI
ram:065b5401    8b742408        MOV         ESI,dword ptr [ESP + param_1+0x4]
ram:065b5405    81fe848b5b06    CMP         ESI,0x65b8b84
ram:065b540b    7447            JZ          LAB_065b5454
ram:065b540d    56              PUSH        ESI
ram:065b540e    e8ed050000      CALL        FUN_065b5a00                            ;char * FUN_065b5a00(char * param_1)
ram:065b5413    83c404          ADD         ESP,0x4
ram:065b5416    85c0            TEST        EAX,EAX
ram:065b5418    740f            JZ          LAB_065b5429
                            LAB_065b541a:                 ;XREF[1,0]:   065b5427
ram:065b541a    50              PUSH        EAX
ram:065b541b    8bf0            MOV         ESI,EAX
ram:065b541d    e8de050000      CALL        FUN_065b5a00                            ;char * FUN_065b5a00(char * param_1)
ram:065b5422    83c404          ADD         ESP,0x4
ram:065b5425    85c0            TEST        EAX,EAX
ram:065b5427    75f1            JNZ         LAB_065b541a
                            LAB_065b5429:                 ;XREF[1,0]:   065b5418
ram:065b5429    803e07          CMP         byte ptr [ESI],0x7
ram:065b542c    7515            JNZ         LAB_065b5443
ram:065b542e    8b4c240c        MOV         ECX,dword ptr [ESP + param_2+0x4]
ram:065b5432    8bc6            MOV         EAX,ESI
ram:065b5434    2bc1            SUB         EAX,ECX
ram:065b5436    8bc8            MOV         ECX,EAX
ram:065b5438    884602          MOV         byte ptr [ESI + 0x2],AL
ram:065b543b    c1f908          SAR         ECX,0x8
ram:065b543e    884e01          MOV         byte ptr [ESI + 0x1],CL
ram:065b5441    5e              POP         ESI
ram:065b5442    c3              RET
                            LAB_065b5443:                 ;XREF[1,0]:   065b542c
ram:065b5443    8b44240c        MOV         EAX,dword ptr [ESP + param_2+0x4]
ram:065b5447    2bc6            SUB         EAX,ESI
ram:065b5449    8bc8            MOV         ECX,EAX
ram:065b544b    884602          MOV         byte ptr [ESI + 0x2],AL
ram:065b544e    c1f908          SAR         ECX,0x8
ram:065b5451    884e01          MOV         byte ptr [ESI + 0x1],CL
                            LAB_065b5454:                 ;XREF[1,0]:   065b540b
ram:065b5454    5e              POP         ESI
ram:065b5455    c3              RET
ram:065b5456    90              ??          90h
ram:065b5457    90              ??          90h
ram:065b5458    90              ??          90h
ram:065b5459    90              ??          90h
ram:065b545a    90              ??          90h
ram:065b545b    90              ??          90h
ram:065b545c    90              ??          90h
ram:065b545d    90              ??          90h
ram:065b545e    90              ??          90h
ram:065b545f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5460(char * param_1, int param_2)
          ;param_1       char *               4                      ;XREF[2,0]:   065b5460,065b5477
          ;param_2       int                  8
                                                          ;XREF[4,0]:   065b4c3a,065b4daa,065b4db1,065b4e61
ram:065b5460    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b5464    85c0            TEST        EAX,EAX
ram:065b5466    7418            JZ          LAB_065b5480
ram:065b5468    3d848b5b06      CMP         EAX,0x65b8b84
ram:065b546d    7411            JZ          LAB_065b5480
ram:065b546f    803806          CMP         byte ptr [EAX],0x6
ram:065b5472    750c            JNZ         LAB_065b5480
ram:065b5474    83c003          ADD         EAX,0x3
ram:065b5477    89442404        MOV         dword ptr [ESP + param_1],EAX
ram:065b547b    e980ffffff      JMP         FUN_065b5400                            ;undefined FUN_065b5400(char * param_...
                            LAB_065b5480:                 ;XREF[3,0]:   065b5466,065b546d,065b5472
ram:065b5480    c3              RET
ram:065b5481    90              ??          90h
ram:065b5482    90              ??          90h
ram:065b5483    90              ??          90h
ram:065b5484    90              ??          90h
ram:065b5485    90              ??          90h
ram:065b5486    90              ??          90h
ram:065b5487    90              ??          90h
ram:065b5488    90              ??          90h
ram:065b5489    90              ??          90h
ram:065b548a    90              ??          90h
ram:065b548b    90              ??          90h
ram:065b548c    90              ??          90h
ram:065b548d    90              ??          90h
ram:065b548e    90              ??          90h
ram:065b548f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b5490(undefined4 * param_1, char * param_2)
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b5493
          ;param_2       char *               8                      ;XREF[1,0]:   065b549c
ram:065b5490    53              PUSH        EBX
ram:065b5491    55              PUSH        EBP
ram:065b5492    56              PUSH        ESI
ram:065b5493    8b742410        MOV         ESI,dword ptr [ESP + param_1+0xc]
ram:065b5497    85f6            TEST        ESI,ESI
ram:065b5499    57              PUSH        EDI
ram:065b549a    7455            JZ          LAB_065b54f1
ram:065b549c    8b6c2418        MOV         EBP,dword ptr [ESP + param_2+0x10]
ram:065b54a0    85ed            TEST        EBP,EBP
ram:065b54a2    744d            JZ          LAB_065b54f1
ram:065b54a4    807e5c9c        CMP         byte ptr [ESI + 0x5c],0x9c
ram:065b54a8    7547            JNZ         LAB_065b54f1
ram:065b54aa    8b4654          MOV         EAX,dword ptr [ESI + 0x54]
ram:065b54ad    8b1d5c705b06    MOV         EBX,dword ptr [DAT_065b705c]
ram:065b54b3    85c0            TEST        EAX,EAX
ram:065b54b5    7445            JZ          LAB_065b54fc
ram:065b54b7    0fbe00          MOVSX       EAX,byte ptr [EAX]
ram:065b54ba    50              PUSH        EAX
ram:065b54bb    55              PUSH        EBP
ram:065b54bc    ffd3            CALL        EBX
ram:065b54be    8bf8            MOV         EDI,EAX
ram:065b54c0    83c408          ADD         ESP,0x8
ram:065b54c3    85ff            TEST        EDI,EDI
ram:065b54c5    742a            JZ          LAB_065b54f1
                            LAB_065b54c7:                 ;XREF[1,0]:   065b54ef
ram:065b54c7    8b4e58          MOV         ECX,dword ptr [ESI + 0x58]
ram:065b54ca    8b5654          MOV         EDX,dword ptr [ESI + 0x54]
ram:065b54cd    51              PUSH        ECX
ram:065b54ce    52              PUSH        EDX
ram:065b54cf    57              PUSH        EDI
ram:065b54d0    ff1564705b06    CALL        dword ptr [DAT_065b7064]
ram:065b54d6    83c40c          ADD         ESP,0xc
ram:065b54d9    85c0            TEST        EAX,EAX
ram:065b54db    741b            JZ          LAB_065b54f8
ram:065b54dd    8b4654          MOV         EAX,dword ptr [ESI + 0x54]
ram:065b54e0    47              INC         EDI
ram:065b54e1    0fbe08          MOVSX       ECX,byte ptr [EAX]
ram:065b54e4    51              PUSH        ECX
ram:065b54e5    57              PUSH        EDI
ram:065b54e6    ffd3            CALL        EBX
ram:065b54e8    8bf8            MOV         EDI,EAX
ram:065b54ea    83c408          ADD         ESP,0x8
ram:065b54ed    85ff            TEST        EDI,EDI
ram:065b54ef    75d6            JNZ         LAB_065b54c7
                            LAB_065b54f1:                 ;XREF[6,0]:   065b549a,065b54a2,065b54a8,065b54c5
                                                          ;             065b54fa,065b552f
ram:065b54f1    5f              POP         EDI
ram:065b54f2    5e              POP         ESI
ram:065b54f3    5d              POP         EBP
ram:065b54f4    33c0            XOR         EAX,EAX
ram:065b54f6    5b              POP         EBX
ram:065b54f7    c3              RET
                            LAB_065b54f8:                 ;XREF[1,0]:   065b54db
ram:065b54f8    85ff            TEST        EDI,EDI
ram:065b54fa    74f5            JZ          LAB_065b54f1
                            LAB_065b54fc:                 ;XREF[1,0]:   065b54b5
ram:065b54fc    892d988b5b06    MOV         dword ptr [DAT_065b8b98],EBP
ram:065b5502    8a4651          MOV         AL,byte ptr [ESI + 0x51]
ram:065b5505    84c0            TEST        AL,AL
ram:065b5507    740f            JZ          LAB_065b5518
ram:065b5509    55              PUSH        EBP
ram:065b550a    56              PUSH        ESI
ram:065b550b    e870000000      CALL        FUN_065b5580                            ;undefined4 FUN_065b5580(undefined4 *...
ram:065b5510    83c408          ADD         ESP,0x8
ram:065b5513    5f              POP         EDI
ram:065b5514    5e              POP         ESI
ram:065b5515    5d              POP         EBP
ram:065b5516    5b              POP         EBX
ram:065b5517    c3              RET
                            LAB_065b5518:                 ;XREF[1,0]:   065b5507
ram:065b5518    8a4650          MOV         AL,byte ptr [ESI + 0x50]
ram:065b551b    8bfd            MOV         EDI,EBP
ram:065b551d    84c0            TEST        AL,AL
ram:065b551f    7435            JZ          LAB_065b5556
ram:065b5521    0fbed0          MOVSX       EDX,AL
ram:065b5524    52              PUSH        EDX
ram:065b5525    55              PUSH        EBP
ram:065b5526    ffd3            CALL        EBX
ram:065b5528    8bf8            MOV         EDI,EAX
ram:065b552a    83c408          ADD         ESP,0x8
ram:065b552d    85ff            TEST        EDI,EDI
ram:065b552f    74c0            JZ          LAB_065b54f1
                            LAB_065b5531:                 ;XREF[1,0]:   065b554f
ram:065b5531    57              PUSH        EDI
ram:065b5532    56              PUSH        ESI
ram:065b5533    e848000000      CALL        FUN_065b5580                            ;undefined4 FUN_065b5580(undefined4 *...
ram:065b5538    83c408          ADD         ESP,0x8
ram:065b553b    85c0            TEST        EAX,EAX
ram:065b553d    7531            JNZ         LAB_065b5570
ram:065b553f    0fbe4650        MOVSX       EAX,byte ptr [ESI + 0x50]
ram:065b5543    47              INC         EDI
ram:065b5544    50              PUSH        EAX
ram:065b5545    57              PUSH        EDI
ram:065b5546    ffd3            CALL        EBX
ram:065b5548    8bf8            MOV         EDI,EAX
ram:065b554a    83c408          ADD         ESP,0x8
ram:065b554d    85ff            TEST        EDI,EDI
ram:065b554f    75e0            JNZ         LAB_065b5531
ram:065b5551    5f              POP         EDI
ram:065b5552    5e              POP         ESI
ram:065b5553    5d              POP         EBP
ram:065b5554    5b              POP         EBX
ram:065b5555    c3              RET
                            LAB_065b5556:                 ;XREF[2,0]:   065b551f,065b5569
ram:065b5556    57              PUSH        EDI
ram:065b5557    56              PUSH        ESI
ram:065b5558    e823000000      CALL        FUN_065b5580                            ;undefined4 FUN_065b5580(undefined4 *...
ram:065b555d    83c408          ADD         ESP,0x8
ram:065b5560    85c0            TEST        EAX,EAX
ram:065b5562    750c            JNZ         LAB_065b5570
ram:065b5564    8a0f            MOV         CL,byte ptr [EDI]
ram:065b5566    47              INC         EDI
ram:065b5567    84c9            TEST        CL,CL
ram:065b5569    75eb            JNZ         LAB_065b5556
ram:065b556b    5f              POP         EDI
ram:065b556c    5e              POP         ESI
ram:065b556d    5d              POP         EBP
ram:065b556e    5b              POP         EBX
ram:065b556f    c3              RET
                            LAB_065b5570:                 ;XREF[2,0]:   065b553d,065b5562
ram:065b5570    5f              POP         EDI
ram:065b5571    5e              POP         ESI
ram:065b5572    5d              POP         EBP
ram:065b5573    b801000000      MOV         EAX,0x1
ram:065b5578    5b              POP         EBX
ram:065b5579    c3              RET
ram:065b557a    90              ??          90h
ram:065b557b    90              ??          90h
ram:065b557c    90              ??          90h
ram:065b557d    90              ??          90h
ram:065b557e    90              ??          90h
ram:065b557f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b5580(undefined4 * param_1, undefined4 param_2)
          ;param_1       undefined4 *         4                      ;XREF[1,0]:   065b5586
          ;param_2       undefined4           8                      ;XREF[1,0]:   065b5581
                                                          ;XREF[3,0]:   065b550b,065b5533,065b5558
ram:065b5580    53              PUSH        EBX
ram:065b5581    8b5c240c        MOV         EBX,dword ptr [ESP + param_2+0x4]
ram:065b5585    56              PUSH        ESI
ram:065b5586    8b74240c        MOV         ESI,dword ptr [ESP + param_1+0x8]
ram:065b558a    57              PUSH        EDI
ram:065b558b    891d7c8b5b06    MOV         dword ptr [DAT_065b8b7c],EBX
ram:065b5591    8d7e28          LEA         EDI,[ESI + 0x28]
ram:065b5594    8935908b5b06    MOV         dword ptr [DAT_065b8b90],ESI
ram:065b559a    893d948b5b06    MOV         dword ptr [DAT_065b8b94],EDI
ram:065b55a0    8bc6            MOV         EAX,ESI
ram:065b55a2    8bcf            MOV         ECX,EDI
ram:065b55a4    ba0a000000      MOV         EDX,0xa
                            LAB_065b55a9:                 ;XREF[1,0]:   065b55bc
ram:065b55a9    c70000000000    MOV         dword ptr [EAX],0x0
ram:065b55af    c70100000000    MOV         dword ptr [ECX],0x0
ram:065b55b5    83c004          ADD         EAX,0x4
ram:065b55b8    83c104          ADD         ECX,0x4
ram:065b55bb    4a              DEC         EDX
ram:065b55bc    75eb            JNZ         LAB_065b55a9
ram:065b55be    8d465d          LEA         EAX,[ESI + 0x5d]
ram:065b55c1    50              PUSH        EAX
ram:065b55c2    e829000000      CALL        FUN_065b55f0                            ;undefined4 FUN_065b55f0(char * param_1)
ram:065b55c7    83c404          ADD         ESP,0x4
ram:065b55ca    85c0            TEST        EAX,EAX
ram:065b55cc    7413            JZ          LAB_065b55e1
ram:065b55ce    891e            MOV         dword ptr [ESI],EBX
ram:065b55d0    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b55d6    890f            MOV         dword ptr [EDI],ECX
ram:065b55d8    5f              POP         EDI
ram:065b55d9    5e              POP         ESI
ram:065b55da    b801000000      MOV         EAX,0x1
ram:065b55df    5b              POP         EBX
ram:065b55e0    c3              RET
                            LAB_065b55e1:                 ;XREF[1,0]:   065b55cc
ram:065b55e1    5f              POP         EDI
ram:065b55e2    5e              POP         ESI
ram:065b55e3    33c0            XOR         EAX,EAX
ram:065b55e5    5b              POP         EBX
ram:065b55e6    c3              RET
ram:065b55e7    90              ??          90h
ram:065b55e8    90              ??          90h
ram:065b55e9    90              ??          90h
ram:065b55ea    90              ??          90h
ram:065b55eb    90              ??          90h
ram:065b55ec    90              ??          90h
ram:065b55ed    90              ??          90h
ram:065b55ee    90              ??          90h
ram:065b55ef    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b55f0(char * param_1)
          ;param_1       char *               4                      ;XREF[4,0]:   065b55f3,065b5617,065b5799,065b587d
                                                          ;XREF[5,0]:   065b55c2,065b57bd,065b57f2,065b5813
                                                          ;             065b5882
ram:065b55f0    53              PUSH        EBX
ram:065b55f1    55              PUSH        EBP
ram:065b55f2    56              PUSH        ESI
ram:065b55f3    8b742410        MOV         ESI,dword ptr [ESP + param_1+0xc]
ram:065b55f7    85f6            TEST        ESI,ESI
ram:065b55f9    57              PUSH        EDI
ram:065b55fa    0f849f020000    JZ          switchD_065b5629::caseD_e
ram:065b5600    8b1d5c705b06    MOV         EBX,dword ptr [DAT_065b705c]
                            LAB_065b5606:                 ;XREF[1,0]:   065b57a3
ram:065b5606    56              PUSH        ESI
ram:065b5607    e8f4030000      CALL        FUN_065b5a00                            ;char * FUN_065b5a00(char * param_1)
ram:065b560c    8be8            MOV         EBP,EAX
ram:065b560e    83c404          ADD         ESP,0x4
ram:065b5611    0fbe06          MOVSX       EAX,byte ptr [ESI]
ram:065b5614    83f827          CMP         EAX,0x27
ram:065b5617    896c2414        MOV         dword ptr [ESP + param_1+0x10],EBP
ram:065b561b    0f877e020000    JA          switchD_065b5629::caseD_e
ram:065b5621    33c9            XOR         ECX,ECX
ram:065b5623    8a88e4585b06    MOV         CL,byte ptr [EAX + switchD_065b5629::...
                            switchD:                      ; FWD[16,0]:  065b5630,065b5648,065b565b,065b56b5
                                                          ;             065b56e4,065b56ef,065b5737,065b5764
                                                          ;             065b5790,065b579f,065b57b0,065b57db
                                                          ;             065b57e5,065b5840,065b589f,065b58a8
ram:065b5629    ff248da85...    JMP         dword ptr [ECX*0x4 + switchD_065b5629...;= 065b57db
                            caseD_1:                      ;XREF[2,0]:   065b5629,065b58ac
ram:065b5630    8b157c8b5b06    MOV         EDX,dword ptr [DAT_065b8b7c]
ram:065b5636    a1988b5b06      MOV         EAX,[DAT_065b8b98]
ram:065b563b    3bd0            CMP         EDX,EAX
ram:065b563d    0f855c020000    JNZ         switchD_065b5629::caseD_e
ram:065b5643    e957010000      JMP         switchD_065b5629::caseD_7
                            caseD_2:                      ;XREF[2,0]:   065b5629,065b58b0
ram:065b5648    a17c8b5b06      MOV         EAX,[DAT_065b8b7c]
ram:065b564d    803800          CMP         byte ptr [EAX],0x0
ram:065b5650    0f8549020000    JNZ         switchD_065b5629::caseD_e
ram:065b5656    e944010000      JMP         switchD_065b5629::caseD_7
                            caseD_c:                      ;XREF[2,0]:   065b5629,065b58d0
ram:065b565b    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b5661    8b357c705b06    MOV         ESI,dword ptr [DAT_065b707c]
ram:065b5667    0fbe11          MOVSX       EDX,byte ptr [ECX]
ram:065b566a    52              PUSH        EDX
ram:065b566b    ffd6            CALL        ESI
ram:065b566d    83c404          ADD         ESP,0x4
ram:065b5670    85c0            TEST        EAX,EAX
ram:065b5672    a17c8b5b06      MOV         EAX,[DAT_065b8b7c]
ram:065b5677    7509            JNZ         LAB_065b5682
ram:065b5679    80385f          CMP         byte ptr [EAX],0x5f
ram:065b567c    0f851d020000    JNZ         switchD_065b5629::caseD_e
                            LAB_065b5682:                 ;XREF[1,0]:   065b5677
ram:065b5682    3b05988b5b06    CMP         EAX,dword ptr [DAT_065b8b98]
ram:065b5688    0f8611010000    JBE         switchD_065b5629::caseD_7
ram:065b568e    0fbe40ff        MOVSX       EAX,byte ptr [EAX + -0x1]
ram:065b5692    50              PUSH        EAX
ram:065b5693    ffd6            CALL        ESI
ram:065b5695    83c404          ADD         ESP,0x4
ram:065b5698    85c0            TEST        EAX,EAX
ram:065b569a    0f85ff010000    JNZ         switchD_065b5629::caseD_e
ram:065b56a0    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b56a6    8079ff5f        CMP         byte ptr [ECX + -0x1],0x5f
ram:065b56aa    0f84ef010000    JZ          switchD_065b5629::caseD_e
ram:065b56b0    e9ea000000      JMP         switchD_065b5629::caseD_7
                            caseD_d:                      ;XREF[2,0]:   065b5629,065b58d4
ram:065b56b5    8b157c8b5b06    MOV         EDX,dword ptr [DAT_065b8b7c]
ram:065b56bb    0fbe02          MOVSX       EAX,byte ptr [EDX]
ram:065b56be    50              PUSH        EAX
ram:065b56bf    ff157c705b06    CALL        dword ptr [DAT_065b707c]
ram:065b56c5    83c404          ADD         ESP,0x4
ram:065b56c8    85c0            TEST        EAX,EAX
ram:065b56ca    0f85cf010000    JNZ         switchD_065b5629::caseD_e
ram:065b56d0    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b56d6    80395f          CMP         byte ptr [ECX],0x5f
ram:065b56d9    0f84c0010000    JZ          switchD_065b5629::caseD_e
ram:065b56df    e9bb000000      JMP         switchD_065b5629::caseD_7
                            caseD_3:                      ;XREF[2,0]:   065b5629,065b58b4
ram:065b56e4    8b157c8b5b06    MOV         EDX,dword ptr [DAT_065b8b7c]
ram:065b56ea    803a00          CMP         byte ptr [EDX],0x0
ram:065b56ed    eb67            JMP         LAB_065b5756
                            caseD_8:                      ;XREF[2,0]:   065b5629,065b58c8
ram:065b56ef    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b56f5    8a4603          MOV         AL,byte ptr [ESI + 0x3]
ram:065b56f8    8d5603          LEA         EDX,[ESI + 0x3]
ram:065b56fb    3a01            CMP         AL,byte ptr [ECX]
ram:065b56fd    0f859c010000    JNZ         switchD_065b5629::caseD_e
ram:065b5703    8bfa            MOV         EDI,EDX
ram:065b5705    83c9ff          OR          ECX,0xffffffff
ram:065b5708    33c0            XOR         EAX,EAX
ram:065b570a    f2ae            SCASB.REPNE ES:EDI
ram:065b570c    f7d1            NOT         ECX
ram:065b570e    49              DEC         ECX
ram:065b570f    8bf1            MOV         ESI,ECX
ram:065b5711    83fe01          CMP         ESI,0x1
ram:065b5714    7e19            JLE         LAB_065b572f
ram:065b5716    a17c8b5b06      MOV         EAX,[DAT_065b8b7c]
ram:065b571b    56              PUSH        ESI
ram:065b571c    50              PUSH        EAX
ram:065b571d    52              PUSH        EDX
ram:065b571e    ff1564705b06    CALL        dword ptr [DAT_065b7064]
ram:065b5724    83c40c          ADD         ESP,0xc
ram:065b5727    85c0            TEST        EAX,EAX
ram:065b5729    0f8570010000    JNZ         switchD_065b5629::caseD_e
                            LAB_065b572f:                 ;XREF[1,0]:   065b5714
ram:065b572f    01357c8b5b06    ADD         dword ptr [DAT_065b8b7c],ESI
ram:065b5735    eb68            JMP         switchD_065b5629::caseD_7
                            caseD_4:                      ;XREF[2,0]:   065b5629,065b58b8
ram:065b5737    8b0d7c8b5b06    MOV         ECX,dword ptr [DAT_065b8b7c]
ram:065b573d    8a01            MOV         AL,byte ptr [ECX]
ram:065b573f    84c0            TEST        AL,AL
ram:065b5741    0f8458010000    JZ          switchD_065b5629::caseD_e
ram:065b5747    0fbed0          MOVSX       EDX,AL
ram:065b574a    83c603          ADD         ESI,0x3
ram:065b574d    52              PUSH        EDX
ram:065b574e    56              PUSH        ESI
ram:065b574f    ffd3            CALL        EBX
ram:065b5751    83c408          ADD         ESP,0x8
ram:065b5754    85c0            TEST        EAX,EAX
                            LAB_065b5756:                 ;XREF[1,0]:   065b56ed
ram:065b5756    0f8443010000    JZ          switchD_065b5629::caseD_e
ram:065b575c    ff057c8b5b06    INC         dword ptr [DAT_065b8b7c]
ram:065b5762    eb3b            JMP         switchD_065b5629::caseD_7
                            caseD_5:                      ;XREF[2,0]:   065b5629,065b58bc
ram:065b5764    a17c8b5b06      MOV         EAX,[DAT_065b8b7c]
ram:065b5769    8a00            MOV         AL,byte ptr [EAX]
ram:065b576b    84c0            TEST        AL,AL
ram:065b576d    0f842c010000    JZ          switchD_065b5629::caseD_e
ram:065b5773    0fbec8          MOVSX       ECX,AL
ram:065b5776    83c603          ADD         ESI,0x3
ram:065b5779    51              PUSH        ECX
ram:065b577a    56              PUSH        ESI
ram:065b577b    ffd3            CALL        EBX
ram:065b577d    83c408          ADD         ESP,0x8
ram:065b5780    85c0            TEST        EAX,EAX
ram:065b5782    0f8517010000    JNZ         switchD_065b5629::caseD_e
ram:065b5788    ff057c8b5b06    INC         dword ptr [DAT_065b8b7c]
ram:065b578e    eb0f            JMP         switchD_065b5629::caseD_7
                            caseD_6:                      ;XREF[2,0]:   065b5629,065b58c0
ram:065b5790    807d0006        CMP         byte ptr [EBP],0x6
ram:065b5794    7473            JZ          LAB_065b5809
ram:065b5796    83c603          ADD         ESI,0x3
ram:065b5799    89742414        MOV         dword ptr [ESP + param_1+0x10],ESI
ram:065b579d    8bee            MOV         EBP,ESI
                            caseD_9:                      ;XREF[10,0]:  065b5629,065b5643,065b5656,065b5688
                            caseD_7:                      ;             065b56b0,065b56df,065b5735,065b5762
                                                          ;             065b578e,065b58c4
ram:065b579f    85ed            TEST        EBP,EBP
ram:065b57a1    8bf5            MOV         ESI,EBP
ram:065b57a3    0f855dfeffff    JNZ         LAB_065b5606
ram:065b57a9    5f              POP         EDI
ram:065b57aa    5e              POP         ESI
ram:065b57ab    5d              POP         EBP
ram:065b57ac    33c0            XOR         EAX,EAX
ram:065b57ae    5b              POP         EBX
ram:065b57af    c3              RET
                            caseD_16:                     ;XREF[2,0]:   065b5629,065b58d8
                            caseD_17:
                            caseD_18:
                            caseD_19:
                            caseD_1a:
                            caseD_1b:
                            caseD_1c:
                            caseD_1d:
                            caseD_15:
ram:065b57b0    0fbe36          MOVSX       ESI,byte ptr [ESI]
ram:065b57b3    8b3d7c8b5b06    MOV         EDI,dword ptr [DAT_065b8b7c]
ram:065b57b9    55              PUSH        EBP
ram:065b57ba    83ee14          SUB         ESI,0x14
ram:065b57bd    e82efeffff      CALL        FUN_065b55f0                            ;undefined4 FUN_065b55f0(char * param_1)
ram:065b57c2    83c404          ADD         ESP,0x4
ram:065b57c5    85c0            TEST        EAX,EAX
ram:065b57c7    0f84d2000000    JZ          switchD_065b5629::caseD_e
ram:065b57cd    a1908b5b06      MOV         EAX,[DAT_065b8b90]
                            LAB_065b57d2:                 ;XREF[1,0]:   065b5807
ram:065b57d2    833cb000        CMP         dword ptr [EAX + ESI*0x4],0x0
ram:065b57d6    7503            JNZ         switchD_065b5629::caseD_0
ram:065b57d8    893cb0          MOV         dword ptr [EAX + ESI*0x4],EDI
                            caseD_0:                      ;XREF[5,0]:   065b5629,065b57d6,065b581d,065b588c
                                                          ;             065b58a8
ram:065b57db    5f              POP         EDI
ram:065b57dc    5e              POP         ESI
ram:065b57dd    5d              POP         EBP
ram:065b57de    b801000000      MOV         EAX,0x1
ram:065b57e3    5b              POP         EBX
ram:065b57e4    c3              RET
                            caseD_20:                     ;XREF[2,0]:   065b5629,065b58dc
                            caseD_21:
                            caseD_22:
                            caseD_23:
                            caseD_24:
                            caseD_25:
                            caseD_26:
                            caseD_27:
                            caseD_1f:
ram:065b57e5    0fbe36          MOVSX       ESI,byte ptr [ESI]
ram:065b57e8    8b3d7c8b5b06    MOV         EDI,dword ptr [DAT_065b8b7c]
ram:065b57ee    55              PUSH        EBP
ram:065b57ef    83ee1e          SUB         ESI,0x1e
ram:065b57f2    e8f9fdffff      CALL        FUN_065b55f0                            ;undefined4 FUN_065b55f0(char * param_1)
ram:065b57f7    83c404          ADD         ESP,0x4
ram:065b57fa    85c0            TEST        EAX,EAX
ram:065b57fc    0f849d000000    JZ          switchD_065b5629::caseD_e
ram:065b5802    a1948b5b06      MOV         EAX,[DAT_065b8b94]
ram:065b5807    ebc9            JMP         LAB_065b57d2
                            LAB_065b5809:                 ;XREF[2,0]:   065b5794,065b5837
ram:065b5809    8b3d7c8b5b06    MOV         EDI,dword ptr [DAT_065b8b7c]
ram:065b580f    8d5603          LEA         EDX,[ESI + 0x3]
ram:065b5812    52              PUSH        EDX
ram:065b5813    e8d8fdffff      CALL        FUN_065b55f0                            ;undefined4 FUN_065b55f0(char * param_1)
ram:065b5818    83c404          ADD         ESP,0x4
ram:065b581b    85c0            TEST        EAX,EAX
ram:065b581d    75bc            JNZ         switchD_065b5629::caseD_0
ram:065b581f    56              PUSH        ESI
ram:065b5820    893d7c8b5b06    MOV         dword ptr [DAT_065b8b7c],EDI
ram:065b5826    e8d5010000      CALL        FUN_065b5a00                            ;char * FUN_065b5a00(char * param_1)
ram:065b582b    8bf0            MOV         ESI,EAX
ram:065b582d    83c404          ADD         ESP,0x4
ram:065b5830    85f6            TEST        ESI,ESI
ram:065b5832    746b            JZ          switchD_065b5629::caseD_e
ram:065b5834    803e06          CMP         byte ptr [ESI],0x6
ram:065b5837    74d0            JZ          LAB_065b5809
ram:065b5839    5f              POP         EDI
ram:065b583a    5e              POP         ESI
ram:065b583b    5d              POP         EBP
ram:065b583c    33c0            XOR         EAX,EAX
ram:065b583e    5b              POP         EBX
ram:065b583f    c3              RET
                            caseD_b:                      ;XREF[2,0]:   065b5629,065b58cc
                            caseD_a:
ram:065b5840    8a4500          MOV         AL,byte ptr [EBP]
ram:065b5843    32db            XOR         BL,BL
ram:065b5845    3c08            CMP         AL,0x8
ram:065b5847    7503            JNZ         LAB_065b584c
ram:065b5849    8a5d03          MOV         BL,byte ptr [EBP + 0x3]
                            LAB_065b584c:                 ;XREF[1,0]:   065b5847
ram:065b584c    8a0e            MOV         CL,byte ptr [ESI]
ram:065b584e    8b2d7c8b5b06    MOV         EBP,dword ptr [DAT_065b8b7c]
ram:065b5854    33c0            XOR         EAX,EAX
ram:065b5856    80f90a          CMP         CL,0xa
ram:065b5859    0f95c0          SETNZ       AL
ram:065b585c    83c603          ADD         ESI,0x3
ram:065b585f    8bf8            MOV         EDI,EAX
ram:065b5861    56              PUSH        ESI
ram:065b5862    e8a9000000      CALL        FUN_065b5910                            ;int FUN_065b5910(undefined1 * param_1)
ram:065b5867    8bf0            MOV         ESI,EAX
ram:065b5869    83c404          ADD         ESP,0x4
ram:065b586c    3bf7            CMP         ESI,EDI
ram:065b586e    7c2f            JL          switchD_065b5629::caseD_e
ram:065b5870    a17c8b5b06      MOV         EAX,[DAT_065b8b7c]
                            LAB_065b5875:                 ;XREF[1,0]:   065b589d
ram:065b5875    84db            TEST        BL,BL
ram:065b5877    7404            JZ          LAB_065b587d
ram:065b5879    3818            CMP         byte ptr [EAX],BL
ram:065b587b    7515            JNZ         LAB_065b5892
                            LAB_065b587d:                 ;XREF[1,0]:   065b5877
ram:065b587d    8b4c2414        MOV         ECX,dword ptr [ESP + param_1+0x10]
ram:065b5881    51              PUSH        ECX
ram:065b5882    e869fdffff      CALL        FUN_065b55f0                            ;undefined4 FUN_065b55f0(char * param_1)
ram:065b5887    83c404          ADD         ESP,0x4
ram:065b588a    85c0            TEST        EAX,EAX
ram:065b588c    0f8549ffffff    JNZ         switchD_065b5629::caseD_0
                            LAB_065b5892:                 ;XREF[1,0]:   065b587b
ram:065b5892    4e              DEC         ESI
ram:065b5893    3bf7            CMP         ESI,EDI
ram:065b5895    8d042e          LEA         EAX,[ESI + EBP*0x1]
ram:065b5898    a37c8b5b06      MOV         [DAT_065b8b7c],EAX
ram:065b589d    7dd6            JGE         LAB_065b5875
                            caseD_f:                      ;XREF[21,0]:  065b55fa,065b561b,065b5629,065b563d
                            caseD_10:                     ;             065b5650,065b567c,065b569a,065b56aa
                            caseD_11:                     ;             065b56ca,065b56d9,065b56fd,065b5729
                            caseD_12:                     ;             065b5741,065b5756,065b576d,065b5782
                            caseD_13:                     ;             065b57c7,065b57fc,065b5832,065b586e
                            caseD_14:                     ;             065b58e0
                            caseD_1e:
                            caseD_e:
ram:065b589f    5f              POP         EDI
ram:065b58a0    5e              POP         ESI
ram:065b58a1    5d              POP         EBP
ram:065b58a2    33c0            XOR         EAX,EAX
ram:065b58a4    5b              POP         EBX
ram:065b58a5    c3              RET
ram:065b58a6    8b              ??          8Bh
ram:065b58a7    ff              ??          FFh
                            switchdataD_065b58a8:         ;XREF[1,0]:   065b5629
ram:065b58a8    db575b06        addr        switchD_065b5629::caseD_0
ram:065b58ac    30565b06        addr        switchD_065b5629::caseD_1
ram:065b58b0    48565b06        addr        switchD_065b5629::caseD_2
ram:065b58b4    e4565b06        addr        switchD_065b5629::caseD_3
ram:065b58b8    37575b06        addr        switchD_065b5629::caseD_4
ram:065b58bc    64575b06        addr        switchD_065b5629::caseD_5
ram:065b58c0    90575b06        addr        switchD_065b5629::caseD_6
ram:065b58c4    9f575b06        addr        switchD_065b5629::caseD_7
ram:065b58c8    ef565b06        addr        switchD_065b5629::caseD_8
ram:065b58cc    40585b06        addr        switchD_065b5629::caseD_a
ram:065b58d0    5b565b06        addr        switchD_065b5629::caseD_c
ram:065b58d4    b5565b06        addr        switchD_065b5629::caseD_d
ram:065b58d8    b0575b06        addr        switchD_065b5629::caseD_15
ram:065b58dc    e5575b06        addr        switchD_065b5629::caseD_1f
ram:065b58e0    9f585b06        addr        switchD_065b5629::caseD_e
                            switchdataD_065b58e4:         ;XREF[1,0]:   065b5623
ram:065b58e4    00              db          0h
ram:065b58e5    01              db          1h
ram:065b58e6    02              db          2h
ram:065b58e7    03              db          3h
ram:065b58e8    04              db          4h
ram:065b58e9    05              db          5h
ram:065b58ea    06              db          6h
ram:065b58eb    07              db          7h
ram:065b58ec    08              db          8h
ram:065b58ed    07              db          7h
ram:065b58ee    09              db          9h
ram:065b58ef    09              db          9h
ram:065b58f0    0a              db          Ah
ram:065b58f1    0b              db          Bh
ram:065b58f2    0e              db          Eh
ram:065b58f3    0e              db          Eh
ram:065b58f4    0e              db          Eh
ram:065b58f5    0e              db          Eh
ram:065b58f6    0e              db          Eh
ram:065b58f7    0e              db          Eh
ram:065b58f8    0e              db          Eh
ram:065b58f9    0c              db          Ch
ram:065b58fa    0c              db          Ch
ram:065b58fb    0c              db          Ch
ram:065b58fc    0c              db          Ch
ram:065b58fd    0c              db          Ch
ram:065b58fe    0c              db          Ch
ram:065b58ff    0c              db          Ch
ram:065b5900    0c              db          Ch
ram:065b5901    0c              db          Ch
ram:065b5902    0e              db          Eh
ram:065b5903    0d              db          Dh
ram:065b5904    0d              db          Dh
ram:065b5905    0d              db          Dh
ram:065b5906    0d              db          Dh
ram:065b5907    0d              db          Dh
ram:065b5908    0d              db          Dh
ram:065b5909    0d              db          Dh
ram:065b590a    0d              db          Dh
ram:065b590b    0d              db          Dh
ram:065b590c    90              ??          90h
ram:065b590d    90              ??          90h
ram:065b590e    90              ??          90h
ram:065b590f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b5910(undefined1 * param_1)
          ;param_1       undefined1 *         4                      ;XREF[1,0]:   065b5910
                                                          ;XREF[1,0]:   065b5862
ram:065b5910    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b5914    53              PUSH        EBX
ram:065b5915    55              PUSH        EBP
ram:065b5916    56              PUSH        ESI
ram:065b5917    8b357c8b5b06    MOV         ESI,dword ptr [DAT_065b8b7c]
ram:065b591d    8d5803          LEA         EBX,[EAX + 0x3]
ram:065b5920    0fbe00          MOVSX       EAX,byte ptr [EAX]
ram:065b5923    57              PUSH        EDI
ram:065b5924    83c0fd          ADD         EAX,-0x3
ram:065b5927    33ff            XOR         EDI,EDI
ram:065b5929    83f805          CMP         EAX,0x5
ram:065b592c    0f87a0000000    JA          switchD_065b5932::caseD_6
                            switchD:                      ; FWD[6,0]:   065b5939,065b5956,065b5974,065b59a3
                                                          ;             065b59d2,065b59e4
ram:065b5932    ff2485e45...    JMP         dword ptr [EAX*0x4 + switchD_065b5932...;= 065b5939
                            caseD_3:                      ;XREF[2,0]:   065b5932,065b59e4
ram:065b5939    8bfe            MOV         EDI,ESI
ram:065b593b    83c9ff          OR          ECX,0xffffffff
ram:065b593e    33c0            XOR         EAX,EAX
ram:065b5940    f2ae            SCASB.REPNE ES:EDI
ram:065b5942    f7d1            NOT         ECX
ram:065b5944    49              DEC         ECX
ram:065b5945    8bf9            MOV         EDI,ECX
ram:065b5947    03f7            ADD         ESI,EDI
ram:065b5949    8bc7            MOV         EAX,EDI
ram:065b594b    89357c8b5b06    MOV         dword ptr [DAT_065b8b7c],ESI
ram:065b5951    5f              POP         EDI
ram:065b5952    5e              POP         ESI
ram:065b5953    5d              POP         EBP
ram:065b5954    5b              POP         EBX
ram:065b5955    c3              RET
                            caseD_8:                      ;XREF[2,0]:   065b5932,065b59f8
ram:065b5956    8a1b            MOV         BL,byte ptr [EBX]
ram:065b5958    8a06            MOV         AL,byte ptr [ESI]
ram:065b595a    3ad8            CMP         BL,AL
ram:065b595c    7576            JNZ         LAB_065b59d4
                            LAB_065b595e:                 ;XREF[1,0]:   065b5965
ram:065b595e    8a4601          MOV         AL,byte ptr [ESI + 0x1]
ram:065b5961    47              INC         EDI
ram:065b5962    46              INC         ESI
ram:065b5963    3ad8            CMP         BL,AL
ram:065b5965    74f7            JZ          LAB_065b595e
ram:065b5967    8bc7            MOV         EAX,EDI
ram:065b5969    89357c8b5b06    MOV         dword ptr [DAT_065b8b7c],ESI
ram:065b596f    5f              POP         EDI
ram:065b5970    5e              POP         ESI
ram:065b5971    5d              POP         EBP
ram:065b5972    5b              POP         EBX
ram:065b5973    c3              RET
                            caseD_4:                      ;XREF[2,0]:   065b5932,065b59e8
ram:065b5974    803e00          CMP         byte ptr [ESI],0x0
ram:065b5977    745b            JZ          LAB_065b59d4
ram:065b5979    8b2d5c705b06    MOV         EBP,dword ptr [DAT_065b705c]
                            LAB_065b597f:                 ;XREF[1,0]:   065b5994
ram:065b597f    0fbe06          MOVSX       EAX,byte ptr [ESI]
ram:065b5982    50              PUSH        EAX
ram:065b5983    53              PUSH        EBX
ram:065b5984    ffd5            CALL        EBP
ram:065b5986    83c408          ADD         ESP,0x8
ram:065b5989    85c0            TEST        EAX,EAX
ram:065b598b    7447            JZ          LAB_065b59d4
ram:065b598d    8a4601          MOV         AL,byte ptr [ESI + 0x1]
ram:065b5990    47              INC         EDI
ram:065b5991    46              INC         ESI
ram:065b5992    84c0            TEST        AL,AL
ram:065b5994    75e9            JNZ         LAB_065b597f
ram:065b5996    8bc7            MOV         EAX,EDI
ram:065b5998    89357c8b5b06    MOV         dword ptr [DAT_065b8b7c],ESI
ram:065b599e    5f              POP         EDI
ram:065b599f    5e              POP         ESI
ram:065b59a0    5d              POP         EBP
ram:065b59a1    5b              POP         EBX
ram:065b59a2    c3              RET
                            caseD_5:                      ;XREF[2,0]:   065b5932,065b59ec
ram:065b59a3    803e00          CMP         byte ptr [ESI],0x0
ram:065b59a6    742c            JZ          LAB_065b59d4
ram:065b59a8    8b2d5c705b06    MOV         EBP,dword ptr [DAT_065b705c]
                            LAB_065b59ae:                 ;XREF[1,0]:   065b59c3
ram:065b59ae    0fbe0e          MOVSX       ECX,byte ptr [ESI]
ram:065b59b1    51              PUSH        ECX
ram:065b59b2    53              PUSH        EBX
ram:065b59b3    ffd5            CALL        EBP
ram:065b59b5    83c408          ADD         ESP,0x8
ram:065b59b8    85c0            TEST        EAX,EAX
ram:065b59ba    7518            JNZ         LAB_065b59d4
ram:065b59bc    8a4601          MOV         AL,byte ptr [ESI + 0x1]
ram:065b59bf    47              INC         EDI
ram:065b59c0    46              INC         ESI
ram:065b59c1    84c0            TEST        AL,AL
ram:065b59c3    75e9            JNZ         LAB_065b59ae
ram:065b59c5    8bc7            MOV         EAX,EDI
ram:065b59c7    89357c8b5b06    MOV         dword ptr [DAT_065b8b7c],ESI
ram:065b59cd    5f              POP         EDI
ram:065b59ce    5e              POP         ESI
ram:065b59cf    5d              POP         EBP
ram:065b59d0    5b              POP         EBX
ram:065b59d1    c3              RET
                            caseD_7:                      ;XREF[4,0]:   065b592c,065b5932,065b59f0,065b59f4
                            caseD_6:
ram:065b59d2    33ff            XOR         EDI,EDI
                            LAB_065b59d4:                 ;XREF[5,0]:   065b595c,065b5977,065b598b,065b59a6
                                                          ;             065b59ba
ram:065b59d4    8bc7            MOV         EAX,EDI
ram:065b59d6    89357c8b5b06    MOV         dword ptr [DAT_065b8b7c],ESI
ram:065b59dc    5f              POP         EDI
ram:065b59dd    5e              POP         ESI
ram:065b59de    5d              POP         EBP
ram:065b59df    5b              POP         EBX
ram:065b59e0    c3              RET
ram:065b59e1    8d              ??          8Dh
ram:065b59e2    49              ??          49h    I
ram:065b59e3    00              ??          00h
                            switchdataD_065b59e4:         ;XREF[1,0]:   065b5932
ram:065b59e4    39595b06        addr        switchD_065b5932::caseD_3
ram:065b59e8    74595b06        addr        switchD_065b5932::caseD_4
ram:065b59ec    a3595b06        addr        switchD_065b5932::caseD_5
ram:065b59f0    d2595b06        addr        switchD_065b5932::caseD_6
ram:065b59f4    d2595b06        addr        switchD_065b5932::caseD_6
ram:065b59f8    56595b06        addr        switchD_065b5932::caseD_8
ram:065b59fc    90              ??          90h
ram:065b59fd    90              ??          90h
ram:065b59fe    90              ??          90h
ram:065b59ff    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;char * FUN_065b5a00(char * param_1)
          ;param_1       char *               4                      ;XREF[1,0]:   065b5a00
                                                          ;XREF[5,0]:   065b4c40,065b540e,065b541d,065b5607
                                                          ;             065b5826
ram:065b5a00    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b5a04    3d848b5b06      CMP         EAX,0x65b8b84
ram:065b5a09    7503            JNZ         LAB_065b5a0e
ram:065b5a0b    33c0            XOR         EAX,EAX
ram:065b5a0d    c3              RET
                            LAB_065b5a0e:                 ;XREF[1,0]:   065b5a09
ram:065b5a0e    33c9            XOR         ECX,ECX
ram:065b5a10    33d2            XOR         EDX,EDX
ram:065b5a12    8a4801          MOV         CL,byte ptr [EAX + 0x1]
ram:065b5a15    8a5002          MOV         DL,byte ptr [EAX + 0x2]
ram:065b5a18    c1e108          SHL         ECX,0x8
ram:065b5a1b    03ca            ADD         ECX,EDX
ram:065b5a1d    7503            JNZ         LAB_065b5a22
ram:065b5a1f    33c0            XOR         EAX,EAX
ram:065b5a21    c3              RET
                            LAB_065b5a22:                 ;XREF[1,0]:   065b5a1d
ram:065b5a22    803807          CMP         byte ptr [EAX],0x7
ram:065b5a25    7503            JNZ         LAB_065b5a2a
ram:065b5a27    2bc1            SUB         EAX,ECX
ram:065b5a29    c3              RET
                            LAB_065b5a2a:                 ;XREF[1,0]:   065b5a25
ram:065b5a2a    03c1            ADD         EAX,ECX
ram:065b5a2c    c3              RET
ram:065b5a2d    90              ??          90h
ram:065b5a2e    90              ??          90h
ram:065b5a2f    90              ??          90h
ram:065b5a30    8b              ??          8Bh
ram:065b5a31    c1              ??          C1h
ram:065b5a32    33              ??          33h    3
ram:065b5a33    c9              ??          C9h
ram:065b5a34    c7              ??          C7h
ram:065b5a35    00              ??          00h
ram:065b5a36    8c              ??          8Ch
ram:065b5a37    71              ??          71h    q
ram:065b5a38    5b              ??          5Bh    [
ram:065b5a39    06              ??          06h
ram:065b5a3a    89              ??          89h
ram:065b5a3b    48              ??          48h    H
ram:065b5a3c    08              ??          08h
ram:065b5a3d    89              ??          89h
ram:065b5a3e    48              ??          48h    H
ram:065b5a3f    10              ??          10h
ram:065b5a40    89              ??          89h
ram:065b5a41    48              ??          48h    H
ram:065b5a42    04              ??          04h
ram:065b5a43    c3              ??          C3h
ram:065b5a44    90              ??          90h
ram:065b5a45    90              ??          90h
ram:065b5a46    90              ??          90h
ram:065b5a47    90              ??          90h
ram:065b5a48    90              ??          90h
ram:065b5a49    90              ??          90h
ram:065b5a4a    90              ??          90h
ram:065b5a4b    90              ??          90h
ram:065b5a4c    90              ??          90h
ram:065b5a4d    90              ??          90h
ram:065b5a4e    90              ??          90h
ram:065b5a4f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5a50(undefined4 * param_1)
          ;param_1       undefined4 *       ECX
ram:065b5a50    56              PUSH        ESI
ram:065b5a51    8bf1            MOV         ESI,param_1
ram:065b5a53    8b4608          MOV         EAX,dword ptr [ESI + 0x8]
ram:065b5a56    c7068c715b06    MOV         dword ptr [ESI],0x65b718c
ram:065b5a5c    85c0            TEST        EAX,EAX
ram:065b5a5e    740a            JZ          LAB_065b5a6a
ram:065b5a60    50              PUSH        EAX
ram:065b5a61    ff1584705b06    CALL        dword ptr [DAT_065b7084]
ram:065b5a67    83c404          ADD         ESP,0x4
                            LAB_065b5a6a:                 ;XREF[1,0]:   065b5a5e
ram:065b5a6a    8bce            MOV         param_1,ESI
ram:065b5a6c    5e              POP         ESI
ram:065b5a6d    e92e000000      JMP         FUN_065b5aa0                            ;undefined FUN_065b5aa0(int param_1)
ram:065b5a72    90              ??          90h
ram:065b5a73    90              ??          90h
ram:065b5a74    90              ??          90h
ram:065b5a75    90              ??          90h
ram:065b5a76    90              ??          90h
ram:065b5a77    90              ??          90h
ram:065b5a78    90              ??          90h
ram:065b5a79    90              ??          90h
ram:065b5a7a    90              ??          90h
ram:065b5a7b    90              ??          90h
ram:065b5a7c    90              ??          90h
ram:065b5a7d    90              ??          90h
ram:065b5a7e    90              ??          90h
ram:065b5a7f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5a80(int param_1)
          ;param_1       int                ECX
ram:065b5a80    56              PUSH        ESI
ram:065b5a81    8bf1            MOV         ESI,param_1
ram:065b5a83    e818000000      CALL        FUN_065b5aa0                            ;undefined FUN_065b5aa0(int param_1)
ram:065b5a88    8b442408        MOV         EAX,dword ptr [ESP + Stack[0x4]+0x4]
ram:065b5a8c    50              PUSH        EAX
ram:065b5a8d    e83c040000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b5a92    83c404          ADD         ESP,0x4
ram:065b5a95    894604          MOV         dword ptr [ESI + 0x4],EAX
ram:065b5a98    5e              POP         ESI
ram:065b5a99    c20400          RET         0x4
ram:065b5a9c    90              ??          90h
ram:065b5a9d    90              ??          90h
ram:065b5a9e    90              ??          90h
ram:065b5a9f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5aa0(int param_1)
          ;param_1       int                ECX
                                                          ;XREF[2,0]:   065b5a6d,065b5a83
ram:065b5aa0    56              PUSH        ESI
ram:065b5aa1    8bf1            MOV         ESI,param_1
ram:065b5aa3    8b4604          MOV         EAX,dword ptr [ESI + 0x4]
ram:065b5aa6    85c0            TEST        EAX,EAX
ram:065b5aa8    7410            JZ          LAB_065b5aba
ram:065b5aaa    50              PUSH        EAX
ram:065b5aab    e812040000      CALL        free_delete                             ;undefined free_delete(void)
ram:065b5ab0    83c404          ADD         ESP,0x4
ram:065b5ab3    c74604000...    MOV         dword ptr [ESI + 0x4],0x0
                            LAB_065b5aba:                 ;XREF[1,0]:   065b5aa8
ram:065b5aba    5e              POP         ESI
ram:065b5abb    c3              RET
ram:065b5abc    90              ??          90h
ram:065b5abd    90              ??          90h
ram:065b5abe    90              ??          90h
ram:065b5abf    90              ??          90h
ram:065b5ac0    56              ??          56h    V
ram:065b5ac1    8b              ??          8Bh
ram:065b5ac2    74              ??          74h    t
ram:065b5ac3    24              ??          24h    $
ram:065b5ac4    08              ??          08h
ram:065b5ac5    8b              ??          8Bh
ram:065b5ac6    46              ??          46h    F
ram:065b5ac7    08              ??          08h
ram:065b5ac8    85              ??          85h
ram:065b5ac9    c0              ??          C0h
ram:065b5aca    74              ??          74h    t
ram:065b5acb    11              ??          11h
ram:065b5acc    50              ??          50h    P
ram:065b5acd    ff              ??          FFh
ram:065b5ace    15              ??          15h
ram:065b5acf    84              ??          84h
ram:065b5ad0    70              ??          70h    p
ram:065b5ad1    5b              ??          5Bh    [
ram:065b5ad2    06              ??          06h
ram:065b5ad3    83              ??          83h
ram:065b5ad4    c4              ??          C4h
ram:065b5ad5    04              ??          04h
ram:065b5ad6    c7              ??          C7h
ram:065b5ad7    46              ??          46h    F
ram:065b5ad8    08              ??          08h
ram:065b5ad9    00              ??          00h
ram:065b5ada    00              ??          00h
ram:065b5adb    00              ??          00h
ram:065b5adc    00              ??          00h
ram:065b5add    8b              ??          8Bh
ram:065b5ade    44              ??          44h    D
ram:065b5adf    24              ??          24h    $
ram:065b5ae0    0c              ??          0Ch
ram:065b5ae1    50              ??          50h    P
ram:065b5ae2    e8              ??          E8h
ram:065b5ae3    29              ??          29h    )
ram:065b5ae4    ef              ??          EFh
ram:065b5ae5    ff              ??          FFh
ram:065b5ae6    ff              ??          FFh
ram:065b5ae7    83              ??          83h
ram:065b5ae8    c4              ??          C4h
ram:065b5ae9    04              ??          04h
ram:065b5aea    33              ??          33h    3
ram:065b5aeb    c9              ??          C9h
ram:065b5aec    85              ??          85h
ram:065b5aed    c0              ??          C0h
ram:065b5aee    0f              ??          0Fh
ram:065b5aef    95              ??          95h
ram:065b5af0    c1              ??          C1h
ram:065b5af1    89              ??          89h
ram:065b5af2    46              ??          46h    F
ram:065b5af3    08              ??          08h
ram:065b5af4    8a              ??          8Ah
ram:065b5af5    c1              ??          C1h
ram:065b5af6    5e              ??          5Eh    ^
ram:065b5af7    c2              ??          C2h
ram:065b5af8    08              ??          08h
ram:065b5af9    00              ??          00h
ram:065b5afa    90              ??          90h
ram:065b5afb    90              ??          90h
ram:065b5afc    90              ??          90h
ram:065b5afd    90              ??          90h
ram:065b5afe    90              ??          90h
ram:065b5aff    90              ??          90h
ram:065b5b00    8b              ??          8Bh
ram:065b5b01    4c              ??          4Ch    L
ram:065b5b02    24              ??          24h    $
ram:065b5b03    08              ??          08h
ram:065b5b04    56              ??          56h    V
ram:065b5b05    8b              ??          8Bh
ram:065b5b06    74              ??          74h    t
ram:065b5b07    24              ??          24h    $
ram:065b5b08    08              ??          08h
ram:065b5b09    8b              ??          8Bh
ram:065b5b0a    46              ??          46h    F
ram:065b5b0b    08              ??          08h
ram:065b5b0c    89              ??          89h
ram:065b5b0d    4e              ??          4Eh    N
ram:065b5b0e    10              ??          10h
ram:065b5b0f    85              ??          85h
ram:065b5b10    c0              ??          C0h
ram:065b5b11    c7              ??          C7h
ram:065b5b12    46              ??          46h    F
ram:065b5b13    0c              ??          0Ch
ram:065b5b14    00              ??          00h
ram:065b5b15    00              ??          00h
ram:065b5b16    00              ??          00h
ram:065b5b17    00              ??          00h
ram:065b5b18    74              ??          74h    t
ram:065b5b19    0d              ??          0Dh
ram:065b5b1a    51              ??          51h    Q
ram:065b5b1b    50              ??          50h    P
ram:065b5b1c    e8              ??          E8h
ram:065b5b1d    6f              ??          6Fh    o
ram:065b5b1e    f9              ??          F9h
ram:065b5b1f    ff              ??          FFh
ram:065b5b20    ff              ??          FFh
ram:065b5b21    83              ??          83h
ram:065b5b22    c4              ??          C4h
ram:065b5b23    08              ??          08h
ram:065b5b24    89              ??          89h
ram:065b5b25    46              ??          46h    F
ram:065b5b26    0c              ??          0Ch
ram:065b5b27    8b              ??          8Bh
ram:065b5b28    46              ??          46h    F
ram:065b5b29    0c              ??          0Ch
ram:065b5b2a    5e              ??          5Eh    ^
ram:065b5b2b    c2              ??          C2h
ram:065b5b2c    08              ??          08h
ram:065b5b2d    00              ??          00h
ram:065b5b2e    90              ??          90h
ram:065b5b2f    90              ??          90h
ram:065b5b30    55              ??          55h    U
ram:065b5b31    56              ??          56h    V
ram:065b5b32    57              ??          57h    W
ram:065b5b33    8b              ??          8Bh
ram:065b5b34    7c              ??          7Ch    |
ram:065b5b35    24              ??          24h    $
ram:065b5b36    10              ??          10h
ram:065b5b37    8b              ??          8Bh
ram:065b5b38    77              ??          77h    w
ram:065b5b39    08              ??          08h
ram:065b5b3a    85              ??          85h
ram:065b5b3b    f6              ??          F6h
ram:065b5b3c    74              ??          74h    t
ram:065b5b3d    6f              ??          6Fh    o
ram:065b5b3e    8b              ??          8Bh
ram:065b5b3f    47              ??          47h    G
ram:065b5b40    0c              ??          0Ch
ram:065b5b41    85              ??          85h
ram:065b5b42    c0              ??          C0h
ram:065b5b43    74              ??          74h    t
ram:065b5b44    68              ??          68h    h
ram:065b5b45    8b              ??          8Bh
ram:065b5b46    6c              ??          6Ch    l
ram:065b5b47    24              ??          24h    $
ram:065b5b48    14              ??          14h
ram:065b5b49    8b              ??          8Bh
ram:065b5b4a    0c              ??          0Ch
ram:065b5b4b    ae              ??          AEh
ram:065b5b4c    85              ??          85h
ram:065b5b4d    c9              ??          C9h
ram:065b5b4e    74              ??          74h    t
ram:065b5b4f    5d              ??          5Dh    ]
ram:065b5b50    8b              ??          8Bh
ram:065b5b51    44              ??          44h    D
ram:065b5b52    ae              ??          AEh
ram:065b5b53    28              ??          28h    (
ram:065b5b54    85              ??          85h
ram:065b5b55    c0              ??          C0h
ram:065b5b56    74              ??          74h    t
ram:065b5b57    55              ??          55h    U
ram:065b5b58    8b              ??          8Bh
ram:065b5b59    7c              ??          7Ch    |
ram:065b5b5a    24              ??          24h    $
ram:065b5b5b    20              ??          20h
ram:065b5b5c    2b              ??          2Bh    +
ram:065b5b5d    c1              ??          C1h
ram:065b5b5e    2b              ??          2Bh    +
ram:065b5b5f    c7              ??          C7h
ram:065b5b60    53              ??          53h    S
ram:065b5b61    8b              ??          8Bh
ram:065b5b62    d8              ??          D8h
ram:065b5b63    8b              ??          8Bh
ram:065b5b64    44              ??          44h    D
ram:065b5b65    24              ??          24h    $
ram:065b5b66    1c              ??          1Ch
ram:065b5b67    85              ??          85h
ram:065b5b68    c0              ??          C0h
ram:065b5b69    74              ??          74h    t
ram:065b5b6a    0c              ??          0Ch
ram:065b5b6b    8b              ??          8Bh
ram:065b5b6c    4c              ??          4Ch    L
ram:065b5b6d    24              ??          24h    $
ram:065b5b6e    20              ??          20h
ram:065b5b6f    3b              ??          3Bh    ;
ram:065b5b70    d9              ??          D9h
ram:065b5b71    7e              ??          7Eh    ~
ram:065b5b72    18              ??          18h
ram:065b5b73    8b              ??          8Bh
ram:065b5b74    d9              ??          D9h
ram:065b5b75    eb              ??          EBh
ram:065b5b76    14              ??          14h
ram:065b5b77    8b              ??          8Bh
ram:065b5b78    4c              ??          4Ch    L
ram:065b5b79    24              ??          24h    $
ram:065b5b7a    14              ??          14h
ram:065b5b7b    8d              ??          8Dh
ram:065b5b7c    43              ??          43h    C
ram:065b5b7d    01              ??          01h
ram:065b5b7e    50              ??          50h    P
ram:065b5b7f    e8              ??          E8h
ram:065b5b80    fc              ??          FCh
ram:065b5b81    fe              ??          FEh
ram:065b5b82    ff              ??          FFh
ram:065b5b83    ff              ??          FFh
ram:065b5b84    8b              ??          8Bh
ram:065b5b85    4c              ??          4Ch    L
ram:065b5b86    24              ??          24h    $
ram:065b5b87    14              ??          14h
ram:065b5b88    8b              ??          8Bh
ram:065b5b89    41              ??          41h    A
ram:065b5b8a    04              ??          04h
ram:065b5b8b    8b              ??          8Bh
ram:065b5b8c    34              ??          34h    4
ram:065b5b8d    ae              ??          AEh
ram:065b5b8e    8b              ??          8Bh
ram:065b5b8f    cb              ??          CBh
ram:065b5b90    8b              ??          8Bh
ram:065b5b91    d1              ??          D1h
ram:065b5b92    03              ??          03h
ram:065b5b93    f7              ??          F7h
ram:065b5b94    8b              ??          8Bh
ram:065b5b95    f8              ??          F8h
ram:065b5b96    c1              ??          C1h
ram:065b5b97    e9              ??          E9h
ram:065b5b98    02              ??          02h
ram:065b5b99    f3              ??          F3h
ram:065b5b9a    a5              ??          A5h
ram:065b5b9b    8b              ??          8Bh
ram:065b5b9c    ca              ??          CAh
ram:065b5b9d    83              ??          83h
ram:065b5b9e    e1              ??          E1h
ram:065b5b9f    03              ??          03h
ram:065b5ba0    f3              ??          F3h
ram:065b5ba1    a4              ??          A4h
ram:065b5ba2    c6              ??          C6h
ram:065b5ba3    04              ??          04h
ram:065b5ba4    03              ??          03h
ram:065b5ba5    00              ??          00h
ram:065b5ba6    5b              ??          5Bh    [
ram:065b5ba7    5f              ??          5Fh    _
ram:065b5ba8    5e              ??          5Eh    ^
ram:065b5ba9    5d              ??          5Dh    ]
ram:065b5baa    c2              ??          C2h
ram:065b5bab    18              ??          18h
ram:065b5bac    00              ??          00h
ram:065b5bad    8b              ??          8Bh
ram:065b5bae    4c              ??          4Ch    L
ram:065b5baf    24              ??          24h    $
ram:065b5bb0    18              ??          18h
ram:065b5bb1    85              ??          85h
ram:065b5bb2    c9              ??          C9h
ram:065b5bb3    75              ??          75h    u
ram:065b5bb4    0c              ??          0Ch
ram:065b5bb5    6a              ??          6Ah    j
ram:065b5bb6    01              ??          01h
ram:065b5bb7    8b              ??          8Bh
ram:065b5bb8    cf              ??          CFh
ram:065b5bb9    e8              ??          E8h
ram:065b5bba    c2              ??          C2h
ram:065b5bbb    fe              ??          FEh
ram:065b5bbc    ff              ??          FFh
ram:065b5bbd    ff              ??          FFh
ram:065b5bbe    8b              ??          8Bh
ram:065b5bbf    4f              ??          4Fh    O
ram:065b5bc0    04              ??          04h
ram:065b5bc1    8b              ??          8Bh
ram:065b5bc2    44              ??          44h    D
ram:065b5bc3    24              ??          24h    $
ram:065b5bc4    24              ??          24h    $
ram:065b5bc5    5f              ??          5Fh    _
ram:065b5bc6    f7              ??          F7h
ram:065b5bc7    d8              ??          D8h
ram:065b5bc8    1b              ??          1Bh
ram:065b5bc9    c0              ??          C0h
ram:065b5bca    5e              ??          5Eh    ^
ram:065b5bcb    f7              ??          F7h
ram:065b5bcc    d0              ??          D0h
ram:065b5bcd    c6              ??          C6h
ram:065b5bce    01              ??          01h
ram:065b5bcf    00              ??          00h
ram:065b5bd0    23              ??          23h    #
ram:065b5bd1    c1              ??          C1h
ram:065b5bd2    5d              ??          5Dh    ]
ram:065b5bd3    c2              ??          C2h
ram:065b5bd4    18              ??          18h
ram:065b5bd5    00              ??          00h
ram:065b5bd6    90              ??          90h
ram:065b5bd7    90              ??          90h
ram:065b5bd8    90              ??          90h
ram:065b5bd9    90              ??          90h
ram:065b5bda    90              ??          90h
ram:065b5bdb    90              ??          90h
ram:065b5bdc    90              ??          90h
ram:065b5bdd    90              ??          90h
ram:065b5bde    90              ??          90h
ram:065b5bdf    90              ??          90h
ram:065b5be0    8b              ??          8Bh
ram:065b5be1    44              ??          44h    D
ram:065b5be2    24              ??          24h    $
ram:065b5be3    04              ??          04h
ram:065b5be4    8b              ??          8Bh
ram:065b5be5    48              ??          48h    H
ram:065b5be6    08              ??          08h
ram:065b5be7    85              ??          85h
ram:065b5be8    c9              ??          C9h
ram:065b5be9    74              ??          74h    t
ram:065b5bea    17              ??          17h
ram:065b5beb    8b              ??          8Bh
ram:065b5bec    50              ??          50h    P
ram:065b5bed    0c              ??          0Ch
ram:065b5bee    85              ??          85h
ram:065b5bef    d2              ??          D2h
ram:065b5bf0    74              ??          74h    t
ram:065b5bf1    10              ??          10h
ram:065b5bf2    8b              ??          8Bh
ram:065b5bf3    44              ??          44h    D
ram:065b5bf4    24              ??          24h    $
ram:065b5bf5    08              ??          08h
ram:065b5bf6    8b              ??          8Bh
ram:065b5bf7    04              ??          04h
ram:065b5bf8    81              ??          81h
ram:065b5bf9    85              ??          85h
ram:065b5bfa    c0              ??          C0h
ram:065b5bfb    74              ??          74h    t
ram:065b5bfc    05              ??          05h
ram:065b5bfd    2b              ??          2Bh    +
ram:065b5bfe    01              ??          01h
ram:065b5bff    c2              ??          C2h
ram:065b5c00    08              ??          08h
ram:065b5c01    00              ??          00h
ram:065b5c02    83              ??          83h
ram:065b5c03    c8              ??          C8h
ram:065b5c04    ff              ??          FFh
ram:065b5c05    c2              ??          C2h
ram:065b5c06    08              ??          08h
ram:065b5c07    00              ??          00h
ram:065b5c08    90              ??          90h
ram:065b5c09    90              ??          90h
ram:065b5c0a    90              ??          90h
ram:065b5c0b    90              ??          90h
ram:065b5c0c    90              ??          90h
ram:065b5c0d    90              ??          90h
ram:065b5c0e    90              ??          90h
ram:065b5c0f    90              ??          90h
ram:065b5c10    8b              ??          8Bh
ram:065b5c11    4c              ??          4Ch    L
ram:065b5c12    24              ??          24h    $
ram:065b5c13    04              ??          04h
ram:065b5c14    8b              ??          8Bh
ram:065b5c15    41              ??          41h    A
ram:065b5c16    08              ??          08h
ram:065b5c17    85              ??          85h
ram:065b5c18    c0              ??          C0h
ram:065b5c19    74              ??          74h    t
ram:065b5c1a    18              ??          18h
ram:065b5c1b    8b              ??          8Bh
ram:065b5c1c    51              ??          51h    Q
ram:065b5c1d    0c              ??          0Ch
ram:065b5c1e    85              ??          85h
ram:065b5c1f    d2              ??          D2h
ram:065b5c20    74              ??          74h    t
ram:065b5c21    11              ??          11h
ram:065b5c22    8b              ??          8Bh
ram:065b5c23    54              ??          54h    T
ram:065b5c24    24              ??          24h    $
ram:065b5c25    08              ??          08h
ram:065b5c26    8b              ??          8Bh
ram:065b5c27    04              ??          04h
ram:065b5c28    90              ??          90h
ram:065b5c29    85              ??          85h
ram:065b5c2a    c0              ??          C0h
ram:065b5c2b    74              ??          74h    t
ram:065b5c2c    06              ??          06h
ram:065b5c2d    2b              ??          2Bh    +
ram:065b5c2e    41              ??          41h    A
ram:065b5c2f    10              ??          10h
ram:065b5c30    c2              ??          C2h
ram:065b5c31    08              ??          08h
ram:065b5c32    00              ??          00h
ram:065b5c33    83              ??          83h
ram:065b5c34    c8              ??          C8h
ram:065b5c35    ff              ??          FFh
ram:065b5c36    c2              ??          C2h
ram:065b5c37    08              ??          08h
ram:065b5c38    00              ??          00h
ram:065b5c39    90              ??          90h
ram:065b5c3a    90              ??          90h
ram:065b5c3b    90              ??          90h
ram:065b5c3c    90              ??          90h
ram:065b5c3d    90              ??          90h
ram:065b5c3e    90              ??          90h
ram:065b5c3f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5c40(void)
                                                          ;XREF[1,0]:   065b31bc
ram:065b5c40    56              PUSH        ESI
ram:065b5c41    6a0c            PUSH        0xc
ram:065b5c43    e886020000      CALL        FUN_065b5ece                            ;undefined FUN_065b5ece(void)
ram:065b5c48    8bf0            MOV         ESI,EAX
ram:065b5c4a    83c404          ADD         ESP,0x4
ram:065b5c4d    85f6            TEST        ESI,ESI
ram:065b5c4f    7430            JZ          LAB_065b5c81
ram:065b5c51    c74604010...    MOV         dword ptr [ESI + 0x4],0x1
ram:065b5c58    c74608fc8...    MOV         dword ptr [ESI + 0x8],0x65b83fc
ram:065b5c5f    c706ac715b06    MOV         dword ptr [ESI],0x65b71ac
ram:065b5c65    e866d5ffff      CALL        DACOM_Acquire                           ;undefined4 DACOM_Acquire(void)
ram:065b5c6a    8b08            MOV         ECX,dword ptr [EAX]
ram:065b5c6c    6800000040      PUSH        0x40000000
ram:065b5c71    68fc835b06      PUSH        0x65b83fc
ram:065b5c76    56              PUSH        ESI
ram:065b5c77    50              PUSH        EAX
ram:065b5c78    ff5110          CALL        dword ptr [ECX + 0x10]
ram:065b5c7b    8b16            MOV         EDX,dword ptr [ESI]
ram:065b5c7d    56              PUSH        ESI
ram:065b5c7e    ff5208          CALL        dword ptr [EDX + 0x8]=>DAT_065b71b4
                            LAB_065b5c81:                 ;XREF[1,0]:   065b5c4f
ram:065b5c81    5e              POP         ESI
ram:065b5c82    c3              RET
ram:065b5c83    90              ??          90h
ram:065b5c84    90              ??          90h
ram:065b5c85    90              ??          90h
ram:065b5c86    90              ??          90h
ram:065b5c87    90              ??          90h
ram:065b5c88    90              ??          90h
ram:065b5c89    90              ??          90h
ram:065b5c8a    90              ??          90h
ram:065b5c8b    90              ??          90h
ram:065b5c8c    90              ??          90h
ram:065b5c8d    90              ??          90h
ram:065b5c8e    90              ??          90h
ram:065b5c8f    90              ??          90h
ram:065b5c90    8b              ??          8Bh
ram:065b5c91    4c              ??          4Ch    L
ram:065b5c92    24              ??          24h    $
ram:065b5c93    04              ??          04h
ram:065b5c94    8b              ??          8Bh
ram:065b5c95    41              ??          41h    A
ram:065b5c96    04              ??          04h
ram:065b5c97    85              ??          85h
ram:065b5c98    c0              ??          C0h
ram:065b5c99    76              ??          76h    v
ram:065b5c9a    04              ??          04h
ram:065b5c9b    48              ??          48h    H
ram:065b5c9c    89              ??          89h
ram:065b5c9d    41              ??          41h    A
ram:065b5c9e    04              ??          04h
ram:065b5c9f    8b              ??          8Bh
ram:065b5ca0    41              ??          41h    A
ram:065b5ca1    04              ??          04h
ram:065b5ca2    85              ??          85h
ram:065b5ca3    c0              ??          C0h
ram:065b5ca4    75              ??          75h    u
ram:065b5ca5    12              ??          12h
ram:065b5ca6    51              ??          51h    Q
ram:065b5ca7    c7              ??          C7h
ram:065b5ca8    41              ??          41h    A
ram:065b5ca9    04              ??          04h
ram:065b5caa    01              ??          01h
ram:065b5cab    00              ??          00h
ram:065b5cac    00              ??          00h
ram:065b5cad    00              ??          00h
ram:065b5cae    e8              ??          E8h
ram:065b5caf    0f              ??          0Fh
ram:065b5cb0    02              ??          02h
ram:065b5cb1    00              ??          00h
ram:065b5cb2    00              ??          00h
ram:065b5cb3    83              ??          83h
ram:065b5cb4    c4              ??          C4h
ram:065b5cb5    04              ??          04h
ram:065b5cb6    33              ??          33h    3
ram:065b5cb7    c0              ??          C0h
ram:065b5cb8    c2              ??          C2h
ram:065b5cb9    04              ??          04h
ram:065b5cba    00              ??          00h
ram:065b5cbb    90              ??          90h
ram:065b5cbc    90              ??          90h
ram:065b5cbd    90              ??          90h
ram:065b5cbe    90              ??          90h
ram:065b5cbf    90              ??          90h
ram:065b5cc0    8b              ??          8Bh
ram:065b5cc1    44              ??          44h    D
ram:065b5cc2    24              ??          24h    $
ram:065b5cc3    08              ??          08h
ram:065b5cc4    57              ??          57h    W
ram:065b5cc5    33              ??          33h    3
ram:065b5cc6    ff              ??          FFh
ram:065b5cc7    83              ??          83h
ram:065b5cc8    38              ??          38h    8
ram:065b5cc9    08              ??          08h
ram:065b5cca    0f              ??          0Fh
ram:065b5ccb    85              ??          85h
ram:065b5ccc    80              ??          80h
ram:065b5ccd    00              ??          00h
ram:065b5cce    00              ??          00h
ram:065b5ccf    00              ??          00h
ram:065b5cd0    8b              ??          8Bh
ram:065b5cd1    4c              ??          4Ch    L
ram:065b5cd2    24              ??          24h    $
ram:065b5cd3    08              ??          08h
ram:065b5cd4    8b              ??          8Bh
ram:065b5cd5    40              ??          40h    @
ram:065b5cd6    04              ??          04h
ram:065b5cd7    53              ??          53h    S
ram:065b5cd8    56              ??          56h    V
ram:065b5cd9    8b              ??          8Bh
ram:065b5cda    71              ??          71h    q
ram:065b5cdb    08              ??          08h
ram:065b5cdc    8a              ??          8Ah
ram:065b5cdd    10              ??          10h
ram:065b5cde    8a              ??          8Ah
ram:065b5cdf    1e              ??          1Eh
ram:065b5ce0    8a              ??          8Ah
ram:065b5ce1    ca              ??          CAh
ram:065b5ce2    3a              ??          3Ah    :
ram:065b5ce3    d3              ??          D3h
ram:065b5ce4    75              ??          75h    u
ram:065b5ce5    1e              ??          1Eh
ram:065b5ce6    84              ??          84h
ram:065b5ce7    c9              ??          C9h
ram:065b5ce8    74              ??          74h    t
ram:065b5ce9    16              ??          16h
ram:065b5cea    8a              ??          8Ah
ram:065b5ceb    50              ??          50h    P
ram:065b5cec    01              ??          01h
ram:065b5ced    8a              ??          8Ah
ram:065b5cee    5e              ??          5Eh    ^
ram:065b5cef    01              ??          01h
ram:065b5cf0    8a              ??          8Ah
ram:065b5cf1    ca              ??          CAh
ram:065b5cf2    3a              ??          3Ah    :
ram:065b5cf3    d3              ??          D3h
ram:065b5cf4    75              ??          75h    u
ram:065b5cf5    0e              ??          0Eh
ram:065b5cf6    83              ??          83h
ram:065b5cf7    c0              ??          C0h
ram:065b5cf8    02              ??          02h
ram:065b5cf9    83              ??          83h
ram:065b5cfa    c6              ??          C6h
ram:065b5cfb    02              ??          02h
ram:065b5cfc    84              ??          84h
ram:065b5cfd    c9              ??          C9h
ram:065b5cfe    75              ??          75h    u
ram:065b5cff    dc              ??          DCh
ram:065b5d00    33              ??          33h    3
ram:065b5d01    c0              ??          C0h
ram:065b5d02    eb              ??          EBh
ram:065b5d03    05              ??          05h
ram:065b5d04    1b              ??          1Bh
ram:065b5d05    c0              ??          C0h
ram:065b5d06    83              ??          83h
ram:065b5d07    d8              ??          D8h
ram:065b5d08    ff              ??          FFh
ram:065b5d09    5e              ??          5Eh    ^
ram:065b5d0a    5b              ??          5Bh    [
ram:065b5d0b    85              ??          85h
ram:065b5d0c    c0              ??          C0h
ram:065b5d0d    75              ??          75h    u
ram:065b5d0e    41              ??          41h    A
ram:065b5d0f    6a              ??          6Ah    j
ram:065b5d10    18              ??          18h
ram:065b5d11    e8              ??          E8h
ram:065b5d12    b8              ??          B8h
ram:065b5d13    01              ??          01h
ram:065b5d14    00              ??          00h
ram:065b5d15    00              ??          00h
ram:065b5d16    8b              ??          8Bh
ram:065b5d17    d0              ??          D0h
ram:065b5d18    83              ??          83h
ram:065b5d19    c4              ??          C4h
ram:065b5d1a    04              ??          04h
ram:065b5d1b    85              ??          85h
ram:065b5d1c    d2              ??          D2h
ram:065b5d1d    74              ??          74h    t
ram:065b5d1e    20              ??          20h
ram:065b5d1f    8b              ??          8Bh
ram:065b5d20    ca              ??          CAh
ram:065b5d21    e8              ??          E8h
ram:065b5d22    0a              ??          0Ah
ram:065b5d23    fd              ??          FDh
ram:065b5d24    ff              ??          FFh
ram:065b5d25    ff              ??          FFh
ram:065b5d26    8b              ??          8Bh
ram:065b5d27    4c              ??          4Ch    L
ram:065b5d28    24              ??          24h    $
ram:065b5d29    10              ??          10h
ram:065b5d2a    c7              ??          C7h
ram:065b5d2b    02              ??          02h
ram:065b5d2c    bc              ??          BCh
ram:065b5d2d    71              ??          71h    q
ram:065b5d2e    5b              ??          5Bh    [
ram:065b5d2f    06              ??          06h
ram:065b5d30    c7              ??          C7h
ram:065b5d31    42              ??          42h    B
ram:065b5d32    14              ??          14h
ram:065b5d33    01              ??          01h
ram:065b5d34    00              ??          00h
ram:065b5d35    00              ??          00h
ram:065b5d36    00              ??          00h
ram:065b5d37    33              ??          33h    3
ram:065b5d38    c0              ??          C0h
ram:065b5d39    89              ??          89h
ram:065b5d3a    11              ??          11h
ram:065b5d3b    5f              ??          5Fh    _
ram:065b5d3c    c2              ??          C2h
ram:065b5d3d    0c              ??          0Ch
ram:065b5d3e    00              ??          00h
ram:065b5d3f    8b              ??          8Bh
ram:065b5d40    54              ??          54h    T
ram:065b5d41    24              ??          24h    $
ram:065b5d42    10              ??          10h
ram:065b5d43    33              ??          33h    3
ram:065b5d44    c9              ??          C9h
ram:065b5d45    b8              ??          B8h
ram:065b5d46    fc              ??          FCh
ram:065b5d47    ff              ??          FFh
ram:065b5d48    ff              ??          FFh
ram:065b5d49    ff              ??          FFh
ram:065b5d4a    5f              ??          5Fh    _
ram:065b5d4b    89              ??          89h
ram:065b5d4c    0a              ??          0Ah
ram:065b5d4d    c2              ??          C2h
ram:065b5d4e    0c              ??          0Ch
ram:065b5d4f    00              ??          00h
ram:065b5d50    8b              ??          8Bh
ram:065b5d51    54              ??          54h    T
ram:065b5d52    24              ??          24h    $
ram:065b5d53    10              ??          10h
ram:065b5d54    b8              ??          B8h
ram:065b5d55    fd              ??          FDh
ram:065b5d56    ff              ??          FFh
ram:065b5d57    ff              ??          FFh
ram:065b5d58    ff              ??          FFh
ram:065b5d59    89              ??          89h
ram:065b5d5a    3a              ??          3Ah    :
ram:065b5d5b    5f              ??          5Fh    _
ram:065b5d5c    c2              ??          C2h
ram:065b5d5d    0c              ??          0Ch
ram:065b5d5e    00              ??          00h
ram:065b5d5f    90              ??          90h
ram:065b5d60    a1              ??          A1h
ram:065b5d61    dc              ??          DCh
ram:065b5d62    71              ??          71h    q
ram:065b5d63    5b              ??          5Bh    [
ram:065b5d64    06              ??          06h
ram:065b5d65    53              ??          53h    S
ram:065b5d66    55              ??          55h    U
ram:065b5d67    56              ??          56h    V
ram:065b5d68    57              ??          57h    W
ram:065b5d69    33              ??          33h    3
ram:065b5d6a    ff              ??          FFh
ram:065b5d6b    85              ??          85h
ram:065b5d6c    c0              ??          C0h
ram:065b5d6d    74              ??          74h    t
ram:065b5d6e    43              ??          43h    C
ram:065b5d6f    8b              ??          8Bh
ram:065b5d70    6c              ??          6Ch    l
ram:065b5d71    24              ??          24h    $
ram:065b5d72    18              ??          18h
ram:065b5d73    8b              ??          8Bh
ram:065b5d74    f5              ??          F5h
ram:065b5d75    8a              ??          8Ah
ram:065b5d76    10              ??          10h
ram:065b5d77    8a              ??          8Ah
ram:065b5d78    1e              ??          1Eh
ram:065b5d79    8a              ??          8Ah
ram:065b5d7a    ca              ??          CAh
ram:065b5d7b    3a              ??          3Ah    :
ram:065b5d7c    d3              ??          D3h
ram:065b5d7d    75              ??          75h    u
ram:065b5d7e    1e              ??          1Eh
ram:065b5d7f    84              ??          84h
ram:065b5d80    c9              ??          C9h
ram:065b5d81    74              ??          74h    t
ram:065b5d82    16              ??          16h
ram:065b5d83    8a              ??          8Ah
ram:065b5d84    50              ??          50h    P
ram:065b5d85    01              ??          01h
ram:065b5d86    8a              ??          8Ah
ram:065b5d87    5e              ??          5Eh    ^
ram:065b5d88    01              ??          01h
ram:065b5d89    8a              ??          8Ah
ram:065b5d8a    ca              ??          CAh
ram:065b5d8b    3a              ??          3Ah    :
ram:065b5d8c    d3              ??          D3h
ram:065b5d8d    75              ??          75h    u
ram:065b5d8e    0e              ??          0Eh
ram:065b5d8f    83              ??          83h
ram:065b5d90    c0              ??          C0h
ram:065b5d91    02              ??          02h
ram:065b5d92    83              ??          83h
ram:065b5d93    c6              ??          C6h
ram:065b5d94    02              ??          02h
ram:065b5d95    84              ??          84h
ram:065b5d96    c9              ??          C9h
ram:065b5d97    75              ??          75h    u
ram:065b5d98    dc              ??          DCh
ram:065b5d99    33              ??          33h    3
ram:065b5d9a    c0              ??          C0h
ram:065b5d9b    eb              ??          EBh
ram:065b5d9c    05              ??          05h
ram:065b5d9d    1b              ??          1Bh
ram:065b5d9e    c0              ??          C0h
ram:065b5d9f    83              ??          83h
ram:065b5da0    d8              ??          D8h
ram:065b5da1    ff              ??          FFh
ram:065b5da2    85              ??          85h
ram:065b5da3    c0              ??          C0h
ram:065b5da4    74              ??          74h    t
ram:065b5da5    22              ??          22h    "
ram:065b5da6    8b              ??          8Bh
ram:065b5da7    04              ??          04h
ram:065b5da8    fd              ??          FDh
ram:065b5da9    e4              ??          E4h
ram:065b5daa    71              ??          71h    q
ram:065b5dab    5b              ??          5Bh    [
ram:065b5dac    06              ??          06h
ram:065b5dad    47              ??          47h    G
ram:065b5dae    85              ??          85h
ram:065b5daf    c0              ??          C0h
ram:065b5db0    75              ??          75h    u
ram:065b5db1    c1              ??          C1h
ram:065b5db2    8b              ??          8Bh
ram:065b5db3    54              ??          54h    T
ram:065b5db4    24              ??          24h    $
ram:065b5db5    1c              ??          1Ch
ram:065b5db6    5f              ??          5Fh    _
ram:065b5db7    5e              ??          5Eh    ^
ram:065b5db8    5d              ??          5Dh    ]
ram:065b5db9    c7              ??          C7h
ram:065b5dba    02              ??          02h
ram:065b5dbb    00              ??          00h
ram:065b5dbc    00              ??          00h
ram:065b5dbd    00              ??          00h
ram:065b5dbe    00              ??          00h
ram:065b5dbf    b8              ??          B8h
ram:065b5dc0    fd              ??          FDh
ram:065b5dc1    ff              ??          FFh
ram:065b5dc2    ff              ??          FFh
ram:065b5dc3    ff              ??          FFh
ram:065b5dc4    5b              ??          5Bh    [
ram:065b5dc5    c2              ??          C2h
ram:065b5dc6    0c              ??          0Ch
ram:065b5dc7    00              ??          00h
ram:065b5dc8    8b              ??          8Bh
ram:065b5dc9    04              ??          04h
ram:065b5dca    fd              ??          FDh
ram:065b5dcb    e0              ??          E0h
ram:065b5dcc    71              ??          71h    q
ram:065b5dcd    5b              ??          5Bh    [
ram:065b5dce    06              ??          06h
ram:065b5dcf    85              ??          85h
ram:065b5dd0    c0              ??          C0h
ram:065b5dd1    79              ??          79h    y
ram:065b5dd2    21              ??          21h    !
ram:065b5dd3    8b              ??          8Bh
ram:065b5dd4    4c              ??          4Ch    L
ram:065b5dd5    24              ??          24h    $
ram:065b5dd6    14              ??          14h
ram:065b5dd7    25              ??          25h    %
ram:065b5dd8    ff              ??          FFh
ram:065b5dd9    ff              ??          FFh
ram:065b5dda    ff              ??          FFh
ram:065b5ddb    7f              ??          7Fh    
ram:065b5ddc    8b              ??          8Bh
ram:065b5ddd    34              ??          34h    4
ram:065b5dde    08              ??          08h
ram:065b5ddf    56              ??          56h    V
ram:065b5de0    8b              ??          8Bh
ram:065b5de1    06              ??          06h
ram:065b5de2    ff              ??          FFh
ram:065b5de3    50              ??          50h    P
ram:065b5de4    04              ??          04h
ram:065b5de5    5f              ??          5Fh    _
ram:065b5de6    33              ??          33h    3
ram:065b5de7    c0              ??          C0h
ram:065b5de8    8b              ??          8Bh
ram:065b5de9    4c              ??          4Ch    L
ram:065b5dea    24              ??          24h    $
ram:065b5deb    18              ??          18h
ram:065b5dec    89              ??          89h
ram:065b5ded    31              ??          31h    1
ram:065b5dee    5e              ??          5Eh    ^
ram:065b5def    5d              ??          5Dh    ]
ram:065b5df0    5b              ??          5Bh    [
ram:065b5df1    c2              ??          C2h
ram:065b5df2    0c              ??          0Ch
ram:065b5df3    00              ??          00h
ram:065b5df4    8b              ??          8Bh
ram:065b5df5    54              ??          54h    T
ram:065b5df6    24              ??          24h    $
ram:065b5df7    14              ??          14h
ram:065b5df8    8d              ??          8Dh
ram:065b5df9    34              ??          34h    4
ram:065b5dfa    10              ??          10h
ram:065b5dfb    56              ??          56h    V
ram:065b5dfc    8b              ??          8Bh
ram:065b5dfd    06              ??          06h
ram:065b5dfe    ff              ??          FFh
ram:065b5dff    50              ??          50h    P
ram:065b5e00    04              ??          04h
ram:065b5e01    5f              ??          5Fh    _
ram:065b5e02    33              ??          33h    3
ram:065b5e03    c0              ??          C0h
ram:065b5e04    8b              ??          8Bh
ram:065b5e05    4c              ??          4Ch    L
ram:065b5e06    24              ??          24h    $
ram:065b5e07    18              ??          18h
ram:065b5e08    89              ??          89h
ram:065b5e09    31              ??          31h    1
ram:065b5e0a    5e              ??          5Eh    ^
ram:065b5e0b    5d              ??          5Dh    ]
ram:065b5e0c    5b              ??          5Bh    [
ram:065b5e0d    c2              ??          C2h
ram:065b5e0e    0c              ??          0Ch
ram:065b5e0f    00              ??          00h
ram:065b5e10    8b              ??          8Bh
ram:065b5e11    44              ??          44h    D
ram:065b5e12    24              ??          24h    $
ram:065b5e13    04              ??          04h
ram:065b5e14    8b              ??          8Bh
ram:065b5e15    48              ??          48h    H
ram:065b5e16    14              ??          14h
ram:065b5e17    41              ??          41h    A
ram:065b5e18    89              ??          89h
ram:065b5e19    48              ??          48h    H
ram:065b5e1a    14              ??          14h
ram:065b5e1b    8b              ??          8Bh
ram:065b5e1c    c1              ??          C1h
ram:065b5e1d    c2              ??          C2h
ram:065b5e1e    04              ??          04h
ram:065b5e1f    00              ??          00h
ram:065b5e20    56              ??          56h    V
ram:065b5e21    8b              ??          8Bh
ram:065b5e22    74              ??          74h    t
ram:065b5e23    24              ??          24h    $
ram:065b5e24    08              ??          08h
ram:065b5e25    8b              ??          8Bh
ram:065b5e26    46              ??          46h    F
ram:065b5e27    14              ??          14h
ram:065b5e28    85              ??          85h
ram:065b5e29    c0              ??          C0h
ram:065b5e2a    76              ??          76h    v
ram:065b5e2b    04              ??          04h
ram:065b5e2c    48              ??          48h    H
ram:065b5e2d    89              ??          89h
ram:065b5e2e    46              ??          46h    F
ram:065b5e2f    14              ??          14h
ram:065b5e30    8b              ??          8Bh
ram:065b5e31    46              ??          46h    F
ram:065b5e32    14              ??          14h
ram:065b5e33    85              ??          85h
ram:065b5e34    c0              ??          C0h
ram:065b5e35    75              ??          75h    u
ram:065b5e36    19              ??          19h
ram:065b5e37    8b              ??          8Bh
ram:065b5e38    ce              ??          CEh
ram:065b5e39    c7              ??          C7h
ram:065b5e3a    46              ??          46h    F
ram:065b5e3b    14              ??          14h
ram:065b5e3c    01              ??          01h
ram:065b5e3d    00              ??          00h
ram:065b5e3e    00              ??          00h
ram:065b5e3f    00              ??          00h
ram:065b5e40    e8              ??          E8h
ram:065b5e41    0b              ??          0Bh
ram:065b5e42    fc              ??          FCh
ram:065b5e43    ff              ??          FFh
ram:065b5e44    ff              ??          FFh
ram:065b5e45    56              ??          56h    V
ram:065b5e46    e8              ??          E8h
ram:065b5e47    77              ??          77h    w
ram:065b5e48    00              ??          00h
ram:065b5e49    00              ??          00h
ram:065b5e4a    00              ??          00h
ram:065b5e4b    83              ??          83h
ram:065b5e4c    c4              ??          C4h
ram:065b5e4d    04              ??          04h
ram:065b5e4e    33              ??          33h    3
ram:065b5e4f    c0              ??          C0h
ram:065b5e50    5e              ??          5Eh    ^
ram:065b5e51    c2              ??          C2h
ram:065b5e52    04              ??          04h
ram:065b5e53    00              ??          00h
ram:065b5e54    90              ??          90h
ram:065b5e55    90              ??          90h
ram:065b5e56    90              ??          90h
ram:065b5e57    90              ??          90h
ram:065b5e58    90              ??          90h
ram:065b5e59    90              ??          90h
ram:065b5e5a    90              ??          90h
ram:065b5e5b    90              ??          90h
ram:065b5e5c    90              ??          90h
ram:065b5e5d    90              ??          90h
ram:065b5e5e    90              ??          90h
ram:065b5e5f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint stricmp(byte * param_1, byte * param_2)
          ;param_1       byte *               4                      ;XREF[1,0]:   065b5e60
          ;param_2       byte *               8                      ;XREF[1,0]:   065b5e65
ram:065b5e60    8b542404        MOV         EDX,dword ptr [ESP + param_1]
ram:065b5e64    56              PUSH        ESI
ram:065b5e65    8b74240c        MOV         ESI,dword ptr [ESP + param_2+0x4]
                            LAB_065b5e69:                 ;XREF[1,0]:   065b5ea1
ram:065b5e69    0fb602          MOVZX       EAX,byte ptr [EDX]
ram:065b5e6c    0fb60e          MOVZX       ECX,byte ptr [ESI]
ram:065b5e6f    8a8028845b06    MOV         AL,byte ptr [EAX + 0x65b8428]
ram:065b5e75    8a8928845b06    MOV         CL,byte ptr [ECX + 0x65b8428]
ram:065b5e7b    3ac1            CMP         AL,CL
ram:065b5e7d    7526            JNZ         LAB_065b5ea5
ram:065b5e7f    84c0            TEST        AL,AL
ram:065b5e81    7420            JZ          LAB_065b5ea3
ram:065b5e83    8a4201          MOV         AL,byte ptr [EDX + 0x1]
ram:065b5e86    8a4e01          MOV         CL,byte ptr [ESI + 0x1]
ram:065b5e89    8a8028845b06    MOV         AL,byte ptr [EAX + 0x65b8428]
ram:065b5e8f    83c202          ADD         EDX,0x2
ram:065b5e92    8a8928845b06    MOV         CL,byte ptr [ECX + 0x65b8428]
ram:065b5e98    83c602          ADD         ESI,0x2
ram:065b5e9b    3ac1            CMP         AL,CL
ram:065b5e9d    7506            JNZ         LAB_065b5ea5
ram:065b5e9f    84c0            TEST        AL,AL
ram:065b5ea1    75c6            JNZ         LAB_065b5e69
                            LAB_065b5ea3:                 ;XREF[1,0]:   065b5e81
ram:065b5ea3    5e              POP         ESI
ram:065b5ea4    c3              RET
                            LAB_065b5ea5:                 ;XREF[2,0]:   065b5e7d,065b5e9d
ram:065b5ea5    1bc0            SBB         EAX,EAX
ram:065b5ea7    1cff            SBB         AL,0xff
ram:065b5ea9    5e              POP         ESI
ram:065b5eaa    c3              RET
ram:065b5eab    90              ??          90h
ram:065b5eac    90              ??          90h
ram:065b5ead    90              ??          90h
ram:065b5eae    90              ??          90h
ram:065b5eaf    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined malloc_new(void)
                                                          ;XREF[1,0]:   065b33ee
ram:065b5eb0    ff259c705b06    JMP         dword ptr [DAT_065b709c]
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined GetFileVersionInfoA(void)
                                                          ;XREF[1,0]:   065b33bf
ram:065b5eb6    ff25a0705b06    JMP         dword ptr [DAT_065b70a0]
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined GetFileVersionInfoSizeA(void)
                                                          ;XREF[1,0]:   065b3393
ram:065b5ebc    ff25a4705b06    JMP         dword ptr [DAT_065b70a4]
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined free_delete(void)
                                                          ;XREF[48,0]:  065b1086,065b1095,065b1118,065b113e
                                                          ;             065b1156,065b118b,065b11a2,065b1447
                                                          ;             065b145e,065b150d,065b1525,065b1b66
                                                          ;             065b1b88,065b1be8,065b1c39,065b228f
                                                          ;             065b22ca,065b2367,065b2375,065b24b0
                                                          ;             065b24c0,065b3241,065b32e5,065b32fc
                                                          ;             065b33c9,065b3415,065b353e,065b354b
                                                          ;             065b3a66,065b3a78,065b3be8,065b3c38
                                                          ;             065b3cac,065b3cc4,065b3d82,065b3d94
                                                          ;             065b3df4,065b3e00,065b3e09,065b3e35
                                                          ;             065b4197,065b41d4,065b4232,065b4242
                                                          ;             065b4340,065b4350,065b4368,065b5aab
ram:065b5ec2    ff742404        PUSH        dword ptr [ESP + Stack[0x4]]
ram:065b5ec6    e889000000      CALL        FUN_065b5f54                            ;undefined FUN_065b5f54(void)
ram:065b5ecb    59              POP         ECX
ram:065b5ecc    c3              RET
ram:065b5ecd    cc              ??          CCh
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5ece(void)
                                                          ;XREF[32,0]:  065b1019,065b104d,065b10bd,065b10ef
                                                          ;             065b11c6,065b11f3,065b13ec,065b15fa
                                                          ;             065b1619,065b1bcb,065b1c49,065b1fa0
                                                          ;             065b1fe7,065b22a4,065b22e6,065b2313
                                                          ;             065b33ac,065b3b39,065b3b64,065b3c0c
                                                          ;             065b3c5c,065b3ce2,065b3e98,065b40e2
                                                          ;             065b41b2,065b41f0,065b4280,065b42ab
                                                          ;             065b46a2,065b46d2,065b5a8d,065b5c43
ram:065b5ece    ff2538705b06    JMP         dword ptr [DAT_065b7038]
ram:065b5ed4    cc              ??          CCh
ram:065b5ed5    cc              ??          CCh
ram:065b5ed6    cc              ??          CCh
ram:065b5ed7    cc              ??          CCh
ram:065b5ed8    cc              ??          CCh
ram:065b5ed9    cc              ??          CCh
ram:065b5eda    cc              ??          CCh
ram:065b5edb    cc              ??          CCh
ram:065b5edc    cc              ??          CCh
ram:065b5edd    cc              ??          CCh
ram:065b5ede    cc              ??          CCh
ram:065b5edf    cc              ??          CCh
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5ee0(void)
          ;local_res0    undefined4           0                      ;XREF[1,0]:   065b5f0a
          ;local_4       undefined4          -4                      ;XREF[1,0]:   065b5f08
          ;local_ffc     undefined4        -ffc                      ;XREF[1,0]:   065b5ef7
                                                          ;XREF[3,0]:   065b17d5,065b30e5,065b3465
ram:065b5ee0    51              PUSH        ECX
ram:065b5ee1    3d00100000      CMP         EAX,0x1000
ram:065b5ee6    8d4c2408        LEA         ECX=>Stack[0x4],[ESP + 0x8]
ram:065b5eea    7214            JC          LAB_065b5f00
                            LAB_065b5eec:                 ;XREF[1,0]:   065b5efe
ram:065b5eec    81e900100000    SUB         ECX,0x1000
ram:065b5ef2    2d00100000      SUB         EAX,0x1000
ram:065b5ef7    8501            TEST        dword ptr [ECX]=>local_ffc,EAX
ram:065b5ef9    3d00100000      CMP         EAX,0x1000
ram:065b5efe    73ec            JNC         LAB_065b5eec
                            LAB_065b5f00:                 ;XREF[1,0]:   065b5eea
ram:065b5f00    2bc8            SUB         ECX,EAX
ram:065b5f02    8bc4            MOV         EAX,ESP
ram:065b5f04    8501            TEST        dword ptr [ECX],EAX
ram:065b5f06    8be1            MOV         ESP,ECX
ram:065b5f08    8b08            MOV         ECX,dword ptr [EAX]=>local_4
ram:065b5f0a    8b4004          MOV         EAX,dword ptr [EAX + local_res0+0x4]
ram:065b5f0d    50              PUSH        EAX
ram:065b5f0e    c3              RET
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5f0f(undefined4 param_1)
          ;param_1       undefined4           4                      ;XREF[2,0]:   065b5f18,065b5f2e
                                                          ;XREF[1,0]:   065b5f3f
ram:065b5f0f    833dac8b5...    CMP         dword ptr [DAT_065b8bac],-0x1
ram:065b5f16    750c            JNZ         LAB_065b5f24
ram:065b5f18    ff742404        PUSH        dword ptr [ESP + param_1]
ram:065b5f1c    ff1588705b06    CALL        dword ptr [DAT_065b7088]
ram:065b5f22    59              POP         ECX
ram:065b5f23    c3              RET
                            LAB_065b5f24:                 ;XREF[1,0]:   065b5f16
ram:065b5f24    68a88b5b06      PUSH        DAT_065b8ba8
ram:065b5f29    68ac8b5b06      PUSH        DAT_065b8bac
ram:065b5f2e    ff74240c        PUSH        dword ptr [ESP + param_1+0x8]
ram:065b5f32    e86b010000      CALL        FUN_065b60a2                            ;undefined FUN_065b60a2(void)
ram:065b5f37    83c40c          ADD         ESP,0xc
ram:065b5f3a    c3              RET
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b5f3b(undefined4 param_1)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b5f3b
                                                          ;XREF[1,0]:   065b31f5
ram:065b5f3b    ff742404        PUSH        dword ptr [ESP + param_1]
ram:065b5f3f    e8cbffffff      CALL        FUN_065b5f0f                            ;undefined FUN_065b5f0f(undefined4 pa...
ram:065b5f44    f7d8            NEG         EAX
ram:065b5f46    1bc0            SBB         EAX,EAX
ram:065b5f48    59              POP         ECX
ram:065b5f49    f7d8            NEG         EAX
ram:065b5f4b    48              DEC         EAX
ram:065b5f4c    c3              RET
ram:065b5f4d    cc              ??          CCh
ram:065b5f4e    ff              ??          FFh
ram:065b5f4f    25              ??          25h    %
ram:065b5f50    80              ??          80h
ram:065b5f51    70              ??          70h    p
ram:065b5f52    5b              ??          5Bh    [
ram:065b5f53    06              ??          06h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b5f54(void)
                                                          ;XREF[1,0]:   065b5ec6
ram:065b5f54    ff2584705b06    JMP         dword ptr [DAT_065b7084]
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b5f5a(undefined4 param_1, int param_2)
          ;param_1       undefined4           4
          ;param_2       int                  8                      ;XREF[1,0]:   065b5f5a
                                                          ;XREF[3,0]:   065b6040,065b6064,065b6075
ram:065b5f5a    8b442408        MOV         EAX,dword ptr [ESP + param_2]
ram:065b5f5e    85c0            TEST        EAX,EAX
ram:065b5f60    750e            JNZ         LAB_065b5f70
ram:065b5f62    39059c8b5b06    CMP         dword ptr [DAT_065b8b9c],EAX
ram:065b5f68    7e2e            JLE         LAB_065b5f98
ram:065b5f6a    ff0d9c8b5b06    DEC         dword ptr [DAT_065b8b9c]
                            LAB_065b5f70:                 ;XREF[1,0]:   065b5f60
ram:065b5f70    8b0d50705b06    MOV         ECX,dword ptr [DAT_065b7050]
ram:065b5f76    83f801          CMP         EAX,0x1
ram:065b5f79    8b09            MOV         ECX,dword ptr [ECX]
ram:065b5f7b    890da08b5b06    MOV         dword ptr [DAT_065b8ba0],ECX
ram:065b5f81    753f            JNZ         LAB_065b5fc2
ram:065b5f83    6880000000      PUSH        0x80
ram:065b5f88    ff1560705b06    CALL        dword ptr [DAT_065b7060]
ram:065b5f8e    85c0            TEST        EAX,EAX
ram:065b5f90    59              POP         ECX
ram:065b5f91    a3ac8b5b06      MOV         [DAT_065b8bac],EAX
ram:065b5f96    7504            JNZ         LAB_065b5f9c
                            LAB_065b5f98:                 ;XREF[1,0]:   065b5f68
ram:065b5f98    33c0            XOR         EAX,EAX
ram:065b5f9a    eb66            JMP         LAB_065b6002
                            LAB_065b5f9c:                 ;XREF[1,0]:   065b5f96
ram:065b5f9c    832000          AND         dword ptr [EAX],0x0
ram:065b5f9f    a1ac8b5b06      MOV         EAX,[DAT_065b8bac]
ram:065b5fa4    6804805b06      PUSH        0x65b8004
ram:065b5fa9    6800805b06      PUSH        0x65b8000
ram:065b5fae    a3a88b5b06      MOV         [DAT_065b8ba8],EAX
ram:065b5fb3    e8f0000000      CALL        FUN_065b60a8                            ;undefined FUN_065b60a8(void)
ram:065b5fb8    ff059c8b5b06    INC         dword ptr [DAT_065b8b9c]
ram:065b5fbe    59              POP         ECX
ram:065b5fbf    59              POP         ECX
ram:065b5fc0    eb3d            JMP         LAB_065b5fff
                            LAB_065b5fc2:                 ;XREF[1,0]:   065b5f81
ram:065b5fc2    85c0            TEST        EAX,EAX
ram:065b5fc4    7539            JNZ         LAB_065b5fff
ram:065b5fc6    a1ac8b5b06      MOV         EAX,[DAT_065b8bac]
ram:065b5fcb    85c0            TEST        EAX,EAX
ram:065b5fcd    7430            JZ          LAB_065b5fff
ram:065b5fcf    8b0da88b5b06    MOV         ECX,dword ptr [DAT_065b8ba8]
ram:065b5fd5    56              PUSH        ESI
ram:065b5fd6    8d71fc          LEA         ESI,[ECX + -0x4]
                            LAB_065b5fd9:                 ;XREF[1,0]:   065b5fed
ram:065b5fd9    3bf0            CMP         ESI,EAX
ram:065b5fdb    7212            JC          LAB_065b5fef
ram:065b5fdd    8b0e            MOV         ECX,dword ptr [ESI]
ram:065b5fdf    85c9            TEST        ECX,ECX
ram:065b5fe1    7407            JZ          LAB_065b5fea
ram:065b5fe3    ffd1            CALL        ECX
ram:065b5fe5    a1ac8b5b06      MOV         EAX,[DAT_065b8bac]
                            LAB_065b5fea:                 ;XREF[1,0]:   065b5fe1
ram:065b5fea    83ee04          SUB         ESI,0x4
ram:065b5fed    ebea            JMP         LAB_065b5fd9
                            LAB_065b5fef:                 ;XREF[1,0]:   065b5fdb
ram:065b5fef    50              PUSH        EAX
ram:065b5ff0    ff1584705b06    CALL        dword ptr [DAT_065b7084]
ram:065b5ff6    8325ac8b5...    AND         dword ptr [DAT_065b8bac],0x0
ram:065b5ffd    59              POP         ECX
ram:065b5ffe    5e              POP         ESI
                            LAB_065b5fff:                 ;XREF[3,0]:   065b5fc0,065b5fc4,065b5fcd
ram:065b5fff    6a01            PUSH        0x1
ram:065b6001    58              POP         EAX
                            LAB_065b6002:                 ;XREF[1,0]:   065b5f9a
ram:065b6002    c20c00          RET         0xc
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;int FUN_065b6005(undefined4 param_1, int param_2, undefined4 param_3)
          ;param_1       undefined4           4                      ;XREF[1,0]:   065b6009
          ;param_2       int                  8                      ;XREF[6,0]:   065b600d,065b6058,065b607e,065b6081,065b6095
                                                                     ;             065b6098
          ;param_3       undefined4           c                      ;XREF[1,0]:   065b6011
ram:065b6005    55              PUSH        EBP
ram:065b6006    8bec            MOV         EBP,ESP
ram:065b6008    53              PUSH        EBX
ram:065b6009    8b5d08          MOV         EBX,dword ptr [EBP + param_1+0x4]
ram:065b600c    56              PUSH        ESI
ram:065b600d    8b750c          MOV         ESI,dword ptr [EBP + param_2+0x4]
ram:065b6010    57              PUSH        EDI
ram:065b6011    8b7d10          MOV         EDI,dword ptr [EBP + param_3+0x4]
ram:065b6014    85f6            TEST        ESI,ESI
ram:065b6016    7509            JNZ         LAB_065b6021
ram:065b6018    833d9c8b5...    CMP         dword ptr [DAT_065b8b9c],0x0
ram:065b601f    eb26            JMP         LAB_065b6047
                            LAB_065b6021:                 ;XREF[1,0]:   065b6016
ram:065b6021    83fe01          CMP         ESI,0x1
ram:065b6024    7405            JZ          LAB_065b602b
ram:065b6026    83fe02          CMP         ESI,0x2
ram:065b6029    7522            JNZ         LAB_065b604d
                            LAB_065b602b:                 ;XREF[1,0]:   065b6024
ram:065b602b    a1a48b5b06      MOV         EAX,[DAT_065b8ba4]
ram:065b6030    85c0            TEST        EAX,EAX
ram:065b6032    7409            JZ          LAB_065b603d
ram:065b6034    57              PUSH        EDI
ram:065b6035    56              PUSH        ESI
ram:065b6036    53              PUSH        EBX
ram:065b6037    ffd0            CALL        EAX
ram:065b6039    85c0            TEST        EAX,EAX
ram:065b603b    740c            JZ          LAB_065b6049
                            LAB_065b603d:                 ;XREF[1,0]:   065b6032
ram:065b603d    57              PUSH        EDI
ram:065b603e    56              PUSH        ESI
ram:065b603f    53              PUSH        EBX
ram:065b6040    e815ffffff      CALL        FUN_065b5f5a                            ;undefined4 FUN_065b5f5a(undefined4 p...
ram:065b6045    85c0            TEST        EAX,EAX
                            LAB_065b6047:                 ;XREF[1,0]:   065b601f
ram:065b6047    7504            JNZ         LAB_065b604d
                            LAB_065b6049:                 ;XREF[1,0]:   065b603b
ram:065b6049    33c0            XOR         EAX,EAX
ram:065b604b    eb4e            JMP         LAB_065b609b
                            LAB_065b604d:                 ;XREF[2,0]:   065b6029,065b6047
ram:065b604d    57              PUSH        EDI
ram:065b604e    56              PUSH        ESI
ram:065b604f    53              PUSH        EBX
ram:065b6050    e84bd1ffff      CALL        FUN_065b31a0                            ;undefined4 FUN_065b31a0(undefined4 p...
ram:065b6055    83fe01          CMP         ESI,0x1
ram:065b6058    89450c          MOV         dword ptr [EBP + param_2+0x4],EAX
ram:065b605b    750c            JNZ         LAB_065b6069
ram:065b605d    85c0            TEST        EAX,EAX
ram:065b605f    7537            JNZ         LAB_065b6098
ram:065b6061    57              PUSH        EDI
ram:065b6062    50              PUSH        EAX
ram:065b6063    53              PUSH        EBX
ram:065b6064    e8f1feffff      CALL        FUN_065b5f5a                            ;undefined4 FUN_065b5f5a(undefined4 p...
                            LAB_065b6069:                 ;XREF[1,0]:   065b605b
ram:065b6069    85f6            TEST        ESI,ESI
ram:065b606b    7405            JZ          LAB_065b6072
ram:065b606d    83fe03          CMP         ESI,0x3
ram:065b6070    7526            JNZ         LAB_065b6098
                            LAB_065b6072:                 ;XREF[1,0]:   065b606b
ram:065b6072    57              PUSH        EDI
ram:065b6073    56              PUSH        ESI
ram:065b6074    53              PUSH        EBX
ram:065b6075    e8e0feffff      CALL        FUN_065b5f5a                            ;undefined4 FUN_065b5f5a(undefined4 p...
ram:065b607a    85c0            TEST        EAX,EAX
ram:065b607c    7503            JNZ         LAB_065b6081
ram:065b607e    21450c          AND         dword ptr [EBP + param_2+0x4],EAX
                            LAB_065b6081:                 ;XREF[1,0]:   065b607c
ram:065b6081    837d0c00        CMP         dword ptr [EBP + param_2+0x4],0x0
ram:065b6085    7411            JZ          LAB_065b6098
ram:065b6087    a1a48b5b06      MOV         EAX,[DAT_065b8ba4]
ram:065b608c    85c0            TEST        EAX,EAX
ram:065b608e    7408            JZ          LAB_065b6098
ram:065b6090    57              PUSH        EDI
ram:065b6091    56              PUSH        ESI
ram:065b6092    53              PUSH        EBX
ram:065b6093    ffd0            CALL        EAX
ram:065b6095    89450c          MOV         dword ptr [EBP + param_2+0x4],EAX
                            LAB_065b6098:                 ;XREF[4,0]:   065b605f,065b6070,065b6085,065b608e
ram:065b6098    8b450c          MOV         EAX,dword ptr [EBP + param_2+0x4]
                            LAB_065b609b:                 ;XREF[1,0]:   065b604b
ram:065b609b    5f              POP         EDI
ram:065b609c    5e              POP         ESI
ram:065b609d    5b              POP         EBX
ram:065b609e    5d              POP         EBP
ram:065b609f    c20c00          RET         0xc
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b60a2(void)
                                                          ;XREF[1,0]:   065b5f32
ram:065b60a2    ff2578705b06    JMP         dword ptr [DAT_065b7078]
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined FUN_065b60a8(void)
                                                          ;XREF[1,0]:   065b5fb3
ram:065b60a8    ff2534705b06    JMP         dword ptr [DAT_065b7034]
ram:065b60ae    cc              ??          CCh
ram:065b60af    cc              ??          CCh
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;undefined4 FUN_065b60b0(int param_1, int param_2)
          ;param_1       int                  4                      ;XREF[1,0]:   065b60b0
          ;param_2       int                  8                      ;XREF[1,0]:   065b60b4
                                                          ;XREF[1,0]:   065b4390
ram:065b60b0    8b4c2404        MOV         ECX,dword ptr [ESP + param_1]
ram:065b60b4    8b542408        MOV         EDX,dword ptr [ESP + param_2]
ram:065b60b8    83c8ff          OR          EAX,0xffffffff
ram:065b60bb    3bca            CMP         ECX,EDX
ram:065b60bd    53              PUSH        EBX
ram:065b60be    7424            JZ          LAB_065b60e4
                            LAB_065b60c0:                 ;XREF[1,0]:   065b60e2
ram:065b60c0    0fbe11          MOVSX       EDX,byte ptr [ECX]
ram:065b60c3    33db            XOR         EBX,EBX
ram:065b60c5    8a9a30895b06    MOV         BL,byte ptr [EDX + 0x65b8930]
ram:065b60cb    8bd0            MOV         EDX,EAX
ram:065b60cd    81e2ff000000    AND         EDX,0xff
ram:065b60d3    33da            XOR         EBX,EDX
ram:065b60d5    c1e808          SHR         EAX,0x8
ram:065b60d8    8b149d308...    MOV         EDX,dword ptr [EBX*0x4 + 0x65b8530]
ram:065b60df    33c2            XOR         EAX,EDX
ram:065b60e1    41              INC         ECX
ram:065b60e2    ebdc            JMP         LAB_065b60c0
                            LAB_065b60e4:                 ;XREF[1,0]:   065b60be
ram:065b60e4    33c0            XOR         EAX,EAX
ram:065b60e6    5b              POP         EBX
ram:065b60e7    c3              RET
ram:065b60e8    90              ??          90h
ram:065b60e9    90              ??          90h
ram:065b60ea    90              ??          90h
ram:065b60eb    90              ??          90h
ram:065b60ec    90              ??          90h
ram:065b60ed    90              ??          90h
ram:065b60ee    90              ??          90h
ram:065b60ef    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b60f0(char * param_1)
          ;param_1       char *               4                      ;XREF[1,0]:   065b60f0
                                                          ;XREF[1,0]:   065b4380
ram:065b60f0    8b542404        MOV         EDX,dword ptr [ESP + param_1]
ram:065b60f4    85d2            TEST        EDX,EDX
ram:065b60f6    7503            JNZ         LAB_065b60fb
ram:065b60f8    33c0            XOR         EAX,EAX
ram:065b60fa    c3              RET
                            LAB_065b60fb:                 ;XREF[1,0]:   065b60f6
ram:065b60fb    8a0a            MOV         CL,byte ptr [EDX]
ram:065b60fd    83c8ff          OR          EAX,0xffffffff
ram:065b6100    84c9            TEST        CL,CL
ram:065b6102    742b            JZ          LAB_065b612f
ram:065b6104    53              PUSH        EBX
                            LAB_065b6105:                 ;XREF[1,0]:   065b612c
ram:065b6105    0fbec9          MOVSX       ECX,CL
ram:065b6108    33db            XOR         EBX,EBX
ram:065b610a    8a9930895b06    MOV         BL,byte ptr [ECX + 0x65b8930]
ram:065b6110    8bc8            MOV         ECX,EAX
ram:065b6112    81e1ff000000    AND         ECX,0xff
ram:065b6118    33d9            XOR         EBX,ECX
ram:065b611a    c1e808          SHR         EAX,0x8
ram:065b611d    8b0c9d308...    MOV         ECX,dword ptr [EBX*0x4 + 0x65b8530]
ram:065b6124    33c1            XOR         EAX,ECX
ram:065b6126    8a4a01          MOV         CL,byte ptr [EDX + 0x1]
ram:065b6129    42              INC         EDX
ram:065b612a    84c9            TEST        CL,CL
ram:065b612c    75d7            JNZ         LAB_065b6105
ram:065b612e    5b              POP         EBX
                            LAB_065b612f:                 ;XREF[1,0]:   065b6102
ram:065b612f    f7d0            NOT         EAX
ram:065b6131    c3              RET
ram:065b6132    90              ??          90h
ram:065b6133    90              ??          90h
ram:065b6134    90              ??          90h
ram:065b6135    90              ??          90h
ram:065b6136    90              ??          90h
ram:065b6137    90              ??          90h
ram:065b6138    90              ??          90h
ram:065b6139    90              ??          90h
ram:065b613a    90              ??          90h
ram:065b613b    90              ??          90h
ram:065b613c    90              ??          90h
ram:065b613d    90              ??          90h
ram:065b613e    90              ??          90h
ram:065b613f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b6140(uint param_1, char * param_2)
          ;param_1       uint                 4                      ;XREF[1,0]:   065b6144
          ;param_2       char *               8                      ;XREF[1,0]:   065b6140
                                                          ;XREF[1,0]:   065b43a0
ram:065b6140    8b542408        MOV         EDX,dword ptr [ESP + param_2]
ram:065b6144    8b442404        MOV         EAX,dword ptr [ESP + param_1]
ram:065b6148    85d2            TEST        EDX,EDX
ram:065b614a    7435            JZ          LAB_065b6181
ram:065b614c    8a0a            MOV         CL,byte ptr [EDX]
ram:065b614e    84c9            TEST        CL,CL
ram:065b6150    f7d0            NOT         EAX
ram:065b6152    742b            JZ          LAB_065b617f
ram:065b6154    53              PUSH        EBX
                            LAB_065b6155:                 ;XREF[1,0]:   065b617c
ram:065b6155    0fbec9          MOVSX       ECX,CL
ram:065b6158    33db            XOR         EBX,EBX
ram:065b615a    8a9930895b06    MOV         BL,byte ptr [ECX + 0x65b8930]
ram:065b6160    8bc8            MOV         ECX,EAX
ram:065b6162    81e1ff000000    AND         ECX,0xff
ram:065b6168    33d9            XOR         EBX,ECX
ram:065b616a    c1e808          SHR         EAX,0x8
ram:065b616d    8b0c9d308...    MOV         ECX,dword ptr [EBX*0x4 + 0x65b8530]
ram:065b6174    33c1            XOR         EAX,ECX
ram:065b6176    8a4a01          MOV         CL,byte ptr [EDX + 0x1]
ram:065b6179    42              INC         EDX
ram:065b617a    84c9            TEST        CL,CL
ram:065b617c    75d7            JNZ         LAB_065b6155
ram:065b617e    5b              POP         EBX
                            LAB_065b617f:                 ;XREF[1,0]:   065b6152
ram:065b617f    f7d0            NOT         EAX
                            LAB_065b6181:                 ;XREF[1,0]:   065b614a
ram:065b6181    c3              RET
ram:065b6182    90              ??          90h
ram:065b6183    90              ??          90h
ram:065b6184    90              ??          90h
ram:065b6185    90              ??          90h
ram:065b6186    90              ??          90h
ram:065b6187    90              ??          90h
ram:065b6188    90              ??          90h
ram:065b6189    90              ??          90h
ram:065b618a    90              ??          90h
ram:065b618b    90              ??          90h
ram:065b618c    90              ??          90h
ram:065b618d    90              ??          90h
ram:065b618e    90              ??          90h
ram:065b618f    90              ??          90h
                            ;************************************************************************************************
                            ;*                                           FUNCTION                                           *
                            ;************************************************************************************************
                            ;uint FUN_065b6190(uint param_1, char param_2)
          ;param_1       uint                 4                      ;XREF[1,0]:   065b6195
          ;param_2       char                 8                      ;XREF[1,0]:   065b6190
                                                          ;XREF[1,0]:   065b43b8
ram:065b6190    0fbe442408      MOVSX       EAX,byte ptr [ESP + param_2]
ram:065b6195    8b4c2404        MOV         ECX,dword ptr [ESP + param_1]
ram:065b6199    33d2            XOR         EDX,EDX
ram:065b619b    8a9030895b06    MOV         DL,byte ptr [EAX + 0x65b8930]
ram:065b61a1    f7d1            NOT         ECX
ram:065b61a3    8bc1            MOV         EAX,ECX
ram:065b61a5    25ff000000      AND         EAX,0xff
ram:065b61aa    33d0            XOR         EDX,EAX
ram:065b61ac    c1e908          SHR         ECX,0x8
ram:065b61af    8b0495308...    MOV         EAX,dword ptr [EDX*0x4 + 0x65b8530]
ram:065b61b6    33c1            XOR         EAX,ECX
ram:065b61b8    f7d0            NOT         EAX
ram:065b61ba    c3              RET
ram:065b61bb    90              ??          90h
ram:065b61bc    90              ??          90h
ram:065b61bd    90              ??          90h
ram:065b61be    90              ??          90h
ram:065b61bf    90              ??          90h
ram:065b61c0    00              ??          00h
ram:065b61c1    00              ??          00h
ram:065b61c2    00              ??          00h
ram:065b61c3    00              ??          00h
ram:065b61c4    00              ??          00h
ram:065b61c5    00              ??          00h
ram:065b61c6    00              ??          00h
ram:065b61c7    00              ??          00h
ram:065b61c8    00              ??          00h
ram:065b61c9    00              ??          00h
ram:065b61ca    00              ??          00h
ram:065b61cb    00              ??          00h
ram:065b61cc    00              ??          00h
ram:065b61cd    00              ??          00h
ram:065b61ce    00              ??          00h
ram:065b61cf    00              ??          00h
ram:065b61d0    00              ??          00h
ram:065b61d1    00              ??          00h
ram:065b61d2    00              ??          00h
ram:065b61d3    00              ??          00h
ram:065b61d4    00              ??          00h
ram:065b61d5    00              ??          00h
ram:065b61d6    00              ??          00h
ram:065b61d7    00              ??          00h
ram:065b61d8    00              ??          00h
ram:065b61d9    00              ??          00h
ram:065b61da    00              ??          00h
ram:065b61db    00              ??          00h
ram:065b61dc    00              ??          00h
ram:065b61dd    00              ??          00h
ram:065b61de    00              ??          00h
ram:065b61df    00              ??          00h
ram:065b61e0    00              ??          00h
ram:065b61e1    00              ??          00h
ram:065b61e2    00              ??          00h
ram:065b61e3    00              ??          00h
ram:065b61e4    00              ??          00h
ram:065b61e5    00              ??          00h
ram:065b61e6    00              ??          00h
ram:065b61e7    00              ??          00h
ram:065b61e8    00              ??          00h
ram:065b61e9    00              ??          00h
ram:065b61ea    00              ??          00h
ram:065b61eb    00              ??          00h
ram:065b61ec    00              ??          00h
ram:065b61ed    00              ??          00h
ram:065b61ee    00              ??          00h
ram:065b61ef    00              ??          00h
ram:065b61f0    00              ??          00h
ram:065b61f1    00              ??          00h
ram:065b61f2    00              ??          00h
ram:065b61f3    00              ??          00h
ram:065b61f4    00              ??          00h
ram:065b61f5    00              ??          00h
ram:065b61f6    00              ??          00h
ram:065b61f7    00              ??          00h
ram:065b61f8    00              ??          00h
ram:065b61f9    00              ??          00h
ram:065b61fa    00              ??          00h
ram:065b61fb    00              ??          00h
ram:065b61fc    00              ??          00h
ram:065b61fd    00              ??          00h
ram:065b61fe    00              ??          00h
ram:065b61ff    00              ??          00h
ram:065b6200    00              ??          00h
ram:065b6201    00              ??          00h
ram:065b6202    00              ??          00h
ram:065b6203    00              ??          00h
ram:065b6204    00              ??          00h
ram:065b6205    00              ??          00h
ram:065b6206    00              ??          00h
ram:065b6207    00              ??          00h
ram:065b6208    00              ??          00h
ram:065b6209    00              ??          00h
ram:065b620a    00              ??          00h
ram:065b620b    00              ??          00h
ram:065b620c    00              ??          00h
ram:065b620d    00              ??          00h
ram:065b620e    00              ??          00h
ram:065b620f    00              ??          00h
ram:065b6210    00              ??          00h
ram:065b6211    00              ??          00h
ram:065b6212    00              ??          00h
ram:065b6213    00              ??          00h
ram:065b6214    00              ??          00h
ram:065b6215    00              ??          00h
ram:065b6216    00              ??          00h
ram:065b6217    00              ??          00h
ram:065b6218    00              ??          00h
ram:065b6219    00              ??          00h
ram:065b621a    00              ??          00h
ram:065b621b    00              ??          00h
ram:065b621c    00              ??          00h
ram:065b621d    00              ??          00h
ram:065b621e    00              ??          00h
ram:065b621f    00              ??          00h
ram:065b6220    00              ??          00h
ram:065b6221    00              ??          00h
ram:065b6222    00              ??          00h
ram:065b6223    00              ??          00h
ram:065b6224    00              ??          00h
ram:065b6225    00              ??          00h
ram:065b6226    00              ??          00h
ram:065b6227    00              ??          00h
ram:065b6228    00              ??          00h
ram:065b6229    00              ??          00h
ram:065b622a    00              ??          00h
ram:065b622b    00              ??          00h
ram:065b622c    00              ??          00h
ram:065b622d    00              ??          00h
ram:065b622e    00              ??          00h
ram:065b622f    00              ??          00h
ram:065b6230    00              ??          00h
ram:065b6231    00              ??          00h
ram:065b6232    00              ??          00h
ram:065b6233    00              ??          00h
ram:065b6234    00              ??          00h
ram:065b6235    00              ??          00h
ram:065b6236    00              ??          00h
ram:065b6237    00              ??          00h
ram:065b6238    00              ??          00h
ram:065b6239    00              ??          00h
ram:065b623a    00              ??          00h
ram:065b623b    00              ??          00h
ram:065b623c    00              ??          00h
ram:065b623d    00              ??          00h
ram:065b623e    00              ??          00h
ram:065b623f    00              ??          00h
ram:065b6240    00              ??          00h
ram:065b6241    00              ??          00h
ram:065b6242    00              ??          00h
ram:065b6243    00              ??          00h
ram:065b6244    00              ??          00h
ram:065b6245    00              ??          00h
ram:065b6246    00              ??          00h
ram:065b6247    00              ??          00h
ram:065b6248    00              ??          00h
ram:065b6249    00              ??          00h
ram:065b624a    00              ??          00h
ram:065b624b    00              ??          00h
ram:065b624c    00              ??          00h
ram:065b624d    00              ??          00h
ram:065b624e    00              ??          00h
ram:065b624f    00              ??          00h
ram:065b6250    00              ??          00h
ram:065b6251    00              ??          00h
ram:065b6252    00              ??          00h
ram:065b6253    00              ??          00h
ram:065b6254    00              ??          00h
ram:065b6255    00              ??          00h
ram:065b6256    00              ??          00h
ram:065b6257    00              ??          00h
ram:065b6258    00              ??          00h
ram:065b6259    00              ??          00h
ram:065b625a    00              ??          00h
ram:065b625b    00              ??          00h
ram:065b625c    00              ??          00h
ram:065b625d    00              ??          00h
ram:065b625e    00              ??          00h
ram:065b625f    00              ??          00h
ram:065b6260    00              ??          00h
ram:065b6261    00              ??          00h
ram:065b6262    00              ??          00h
ram:065b6263    00              ??          00h
ram:065b6264    00              ??          00h
ram:065b6265    00              ??          00h
ram:065b6266    00              ??          00h
ram:065b6267    00              ??          00h
ram:065b6268    00              ??          00h
ram:065b6269    00              ??          00h
ram:065b626a    00              ??          00h
ram:065b626b    00              ??          00h
ram:065b626c    00              ??          00h
ram:065b626d    00              ??          00h
ram:065b626e    00              ??          00h
ram:065b626f    00              ??          00h
ram:065b6270    00              ??          00h
ram:065b6271    00              ??          00h
ram:065b6272    00              ??          00h
ram:065b6273    00              ??          00h
ram:065b6274    00              ??          00h
ram:065b6275    00              ??          00h
ram:065b6276    00              ??          00h
ram:065b6277    00              ??          00h
ram:065b6278    00              ??          00h
ram:065b6279    00              ??          00h
ram:065b627a    00              ??          00h
ram:065b627b    00              ??          00h
ram:065b627c    00              ??          00h
ram:065b627d    00              ??          00h
ram:065b627e    00              ??          00h
ram:065b627f    00              ??          00h
ram:065b6280    00              ??          00h
ram:065b6281    00              ??          00h
ram:065b6282    00              ??          00h
ram:065b6283    00              ??          00h
ram:065b6284    00              ??          00h
ram:065b6285    00              ??          00h
ram:065b6286    00              ??          00h
ram:065b6287    00              ??          00h
ram:065b6288    00              ??          00h
ram:065b6289    00              ??          00h
ram:065b628a    00              ??          00h
ram:065b628b    00              ??          00h
ram:065b628c    00              ??          00h
ram:065b628d    00              ??          00h
ram:065b628e    00              ??          00h
ram:065b628f    00              ??          00h
ram:065b6290    00              ??          00h
ram:065b6291    00              ??          00h
ram:065b6292    00              ??          00h
ram:065b6293    00              ??          00h
ram:065b6294    00              ??          00h
ram:065b6295    00              ??          00h
ram:065b6296    00              ??          00h
ram:065b6297    00              ??          00h
ram:065b6298    00              ??          00h
ram:065b6299    00              ??          00h
ram:065b629a    00              ??          00h
ram:065b629b    00              ??          00h
ram:065b629c    00              ??          00h
ram:065b629d    00              ??          00h
ram:065b629e    00              ??          00h
ram:065b629f    00              ??          00h
ram:065b62a0    00              ??          00h
ram:065b62a1    00              ??          00h
ram:065b62a2    00              ??          00h
ram:065b62a3    00              ??          00h
ram:065b62a4    00              ??          00h
ram:065b62a5    00              ??          00h
ram:065b62a6    00              ??          00h
ram:065b62a7    00              ??          00h
ram:065b62a8    00              ??          00h
ram:065b62a9    00              ??          00h
ram:065b62aa    00              ??          00h
ram:065b62ab    00              ??          00h
ram:065b62ac    00              ??          00h
ram:065b62ad    00              ??          00h
ram:065b62ae    00              ??          00h
ram:065b62af    00              ??          00h
ram:065b62b0    00              ??          00h
ram:065b62b1    00              ??          00h
ram:065b62b2    00              ??          00h
ram:065b62b3    00              ??          00h
ram:065b62b4    00              ??          00h
ram:065b62b5    00              ??          00h
ram:065b62b6    00              ??          00h
ram:065b62b7    00              ??          00h
ram:065b62b8    00              ??          00h
ram:065b62b9    00              ??          00h
ram:065b62ba    00              ??          00h
ram:065b62bb    00              ??          00h
ram:065b62bc    00              ??          00h
ram:065b62bd    00              ??          00h
ram:065b62be    00              ??          00h
ram:065b62bf    00              ??          00h
ram:065b62c0    00              ??          00h
ram:065b62c1    00              ??          00h
ram:065b62c2    00              ??          00h
ram:065b62c3    00              ??          00h
ram:065b62c4    00              ??          00h
ram:065b62c5    00              ??          00h
ram:065b62c6    00              ??          00h
ram:065b62c7    00              ??          00h
ram:065b62c8    00              ??          00h
ram:065b62c9    00              ??          00h
ram:065b62ca    00              ??          00h
ram:065b62cb    00              ??          00h
ram:065b62cc    00              ??          00h
ram:065b62cd    00              ??          00h
ram:065b62ce    00              ??          00h
ram:065b62cf    00              ??          00h
ram:065b62d0    00              ??          00h
ram:065b62d1    00              ??          00h
ram:065b62d2    00              ??          00h
ram:065b62d3    00              ??          00h
ram:065b62d4    00              ??          00h
ram:065b62d5    00              ??          00h
ram:065b62d6    00              ??          00h
ram:065b62d7    00              ??          00h
ram:065b62d8    00              ??          00h
ram:065b62d9    00              ??          00h
ram:065b62da    00              ??          00h
ram:065b62db    00              ??          00h
ram:065b62dc    00              ??          00h
ram:065b62dd    00              ??          00h
ram:065b62de    00              ??          00h
ram:065b62df    00              ??          00h
ram:065b62e0    00              ??          00h
ram:065b62e1    00              ??          00h
ram:065b62e2    00              ??          00h
ram:065b62e3    00              ??          00h
ram:065b62e4    00              ??          00h
ram:065b62e5    00              ??          00h
ram:065b62e6    00              ??          00h
ram:065b62e7    00              ??          00h
ram:065b62e8    00              ??          00h
ram:065b62e9    00              ??          00h
ram:065b62ea    00              ??          00h
ram:065b62eb    00              ??          00h
ram:065b62ec    00              ??          00h
ram:065b62ed    00              ??          00h
ram:065b62ee    00              ??          00h
ram:065b62ef    00              ??          00h
ram:065b62f0    00              ??          00h
ram:065b62f1    00              ??          00h
ram:065b62f2    00              ??          00h
ram:065b62f3    00              ??          00h
ram:065b62f4    00              ??          00h
ram:065b62f5    00              ??          00h
ram:065b62f6    00              ??          00h
ram:065b62f7    00              ??          00h
ram:065b62f8    00              ??          00h
ram:065b62f9    00              ??          00h
ram:065b62fa    00              ??          00h
ram:065b62fb    00              ??          00h
ram:065b62fc    00              ??          00h
ram:065b62fd    00              ??          00h
ram:065b62fe    00              ??          00h
ram:065b62ff    00              ??          00h
ram:065b6300    00              ??          00h
ram:065b6301    00              ??          00h
ram:065b6302    00              ??          00h
ram:065b6303    00              ??          00h
ram:065b6304    00              ??          00h
ram:065b6305    00              ??          00h
ram:065b6306    00              ??          00h
ram:065b6307    00              ??          00h
ram:065b6308    00              ??          00h
ram:065b6309    00              ??          00h
ram:065b630a    00              ??          00h
ram:065b630b    00              ??          00h
ram:065b630c    00              ??          00h
ram:065b630d    00              ??          00h
ram:065b630e    00              ??          00h
ram:065b630f    00              ??          00h
ram:065b6310    00              ??          00h
ram:065b6311    00              ??          00h
ram:065b6312    00              ??          00h
ram:065b6313    00              ??          00h
ram:065b6314    00              ??          00h
ram:065b6315    00              ??          00h
ram:065b6316    00              ??          00h
ram:065b6317    00              ??          00h
ram:065b6318    00              ??          00h
ram:065b6319    00              ??          00h
ram:065b631a    00              ??          00h
ram:065b631b    00              ??          00h
ram:065b631c    00              ??          00h
ram:065b631d    00              ??          00h
ram:065b631e    00              ??          00h
ram:065b631f    00              ??          00h
ram:065b6320    00              ??          00h
ram:065b6321    00              ??          00h
ram:065b6322    00              ??          00h
ram:065b6323    00              ??          00h
ram:065b6324    00              ??          00h
ram:065b6325    00              ??          00h
ram:065b6326    00              ??          00h
ram:065b6327    00              ??          00h
ram:065b6328    00              ??          00h
ram:065b6329    00              ??          00h
ram:065b632a    00              ??          00h
ram:065b632b    00              ??          00h
ram:065b632c    00              ??          00h
ram:065b632d    00              ??          00h
ram:065b632e    00              ??          00h
ram:065b632f    00              ??          00h
ram:065b6330    00              ??          00h
ram:065b6331    00              ??          00h
ram:065b6332    00              ??          00h
ram:065b6333    00              ??          00h
ram:065b6334    00              ??          00h
ram:065b6335    00              ??          00h
ram:065b6336    00              ??          00h
ram:065b6337    00              ??          00h
ram:065b6338    00              ??          00h
ram:065b6339    00              ??          00h
ram:065b633a    00              ??          00h
ram:065b633b    00              ??          00h
ram:065b633c    00              ??          00h
ram:065b633d    00              ??          00h
ram:065b633e    00              ??          00h
ram:065b633f    00              ??          00h
ram:065b6340    00              ??          00h
ram:065b6341    00              ??          00h
ram:065b6342    00              ??          00h
ram:065b6343    00              ??          00h
ram:065b6344    00              ??          00h
ram:065b6345    00              ??          00h
ram:065b6346    00              ??          00h
ram:065b6347    00              ??          00h
ram:065b6348    00              ??          00h
ram:065b6349    00              ??          00h
ram:065b634a    00              ??          00h
ram:065b634b    00              ??          00h
ram:065b634c    00              ??          00h
ram:065b634d    00              ??          00h
ram:065b634e    00              ??          00h
ram:065b634f    00              ??          00h
ram:065b6350    00              ??          00h
ram:065b6351    00              ??          00h
ram:065b6352    00              ??          00h
ram:065b6353    00              ??          00h
ram:065b6354    00              ??          00h
ram:065b6355    00              ??          00h
ram:065b6356    00              ??          00h
ram:065b6357    00              ??          00h
ram:065b6358    00              ??          00h
ram:065b6359    00              ??          00h
ram:065b635a    00              ??          00h
ram:065b635b    00              ??          00h
ram:065b635c    00              ??          00h
ram:065b635d    00              ??          00h
ram:065b635e    00              ??          00h
ram:065b635f    00              ??          00h
ram:065b6360    00              ??          00h
ram:065b6361    00              ??          00h
ram:065b6362    00              ??          00h
ram:065b6363    00              ??          00h
ram:065b6364    00              ??          00h
ram:065b6365    00              ??          00h
ram:065b6366    00              ??          00h
ram:065b6367    00              ??          00h
ram:065b6368    00              ??          00h
ram:065b6369    00              ??          00h
ram:065b636a    00              ??          00h
ram:065b636b    00              ??          00h
ram:065b636c    00              ??          00h
ram:065b636d    00              ??          00h
ram:065b636e    00              ??          00h
ram:065b636f    00              ??          00h
ram:065b6370    00              ??          00h
ram:065b6371    00              ??          00h
ram:065b6372    00              ??          00h
ram:065b6373    00              ??          00h
ram:065b6374    00              ??          00h
ram:065b6375    00              ??          00h
ram:065b6376    00              ??          00h
ram:065b6377    00              ??          00h
ram:065b6378    00              ??          00h
ram:065b6379    00              ??          00h
ram:065b637a    00              ??          00h
ram:065b637b    00              ??          00h
ram:065b637c    00              ??          00h
ram:065b637d    00              ??          00h
ram:065b637e    00              ??          00h
ram:065b637f    00              ??          00h
ram:065b6380    00              ??          00h
ram:065b6381    00              ??          00h
ram:065b6382    00              ??          00h
ram:065b6383    00              ??          00h
ram:065b6384    00              ??          00h
ram:065b6385    00              ??          00h
ram:065b6386    00              ??          00h
ram:065b6387    00              ??          00h
ram:065b6388    00              ??          00h
ram:065b6389    00              ??          00h
ram:065b638a    00              ??          00h
ram:065b638b    00              ??          00h
ram:065b638c    00              ??          00h
ram:065b638d    00              ??          00h
ram:065b638e    00              ??          00h
ram:065b638f    00              ??          00h
ram:065b6390    00              ??          00h
ram:065b6391    00              ??          00h
ram:065b6392    00              ??          00h
ram:065b6393    00              ??          00h
ram:065b6394    00              ??          00h
ram:065b6395    00              ??          00h
ram:065b6396    00              ??          00h
ram:065b6397    00              ??          00h
ram:065b6398    00              ??          00h
ram:065b6399    00              ??          00h
ram:065b639a    00              ??          00h
ram:065b639b    00              ??          00h
ram:065b639c    00              ??          00h
ram:065b639d    00              ??          00h
ram:065b639e    00              ??          00h
ram:065b639f    00              ??          00h
ram:065b63a0    00              ??          00h
ram:065b63a1    00              ??          00h
ram:065b63a2    00              ??          00h
ram:065b63a3    00              ??          00h
ram:065b63a4    00              ??          00h
ram:065b63a5    00              ??          00h
ram:065b63a6    00              ??          00h
ram:065b63a7    00              ??          00h
ram:065b63a8    00              ??          00h
ram:065b63a9    00              ??          00h
ram:065b63aa    00              ??          00h
ram:065b63ab    00              ??          00h
ram:065b63ac    00              ??          00h
ram:065b63ad    00              ??          00h
ram:065b63ae    00              ??          00h
ram:065b63af    00              ??          00h
ram:065b63b0    00              ??          00h
ram:065b63b1    00              ??          00h
ram:065b63b2    00              ??          00h
ram:065b63b3    00              ??          00h
ram:065b63b4    00              ??          00h
ram:065b63b5    00              ??          00h
ram:065b63b6    00              ??          00h
ram:065b63b7    00              ??          00h
ram:065b63b8    00              ??          00h
ram:065b63b9    00              ??          00h
ram:065b63ba    00              ??          00h
ram:065b63bb    00              ??          00h
ram:065b63bc    00              ??          00h
ram:065b63bd    00              ??          00h
ram:065b63be    00              ??          00h
ram:065b63bf    00              ??          00h
ram:065b63c0    00              ??          00h
ram:065b63c1    00              ??          00h
ram:065b63c2    00              ??          00h
ram:065b63c3    00              ??          00h
ram:065b63c4    00              ??          00h
ram:065b63c5    00              ??          00h
ram:065b63c6    00              ??          00h
ram:065b63c7    00              ??          00h
ram:065b63c8    00              ??          00h
ram:065b63c9    00              ??          00h
ram:065b63ca    00              ??          00h
ram:065b63cb    00              ??          00h
ram:065b63cc    00              ??          00h
ram:065b63cd    00              ??          00h
ram:065b63ce    00              ??          00h
ram:065b63cf    00              ??          00h
ram:065b63d0    00              ??          00h
ram:065b63d1    00              ??          00h
ram:065b63d2    00              ??          00h
ram:065b63d3    00              ??          00h
ram:065b63d4    00              ??          00h
ram:065b63d5    00              ??          00h
ram:065b63d6    00              ??          00h
ram:065b63d7    00              ??          00h
ram:065b63d8    00              ??          00h
ram:065b63d9    00              ??          00h
ram:065b63da    00              ??          00h
ram:065b63db    00              ??          00h
ram:065b63dc    00              ??          00h
ram:065b63dd    00              ??          00h
ram:065b63de    00              ??          00h
ram:065b63df    00              ??          00h
ram:065b63e0    00              ??          00h
ram:065b63e1    00              ??          00h
ram:065b63e2    00              ??          00h
ram:065b63e3    00              ??          00h
ram:065b63e4    00              ??          00h
ram:065b63e5    00              ??          00h
ram:065b63e6    00              ??          00h
ram:065b63e7    00              ??          00h
ram:065b63e8    00              ??          00h
ram:065b63e9    00              ??          00h
ram:065b63ea    00              ??          00h
ram:065b63eb    00              ??          00h
ram:065b63ec    00              ??          00h
ram:065b63ed    00              ??          00h
ram:065b63ee    00              ??          00h
ram:065b63ef    00              ??          00h
ram:065b63f0    00              ??          00h
ram:065b63f1    00              ??          00h
ram:065b63f2    00              ??          00h
ram:065b63f3    00              ??          00h
ram:065b63f4    00              ??          00h
ram:065b63f5    00              ??          00h
ram:065b63f6    00              ??          00h
ram:065b63f7    00              ??          00h
ram:065b63f8    00              ??          00h
ram:065b63f9    00              ??          00h
ram:065b63fa    00              ??          00h
ram:065b63fb    00              ??          00h
ram:065b63fc    00              ??          00h
ram:065b63fd    00              ??          00h
ram:065b63fe    00              ??          00h
ram:065b63ff    00              ??          00h
ram:065b6400    00              ??          00h
ram:065b6401    00              ??          00h
ram:065b6402    00              ??          00h
ram:065b6403    00              ??          00h
ram:065b6404    00              ??          00h
ram:065b6405    00              ??          00h
ram:065b6406    00              ??          00h
ram:065b6407    00              ??          00h
ram:065b6408    00              ??          00h
ram:065b6409    00              ??          00h
ram:065b640a    00              ??          00h
ram:065b640b    00              ??          00h
ram:065b640c    00              ??          00h
ram:065b640d    00              ??          00h
ram:065b640e    00              ??          00h
ram:065b640f    00              ??          00h
ram:065b6410    00              ??          00h
ram:065b6411    00              ??          00h
ram:065b6412    00              ??          00h
ram:065b6413    00              ??          00h
ram:065b6414    00              ??          00h
ram:065b6415    00              ??          00h
ram:065b6416    00              ??          00h
ram:065b6417    00              ??          00h
ram:065b6418    00              ??          00h
ram:065b6419    00              ??          00h
ram:065b641a    00              ??          00h
ram:065b641b    00              ??          00h
ram:065b641c    00              ??          00h
ram:065b641d    00              ??          00h
ram:065b641e    00              ??          00h
ram:065b641f    00              ??          00h
ram:065b6420    00              ??          00h
ram:065b6421    00              ??          00h
ram:065b6422    00              ??          00h
ram:065b6423    00              ??          00h
ram:065b6424    00              ??          00h
ram:065b6425    00              ??          00h
ram:065b6426    00              ??          00h
ram:065b6427    00              ??          00h
ram:065b6428    00              ??          00h
ram:065b6429    00              ??          00h
ram:065b642a    00              ??          00h
ram:065b642b    00              ??          00h
ram:065b642c    00              ??          00h
ram:065b642d    00              ??          00h
ram:065b642e    00              ??          00h
ram:065b642f    00              ??          00h
ram:065b6430    00              ??          00h
ram:065b6431    00              ??          00h
ram:065b6432    00              ??          00h
ram:065b6433    00              ??          00h
ram:065b6434    00              ??          00h
ram:065b6435    00              ??          00h
ram:065b6436    00              ??          00h
ram:065b6437    00              ??          00h
ram:065b6438    00              ??          00h
ram:065b6439    00              ??          00h
ram:065b643a    00              ??          00h
ram:065b643b    00              ??          00h
ram:065b643c    00              ??          00h
ram:065b643d    00              ??          00h
ram:065b643e    00              ??          00h
ram:065b643f    00              ??          00h
ram:065b6440    00              ??          00h
ram:065b6441    00              ??          00h
ram:065b6442    00              ??          00h
ram:065b6443    00              ??          00h
ram:065b6444    00              ??          00h
ram:065b6445    00              ??          00h
ram:065b6446    00              ??          00h
ram:065b6447    00              ??          00h
ram:065b6448    00              ??          00h
ram:065b6449    00              ??          00h
ram:065b644a    00              ??          00h
ram:065b644b    00              ??          00h
ram:065b644c    00              ??          00h
ram:065b644d    00              ??          00h
ram:065b644e    00              ??          00h
ram:065b644f    00              ??          00h
ram:065b6450    00              ??          00h
ram:065b6451    00              ??          00h
ram:065b6452    00              ??          00h
ram:065b6453    00              ??          00h
ram:065b6454    00              ??          00h
ram:065b6455    00              ??          00h
ram:065b6456    00              ??          00h
ram:065b6457    00              ??          00h
ram:065b6458    00              ??          00h
ram:065b6459    00              ??          00h
ram:065b645a    00              ??          00h
ram:065b645b    00              ??          00h
ram:065b645c    00              ??          00h
ram:065b645d    00              ??          00h
ram:065b645e    00              ??          00h
ram:065b645f    00              ??          00h
ram:065b6460    00              ??          00h
ram:065b6461    00              ??          00h
ram:065b6462    00              ??          00h
ram:065b6463    00              ??          00h
ram:065b6464    00              ??          00h
ram:065b6465    00              ??          00h
ram:065b6466    00              ??          00h
ram:065b6467    00              ??          00h
ram:065b6468    00              ??          00h
ram:065b6469    00              ??          00h
ram:065b646a    00              ??          00h
ram:065b646b    00              ??          00h
ram:065b646c    00              ??          00h
ram:065b646d    00              ??          00h
ram:065b646e    00              ??          00h
ram:065b646f    00              ??          00h
ram:065b6470    00              ??          00h
ram:065b6471    00              ??          00h
ram:065b6472    00              ??          00h
ram:065b6473    00              ??          00h
ram:065b6474    00              ??          00h
ram:065b6475    00              ??          00h
ram:065b6476    00              ??          00h
ram:065b6477    00              ??          00h
ram:065b6478    00              ??          00h
ram:065b6479    00              ??          00h
ram:065b647a    00              ??          00h
ram:065b647b    00              ??          00h
ram:065b647c    00              ??          00h
ram:065b647d    00              ??          00h
ram:065b647e    00              ??          00h
ram:065b647f    00              ??          00h
ram:065b6480    00              ??          00h
ram:065b6481    00              ??          00h
ram:065b6482    00              ??          00h
ram:065b6483    00              ??          00h
ram:065b6484    00              ??          00h
ram:065b6485    00              ??          00h
ram:065b6486    00              ??          00h
ram:065b6487    00              ??          00h
ram:065b6488    00              ??          00h
ram:065b6489    00              ??          00h
ram:065b648a    00              ??          00h
ram:065b648b    00              ??          00h
ram:065b648c    00              ??          00h
ram:065b648d    00              ??          00h
ram:065b648e    00              ??          00h
ram:065b648f    00              ??          00h
ram:065b6490    00              ??          00h
ram:065b6491    00              ??          00h
ram:065b6492    00              ??          00h
ram:065b6493    00              ??          00h
ram:065b6494    00              ??          00h
ram:065b6495    00              ??          00h
ram:065b6496    00              ??          00h
ram:065b6497    00              ??          00h
ram:065b6498    00              ??          00h
ram:065b6499    00              ??          00h
ram:065b649a    00              ??          00h
ram:065b649b    00              ??          00h
ram:065b649c    00              ??          00h
ram:065b649d    00              ??          00h
ram:065b649e    00              ??          00h
ram:065b649f    00              ??          00h
ram:065b64a0    00              ??          00h
ram:065b64a1    00              ??          00h
ram:065b64a2    00              ??          00h
ram:065b64a3    00              ??          00h
ram:065b64a4    00              ??          00h
ram:065b64a5    00              ??          00h
ram:065b64a6    00              ??          00h
ram:065b64a7    00              ??          00h
ram:065b64a8    00              ??          00h
ram:065b64a9    00              ??          00h
ram:065b64aa    00              ??          00h
ram:065b64ab    00              ??          00h
ram:065b64ac    00              ??          00h
ram:065b64ad    00              ??          00h
ram:065b64ae    00              ??          00h
ram:065b64af    00              ??          00h
ram:065b64b0    00              ??          00h
ram:065b64b1    00              ??          00h
ram:065b64b2    00              ??          00h
ram:065b64b3    00              ??          00h
ram:065b64b4    00              ??          00h
ram:065b64b5    00              ??          00h
ram:065b64b6    00              ??          00h
ram:065b64b7    00              ??          00h
ram:065b64b8    00              ??          00h
ram:065b64b9    00              ??          00h
ram:065b64ba    00              ??          00h
ram:065b64bb    00              ??          00h
ram:065b64bc    00              ??          00h
ram:065b64bd    00              ??          00h
ram:065b64be    00              ??          00h
ram:065b64bf    00              ??          00h
ram:065b64c0    00              ??          00h
ram:065b64c1    00              ??          00h
ram:065b64c2    00              ??          00h
ram:065b64c3    00              ??          00h
ram:065b64c4    00              ??          00h
ram:065b64c5    00              ??          00h
ram:065b64c6    00              ??          00h
ram:065b64c7    00              ??          00h
ram:065b64c8    00              ??          00h
ram:065b64c9    00              ??          00h
ram:065b64ca    00              ??          00h
ram:065b64cb    00              ??          00h
ram:065b64cc    00              ??          00h
ram:065b64cd    00              ??          00h
ram:065b64ce    00              ??          00h
ram:065b64cf    00              ??          00h
ram:065b64d0    00              ??          00h
ram:065b64d1    00              ??          00h
ram:065b64d2    00              ??          00h
ram:065b64d3    00              ??          00h
ram:065b64d4    00              ??          00h
ram:065b64d5    00              ??          00h
ram:065b64d6    00              ??          00h
ram:065b64d7    00              ??          00h
ram:065b64d8    00              ??          00h
ram:065b64d9    00              ??          00h
ram:065b64da    00              ??          00h
ram:065b64db    00              ??          00h
ram:065b64dc    00              ??          00h
ram:065b64dd    00              ??          00h
ram:065b64de    00              ??          00h
ram:065b64df    00              ??          00h
ram:065b64e0    00              ??          00h
ram:065b64e1    00              ??          00h
ram:065b64e2    00              ??          00h
ram:065b64e3    00              ??          00h
ram:065b64e4    00              ??          00h
ram:065b64e5    00              ??          00h
ram:065b64e6    00              ??          00h
ram:065b64e7    00              ??          00h
ram:065b64e8    00              ??          00h
ram:065b64e9    00              ??          00h
ram:065b64ea    00              ??          00h
ram:065b64eb    00              ??          00h
ram:065b64ec    00              ??          00h
ram:065b64ed    00              ??          00h
ram:065b64ee    00              ??          00h
ram:065b64ef    00              ??          00h
ram:065b64f0    00              ??          00h
ram:065b64f1    00              ??          00h
ram:065b64f2    00              ??          00h
ram:065b64f3    00              ??          00h
ram:065b64f4    00              ??          00h
ram:065b64f5    00              ??          00h
ram:065b64f6    00              ??          00h
ram:065b64f7    00              ??          00h
ram:065b64f8    00              ??          00h
ram:065b64f9    00              ??          00h
ram:065b64fa    00              ??          00h
ram:065b64fb    00              ??          00h
ram:065b64fc    00              ??          00h
ram:065b64fd    00              ??          00h
ram:065b64fe    00              ??          00h
ram:065b64ff    00              ??          00h
ram:065b6500    00              ??          00h
ram:065b6501    00              ??          00h
ram:065b6502    00              ??          00h
ram:065b6503    00              ??          00h
ram:065b6504    00              ??          00h
ram:065b6505    00              ??          00h
ram:065b6506    00              ??          00h
ram:065b6507    00              ??          00h
ram:065b6508    00              ??          00h
ram:065b6509    00              ??          00h
ram:065b650a    00              ??          00h
ram:065b650b    00              ??          00h
ram:065b650c    00              ??          00h
ram:065b650d    00              ??          00h
ram:065b650e    00              ??          00h
ram:065b650f    00              ??          00h
ram:065b6510    00              ??          00h
ram:065b6511    00              ??          00h
ram:065b6512    00              ??          00h
ram:065b6513    00              ??          00h
ram:065b6514    00              ??          00h
ram:065b6515    00              ??          00h
ram:065b6516    00              ??          00h
ram:065b6517    00              ??          00h
ram:065b6518    00              ??          00h
ram:065b6519    00              ??          00h
ram:065b651a    00              ??          00h
ram:065b651b    00              ??          00h
ram:065b651c    00              ??          00h
ram:065b651d    00              ??          00h
ram:065b651e    00              ??          00h
ram:065b651f    00              ??          00h
ram:065b6520    00              ??          00h
ram:065b6521    00              ??          00h
ram:065b6522    00              ??          00h
ram:065b6523    00              ??          00h
ram:065b6524    00              ??          00h
ram:065b6525    00              ??          00h
ram:065b6526    00              ??          00h
ram:065b6527    00              ??          00h
ram:065b6528    00              ??          00h
ram:065b6529    00              ??          00h
ram:065b652a    00              ??          00h
ram:065b652b    00              ??          00h
ram:065b652c    00              ??          00h
ram:065b652d    00              ??          00h
ram:065b652e    00              ??          00h
ram:065b652f    00              ??          00h
ram:065b6530    00              ??          00h
ram:065b6531    00              ??          00h
ram:065b6532    00              ??          00h
ram:065b6533    00              ??          00h
ram:065b6534    00              ??          00h
ram:065b6535    00              ??          00h
ram:065b6536    00              ??          00h
ram:065b6537    00              ??          00h
ram:065b6538    00              ??          00h
ram:065b6539    00              ??          00h
ram:065b653a    00              ??          00h
ram:065b653b    00              ??          00h
ram:065b653c    00              ??          00h
ram:065b653d    00              ??          00h
ram:065b653e    00              ??          00h
ram:065b653f    00              ??          00h
ram:065b6540    00              ??          00h
ram:065b6541    00              ??          00h
ram:065b6542    00              ??          00h
ram:065b6543    00              ??          00h
ram:065b6544    00              ??          00h
ram:065b6545    00              ??          00h
ram:065b6546    00              ??          00h
ram:065b6547    00              ??          00h
ram:065b6548    00              ??          00h
ram:065b6549    00              ??          00h
ram:065b654a    00              ??          00h
ram:065b654b    00              ??          00h
ram:065b654c    00              ??          00h
ram:065b654d    00              ??          00h
ram:065b654e    00              ??          00h
ram:065b654f    00              ??          00h
ram:065b6550    00              ??          00h
ram:065b6551    00              ??          00h
ram:065b6552    00              ??          00h
ram:065b6553    00              ??          00h
ram:065b6554    00              ??          00h
ram:065b6555    00              ??          00h
ram:065b6556    00              ??          00h
ram:065b6557    00              ??          00h
ram:065b6558    00              ??          00h
ram:065b6559    00              ??          00h
ram:065b655a    00              ??          00h
ram:065b655b    00              ??          00h
ram:065b655c    00              ??          00h
ram:065b655d    00              ??          00h
ram:065b655e    00              ??          00h
ram:065b655f    00              ??          00h
ram:065b6560    00              ??          00h
ram:065b6561    00              ??          00h
ram:065b6562    00              ??          00h
ram:065b6563    00              ??          00h
ram:065b6564    00              ??          00h
ram:065b6565    00              ??          00h
ram:065b6566    00              ??          00h
ram:065b6567    00              ??          00h
ram:065b6568    00              ??          00h
ram:065b6569    00              ??          00h
ram:065b656a    00              ??          00h
ram:065b656b    00              ??          00h
ram:065b656c    00              ??          00h
ram:065b656d    00              ??          00h
ram:065b656e    00              ??          00h
ram:065b656f    00              ??          00h
ram:065b6570    00              ??          00h
ram:065b6571    00              ??          00h
ram:065b6572    00              ??          00h
ram:065b6573    00              ??          00h
ram:065b6574    00              ??          00h
ram:065b6575    00              ??          00h
ram:065b6576    00              ??          00h
ram:065b6577    00              ??          00h
ram:065b6578    00              ??          00h
ram:065b6579    00              ??          00h
ram:065b657a    00              ??          00h
ram:065b657b    00              ??          00h
ram:065b657c    00              ??          00h
ram:065b657d    00              ??          00h
ram:065b657e    00              ??          00h
ram:065b657f    00              ??          00h
ram:065b6580    00              ??          00h
ram:065b6581    00              ??          00h
ram:065b6582    00              ??          00h
ram:065b6583    00              ??          00h
ram:065b6584    00              ??          00h
ram:065b6585    00              ??          00h
ram:065b6586    00              ??          00h
ram:065b6587    00              ??          00h
ram:065b6588    00              ??          00h
ram:065b6589    00              ??          00h
ram:065b658a    00              ??          00h
ram:065b658b    00              ??          00h
ram:065b658c    00              ??          00h
ram:065b658d    00              ??          00h
ram:065b658e    00              ??          00h
ram:065b658f    00              ??          00h
ram:065b6590    00              ??          00h
ram:065b6591    00              ??          00h
ram:065b6592    00              ??          00h
ram:065b6593    00              ??          00h
ram:065b6594    00              ??          00h
ram:065b6595    00              ??          00h
ram:065b6596    00              ??          00h
ram:065b6597    00              ??          00h
ram:065b6598    00              ??          00h
ram:065b6599    00              ??          00h
ram:065b659a    00              ??          00h
ram:065b659b    00              ??          00h
ram:065b659c    00              ??          00h
ram:065b659d    00              ??          00h
ram:065b659e    00              ??          00h
ram:065b659f    00              ??          00h
ram:065b65a0    00              ??          00h
ram:065b65a1    00              ??          00h
ram:065b65a2    00              ??          00h
ram:065b65a3    00              ??          00h
ram:065b65a4    00              ??          00h
ram:065b65a5    00              ??          00h
ram:065b65a6    00              ??          00h
ram:065b65a7    00              ??          00h
ram:065b65a8    00              ??          00h
ram:065b65a9    00              ??          00h
ram:065b65aa    00              ??          00h
ram:065b65ab    00              ??          00h
ram:065b65ac    00              ??          00h
ram:065b65ad    00              ??          00h
ram:065b65ae    00              ??          00h
ram:065b65af    00              ??          00h
ram:065b65b0    00              ??          00h
ram:065b65b1    00              ??          00h
ram:065b65b2    00              ??          00h
ram:065b65b3    00              ??          00h
ram:065b65b4    00              ??          00h
ram:065b65b5    00              ??          00h
ram:065b65b6    00              ??          00h
ram:065b65b7    00              ??          00h
ram:065b65b8    00              ??          00h
ram:065b65b9    00              ??          00h
ram:065b65ba    00              ??          00h
ram:065b65bb    00              ??          00h
ram:065b65bc    00              ??          00h
ram:065b65bd    00              ??          00h
ram:065b65be    00              ??          00h
ram:065b65bf    00              ??          00h
ram:065b65c0    00              ??          00h
ram:065b65c1    00              ??          00h
ram:065b65c2    00              ??          00h
ram:065b65c3    00              ??          00h
ram:065b65c4    00              ??          00h
ram:065b65c5    00              ??          00h
ram:065b65c6    00              ??          00h
ram:065b65c7    00              ??          00h
ram:065b65c8    00              ??          00h
ram:065b65c9    00              ??          00h
ram:065b65ca    00              ??          00h
ram:065b65cb    00              ??          00h
ram:065b65cc    00              ??          00h
ram:065b65cd    00              ??          00h
ram:065b65ce    00              ??          00h
ram:065b65cf    00              ??          00h
ram:065b65d0    00              ??          00h
ram:065b65d1    00              ??          00h
ram:065b65d2    00              ??          00h
ram:065b65d3    00              ??          00h
ram:065b65d4    00              ??          00h
ram:065b65d5    00              ??          00h
ram:065b65d6    00              ??          00h
ram:065b65d7    00              ??          00h
ram:065b65d8    00              ??          00h
ram:065b65d9    00              ??          00h
ram:065b65da    00              ??          00h
ram:065b65db    00              ??          00h
ram:065b65dc    00              ??          00h
ram:065b65dd    00              ??          00h
ram:065b65de    00              ??          00h
ram:065b65df    00              ??          00h
ram:065b65e0    00              ??          00h
ram:065b65e1    00              ??          00h
ram:065b65e2    00              ??          00h
ram:065b65e3    00              ??          00h
ram:065b65e4    00              ??          00h
ram:065b65e5    00              ??          00h
ram:065b65e6    00              ??          00h
ram:065b65e7    00              ??          00h
ram:065b65e8    00              ??          00h
ram:065b65e9    00              ??          00h
ram:065b65ea    00              ??          00h
ram:065b65eb    00              ??          00h
ram:065b65ec    00              ??          00h
ram:065b65ed    00              ??          00h
ram:065b65ee    00              ??          00h
ram:065b65ef    00              ??          00h
ram:065b65f0    00              ??          00h
ram:065b65f1    00              ??          00h
ram:065b65f2    00              ??          00h
ram:065b65f3    00              ??          00h
ram:065b65f4    00              ??          00h
ram:065b65f5    00              ??          00h
ram:065b65f6    00              ??          00h
ram:065b65f7    00              ??          00h
ram:065b65f8    00              ??          00h
ram:065b65f9    00              ??          00h
ram:065b65fa    00              ??          00h
ram:065b65fb    00              ??          00h
ram:065b65fc    00              ??          00h
ram:065b65fd    00              ??          00h
ram:065b65fe    00              ??          00h
ram:065b65ff    00              ??          00h
ram:065b6600    00              ??          00h
ram:065b6601    00              ??          00h
ram:065b6602    00              ??          00h
ram:065b6603    00              ??          00h
ram:065b6604    00              ??          00h
ram:065b6605    00              ??          00h
ram:065b6606    00              ??          00h
ram:065b6607    00              ??          00h
ram:065b6608    00              ??          00h
ram:065b6609    00              ??          00h
ram:065b660a    00              ??          00h
ram:065b660b    00              ??          00h
ram:065b660c    00              ??          00h
ram:065b660d    00              ??          00h
ram:065b660e    00              ??          00h
ram:065b660f    00              ??          00h
ram:065b6610    00              ??          00h
ram:065b6611    00              ??          00h
ram:065b6612    00              ??          00h
ram:065b6613    00              ??          00h
ram:065b6614    00              ??          00h
ram:065b6615    00              ??          00h
ram:065b6616    00              ??          00h
ram:065b6617    00              ??          00h
ram:065b6618    00              ??          00h
ram:065b6619    00              ??          00h
ram:065b661a    00              ??          00h
ram:065b661b    00              ??          00h
ram:065b661c    00              ??          00h
ram:065b661d    00              ??          00h
ram:065b661e    00              ??          00h
ram:065b661f    00              ??          00h
ram:065b6620    00              ??          00h
ram:065b6621    00              ??          00h
ram:065b6622    00              ??          00h
ram:065b6623    00              ??          00h
ram:065b6624    00              ??          00h
ram:065b6625    00              ??          00h
ram:065b6626    00              ??          00h
ram:065b6627    00              ??          00h
ram:065b6628    00              ??          00h
ram:065b6629    00              ??          00h
ram:065b662a    00              ??          00h
ram:065b662b    00              ??          00h
ram:065b662c    00              ??          00h
ram:065b662d    00              ??          00h
ram:065b662e    00              ??          00h
ram:065b662f    00              ??          00h
ram:065b6630    00              ??          00h
ram:065b6631    00              ??          00h
ram:065b6632    00              ??          00h
ram:065b6633    00              ??          00h
ram:065b6634    00              ??          00h
ram:065b6635    00              ??          00h
ram:065b6636    00              ??          00h
ram:065b6637    00              ??          00h
ram:065b6638    00              ??          00h
ram:065b6639    00              ??          00h
ram:065b663a    00              ??          00h
ram:065b663b    00              ??          00h
ram:065b663c    00              ??          00h
ram:065b663d    00              ??          00h
ram:065b663e    00              ??          00h
ram:065b663f    00              ??          00h
ram:065b6640    00              ??          00h
ram:065b6641    00              ??          00h
ram:065b6642    00              ??          00h
ram:065b6643    00              ??          00h
ram:065b6644    00              ??          00h
ram:065b6645    00              ??          00h
ram:065b6646    00              ??          00h
ram:065b6647    00              ??          00h
ram:065b6648    00              ??          00h
ram:065b6649    00              ??          00h
ram:065b664a    00              ??          00h
ram:065b664b    00              ??          00h
ram:065b664c    00              ??          00h
ram:065b664d    00              ??          00h
ram:065b664e    00              ??          00h
ram:065b664f    00              ??          00h
ram:065b6650    00              ??          00h
ram:065b6651    00              ??          00h
ram:065b6652    00              ??          00h
ram:065b6653    00              ??          00h
ram:065b6654    00              ??          00h
ram:065b6655    00              ??          00h
ram:065b6656    00              ??          00h
ram:065b6657    00              ??          00h
ram:065b6658    00              ??          00h
ram:065b6659    00              ??          00h
ram:065b665a    00              ??          00h
ram:065b665b    00              ??          00h
ram:065b665c    00              ??          00h
ram:065b665d    00              ??          00h
ram:065b665e    00              ??          00h
ram:065b665f    00              ??          00h
ram:065b6660    00              ??          00h
ram:065b6661    00              ??          00h
ram:065b6662    00              ??          00h
ram:065b6663    00              ??          00h
ram:065b6664    00              ??          00h
ram:065b6665    00              ??          00h
ram:065b6666    00              ??          00h
ram:065b6667    00              ??          00h
ram:065b6668    00              ??          00h
ram:065b6669    00              ??          00h
ram:065b666a    00              ??          00h
ram:065b666b    00              ??          00h
ram:065b666c    00              ??          00h
ram:065b666d    00              ??          00h
ram:065b666e    00              ??          00h
ram:065b666f    00              ??          00h
ram:065b6670    00              ??          00h
ram:065b6671    00              ??          00h
ram:065b6672    00              ??          00h
ram:065b6673    00              ??          00h
ram:065b6674    00              ??          00h
ram:065b6675    00              ??          00h
ram:065b6676    00              ??          00h
ram:065b6677    00              ??          00h
ram:065b6678    00              ??          00h
ram:065b6679    00              ??          00h
ram:065b667a    00              ??          00h
ram:065b667b    00              ??          00h
ram:065b667c    00              ??          00h
ram:065b667d    00              ??          00h
ram:065b667e    00              ??          00h
ram:065b667f    00              ??          00h
ram:065b6680    00              ??          00h
ram:065b6681    00              ??          00h
ram:065b6682    00              ??          00h
ram:065b6683    00              ??          00h
ram:065b6684    00              ??          00h
ram:065b6685    00              ??          00h
ram:065b6686    00              ??          00h
ram:065b6687    00              ??          00h
ram:065b6688    00              ??          00h
ram:065b6689    00              ??          00h
ram:065b668a    00              ??          00h
ram:065b668b    00              ??          00h
ram:065b668c    00              ??          00h
ram:065b668d    00              ??          00h
ram:065b668e    00              ??          00h
ram:065b668f    00              ??          00h
ram:065b6690    00              ??          00h
ram:065b6691    00              ??          00h
ram:065b6692    00              ??          00h
ram:065b6693    00              ??          00h
ram:065b6694    00              ??          00h
ram:065b6695    00              ??          00h
ram:065b6696    00              ??          00h
ram:065b6697    00              ??          00h
ram:065b6698    00              ??          00h
ram:065b6699    00              ??          00h
ram:065b669a    00              ??          00h
ram:065b669b    00              ??          00h
ram:065b669c    00              ??          00h
ram:065b669d    00              ??          00h
ram:065b669e    00              ??          00h
ram:065b669f    00              ??          00h
ram:065b66a0    00              ??          00h
ram:065b66a1    00              ??          00h
ram:065b66a2    00              ??          00h
ram:065b66a3    00              ??          00h
ram:065b66a4    00              ??          00h
ram:065b66a5    00              ??          00h
ram:065b66a6    00              ??          00h
ram:065b66a7    00              ??          00h
ram:065b66a8    00              ??          00h
ram:065b66a9    00              ??          00h
ram:065b66aa    00              ??          00h
ram:065b66ab    00              ??          00h
ram:065b66ac    00              ??          00h
ram:065b66ad    00              ??          00h
ram:065b66ae    00              ??          00h
ram:065b66af    00              ??          00h
ram:065b66b0    00              ??          00h
ram:065b66b1    00              ??          00h
ram:065b66b2    00              ??          00h
ram:065b66b3    00              ??          00h
ram:065b66b4    00              ??          00h
ram:065b66b5    00              ??          00h
ram:065b66b6    00              ??          00h
ram:065b66b7    00              ??          00h
ram:065b66b8    00              ??          00h
ram:065b66b9    00              ??          00h
ram:065b66ba    00              ??          00h
ram:065b66bb    00              ??          00h
ram:065b66bc    00              ??          00h
ram:065b66bd    00              ??          00h
ram:065b66be    00              ??          00h
ram:065b66bf    00              ??          00h
ram:065b66c0    00              ??          00h
ram:065b66c1    00              ??          00h
ram:065b66c2    00              ??          00h
ram:065b66c3    00              ??          00h
ram:065b66c4    00              ??          00h
ram:065b66c5    00              ??          00h
ram:065b66c6    00              ??          00h
ram:065b66c7    00              ??          00h
ram:065b66c8    00              ??          00h
ram:065b66c9    00              ??          00h
ram:065b66ca    00              ??          00h
ram:065b66cb    00              ??          00h
ram:065b66cc    00              ??          00h
ram:065b66cd    00              ??          00h
ram:065b66ce    00              ??          00h
ram:065b66cf    00              ??          00h
ram:065b66d0    00              ??          00h
ram:065b66d1    00              ??          00h
ram:065b66d2    00              ??          00h
ram:065b66d3    00              ??          00h
ram:065b66d4    00              ??          00h
ram:065b66d5    00              ??          00h
ram:065b66d6    00              ??          00h
ram:065b66d7    00              ??          00h
ram:065b66d8    00              ??          00h
ram:065b66d9    00              ??          00h
ram:065b66da    00              ??          00h
ram:065b66db    00              ??          00h
ram:065b66dc    00              ??          00h
ram:065b66dd    00              ??          00h
ram:065b66de    00              ??          00h
ram:065b66df    00              ??          00h
ram:065b66e0    00              ??          00h
ram:065b66e1    00              ??          00h
ram:065b66e2    00              ??          00h
ram:065b66e3    00              ??          00h
ram:065b66e4    00              ??          00h
ram:065b66e5    00              ??          00h
ram:065b66e6    00              ??          00h
ram:065b66e7    00              ??          00h
ram:065b66e8    00              ??          00h
ram:065b66e9    00              ??          00h
ram:065b66ea    00              ??          00h
ram:065b66eb    00              ??          00h
ram:065b66ec    00              ??          00h
ram:065b66ed    00              ??          00h
ram:065b66ee    00              ??          00h
ram:065b66ef    00              ??          00h
ram:065b66f0    00              ??          00h
ram:065b66f1    00              ??          00h
ram:065b66f2    00              ??          00h
ram:065b66f3    00              ??          00h
ram:065b66f4    00              ??          00h
ram:065b66f5    00              ??          00h
ram:065b66f6    00              ??          00h
ram:065b66f7    00              ??          00h
ram:065b66f8    00              ??          00h
ram:065b66f9    00              ??          00h
ram:065b66fa    00              ??          00h
ram:065b66fb    00              ??          00h
ram:065b66fc    00              ??          00h
ram:065b66fd    00              ??          00h
ram:065b66fe    00              ??          00h
ram:065b66ff    00              ??          00h
ram:065b6700    00              ??          00h
ram:065b6701    00              ??          00h
ram:065b6702    00              ??          00h
ram:065b6703    00              ??          00h
ram:065b6704    00              ??          00h
ram:065b6705    00              ??          00h
ram:065b6706    00              ??          00h
ram:065b6707    00              ??          00h
ram:065b6708    00              ??          00h
ram:065b6709    00              ??          00h
ram:065b670a    00              ??          00h
ram:065b670b    00              ??          00h
ram:065b670c    00              ??          00h
ram:065b670d    00              ??          00h
ram:065b670e    00              ??          00h
ram:065b670f    00              ??          00h
ram:065b6710    00              ??          00h
ram:065b6711    00              ??          00h
ram:065b6712    00              ??          00h
ram:065b6713    00              ??          00h
ram:065b6714    00              ??          00h
ram:065b6715    00              ??          00h
ram:065b6716    00              ??          00h
ram:065b6717    00              ??          00h
ram:065b6718    00              ??          00h
ram:065b6719    00              ??          00h
ram:065b671a    00              ??          00h
ram:065b671b    00              ??          00h
ram:065b671c    00              ??          00h
ram:065b671d    00              ??          00h
ram:065b671e    00              ??          00h
ram:065b671f    00              ??          00h
ram:065b6720    00              ??          00h
ram:065b6721    00              ??          00h
ram:065b6722    00              ??          00h
ram:065b6723    00              ??          00h
ram:065b6724    00              ??          00h
ram:065b6725    00              ??          00h
ram:065b6726    00              ??          00h
ram:065b6727    00              ??          00h
ram:065b6728    00              ??          00h
ram:065b6729    00              ??          00h
ram:065b672a    00              ??          00h
ram:065b672b    00              ??          00h
ram:065b672c    00              ??          00h
ram:065b672d    00              ??          00h
ram:065b672e    00              ??          00h
ram:065b672f    00              ??          00h
ram:065b6730    00              ??          00h
ram:065b6731    00              ??          00h
ram:065b6732    00              ??          00h
ram:065b6733    00              ??          00h
ram:065b6734    00              ??          00h
ram:065b6735    00              ??          00h
ram:065b6736    00              ??          00h
ram:065b6737    00              ??          00h
ram:065b6738    00              ??          00h
ram:065b6739    00              ??          00h
ram:065b673a    00              ??          00h
ram:065b673b    00              ??          00h
ram:065b673c    00              ??          00h
ram:065b673d    00              ??          00h
ram:065b673e    00              ??          00h
ram:065b673f    00              ??          00h
ram:065b6740    00              ??          00h
ram:065b6741    00              ??          00h
ram:065b6742    00              ??          00h
ram:065b6743    00              ??          00h
ram:065b6744    00              ??          00h
ram:065b6745    00              ??          00h
ram:065b6746    00              ??          00h
ram:065b6747    00              ??          00h
ram:065b6748    00              ??          00h
ram:065b6749    00              ??          00h
ram:065b674a    00              ??          00h
ram:065b674b    00              ??          00h
ram:065b674c    00              ??          00h
ram:065b674d    00              ??          00h
ram:065b674e    00              ??          00h
ram:065b674f    00              ??          00h
ram:065b6750    00              ??          00h
ram:065b6751    00              ??          00h
ram:065b6752    00              ??          00h
ram:065b6753    00              ??          00h
ram:065b6754    00              ??          00h
ram:065b6755    00              ??          00h
ram:065b6756    00              ??          00h
ram:065b6757    00              ??          00h
ram:065b6758    00              ??          00h
ram:065b6759    00              ??          00h
ram:065b675a    00              ??          00h
ram:065b675b    00              ??          00h
ram:065b675c    00              ??          00h
ram:065b675d    00              ??          00h
ram:065b675e    00              ??          00h
ram:065b675f    00              ??          00h
ram:065b6760    00              ??          00h
ram:065b6761    00              ??          00h
ram:065b6762    00              ??          00h
ram:065b6763    00              ??          00h
ram:065b6764    00              ??          00h
ram:065b6765    00              ??          00h
ram:065b6766    00              ??          00h
ram:065b6767    00              ??          00h
ram:065b6768    00              ??          00h
ram:065b6769    00              ??          00h
ram:065b676a    00              ??          00h
ram:065b676b    00              ??          00h
ram:065b676c    00              ??          00h
ram:065b676d    00              ??          00h
ram:065b676e    00              ??          00h
ram:065b676f    00              ??          00h
ram:065b6770    00              ??          00h
ram:065b6771    00              ??          00h
ram:065b6772    00              ??          00h
ram:065b6773    00              ??          00h
ram:065b6774    00              ??          00h
ram:065b6775    00              ??          00h
ram:065b6776    00              ??          00h
ram:065b6777    00              ??          00h
ram:065b6778    00              ??          00h
ram:065b6779    00              ??          00h
ram:065b677a    00              ??          00h
ram:065b677b    00              ??          00h
ram:065b677c    00              ??          00h
ram:065b677d    00              ??          00h
ram:065b677e    00              ??          00h
ram:065b677f    00              ??          00h
ram:065b6780    00              ??          00h
ram:065b6781    00              ??          00h
ram:065b6782    00              ??          00h
ram:065b6783    00              ??          00h
ram:065b6784    00              ??          00h
ram:065b6785    00              ??          00h
ram:065b6786    00              ??          00h
ram:065b6787    00              ??          00h
ram:065b6788    00              ??          00h
ram:065b6789    00              ??          00h
ram:065b678a    00              ??          00h
ram:065b678b    00              ??          00h
ram:065b678c    00              ??          00h
ram:065b678d    00              ??          00h
ram:065b678e    00              ??          00h
ram:065b678f    00              ??          00h
ram:065b6790    00              ??          00h
ram:065b6791    00              ??          00h
ram:065b6792    00              ??          00h
ram:065b6793    00              ??          00h
ram:065b6794    00              ??          00h
ram:065b6795    00              ??          00h
ram:065b6796    00              ??          00h
ram:065b6797    00              ??          00h
ram:065b6798    00              ??          00h
ram:065b6799    00              ??          00h
ram:065b679a    00              ??          00h
ram:065b679b    00              ??          00h
ram:065b679c    00              ??          00h
ram:065b679d    00              ??          00h
ram:065b679e    00              ??          00h
ram:065b679f    00              ??          00h
ram:065b67a0    00              ??          00h
ram:065b67a1    00              ??          00h
ram:065b67a2    00              ??          00h
ram:065b67a3    00              ??          00h
ram:065b67a4    00              ??          00h
ram:065b67a5    00              ??          00h
ram:065b67a6    00              ??          00h
ram:065b67a7    00              ??          00h
ram:065b67a8    00              ??          00h
ram:065b67a9    00              ??          00h
ram:065b67aa    00              ??          00h
ram:065b67ab    00              ??          00h
ram:065b67ac    00              ??          00h
ram:065b67ad    00              ??          00h
ram:065b67ae    00              ??          00h
ram:065b67af    00              ??          00h
ram:065b67b0    00              ??          00h
ram:065b67b1    00              ??          00h
ram:065b67b2    00              ??          00h
ram:065b67b3    00              ??          00h
ram:065b67b4    00              ??          00h
ram:065b67b5    00              ??          00h
ram:065b67b6    00              ??          00h
ram:065b67b7    00              ??          00h
ram:065b67b8    00              ??          00h
ram:065b67b9    00              ??          00h
ram:065b67ba    00              ??          00h
ram:065b67bb    00              ??          00h
ram:065b67bc    00              ??          00h
ram:065b67bd    00              ??          00h
ram:065b67be    00              ??          00h
ram:065b67bf    00              ??          00h
ram:065b67c0    00              ??          00h
ram:065b67c1    00              ??          00h
ram:065b67c2    00              ??          00h
ram:065b67c3    00              ??          00h
ram:065b67c4    00              ??          00h
ram:065b67c5    00              ??          00h
ram:065b67c6    00              ??          00h
ram:065b67c7    00              ??          00h
ram:065b67c8    00              ??          00h
ram:065b67c9    00              ??          00h
ram:065b67ca    00              ??          00h
ram:065b67cb    00              ??          00h
ram:065b67cc    00              ??          00h
ram:065b67cd    00              ??          00h
ram:065b67ce    00              ??          00h
ram:065b67cf    00              ??          00h
ram:065b67d0    00              ??          00h
ram:065b67d1    00              ??          00h
ram:065b67d2    00              ??          00h
ram:065b67d3    00              ??          00h
ram:065b67d4    00              ??          00h
ram:065b67d5    00              ??          00h
ram:065b67d6    00              ??          00h
ram:065b67d7    00              ??          00h
ram:065b67d8    00              ??          00h
ram:065b67d9    00              ??          00h
ram:065b67da    00              ??          00h
ram:065b67db    00              ??          00h
ram:065b67dc    00              ??          00h
ram:065b67dd    00              ??          00h
ram:065b67de    00              ??          00h
ram:065b67df    00              ??          00h
ram:065b67e0    00              ??          00h
ram:065b67e1    00              ??          00h
ram:065b67e2    00              ??          00h
ram:065b67e3    00              ??          00h
ram:065b67e4    00              ??          00h
ram:065b67e5    00              ??          00h
ram:065b67e6    00              ??          00h
ram:065b67e7    00              ??          00h
ram:065b67e8    00              ??          00h
ram:065b67e9    00              ??          00h
ram:065b67ea    00              ??          00h
ram:065b67eb    00              ??          00h
ram:065b67ec    00              ??          00h
ram:065b67ed    00              ??          00h
ram:065b67ee    00              ??          00h
ram:065b67ef    00              ??          00h
ram:065b67f0    00              ??          00h
ram:065b67f1    00              ??          00h
ram:065b67f2    00              ??          00h
ram:065b67f3    00              ??          00h
ram:065b67f4    00              ??          00h
ram:065b67f5    00              ??          00h
ram:065b67f6    00              ??          00h
ram:065b67f7    00              ??          00h
ram:065b67f8    00              ??          00h
ram:065b67f9    00              ??          00h
ram:065b67fa    00              ??          00h
ram:065b67fb    00              ??          00h
ram:065b67fc    00              ??          00h
ram:065b67fd    00              ??          00h
ram:065b67fe    00              ??          00h
ram:065b67ff    00              ??          00h
ram:065b6800    00              ??          00h
ram:065b6801    00              ??          00h
ram:065b6802    00              ??          00h
ram:065b6803    00              ??          00h
ram:065b6804    00              ??          00h
ram:065b6805    00              ??          00h
ram:065b6806    00              ??          00h
ram:065b6807    00              ??          00h
ram:065b6808    00              ??          00h
ram:065b6809    00              ??          00h
ram:065b680a    00              ??          00h
ram:065b680b    00              ??          00h
ram:065b680c    00              ??          00h
ram:065b680d    00              ??          00h
ram:065b680e    00              ??          00h
ram:065b680f    00              ??          00h
ram:065b6810    00              ??          00h
ram:065b6811    00              ??          00h
ram:065b6812    00              ??          00h
ram:065b6813    00              ??          00h
ram:065b6814    00              ??          00h
ram:065b6815    00              ??          00h
ram:065b6816    00              ??          00h
ram:065b6817    00              ??          00h
ram:065b6818    00              ??          00h
ram:065b6819    00              ??          00h
ram:065b681a    00              ??          00h
ram:065b681b    00              ??          00h
ram:065b681c    00              ??          00h
ram:065b681d    00              ??          00h
ram:065b681e    00              ??          00h
ram:065b681f    00              ??          00h
ram:065b6820    00              ??          00h
ram:065b6821    00              ??          00h
ram:065b6822    00              ??          00h
ram:065b6823    00              ??          00h
ram:065b6824    00              ??          00h
ram:065b6825    00              ??          00h
ram:065b6826    00              ??          00h
ram:065b6827    00              ??          00h
ram:065b6828    00              ??          00h
ram:065b6829    00              ??          00h
ram:065b682a    00              ??          00h
ram:065b682b    00              ??          00h
ram:065b682c    00              ??          00h
ram:065b682d    00              ??          00h
ram:065b682e    00              ??          00h
ram:065b682f    00              ??          00h
ram:065b6830    00              ??          00h
ram:065b6831    00              ??          00h
ram:065b6832    00              ??          00h
ram:065b6833    00              ??          00h
ram:065b6834    00              ??          00h
ram:065b6835    00              ??          00h
ram:065b6836    00              ??          00h
ram:065b6837    00              ??          00h
ram:065b6838    00              ??          00h
ram:065b6839    00              ??          00h
ram:065b683a    00              ??          00h
ram:065b683b    00              ??          00h
ram:065b683c    00              ??          00h
ram:065b683d    00              ??          00h
ram:065b683e    00              ??          00h
ram:065b683f    00              ??          00h
ram:065b6840    00              ??          00h
ram:065b6841    00              ??          00h
ram:065b6842    00              ??          00h
ram:065b6843    00              ??          00h
ram:065b6844    00              ??          00h
ram:065b6845    00              ??          00h
ram:065b6846    00              ??          00h
ram:065b6847    00              ??          00h
ram:065b6848    00              ??          00h
ram:065b6849    00              ??          00h
ram:065b684a    00              ??          00h
ram:065b684b    00              ??          00h
ram:065b684c    00              ??          00h
ram:065b684d    00              ??          00h
ram:065b684e    00              ??          00h
ram:065b684f    00              ??          00h
ram:065b6850    00              ??          00h
ram:065b6851    00              ??          00h
ram:065b6852    00              ??          00h
ram:065b6853    00              ??          00h
ram:065b6854    00              ??          00h
ram:065b6855    00              ??          00h
ram:065b6856    00              ??          00h
ram:065b6857    00              ??          00h
ram:065b6858    00              ??          00h
ram:065b6859    00              ??          00h
ram:065b685a    00              ??          00h
ram:065b685b    00              ??          00h
ram:065b685c    00              ??          00h
ram:065b685d    00              ??          00h
ram:065b685e    00              ??          00h
ram:065b685f    00              ??          00h
ram:065b6860    00              ??          00h
ram:065b6861    00              ??          00h
ram:065b6862    00              ??          00h
ram:065b6863    00              ??          00h
ram:065b6864    00              ??          00h
ram:065b6865    00              ??          00h
ram:065b6866    00              ??          00h
ram:065b6867    00              ??          00h
ram:065b6868    00              ??          00h
ram:065b6869    00              ??          00h
ram:065b686a    00              ??          00h
ram:065b686b    00              ??          00h
ram:065b686c    00              ??          00h
ram:065b686d    00              ??          00h
ram:065b686e    00              ??          00h
ram:065b686f    00              ??          00h
ram:065b6870    00              ??          00h
ram:065b6871    00              ??          00h
ram:065b6872    00              ??          00h
ram:065b6873    00              ??          00h
ram:065b6874    00              ??          00h
ram:065b6875    00              ??          00h
ram:065b6876    00              ??          00h
ram:065b6877    00              ??          00h
ram:065b6878    00              ??          00h
ram:065b6879    00              ??          00h
ram:065b687a    00              ??          00h
ram:065b687b    00              ??          00h
ram:065b687c    00              ??          00h
ram:065b687d    00              ??          00h
ram:065b687e    00              ??          00h
ram:065b687f    00              ??          00h
ram:065b6880    00              ??          00h
ram:065b6881    00              ??          00h
ram:065b6882    00              ??          00h
ram:065b6883    00              ??          00h
ram:065b6884    00              ??          00h
ram:065b6885    00              ??          00h
ram:065b6886    00              ??          00h
ram:065b6887    00              ??          00h
ram:065b6888    00              ??          00h
ram:065b6889    00              ??          00h
ram:065b688a    00              ??          00h
ram:065b688b    00              ??          00h
ram:065b688c    00              ??          00h
ram:065b688d    00              ??          00h
ram:065b688e    00              ??          00h
ram:065b688f    00              ??          00h
ram:065b6890    00              ??          00h
ram:065b6891    00              ??          00h
ram:065b6892    00              ??          00h
ram:065b6893    00              ??          00h
ram:065b6894    00              ??          00h
ram:065b6895    00              ??          00h
ram:065b6896    00              ??          00h
ram:065b6897    00              ??          00h
ram:065b6898    00              ??          00h
ram:065b6899    00              ??          00h
ram:065b689a    00              ??          00h
ram:065b689b    00              ??          00h
ram:065b689c    00              ??          00h
ram:065b689d    00              ??          00h
ram:065b689e    00              ??          00h
ram:065b689f    00              ??          00h
ram:065b68a0    00              ??          00h
ram:065b68a1    00              ??          00h
ram:065b68a2    00              ??          00h
ram:065b68a3    00              ??          00h
ram:065b68a4    00              ??          00h
ram:065b68a5    00              ??          00h
ram:065b68a6    00              ??          00h
ram:065b68a7    00              ??          00h
ram:065b68a8    00              ??          00h
ram:065b68a9    00              ??          00h
ram:065b68aa    00              ??          00h
ram:065b68ab    00              ??          00h
ram:065b68ac    00              ??          00h
ram:065b68ad    00              ??          00h
ram:065b68ae    00              ??          00h
ram:065b68af    00              ??          00h
ram:065b68b0    00              ??          00h
ram:065b68b1    00              ??          00h
ram:065b68b2    00              ??          00h
ram:065b68b3    00              ??          00h
ram:065b68b4    00              ??          00h
ram:065b68b5    00              ??          00h
ram:065b68b6    00              ??          00h
ram:065b68b7    00              ??          00h
ram:065b68b8    00              ??          00h
ram:065b68b9    00              ??          00h
ram:065b68ba    00              ??          00h
ram:065b68bb    00              ??          00h
ram:065b68bc    00              ??          00h
ram:065b68bd    00              ??          00h
ram:065b68be    00              ??          00h
ram:065b68bf    00              ??          00h
ram:065b68c0    00              ??          00h
ram:065b68c1    00              ??          00h
ram:065b68c2    00              ??          00h
ram:065b68c3    00              ??          00h
ram:065b68c4    00              ??          00h
ram:065b68c5    00              ??          00h
ram:065b68c6    00              ??          00h
ram:065b68c7    00              ??          00h
ram:065b68c8    00              ??          00h
ram:065b68c9    00              ??          00h
ram:065b68ca    00              ??          00h
ram:065b68cb    00              ??          00h
ram:065b68cc    00              ??          00h
ram:065b68cd    00              ??          00h
ram:065b68ce    00              ??          00h
ram:065b68cf    00              ??          00h
ram:065b68d0    00              ??          00h
ram:065b68d1    00              ??          00h
ram:065b68d2    00              ??          00h
ram:065b68d3    00              ??          00h
ram:065b68d4    00              ??          00h
ram:065b68d5    00              ??          00h
ram:065b68d6    00              ??          00h
ram:065b68d7    00              ??          00h
ram:065b68d8    00              ??          00h
ram:065b68d9    00              ??          00h
ram:065b68da    00              ??          00h
ram:065b68db    00              ??          00h
ram:065b68dc    00              ??          00h
ram:065b68dd    00              ??          00h
ram:065b68de    00              ??          00h
ram:065b68df    00              ??          00h
ram:065b68e0    00              ??          00h
ram:065b68e1    00              ??          00h
ram:065b68e2    00              ??          00h
ram:065b68e3    00              ??          00h
ram:065b68e4    00              ??          00h
ram:065b68e5    00              ??          00h
ram:065b68e6    00              ??          00h
ram:065b68e7    00              ??          00h
ram:065b68e8    00              ??          00h
ram:065b68e9    00              ??          00h
ram:065b68ea    00              ??          00h
ram:065b68eb    00              ??          00h
ram:065b68ec    00              ??          00h
ram:065b68ed    00              ??          00h
ram:065b68ee    00              ??          00h
ram:065b68ef    00              ??          00h
ram:065b68f0    00              ??          00h
ram:065b68f1    00              ??          00h
ram:065b68f2    00              ??          00h
ram:065b68f3    00              ??          00h
ram:065b68f4    00              ??          00h
ram:065b68f5    00              ??          00h
ram:065b68f6    00              ??          00h
ram:065b68f7    00              ??          00h
ram:065b68f8    00              ??          00h
ram:065b68f9    00              ??          00h
ram:065b68fa    00              ??          00h
ram:065b68fb    00              ??          00h
ram:065b68fc    00              ??          00h
ram:065b68fd    00              ??          00h
ram:065b68fe    00              ??          00h
ram:065b68ff    00              ??          00h
ram:065b6900    00              ??          00h
ram:065b6901    00              ??          00h
ram:065b6902    00              ??          00h
ram:065b6903    00              ??          00h
ram:065b6904    00              ??          00h
ram:065b6905    00              ??          00h
ram:065b6906    00              ??          00h
ram:065b6907    00              ??          00h
ram:065b6908    00              ??          00h
ram:065b6909    00              ??          00h
ram:065b690a    00              ??          00h
ram:065b690b    00              ??          00h
ram:065b690c    00              ??          00h
ram:065b690d    00              ??          00h
ram:065b690e    00              ??          00h
ram:065b690f    00              ??          00h
ram:065b6910    00              ??          00h
ram:065b6911    00              ??          00h
ram:065b6912    00              ??          00h
ram:065b6913    00              ??          00h
ram:065b6914    00              ??          00h
ram:065b6915    00              ??          00h
ram:065b6916    00              ??          00h
ram:065b6917    00              ??          00h
ram:065b6918    00              ??          00h
ram:065b6919    00              ??          00h
ram:065b691a    00              ??          00h
ram:065b691b    00              ??          00h
ram:065b691c    00              ??          00h
ram:065b691d    00              ??          00h
ram:065b691e    00              ??          00h
ram:065b691f    00              ??          00h
ram:065b6920    00              ??          00h
ram:065b6921    00              ??          00h
ram:065b6922    00              ??          00h
ram:065b6923    00              ??          00h
ram:065b6924    00              ??          00h
ram:065b6925    00              ??          00h
ram:065b6926    00              ??          00h
ram:065b6927    00              ??          00h
ram:065b6928    00              ??          00h
ram:065b6929    00              ??          00h
ram:065b692a    00              ??          00h
ram:065b692b    00              ??          00h
ram:065b692c    00              ??          00h
ram:065b692d    00              ??          00h
ram:065b692e    00              ??          00h
ram:065b692f    00              ??          00h
ram:065b6930    00              ??          00h
ram:065b6931    00              ??          00h
ram:065b6932    00              ??          00h
ram:065b6933    00              ??          00h
ram:065b6934    00              ??          00h
ram:065b6935    00              ??          00h
ram:065b6936    00              ??          00h
ram:065b6937    00              ??          00h
ram:065b6938    00              ??          00h
ram:065b6939    00              ??          00h
ram:065b693a    00              ??          00h
ram:065b693b    00              ??          00h
ram:065b693c    00              ??          00h
ram:065b693d    00              ??          00h
ram:065b693e    00              ??          00h
ram:065b693f    00              ??          00h
ram:065b6940    00              ??          00h
ram:065b6941    00              ??          00h
ram:065b6942    00              ??          00h
ram:065b6943    00              ??          00h
ram:065b6944    00              ??          00h
ram:065b6945    00              ??          00h
ram:065b6946    00              ??          00h
ram:065b6947    00              ??          00h
ram:065b6948    00              ??          00h
ram:065b6949    00              ??          00h
ram:065b694a    00              ??          00h
ram:065b694b    00              ??          00h
ram:065b694c    00              ??          00h
ram:065b694d    00              ??          00h
ram:065b694e    00              ??          00h
ram:065b694f    00              ??          00h
ram:065b6950    00              ??          00h
ram:065b6951    00              ??          00h
ram:065b6952    00              ??          00h
ram:065b6953    00              ??          00h
ram:065b6954    00              ??          00h
ram:065b6955    00              ??          00h
ram:065b6956    00              ??          00h
ram:065b6957    00              ??          00h
ram:065b6958    00              ??          00h
ram:065b6959    00              ??          00h
ram:065b695a    00              ??          00h
ram:065b695b    00              ??          00h
ram:065b695c    00              ??          00h
ram:065b695d    00              ??          00h
ram:065b695e    00              ??          00h
ram:065b695f    00              ??          00h
ram:065b6960    00              ??          00h
ram:065b6961    00              ??          00h
ram:065b6962    00              ??          00h
ram:065b6963    00              ??          00h
ram:065b6964    00              ??          00h
ram:065b6965    00              ??          00h
ram:065b6966    00              ??          00h
ram:065b6967    00              ??          00h
ram:065b6968    00              ??          00h
ram:065b6969    00              ??          00h
ram:065b696a    00              ??          00h
ram:065b696b    00              ??          00h
ram:065b696c    00              ??          00h
ram:065b696d    00              ??          00h
ram:065b696e    00              ??          00h
ram:065b696f    00              ??          00h
ram:065b6970    00              ??          00h
ram:065b6971    00              ??          00h
ram:065b6972    00              ??          00h
ram:065b6973    00              ??          00h
ram:065b6974    00              ??          00h
ram:065b6975    00              ??          00h
ram:065b6976    00              ??          00h
ram:065b6977    00              ??          00h
ram:065b6978    00              ??          00h
ram:065b6979    00              ??          00h
ram:065b697a    00              ??          00h
ram:065b697b    00              ??          00h
ram:065b697c    00              ??          00h
ram:065b697d    00              ??          00h
ram:065b697e    00              ??          00h
ram:065b697f    00              ??          00h
ram:065b6980    00              ??          00h
ram:065b6981    00              ??          00h
ram:065b6982    00              ??          00h
ram:065b6983    00              ??          00h
ram:065b6984    00              ??          00h
ram:065b6985    00              ??          00h
ram:065b6986    00              ??          00h
ram:065b6987    00              ??          00h
ram:065b6988    00              ??          00h
ram:065b6989    00              ??          00h
ram:065b698a    00              ??          00h
ram:065b698b    00              ??          00h
ram:065b698c    00              ??          00h
ram:065b698d    00              ??          00h
ram:065b698e    00              ??          00h
ram:065b698f    00              ??          00h
ram:065b6990    00              ??          00h
ram:065b6991    00              ??          00h
ram:065b6992    00              ??          00h
ram:065b6993    00              ??          00h
ram:065b6994    00              ??          00h
ram:065b6995    00              ??          00h
ram:065b6996    00              ??          00h
ram:065b6997    00              ??          00h
ram:065b6998    00              ??          00h
ram:065b6999    00              ??          00h
ram:065b699a    00              ??          00h
ram:065b699b    00              ??          00h
ram:065b699c    00              ??          00h
ram:065b699d    00              ??          00h
ram:065b699e    00              ??          00h
ram:065b699f    00              ??          00h
ram:065b69a0    00              ??          00h
ram:065b69a1    00              ??          00h
ram:065b69a2    00              ??          00h
ram:065b69a3    00              ??          00h
ram:065b69a4    00              ??          00h
ram:065b69a5    00              ??          00h
ram:065b69a6    00              ??          00h
ram:065b69a7    00              ??          00h
ram:065b69a8    00              ??          00h
ram:065b69a9    00              ??          00h
ram:065b69aa    00              ??          00h
ram:065b69ab    00              ??          00h
ram:065b69ac    00              ??          00h
ram:065b69ad    00              ??          00h
ram:065b69ae    00              ??          00h
ram:065b69af    00              ??          00h
ram:065b69b0    00              ??          00h
ram:065b69b1    00              ??          00h
ram:065b69b2    00              ??          00h
ram:065b69b3    00              ??          00h
ram:065b69b4    00              ??          00h
ram:065b69b5    00              ??          00h
ram:065b69b6    00              ??          00h
ram:065b69b7    00              ??          00h
ram:065b69b8    00              ??          00h
ram:065b69b9    00              ??          00h
ram:065b69ba    00              ??          00h
ram:065b69bb    00              ??          00h
ram:065b69bc    00              ??          00h
ram:065b69bd    00              ??          00h
ram:065b69be    00              ??          00h
ram:065b69bf    00              ??          00h
ram:065b69c0    00              ??          00h
ram:065b69c1    00              ??          00h
ram:065b69c2    00              ??          00h
ram:065b69c3    00              ??          00h
ram:065b69c4    00              ??          00h
ram:065b69c5    00              ??          00h
ram:065b69c6    00              ??          00h
ram:065b69c7    00              ??          00h
ram:065b69c8    00              ??          00h
ram:065b69c9    00              ??          00h
ram:065b69ca    00              ??          00h
ram:065b69cb    00              ??          00h
ram:065b69cc    00              ??          00h
ram:065b69cd    00              ??          00h
ram:065b69ce    00              ??          00h
ram:065b69cf    00              ??          00h
ram:065b69d0    00              ??          00h
ram:065b69d1    00              ??          00h
ram:065b69d2    00              ??          00h
ram:065b69d3    00              ??          00h
ram:065b69d4    00              ??          00h
ram:065b69d5    00              ??          00h
ram:065b69d6    00              ??          00h
ram:065b69d7    00              ??          00h
ram:065b69d8    00              ??          00h
ram:065b69d9    00              ??          00h
ram:065b69da    00              ??          00h
ram:065b69db    00              ??          00h
ram:065b69dc    00              ??          00h
ram:065b69dd    00              ??          00h
ram:065b69de    00              ??          00h
ram:065b69df    00              ??          00h
ram:065b69e0    00              ??          00h
ram:065b69e1    00              ??          00h
ram:065b69e2    00              ??          00h
ram:065b69e3    00              ??          00h
ram:065b69e4    00              ??          00h
ram:065b69e5    00              ??          00h
ram:065b69e6    00              ??          00h
ram:065b69e7    00              ??          00h
ram:065b69e8    00              ??          00h
ram:065b69e9    00              ??          00h
ram:065b69ea    00              ??          00h
ram:065b69eb    00              ??          00h
ram:065b69ec    00              ??          00h
ram:065b69ed    00              ??          00h
ram:065b69ee    00              ??          00h
ram:065b69ef    00              ??          00h
ram:065b69f0    00              ??          00h
ram:065b69f1    00              ??          00h
ram:065b69f2    00              ??          00h
ram:065b69f3    00              ??          00h
ram:065b69f4    00              ??          00h
ram:065b69f5    00              ??          00h
ram:065b69f6    00              ??          00h
ram:065b69f7    00              ??          00h
ram:065b69f8    00              ??          00h
ram:065b69f9    00              ??          00h
ram:065b69fa    00              ??          00h
ram:065b69fb    00              ??          00h
ram:065b69fc    00              ??          00h
ram:065b69fd    00              ??          00h
ram:065b69fe    00              ??          00h
ram:065b69ff    00              ??          00h
ram:065b6a00    00              ??          00h
ram:065b6a01    00              ??          00h
ram:065b6a02    00              ??          00h
ram:065b6a03    00              ??          00h
ram:065b6a04    00              ??          00h
ram:065b6a05    00              ??          00h
ram:065b6a06    00              ??          00h
ram:065b6a07    00              ??          00h
ram:065b6a08    00              ??          00h
ram:065b6a09    00              ??          00h
ram:065b6a0a    00              ??          00h
ram:065b6a0b    00              ??          00h
ram:065b6a0c    00              ??          00h
ram:065b6a0d    00              ??          00h
ram:065b6a0e    00              ??          00h
ram:065b6a0f    00              ??          00h
ram:065b6a10    00              ??          00h
ram:065b6a11    00              ??          00h
ram:065b6a12    00              ??          00h
ram:065b6a13    00              ??          00h
ram:065b6a14    00              ??          00h
ram:065b6a15    00              ??          00h
ram:065b6a16    00              ??          00h
ram:065b6a17    00              ??          00h
ram:065b6a18    00              ??          00h
ram:065b6a19    00              ??          00h
ram:065b6a1a    00              ??          00h
ram:065b6a1b    00              ??          00h
ram:065b6a1c    00              ??          00h
ram:065b6a1d    00              ??          00h
ram:065b6a1e    00              ??          00h
ram:065b6a1f    00              ??          00h
ram:065b6a20    00              ??          00h
ram:065b6a21    00              ??          00h
ram:065b6a22    00              ??          00h
ram:065b6a23    00              ??          00h
ram:065b6a24    00              ??          00h
ram:065b6a25    00              ??          00h
ram:065b6a26    00              ??          00h
ram:065b6a27    00              ??          00h
ram:065b6a28    00              ??          00h
ram:065b6a29    00              ??          00h
ram:065b6a2a    00              ??          00h
ram:065b6a2b    00              ??          00h
ram:065b6a2c    00              ??          00h
ram:065b6a2d    00              ??          00h
ram:065b6a2e    00              ??          00h
ram:065b6a2f    00              ??          00h
ram:065b6a30    00              ??          00h
ram:065b6a31    00              ??          00h
ram:065b6a32    00              ??          00h
ram:065b6a33    00              ??          00h
ram:065b6a34    00              ??          00h
ram:065b6a35    00              ??          00h
ram:065b6a36    00              ??          00h
ram:065b6a37    00              ??          00h
ram:065b6a38    00              ??          00h
ram:065b6a39    00              ??          00h
ram:065b6a3a    00              ??          00h
ram:065b6a3b    00              ??          00h
ram:065b6a3c    00              ??          00h
ram:065b6a3d    00              ??          00h
ram:065b6a3e    00              ??          00h
ram:065b6a3f    00              ??          00h
ram:065b6a40    00              ??          00h
ram:065b6a41    00              ??          00h
ram:065b6a42    00              ??          00h
ram:065b6a43    00              ??          00h
ram:065b6a44    00              ??          00h
ram:065b6a45    00              ??          00h
ram:065b6a46    00              ??          00h
ram:065b6a47    00              ??          00h
ram:065b6a48    00              ??          00h
ram:065b6a49    00              ??          00h
ram:065b6a4a    00              ??          00h
ram:065b6a4b    00              ??          00h
ram:065b6a4c    00              ??          00h
ram:065b6a4d    00              ??          00h
ram:065b6a4e    00              ??          00h
ram:065b6a4f    00              ??          00h
ram:065b6a50    00              ??          00h
ram:065b6a51    00              ??          00h
ram:065b6a52    00              ??          00h
ram:065b6a53    00              ??          00h
ram:065b6a54    00              ??          00h
ram:065b6a55    00              ??          00h
ram:065b6a56    00              ??          00h
ram:065b6a57    00              ??          00h
ram:065b6a58    00              ??          00h
ram:065b6a59    00              ??          00h
ram:065b6a5a    00              ??          00h
ram:065b6a5b    00              ??          00h
ram:065b6a5c    00              ??          00h
ram:065b6a5d    00              ??          00h
ram:065b6a5e    00              ??          00h
ram:065b6a5f    00              ??          00h
ram:065b6a60    00              ??          00h
ram:065b6a61    00              ??          00h
ram:065b6a62    00              ??          00h
ram:065b6a63    00              ??          00h
ram:065b6a64    00              ??          00h
ram:065b6a65    00              ??          00h
ram:065b6a66    00              ??          00h
ram:065b6a67    00              ??          00h
ram:065b6a68    00              ??          00h
ram:065b6a69    00              ??          00h
ram:065b6a6a    00              ??          00h
ram:065b6a6b    00              ??          00h
ram:065b6a6c    00              ??          00h
ram:065b6a6d    00              ??          00h
ram:065b6a6e    00              ??          00h
ram:065b6a6f    00              ??          00h
ram:065b6a70    00              ??          00h
ram:065b6a71    00              ??          00h
ram:065b6a72    00              ??          00h
ram:065b6a73    00              ??          00h
ram:065b6a74    00              ??          00h
ram:065b6a75    00              ??          00h
ram:065b6a76    00              ??          00h
ram:065b6a77    00              ??          00h
ram:065b6a78    00              ??          00h
ram:065b6a79    00              ??          00h
ram:065b6a7a    00              ??          00h
ram:065b6a7b    00              ??          00h
ram:065b6a7c    00              ??          00h
ram:065b6a7d    00              ??          00h
ram:065b6a7e    00              ??          00h
ram:065b6a7f    00              ??          00h
ram:065b6a80    00              ??          00h
ram:065b6a81    00              ??          00h
ram:065b6a82    00              ??          00h
ram:065b6a83    00              ??          00h
ram:065b6a84    00              ??          00h
ram:065b6a85    00              ??          00h
ram:065b6a86    00              ??          00h
ram:065b6a87    00              ??          00h
ram:065b6a88    00              ??          00h
ram:065b6a89    00              ??          00h
ram:065b6a8a    00              ??          00h
ram:065b6a8b    00              ??          00h
ram:065b6a8c    00              ??          00h
ram:065b6a8d    00              ??          00h
ram:065b6a8e    00              ??          00h
ram:065b6a8f    00              ??          00h
ram:065b6a90    00              ??          00h
ram:065b6a91    00              ??          00h
ram:065b6a92    00              ??          00h
ram:065b6a93    00              ??          00h
ram:065b6a94    00              ??          00h
ram:065b6a95    00              ??          00h
ram:065b6a96    00              ??          00h
ram:065b6a97    00              ??          00h
ram:065b6a98    00              ??          00h
ram:065b6a99    00              ??          00h
ram:065b6a9a    00              ??          00h
ram:065b6a9b    00              ??          00h
ram:065b6a9c    00              ??          00h
ram:065b6a9d    00              ??          00h
ram:065b6a9e    00              ??          00h
ram:065b6a9f    00              ??          00h
ram:065b6aa0    00              ??          00h
ram:065b6aa1    00              ??          00h
ram:065b6aa2    00              ??          00h
ram:065b6aa3    00              ??          00h
ram:065b6aa4    00              ??          00h
ram:065b6aa5    00              ??          00h
ram:065b6aa6    00              ??          00h
ram:065b6aa7    00              ??          00h
ram:065b6aa8    00              ??          00h
ram:065b6aa9    00              ??          00h
ram:065b6aaa    00              ??          00h
ram:065b6aab    00              ??          00h
ram:065b6aac    00              ??          00h
ram:065b6aad    00              ??          00h
ram:065b6aae    00              ??          00h
ram:065b6aaf    00              ??          00h
ram:065b6ab0    00              ??          00h
ram:065b6ab1    00              ??          00h
ram:065b6ab2    00              ??          00h
ram:065b6ab3    00              ??          00h
ram:065b6ab4    00              ??          00h
ram:065b6ab5    00              ??          00h
ram:065b6ab6    00              ??          00h
ram:065b6ab7    00              ??          00h
ram:065b6ab8    00              ??          00h
ram:065b6ab9    00              ??          00h
ram:065b6aba    00              ??          00h
ram:065b6abb    00              ??          00h
ram:065b6abc    00              ??          00h
ram:065b6abd    00              ??          00h
ram:065b6abe    00              ??          00h
ram:065b6abf    00              ??          00h
ram:065b6ac0    00              ??          00h
ram:065b6ac1    00              ??          00h
ram:065b6ac2    00              ??          00h
ram:065b6ac3    00              ??          00h
ram:065b6ac4    00              ??          00h
ram:065b6ac5    00              ??          00h
ram:065b6ac6    00              ??          00h
ram:065b6ac7    00              ??          00h
ram:065b6ac8    00              ??          00h
ram:065b6ac9    00              ??          00h
ram:065b6aca    00              ??          00h
ram:065b6acb    00              ??          00h
ram:065b6acc    00              ??          00h
ram:065b6acd    00              ??          00h
ram:065b6ace    00              ??          00h
ram:065b6acf    00              ??          00h
ram:065b6ad0    00              ??          00h
ram:065b6ad1    00              ??          00h
ram:065b6ad2    00              ??          00h
ram:065b6ad3    00              ??          00h
ram:065b6ad4    00              ??          00h
ram:065b6ad5    00              ??          00h
ram:065b6ad6    00              ??          00h
ram:065b6ad7    00              ??          00h
ram:065b6ad8    00              ??          00h
ram:065b6ad9    00              ??          00h
ram:065b6ada    00              ??          00h
ram:065b6adb    00              ??          00h
ram:065b6adc    00              ??          00h
ram:065b6add    00              ??          00h
ram:065b6ade    00              ??          00h
ram:065b6adf    00              ??          00h
ram:065b6ae0    00              ??          00h
ram:065b6ae1    00              ??          00h
ram:065b6ae2    00              ??          00h
ram:065b6ae3    00              ??          00h
ram:065b6ae4    00              ??          00h
ram:065b6ae5    00              ??          00h
ram:065b6ae6    00              ??          00h
ram:065b6ae7    00              ??          00h
ram:065b6ae8    00              ??          00h
ram:065b6ae9    00              ??          00h
ram:065b6aea    00              ??          00h
ram:065b6aeb    00              ??          00h
ram:065b6aec    00              ??          00h
ram:065b6aed    00              ??          00h
ram:065b6aee    00              ??          00h
ram:065b6aef    00              ??          00h
ram:065b6af0    00              ??          00h
ram:065b6af1    00              ??          00h
ram:065b6af2    00              ??          00h
ram:065b6af3    00              ??          00h
ram:065b6af4    00              ??          00h
ram:065b6af5    00              ??          00h
ram:065b6af6    00              ??          00h
ram:065b6af7    00              ??          00h
ram:065b6af8    00              ??          00h
ram:065b6af9    00              ??          00h
ram:065b6afa    00              ??          00h
ram:065b6afb    00              ??          00h
ram:065b6afc    00              ??          00h
ram:065b6afd    00              ??          00h
ram:065b6afe    00              ??          00h
ram:065b6aff    00              ??          00h
ram:065b6b00    00              ??          00h
ram:065b6b01    00              ??          00h
ram:065b6b02    00              ??          00h
ram:065b6b03    00              ??          00h
ram:065b6b04    00              ??          00h
ram:065b6b05    00              ??          00h
ram:065b6b06    00              ??          00h
ram:065b6b07    00              ??          00h
ram:065b6b08    00              ??          00h
ram:065b6b09    00              ??          00h
ram:065b6b0a    00              ??          00h
ram:065b6b0b    00              ??          00h
ram:065b6b0c    00              ??          00h
ram:065b6b0d    00              ??          00h
ram:065b6b0e    00              ??          00h
ram:065b6b0f    00              ??          00h
ram:065b6b10    00              ??          00h
ram:065b6b11    00              ??          00h
ram:065b6b12    00              ??          00h
ram:065b6b13    00              ??          00h
ram:065b6b14    00              ??          00h
ram:065b6b15    00              ??          00h
ram:065b6b16    00              ??          00h
ram:065b6b17    00              ??          00h
ram:065b6b18    00              ??          00h
ram:065b6b19    00              ??          00h
ram:065b6b1a    00              ??          00h
ram:065b6b1b    00              ??          00h
ram:065b6b1c    00              ??          00h
ram:065b6b1d    00              ??          00h
ram:065b6b1e    00              ??          00h
ram:065b6b1f    00              ??          00h
ram:065b6b20    00              ??          00h
ram:065b6b21    00              ??          00h
ram:065b6b22    00              ??          00h
ram:065b6b23    00              ??          00h
ram:065b6b24    00              ??          00h
ram:065b6b25    00              ??          00h
ram:065b6b26    00              ??          00h
ram:065b6b27    00              ??          00h
ram:065b6b28    00              ??          00h
ram:065b6b29    00              ??          00h
ram:065b6b2a    00              ??          00h
ram:065b6b2b    00              ??          00h
ram:065b6b2c    00              ??          00h
ram:065b6b2d    00              ??          00h
ram:065b6b2e    00              ??          00h
ram:065b6b2f    00              ??          00h
ram:065b6b30    00              ??          00h
ram:065b6b31    00              ??          00h
ram:065b6b32    00              ??          00h
ram:065b6b33    00              ??          00h
ram:065b6b34    00              ??          00h
ram:065b6b35    00              ??          00h
ram:065b6b36    00              ??          00h
ram:065b6b37    00              ??          00h
ram:065b6b38    00              ??          00h
ram:065b6b39    00              ??          00h
ram:065b6b3a    00              ??          00h
ram:065b6b3b    00              ??          00h
ram:065b6b3c    00              ??          00h
ram:065b6b3d    00              ??          00h
ram:065b6b3e    00              ??          00h
ram:065b6b3f    00              ??          00h
ram:065b6b40    00              ??          00h
ram:065b6b41    00              ??          00h
ram:065b6b42    00              ??          00h
ram:065b6b43    00              ??          00h
ram:065b6b44    00              ??          00h
ram:065b6b45    00              ??          00h
ram:065b6b46    00              ??          00h
ram:065b6b47    00              ??          00h
ram:065b6b48    00              ??          00h
ram:065b6b49    00              ??          00h
ram:065b6b4a    00              ??          00h
ram:065b6b4b    00              ??          00h
ram:065b6b4c    00              ??          00h
ram:065b6b4d    00              ??          00h
ram:065b6b4e    00              ??          00h
ram:065b6b4f    00              ??          00h
ram:065b6b50    00              ??          00h
ram:065b6b51    00              ??          00h
ram:065b6b52    00              ??          00h
ram:065b6b53    00              ??          00h
ram:065b6b54    00              ??          00h
ram:065b6b55    00              ??          00h
ram:065b6b56    00              ??          00h
ram:065b6b57    00              ??          00h
ram:065b6b58    00              ??          00h
ram:065b6b59    00              ??          00h
ram:065b6b5a    00              ??          00h
ram:065b6b5b    00              ??          00h
ram:065b6b5c    00              ??          00h
ram:065b6b5d    00              ??          00h
ram:065b6b5e    00              ??          00h
ram:065b6b5f    00              ??          00h
ram:065b6b60    00              ??          00h
ram:065b6b61    00              ??          00h
ram:065b6b62    00              ??          00h
ram:065b6b63    00              ??          00h
ram:065b6b64    00              ??          00h
ram:065b6b65    00              ??          00h
ram:065b6b66    00              ??          00h
ram:065b6b67    00              ??          00h
ram:065b6b68    00              ??          00h
ram:065b6b69    00              ??          00h
ram:065b6b6a    00              ??          00h
ram:065b6b6b    00              ??          00h
ram:065b6b6c    00              ??          00h
ram:065b6b6d    00              ??          00h
ram:065b6b6e    00              ??          00h
ram:065b6b6f    00              ??          00h
ram:065b6b70    00              ??          00h
ram:065b6b71    00              ??          00h
ram:065b6b72    00              ??          00h
ram:065b6b73    00              ??          00h
ram:065b6b74    00              ??          00h
ram:065b6b75    00              ??          00h
ram:065b6b76    00              ??          00h
ram:065b6b77    00              ??          00h
ram:065b6b78    00              ??          00h
ram:065b6b79    00              ??          00h
ram:065b6b7a    00              ??          00h
ram:065b6b7b    00              ??          00h
ram:065b6b7c    00              ??          00h
ram:065b6b7d    00              ??          00h
ram:065b6b7e    00              ??          00h
ram:065b6b7f    00              ??          00h
ram:065b6b80    00              ??          00h
ram:065b6b81    00              ??          00h
ram:065b6b82    00              ??          00h
ram:065b6b83    00              ??          00h
ram:065b6b84    00              ??          00h
ram:065b6b85    00              ??          00h
ram:065b6b86    00              ??          00h
ram:065b6b87    00              ??          00h
ram:065b6b88    00              ??          00h
ram:065b6b89    00              ??          00h
ram:065b6b8a    00              ??          00h
ram:065b6b8b    00              ??          00h
ram:065b6b8c    00              ??          00h
ram:065b6b8d    00              ??          00h
ram:065b6b8e    00              ??          00h
ram:065b6b8f    00              ??          00h
ram:065b6b90    00              ??          00h
ram:065b6b91    00              ??          00h
ram:065b6b92    00              ??          00h
ram:065b6b93    00              ??          00h
ram:065b6b94    00              ??          00h
ram:065b6b95    00              ??          00h
ram:065b6b96    00              ??          00h
ram:065b6b97    00              ??          00h
ram:065b6b98    00              ??          00h
ram:065b6b99    00              ??          00h
ram:065b6b9a    00              ??          00h
ram:065b6b9b    00              ??          00h
ram:065b6b9c    00              ??          00h
ram:065b6b9d    00              ??          00h
ram:065b6b9e    00              ??          00h
ram:065b6b9f    00              ??          00h
ram:065b6ba0    00              ??          00h
ram:065b6ba1    00              ??          00h
ram:065b6ba2    00              ??          00h
ram:065b6ba3    00              ??          00h
ram:065b6ba4    00              ??          00h
ram:065b6ba5    00              ??          00h
ram:065b6ba6    00              ??          00h
ram:065b6ba7    00              ??          00h
ram:065b6ba8    00              ??          00h
ram:065b6ba9    00              ??          00h
ram:065b6baa    00              ??          00h
ram:065b6bab    00              ??          00h
ram:065b6bac    00              ??          00h
ram:065b6bad    00              ??          00h
ram:065b6bae    00              ??          00h
ram:065b6baf    00              ??          00h
ram:065b6bb0    00              ??          00h
ram:065b6bb1    00              ??          00h
ram:065b6bb2    00              ??          00h
ram:065b6bb3    00              ??          00h
ram:065b6bb4    00              ??          00h
ram:065b6bb5    00              ??          00h
ram:065b6bb6    00              ??          00h
ram:065b6bb7    00              ??          00h
ram:065b6bb8    00              ??          00h
ram:065b6bb9    00              ??          00h
ram:065b6bba    00              ??          00h
ram:065b6bbb    00              ??          00h
ram:065b6bbc    00              ??          00h
ram:065b6bbd    00              ??          00h
ram:065b6bbe    00              ??          00h
ram:065b6bbf    00              ??          00h
ram:065b6bc0    00              ??          00h
ram:065b6bc1    00              ??          00h
ram:065b6bc2    00              ??          00h
ram:065b6bc3    00              ??          00h
ram:065b6bc4    00              ??          00h
ram:065b6bc5    00              ??          00h
ram:065b6bc6    00              ??          00h
ram:065b6bc7    00              ??          00h
ram:065b6bc8    00              ??          00h
ram:065b6bc9    00              ??          00h
ram:065b6bca    00              ??          00h
ram:065b6bcb    00              ??          00h
ram:065b6bcc    00              ??          00h
ram:065b6bcd    00              ??          00h
ram:065b6bce    00              ??          00h
ram:065b6bcf    00              ??          00h
ram:065b6bd0    00              ??          00h
ram:065b6bd1    00              ??          00h
ram:065b6bd2    00              ??          00h
ram:065b6bd3    00              ??          00h
ram:065b6bd4    00              ??          00h
ram:065b6bd5    00              ??          00h
ram:065b6bd6    00              ??          00h
ram:065b6bd7    00              ??          00h
ram:065b6bd8    00              ??          00h
ram:065b6bd9    00              ??          00h
ram:065b6bda    00              ??          00h
ram:065b6bdb    00              ??          00h
ram:065b6bdc    00              ??          00h
ram:065b6bdd    00              ??          00h
ram:065b6bde    00              ??          00h
ram:065b6bdf    00              ??          00h
ram:065b6be0    00              ??          00h
ram:065b6be1    00              ??          00h
ram:065b6be2    00              ??          00h
ram:065b6be3    00              ??          00h
ram:065b6be4    00              ??          00h
ram:065b6be5    00              ??          00h
ram:065b6be6    00              ??          00h
ram:065b6be7    00              ??          00h
ram:065b6be8    00              ??          00h
ram:065b6be9    00              ??          00h
ram:065b6bea    00              ??          00h
ram:065b6beb    00              ??          00h
ram:065b6bec    00              ??          00h
ram:065b6bed    00              ??          00h
ram:065b6bee    00              ??          00h
ram:065b6bef    00              ??          00h
ram:065b6bf0    00              ??          00h
ram:065b6bf1    00              ??          00h
ram:065b6bf2    00              ??          00h
ram:065b6bf3    00              ??          00h
ram:065b6bf4    00              ??          00h
ram:065b6bf5    00              ??          00h
ram:065b6bf6    00              ??          00h
ram:065b6bf7    00              ??          00h
ram:065b6bf8    00              ??          00h
ram:065b6bf9    00              ??          00h
ram:065b6bfa    00              ??          00h
ram:065b6bfb    00              ??          00h
ram:065b6bfc    00              ??          00h
ram:065b6bfd    00              ??          00h
ram:065b6bfe    00              ??          00h
ram:065b6bff    00              ??          00h
ram:065b6c00    00              ??          00h
ram:065b6c01    00              ??          00h
ram:065b6c02    00              ??          00h
ram:065b6c03    00              ??          00h
ram:065b6c04    00              ??          00h
ram:065b6c05    00              ??          00h
ram:065b6c06    00              ??          00h
ram:065b6c07    00              ??          00h
ram:065b6c08    00              ??          00h
ram:065b6c09    00              ??          00h
ram:065b6c0a    00              ??          00h
ram:065b6c0b    00              ??          00h
ram:065b6c0c    00              ??          00h
ram:065b6c0d    00              ??          00h
ram:065b6c0e    00              ??          00h
ram:065b6c0f    00              ??          00h
ram:065b6c10    00              ??          00h
ram:065b6c11    00              ??          00h
ram:065b6c12    00              ??          00h
ram:065b6c13    00              ??          00h
ram:065b6c14    00              ??          00h
ram:065b6c15    00              ??          00h
ram:065b6c16    00              ??          00h
ram:065b6c17    00              ??          00h
ram:065b6c18    00              ??          00h
ram:065b6c19    00              ??          00h
ram:065b6c1a    00              ??          00h
ram:065b6c1b    00              ??          00h
ram:065b6c1c    00              ??          00h
ram:065b6c1d    00              ??          00h
ram:065b6c1e    00              ??          00h
ram:065b6c1f    00              ??          00h
ram:065b6c20    00              ??          00h
ram:065b6c21    00              ??          00h
ram:065b6c22    00              ??          00h
ram:065b6c23    00              ??          00h
ram:065b6c24    00              ??          00h
ram:065b6c25    00              ??          00h
ram:065b6c26    00              ??          00h
ram:065b6c27    00              ??          00h
ram:065b6c28    00              ??          00h
ram:065b6c29    00              ??          00h
ram:065b6c2a    00              ??          00h
ram:065b6c2b    00              ??          00h
ram:065b6c2c    00              ??          00h
ram:065b6c2d    00              ??          00h
ram:065b6c2e    00              ??          00h
ram:065b6c2f    00              ??          00h
ram:065b6c30    00              ??          00h
ram:065b6c31    00              ??          00h
ram:065b6c32    00              ??          00h
ram:065b6c33    00              ??          00h
ram:065b6c34    00              ??          00h
ram:065b6c35    00              ??          00h
ram:065b6c36    00              ??          00h
ram:065b6c37    00              ??          00h
ram:065b6c38    00              ??          00h
ram:065b6c39    00              ??          00h
ram:065b6c3a    00              ??          00h
ram:065b6c3b    00              ??          00h
ram:065b6c3c    00              ??          00h
ram:065b6c3d    00              ??          00h
ram:065b6c3e    00              ??          00h
ram:065b6c3f    00              ??          00h
ram:065b6c40    00              ??          00h
ram:065b6c41    00              ??          00h
ram:065b6c42    00              ??          00h
ram:065b6c43    00              ??          00h
ram:065b6c44    00              ??          00h
ram:065b6c45    00              ??          00h
ram:065b6c46    00              ??          00h
ram:065b6c47    00              ??          00h
ram:065b6c48    00              ??          00h
ram:065b6c49    00              ??          00h
ram:065b6c4a    00              ??          00h
ram:065b6c4b    00              ??          00h
ram:065b6c4c    00              ??          00h
ram:065b6c4d    00              ??          00h
ram:065b6c4e    00              ??          00h
ram:065b6c4f    00              ??          00h
ram:065b6c50    00              ??          00h
ram:065b6c51    00              ??          00h
ram:065b6c52    00              ??          00h
ram:065b6c53    00              ??          00h
ram:065b6c54    00              ??          00h
ram:065b6c55    00              ??          00h
ram:065b6c56    00              ??          00h
ram:065b6c57    00              ??          00h
ram:065b6c58    00              ??          00h
ram:065b6c59    00              ??          00h
ram:065b6c5a    00              ??          00h
ram:065b6c5b    00              ??          00h
ram:065b6c5c    00              ??          00h
ram:065b6c5d    00              ??          00h
ram:065b6c5e    00              ??          00h
ram:065b6c5f    00              ??          00h
ram:065b6c60    00              ??          00h
ram:065b6c61    00              ??          00h
ram:065b6c62    00              ??          00h
ram:065b6c63    00              ??          00h
ram:065b6c64    00              ??          00h
ram:065b6c65    00              ??          00h
ram:065b6c66    00              ??          00h
ram:065b6c67    00              ??          00h
ram:065b6c68    00              ??          00h
ram:065b6c69    00              ??          00h
ram:065b6c6a    00              ??          00h
ram:065b6c6b    00              ??          00h
ram:065b6c6c    00              ??          00h
ram:065b6c6d    00              ??          00h
ram:065b6c6e    00              ??          00h
ram:065b6c6f    00              ??          00h
ram:065b6c70    00              ??          00h
ram:065b6c71    00              ??          00h
ram:065b6c72    00              ??          00h
ram:065b6c73    00              ??          00h
ram:065b6c74    00              ??          00h
ram:065b6c75    00              ??          00h
ram:065b6c76    00              ??          00h
ram:065b6c77    00              ??          00h
ram:065b6c78    00              ??          00h
ram:065b6c79    00              ??          00h
ram:065b6c7a    00              ??          00h
ram:065b6c7b    00              ??          00h
ram:065b6c7c    00              ??          00h
ram:065b6c7d    00              ??          00h
ram:065b6c7e    00              ??          00h
ram:065b6c7f    00              ??          00h
ram:065b6c80    00              ??          00h
ram:065b6c81    00              ??          00h
ram:065b6c82    00              ??          00h
ram:065b6c83    00              ??          00h
ram:065b6c84    00              ??          00h
ram:065b6c85    00              ??          00h
ram:065b6c86    00              ??          00h
ram:065b6c87    00              ??          00h
ram:065b6c88    00              ??          00h
ram:065b6c89    00              ??          00h
ram:065b6c8a    00              ??          00h
ram:065b6c8b    00              ??          00h
ram:065b6c8c    00              ??          00h
ram:065b6c8d    00              ??          00h
ram:065b6c8e    00              ??          00h
ram:065b6c8f    00              ??          00h
ram:065b6c90    00              ??          00h
ram:065b6c91    00              ??          00h
ram:065b6c92    00              ??          00h
ram:065b6c93    00              ??          00h
ram:065b6c94    00              ??          00h
ram:065b6c95    00              ??          00h
ram:065b6c96    00              ??          00h
ram:065b6c97    00              ??          00h
ram:065b6c98    00              ??          00h
ram:065b6c99    00              ??          00h
ram:065b6c9a    00              ??          00h
ram:065b6c9b    00              ??          00h
ram:065b6c9c    00              ??          00h
ram:065b6c9d    00              ??          00h
ram:065b6c9e    00              ??          00h
ram:065b6c9f    00              ??          00h
ram:065b6ca0    00              ??          00h
ram:065b6ca1    00              ??          00h
ram:065b6ca2    00              ??          00h
ram:065b6ca3    00              ??          00h
ram:065b6ca4    00              ??          00h
ram:065b6ca5    00              ??          00h
ram:065b6ca6    00              ??          00h
ram:065b6ca7    00              ??          00h
ram:065b6ca8    00              ??          00h
ram:065b6ca9    00              ??          00h
ram:065b6caa    00              ??          00h
ram:065b6cab    00              ??          00h
ram:065b6cac    00              ??          00h
ram:065b6cad    00              ??          00h
ram:065b6cae    00              ??          00h
ram:065b6caf    00              ??          00h
ram:065b6cb0    00              ??          00h
ram:065b6cb1    00              ??          00h
ram:065b6cb2    00              ??          00h
ram:065b6cb3    00              ??          00h
ram:065b6cb4    00              ??          00h
ram:065b6cb5    00              ??          00h
ram:065b6cb6    00              ??          00h
ram:065b6cb7    00              ??          00h
ram:065b6cb8    00              ??          00h
ram:065b6cb9    00              ??          00h
ram:065b6cba    00              ??          00h
ram:065b6cbb    00              ??          00h
ram:065b6cbc    00              ??          00h
ram:065b6cbd    00              ??          00h
ram:065b6cbe    00              ??          00h
ram:065b6cbf    00              ??          00h
ram:065b6cc0    00              ??          00h
ram:065b6cc1    00              ??          00h
ram:065b6cc2    00              ??          00h
ram:065b6cc3    00              ??          00h
ram:065b6cc4    00              ??          00h
ram:065b6cc5    00              ??          00h
ram:065b6cc6    00              ??          00h
ram:065b6cc7    00              ??          00h
ram:065b6cc8    00              ??          00h
ram:065b6cc9    00              ??          00h
ram:065b6cca    00              ??          00h
ram:065b6ccb    00              ??          00h
ram:065b6ccc    00              ??          00h
ram:065b6ccd    00              ??          00h
ram:065b6cce    00              ??          00h
ram:065b6ccf    00              ??          00h
ram:065b6cd0    00              ??          00h
ram:065b6cd1    00              ??          00h
ram:065b6cd2    00              ??          00h
ram:065b6cd3    00              ??          00h
ram:065b6cd4    00              ??          00h
ram:065b6cd5    00              ??          00h
ram:065b6cd6    00              ??          00h
ram:065b6cd7    00              ??          00h
ram:065b6cd8    00              ??          00h
ram:065b6cd9    00              ??          00h
ram:065b6cda    00              ??          00h
ram:065b6cdb    00              ??          00h
ram:065b6cdc    00              ??          00h
ram:065b6cdd    00              ??          00h
ram:065b6cde    00              ??          00h
ram:065b6cdf    00              ??          00h
ram:065b6ce0    00              ??          00h
ram:065b6ce1    00              ??          00h
ram:065b6ce2    00              ??          00h
ram:065b6ce3    00              ??          00h
ram:065b6ce4    00              ??          00h
ram:065b6ce5    00              ??          00h
ram:065b6ce6    00              ??          00h
ram:065b6ce7    00              ??          00h
ram:065b6ce8    00              ??          00h
ram:065b6ce9    00              ??          00h
ram:065b6cea    00              ??          00h
ram:065b6ceb    00              ??          00h
ram:065b6cec    00              ??          00h
ram:065b6ced    00              ??          00h
ram:065b6cee    00              ??          00h
ram:065b6cef    00              ??          00h
ram:065b6cf0    00              ??          00h
ram:065b6cf1    00              ??          00h
ram:065b6cf2    00              ??          00h
ram:065b6cf3    00              ??          00h
ram:065b6cf4    00              ??          00h
ram:065b6cf5    00              ??          00h
ram:065b6cf6    00              ??          00h
ram:065b6cf7    00              ??          00h
ram:065b6cf8    00              ??          00h
ram:065b6cf9    00              ??          00h
ram:065b6cfa    00              ??          00h
ram:065b6cfb    00              ??          00h
ram:065b6cfc    00              ??          00h
ram:065b6cfd    00              ??          00h
ram:065b6cfe    00              ??          00h
ram:065b6cff    00              ??          00h
ram:065b6d00    00              ??          00h
ram:065b6d01    00              ??          00h
ram:065b6d02    00              ??          00h
ram:065b6d03    00              ??          00h
ram:065b6d04    00              ??          00h
ram:065b6d05    00              ??          00h
ram:065b6d06    00              ??          00h
ram:065b6d07    00              ??          00h
ram:065b6d08    00              ??          00h
ram:065b6d09    00              ??          00h
ram:065b6d0a    00              ??          00h
ram:065b6d0b    00              ??          00h
ram:065b6d0c    00              ??          00h
ram:065b6d0d    00              ??          00h
ram:065b6d0e    00              ??          00h
ram:065b6d0f    00              ??          00h
ram:065b6d10    00              ??          00h
ram:065b6d11    00              ??          00h
ram:065b6d12    00              ??          00h
ram:065b6d13    00              ??          00h
ram:065b6d14    00              ??          00h
ram:065b6d15    00              ??          00h
ram:065b6d16    00              ??          00h
ram:065b6d17    00              ??          00h
ram:065b6d18    00              ??          00h
ram:065b6d19    00              ??          00h
ram:065b6d1a    00              ??          00h
ram:065b6d1b    00              ??          00h
ram:065b6d1c    00              ??          00h
ram:065b6d1d    00              ??          00h
ram:065b6d1e    00              ??          00h
ram:065b6d1f    00              ??          00h
ram:065b6d20    00              ??          00h
ram:065b6d21    00              ??          00h
ram:065b6d22    00              ??          00h
ram:065b6d23    00              ??          00h
ram:065b6d24    00              ??          00h
ram:065b6d25    00              ??          00h
ram:065b6d26    00              ??          00h
ram:065b6d27    00              ??          00h
ram:065b6d28    00              ??          00h
ram:065b6d29    00              ??          00h
ram:065b6d2a    00              ??          00h
ram:065b6d2b    00              ??          00h
ram:065b6d2c    00              ??          00h
ram:065b6d2d    00              ??          00h
ram:065b6d2e    00              ??          00h
ram:065b6d2f    00              ??          00h
ram:065b6d30    00              ??          00h
ram:065b6d31    00              ??          00h
ram:065b6d32    00              ??          00h
ram:065b6d33    00              ??          00h
ram:065b6d34    00              ??          00h
ram:065b6d35    00              ??          00h
ram:065b6d36    00              ??          00h
ram:065b6d37    00              ??          00h
ram:065b6d38    00              ??          00h
ram:065b6d39    00              ??          00h
ram:065b6d3a    00              ??          00h
ram:065b6d3b    00              ??          00h
ram:065b6d3c    00              ??          00h
ram:065b6d3d    00              ??          00h
ram:065b6d3e    00              ??          00h
ram:065b6d3f    00              ??          00h
ram:065b6d40    00              ??          00h
ram:065b6d41    00              ??          00h
ram:065b6d42    00              ??          00h
ram:065b6d43    00              ??          00h
ram:065b6d44    00              ??          00h
ram:065b6d45    00              ??          00h
ram:065b6d46    00              ??          00h
ram:065b6d47    00              ??          00h
ram:065b6d48    00              ??          00h
ram:065b6d49    00              ??          00h
ram:065b6d4a    00              ??          00h
ram:065b6d4b    00              ??          00h
ram:065b6d4c    00              ??          00h
ram:065b6d4d    00              ??          00h
ram:065b6d4e    00              ??          00h
ram:065b6d4f    00              ??          00h
ram:065b6d50    00              ??          00h
ram:065b6d51    00              ??          00h
ram:065b6d52    00              ??          00h
ram:065b6d53    00              ??          00h
ram:065b6d54    00              ??          00h
ram:065b6d55    00              ??          00h
ram:065b6d56    00              ??          00h
ram:065b6d57    00              ??          00h
ram:065b6d58    00              ??          00h
ram:065b6d59    00              ??          00h
ram:065b6d5a    00              ??          00h
ram:065b6d5b    00              ??          00h
ram:065b6d5c    00              ??          00h
ram:065b6d5d    00              ??          00h
ram:065b6d5e    00              ??          00h
ram:065b6d5f    00              ??          00h
ram:065b6d60    00              ??          00h
ram:065b6d61    00              ??          00h
ram:065b6d62    00              ??          00h
ram:065b6d63    00              ??          00h
ram:065b6d64    00              ??          00h
ram:065b6d65    00              ??          00h
ram:065b6d66    00              ??          00h
ram:065b6d67    00              ??          00h
ram:065b6d68    00              ??          00h
ram:065b6d69    00              ??          00h
ram:065b6d6a    00              ??          00h
ram:065b6d6b    00              ??          00h
ram:065b6d6c    00              ??          00h
ram:065b6d6d    00              ??          00h
ram:065b6d6e    00              ??          00h
ram:065b6d6f    00              ??          00h
ram:065b6d70    00              ??          00h
ram:065b6d71    00              ??          00h
ram:065b6d72    00              ??          00h
ram:065b6d73    00              ??          00h
ram:065b6d74    00              ??          00h
ram:065b6d75    00              ??          00h
ram:065b6d76    00              ??          00h
ram:065b6d77    00              ??          00h
ram:065b6d78    00              ??          00h
ram:065b6d79    00              ??          00h
ram:065b6d7a    00              ??          00h
ram:065b6d7b    00              ??          00h
ram:065b6d7c    00              ??          00h
ram:065b6d7d    00              ??          00h
ram:065b6d7e    00              ??          00h
ram:065b6d7f    00              ??          00h
ram:065b6d80    00              ??          00h
ram:065b6d81    00              ??          00h
ram:065b6d82    00              ??          00h
ram:065b6d83    00              ??          00h
ram:065b6d84    00              ??          00h
ram:065b6d85    00              ??          00h
ram:065b6d86    00              ??          00h
ram:065b6d87    00              ??          00h
ram:065b6d88    00              ??          00h
ram:065b6d89    00              ??          00h
ram:065b6d8a    00              ??          00h
ram:065b6d8b    00              ??          00h
ram:065b6d8c    00              ??          00h
ram:065b6d8d    00              ??          00h
ram:065b6d8e    00              ??          00h
ram:065b6d8f    00              ??          00h
ram:065b6d90    00              ??          00h
ram:065b6d91    00              ??          00h
ram:065b6d92    00              ??          00h
ram:065b6d93    00              ??          00h
ram:065b6d94    00              ??          00h
ram:065b6d95    00              ??          00h
ram:065b6d96    00              ??          00h
ram:065b6d97    00              ??          00h
ram:065b6d98    00              ??          00h
ram:065b6d99    00              ??          00h
ram:065b6d9a    00              ??          00h
ram:065b6d9b    00              ??          00h
ram:065b6d9c    00              ??          00h
ram:065b6d9d    00              ??          00h
ram:065b6d9e    00              ??          00h
ram:065b6d9f    00              ??          00h
ram:065b6da0    00              ??          00h
ram:065b6da1    00              ??          00h
ram:065b6da2    00              ??          00h
ram:065b6da3    00              ??          00h
ram:065b6da4    00              ??          00h
ram:065b6da5    00              ??          00h
ram:065b6da6    00              ??          00h
ram:065b6da7    00              ??          00h
ram:065b6da8    00              ??          00h
ram:065b6da9    00              ??          00h
ram:065b6daa    00              ??          00h
ram:065b6dab    00              ??          00h
ram:065b6dac    00              ??          00h
ram:065b6dad    00              ??          00h
ram:065b6dae    00              ??          00h
ram:065b6daf    00              ??          00h
ram:065b6db0    00              ??          00h
ram:065b6db1    00              ??          00h
ram:065b6db2    00              ??          00h
ram:065b6db3    00              ??          00h
ram:065b6db4    00              ??          00h
ram:065b6db5    00              ??          00h
ram:065b6db6    00              ??          00h
ram:065b6db7    00              ??          00h
ram:065b6db8    00              ??          00h
ram:065b6db9    00              ??          00h
ram:065b6dba    00              ??          00h
ram:065b6dbb    00              ??          00h
ram:065b6dbc    00              ??          00h
ram:065b6dbd    00              ??          00h
ram:065b6dbe    00              ??          00h
ram:065b6dbf    00              ??          00h
ram:065b6dc0    00              ??          00h
ram:065b6dc1    00              ??          00h
ram:065b6dc2    00              ??          00h
ram:065b6dc3    00              ??          00h
ram:065b6dc4    00              ??          00h
ram:065b6dc5    00              ??          00h
ram:065b6dc6    00              ??          00h
ram:065b6dc7    00              ??          00h
ram:065b6dc8    00              ??          00h
ram:065b6dc9    00              ??          00h
ram:065b6dca    00              ??          00h
ram:065b6dcb    00              ??          00h
ram:065b6dcc    00              ??          00h
ram:065b6dcd    00              ??          00h
ram:065b6dce    00              ??          00h
ram:065b6dcf    00              ??          00h
ram:065b6dd0    00              ??          00h
ram:065b6dd1    00              ??          00h
ram:065b6dd2    00              ??          00h
ram:065b6dd3    00              ??          00h
ram:065b6dd4    00              ??          00h
ram:065b6dd5    00              ??          00h
ram:065b6dd6    00              ??          00h
ram:065b6dd7    00              ??          00h
ram:065b6dd8    00              ??          00h
ram:065b6dd9    00              ??          00h
ram:065b6dda    00              ??          00h
ram:065b6ddb    00              ??          00h
ram:065b6ddc    00              ??          00h
ram:065b6ddd    00              ??          00h
ram:065b6dde    00              ??          00h
ram:065b6ddf    00              ??          00h
ram:065b6de0    00              ??          00h
ram:065b6de1    00              ??          00h
ram:065b6de2    00              ??          00h
ram:065b6de3    00              ??          00h
ram:065b6de4    00              ??          00h
ram:065b6de5    00              ??          00h
ram:065b6de6    00              ??          00h
ram:065b6de7    00              ??          00h
ram:065b6de8    00              ??          00h
ram:065b6de9    00              ??          00h
ram:065b6dea    00              ??          00h
ram:065b6deb    00              ??          00h
ram:065b6dec    00              ??          00h
ram:065b6ded    00              ??          00h
ram:065b6dee    00              ??          00h
ram:065b6def    00              ??          00h
ram:065b6df0    00              ??          00h
ram:065b6df1    00              ??          00h
ram:065b6df2    00              ??          00h
ram:065b6df3    00              ??          00h
ram:065b6df4    00              ??          00h
ram:065b6df5    00              ??          00h
ram:065b6df6    00              ??          00h
ram:065b6df7    00              ??          00h
ram:065b6df8    00              ??          00h
ram:065b6df9    00              ??          00h
ram:065b6dfa    00              ??          00h
ram:065b6dfb    00              ??          00h
ram:065b6dfc    00              ??          00h
ram:065b6dfd    00              ??          00h
ram:065b6dfe    00              ??          00h
ram:065b6dff    00              ??          00h
ram:065b6e00    00              ??          00h
ram:065b6e01    00              ??          00h
ram:065b6e02    00              ??          00h
ram:065b6e03    00              ??          00h
ram:065b6e04    00              ??          00h
ram:065b6e05    00              ??          00h
ram:065b6e06    00              ??          00h
ram:065b6e07    00              ??          00h
ram:065b6e08    00              ??          00h
ram:065b6e09    00              ??          00h
ram:065b6e0a    00              ??          00h
ram:065b6e0b    00              ??          00h
ram:065b6e0c    00              ??          00h
ram:065b6e0d    00              ??          00h
ram:065b6e0e    00              ??          00h
ram:065b6e0f    00              ??          00h
ram:065b6e10    00              ??          00h
ram:065b6e11    00              ??          00h
ram:065b6e12    00              ??          00h
ram:065b6e13    00              ??          00h
ram:065b6e14    00              ??          00h
ram:065b6e15    00              ??          00h
ram:065b6e16    00              ??          00h
ram:065b6e17    00              ??          00h
ram:065b6e18    00              ??          00h
ram:065b6e19    00              ??          00h
ram:065b6e1a    00              ??          00h
ram:065b6e1b    00              ??          00h
ram:065b6e1c    00              ??          00h
ram:065b6e1d    00              ??          00h
ram:065b6e1e    00              ??          00h
ram:065b6e1f    00              ??          00h
ram:065b6e20    00              ??          00h
ram:065b6e21    00              ??          00h
ram:065b6e22    00              ??          00h
ram:065b6e23    00              ??          00h
ram:065b6e24    00              ??          00h
ram:065b6e25    00              ??          00h
ram:065b6e26    00              ??          00h
ram:065b6e27    00              ??          00h
ram:065b6e28    00              ??          00h
ram:065b6e29    00              ??          00h
ram:065b6e2a    00              ??          00h
ram:065b6e2b    00              ??          00h
ram:065b6e2c    00              ??          00h
ram:065b6e2d    00              ??          00h
ram:065b6e2e    00              ??          00h
ram:065b6e2f    00              ??          00h
ram:065b6e30    00              ??          00h
ram:065b6e31    00              ??          00h
ram:065b6e32    00              ??          00h
ram:065b6e33    00              ??          00h
ram:065b6e34    00              ??          00h
ram:065b6e35    00              ??          00h
ram:065b6e36    00              ??          00h
ram:065b6e37    00              ??          00h
ram:065b6e38    00              ??          00h
ram:065b6e39    00              ??          00h
ram:065b6e3a    00              ??          00h
ram:065b6e3b    00              ??          00h
ram:065b6e3c    00              ??          00h
ram:065b6e3d    00              ??          00h
ram:065b6e3e    00              ??          00h
ram:065b6e3f    00              ??          00h
ram:065b6e40    00              ??          00h
ram:065b6e41    00              ??          00h
ram:065b6e42    00              ??          00h
ram:065b6e43    00              ??          00h
ram:065b6e44    00              ??          00h
ram:065b6e45    00              ??          00h
ram:065b6e46    00              ??          00h
ram:065b6e47    00              ??          00h
ram:065b6e48    00              ??          00h
ram:065b6e49    00              ??          00h
ram:065b6e4a    00              ??          00h
ram:065b6e4b    00              ??          00h
ram:065b6e4c    00              ??          00h
ram:065b6e4d    00              ??          00h
ram:065b6e4e    00              ??          00h
ram:065b6e4f    00              ??          00h
ram:065b6e50    00              ??          00h
ram:065b6e51    00              ??          00h
ram:065b6e52    00              ??          00h
ram:065b6e53    00              ??          00h
ram:065b6e54    00              ??          00h
ram:065b6e55    00              ??          00h
ram:065b6e56    00              ??          00h
ram:065b6e57    00              ??          00h
ram:065b6e58    00              ??          00h
ram:065b6e59    00              ??          00h
ram:065b6e5a    00              ??          00h
ram:065b6e5b    00              ??          00h
ram:065b6e5c    00              ??          00h
ram:065b6e5d    00              ??          00h
ram:065b6e5e    00              ??          00h
ram:065b6e5f    00              ??          00h
ram:065b6e60    00              ??          00h
ram:065b6e61    00              ??          00h
ram:065b6e62    00              ??          00h
ram:065b6e63    00              ??          00h
ram:065b6e64    00              ??          00h
ram:065b6e65    00              ??          00h
ram:065b6e66    00              ??          00h
ram:065b6e67    00              ??          00h
ram:065b6e68    00              ??          00h
ram:065b6e69    00              ??          00h
ram:065b6e6a    00              ??          00h
ram:065b6e6b    00              ??          00h
ram:065b6e6c    00              ??          00h
ram:065b6e6d    00              ??          00h
ram:065b6e6e    00              ??          00h
ram:065b6e6f    00              ??          00h
ram:065b6e70    00              ??          00h
ram:065b6e71    00              ??          00h
ram:065b6e72    00              ??          00h
ram:065b6e73    00              ??          00h
ram:065b6e74    00              ??          00h
ram:065b6e75    00              ??          00h
ram:065b6e76    00              ??          00h
ram:065b6e77    00              ??          00h
ram:065b6e78    00              ??          00h
ram:065b6e79    00              ??          00h
ram:065b6e7a    00              ??          00h
ram:065b6e7b    00              ??          00h
ram:065b6e7c    00              ??          00h
ram:065b6e7d    00              ??          00h
ram:065b6e7e    00              ??          00h
ram:065b6e7f    00              ??          00h
ram:065b6e80    00              ??          00h
ram:065b6e81    00              ??          00h
ram:065b6e82    00              ??          00h
ram:065b6e83    00              ??          00h
ram:065b6e84    00              ??          00h
ram:065b6e85    00              ??          00h
ram:065b6e86    00              ??          00h
ram:065b6e87    00              ??          00h
ram:065b6e88    00              ??          00h
ram:065b6e89    00              ??          00h
ram:065b6e8a    00              ??          00h
ram:065b6e8b    00              ??          00h
ram:065b6e8c    00              ??          00h
ram:065b6e8d    00              ??          00h
ram:065b6e8e    00              ??          00h
ram:065b6e8f    00              ??          00h
ram:065b6e90    00              ??          00h
ram:065b6e91    00              ??          00h
ram:065b6e92    00              ??          00h
ram:065b6e93    00              ??          00h
ram:065b6e94    00              ??          00h
ram:065b6e95    00              ??          00h
ram:065b6e96    00              ??          00h
ram:065b6e97    00              ??          00h
ram:065b6e98    00              ??          00h
ram:065b6e99    00              ??          00h
ram:065b6e9a    00              ??          00h
ram:065b6e9b    00              ??          00h
ram:065b6e9c    00              ??          00h
ram:065b6e9d    00              ??          00h
ram:065b6e9e    00              ??          00h
ram:065b6e9f    00              ??          00h
ram:065b6ea0    00              ??          00h
ram:065b6ea1    00              ??          00h
ram:065b6ea2    00              ??          00h
ram:065b6ea3    00              ??          00h
ram:065b6ea4    00              ??          00h
ram:065b6ea5    00              ??          00h
ram:065b6ea6    00              ??          00h
ram:065b6ea7    00              ??          00h
ram:065b6ea8    00              ??          00h
ram:065b6ea9    00              ??          00h
ram:065b6eaa    00              ??          00h
ram:065b6eab    00              ??          00h
ram:065b6eac    00              ??          00h
ram:065b6ead    00              ??          00h
ram:065b6eae    00              ??          00h
ram:065b6eaf    00              ??          00h
ram:065b6eb0    00              ??          00h
ram:065b6eb1    00              ??          00h
ram:065b6eb2    00              ??          00h
ram:065b6eb3    00              ??          00h
ram:065b6eb4    00              ??          00h
ram:065b6eb5    00              ??          00h
ram:065b6eb6    00              ??          00h
ram:065b6eb7    00              ??          00h
ram:065b6eb8    00              ??          00h
ram:065b6eb9    00              ??          00h
ram:065b6eba    00              ??          00h
ram:065b6ebb    00              ??          00h
ram:065b6ebc    00              ??          00h
ram:065b6ebd    00              ??          00h
ram:065b6ebe    00              ??          00h
ram:065b6ebf    00              ??          00h
ram:065b6ec0    00              ??          00h
ram:065b6ec1    00              ??          00h
ram:065b6ec2    00              ??          00h
ram:065b6ec3    00              ??          00h
ram:065b6ec4    00              ??          00h
ram:065b6ec5    00              ??          00h
ram:065b6ec6    00              ??          00h
ram:065b6ec7    00              ??          00h
ram:065b6ec8    00              ??          00h
ram:065b6ec9    00              ??          00h
ram:065b6eca    00              ??          00h
ram:065b6ecb    00              ??          00h
ram:065b6ecc    00              ??          00h
ram:065b6ecd    00              ??          00h
ram:065b6ece    00              ??          00h
ram:065b6ecf    00              ??          00h
ram:065b6ed0    00              ??          00h
ram:065b6ed1    00              ??          00h
ram:065b6ed2    00              ??          00h
ram:065b6ed3    00              ??          00h
ram:065b6ed4    00              ??          00h
ram:065b6ed5    00              ??          00h
ram:065b6ed6    00              ??          00h
ram:065b6ed7    00              ??          00h
ram:065b6ed8    00              ??          00h
ram:065b6ed9    00              ??          00h
ram:065b6eda    00              ??          00h
ram:065b6edb    00              ??          00h
ram:065b6edc    00              ??          00h
ram:065b6edd    00              ??          00h
ram:065b6ede    00              ??          00h
ram:065b6edf    00              ??          00h
ram:065b6ee0    00              ??          00h
ram:065b6ee1    00              ??          00h
ram:065b6ee2    00              ??          00h
ram:065b6ee3    00              ??          00h
ram:065b6ee4    00              ??          00h
ram:065b6ee5    00              ??          00h
ram:065b6ee6    00              ??          00h
ram:065b6ee7    00              ??          00h
ram:065b6ee8    00              ??          00h
ram:065b6ee9    00              ??          00h
ram:065b6eea    00              ??          00h
ram:065b6eeb    00              ??          00h
ram:065b6eec    00              ??          00h
ram:065b6eed    00              ??          00h
ram:065b6eee    00              ??          00h
ram:065b6eef    00              ??          00h
ram:065b6ef0    00              ??          00h
ram:065b6ef1    00              ??          00h
ram:065b6ef2    00              ??          00h
ram:065b6ef3    00              ??          00h
ram:065b6ef4    00              ??          00h
ram:065b6ef5    00              ??          00h
ram:065b6ef6    00              ??          00h
ram:065b6ef7    00              ??          00h
ram:065b6ef8    00              ??          00h
ram:065b6ef9    00              ??          00h
ram:065b6efa    00              ??          00h
ram:065b6efb    00              ??          00h
ram:065b6efc    00              ??          00h
ram:065b6efd    00              ??          00h
ram:065b6efe    00              ??          00h
ram:065b6eff    00              ??          00h
ram:065b6f00    00              ??          00h
ram:065b6f01    00              ??          00h
ram:065b6f02    00              ??          00h
ram:065b6f03    00              ??          00h
ram:065b6f04    00              ??          00h
ram:065b6f05    00              ??          00h
ram:065b6f06    00              ??          00h
ram:065b6f07    00              ??          00h
ram:065b6f08    00              ??          00h
ram:065b6f09    00              ??          00h
ram:065b6f0a    00              ??          00h
ram:065b6f0b    00              ??          00h
ram:065b6f0c    00              ??          00h
ram:065b6f0d    00              ??          00h
ram:065b6f0e    00              ??          00h
ram:065b6f0f    00              ??          00h
ram:065b6f10    00              ??          00h
ram:065b6f11    00              ??          00h
ram:065b6f12    00              ??          00h
ram:065b6f13    00              ??          00h
ram:065b6f14    00              ??          00h
ram:065b6f15    00              ??          00h
ram:065b6f16    00              ??          00h
ram:065b6f17    00              ??          00h
ram:065b6f18    00              ??          00h
ram:065b6f19    00              ??          00h
ram:065b6f1a    00              ??          00h
ram:065b6f1b    00              ??          00h
ram:065b6f1c    00              ??          00h
ram:065b6f1d    00              ??          00h
ram:065b6f1e    00              ??          00h
ram:065b6f1f    00              ??          00h
ram:065b6f20    00              ??          00h
ram:065b6f21    00              ??          00h
ram:065b6f22    00              ??          00h
ram:065b6f23    00              ??          00h
ram:065b6f24    00              ??          00h
ram:065b6f25    00              ??          00h
ram:065b6f26    00              ??          00h
ram:065b6f27    00              ??          00h
ram:065b6f28    00              ??          00h
ram:065b6f29    00              ??          00h
ram:065b6f2a    00              ??          00h
ram:065b6f2b    00              ??          00h
ram:065b6f2c    00              ??          00h
ram:065b6f2d    00              ??          00h
ram:065b6f2e    00              ??          00h
ram:065b6f2f    00              ??          00h
ram:065b6f30    00              ??          00h
ram:065b6f31    00              ??          00h
ram:065b6f32    00              ??          00h
ram:065b6f33    00              ??          00h
ram:065b6f34    00              ??          00h
ram:065b6f35    00              ??          00h
ram:065b6f36    00              ??          00h
ram:065b6f37    00              ??          00h
ram:065b6f38    00              ??          00h
ram:065b6f39    00              ??          00h
ram:065b6f3a    00              ??          00h
ram:065b6f3b    00              ??          00h
ram:065b6f3c    00              ??          00h
ram:065b6f3d    00              ??          00h
ram:065b6f3e    00              ??          00h
ram:065b6f3f    00              ??          00h
ram:065b6f40    00              ??          00h
ram:065b6f41    00              ??          00h
ram:065b6f42    00              ??          00h
ram:065b6f43    00              ??          00h
ram:065b6f44    00              ??          00h
ram:065b6f45    00              ??          00h
ram:065b6f46    00              ??          00h
ram:065b6f47    00              ??          00h
ram:065b6f48    00              ??          00h
ram:065b6f49    00              ??          00h
ram:065b6f4a    00              ??          00h
ram:065b6f4b    00              ??          00h
ram:065b6f4c    00              ??          00h
ram:065b6f4d    00              ??          00h
ram:065b6f4e    00              ??          00h
ram:065b6f4f    00              ??          00h
ram:065b6f50    00              ??          00h
ram:065b6f51    00              ??          00h
ram:065b6f52    00              ??          00h
ram:065b6f53    00              ??          00h
ram:065b6f54    00              ??          00h
ram:065b6f55    00              ??          00h
ram:065b6f56    00              ??          00h
ram:065b6f57    00              ??          00h
ram:065b6f58    00              ??          00h
ram:065b6f59    00              ??          00h
ram:065b6f5a    00              ??          00h
ram:065b6f5b    00              ??          00h
ram:065b6f5c    00              ??          00h
ram:065b6f5d    00              ??          00h
ram:065b6f5e    00              ??          00h
ram:065b6f5f    00              ??          00h
ram:065b6f60    00              ??          00h
ram:065b6f61    00              ??          00h
ram:065b6f62    00              ??          00h
ram:065b6f63    00              ??          00h
ram:065b6f64    00              ??          00h
ram:065b6f65    00              ??          00h
ram:065b6f66    00              ??          00h
ram:065b6f67    00              ??          00h
ram:065b6f68    00              ??          00h
ram:065b6f69    00              ??          00h
ram:065b6f6a    00              ??          00h
ram:065b6f6b    00              ??          00h
ram:065b6f6c    00              ??          00h
ram:065b6f6d    00              ??          00h
ram:065b6f6e    00              ??          00h
ram:065b6f6f    00              ??          00h
ram:065b6f70    00              ??          00h
ram:065b6f71    00              ??          00h
ram:065b6f72    00              ??          00h
ram:065b6f73    00              ??          00h
ram:065b6f74    00              ??          00h
ram:065b6f75    00              ??          00h
ram:065b6f76    00              ??          00h
ram:065b6f77    00              ??          00h
ram:065b6f78    00              ??          00h
ram:065b6f79    00              ??          00h
ram:065b6f7a    00              ??          00h
ram:065b6f7b    00              ??          00h
ram:065b6f7c    00              ??          00h
ram:065b6f7d    00              ??          00h
ram:065b6f7e    00              ??          00h
ram:065b6f7f    00              ??          00h
ram:065b6f80    00              ??          00h
ram:065b6f81    00              ??          00h
ram:065b6f82    00              ??          00h
ram:065b6f83    00              ??          00h
ram:065b6f84    00              ??          00h
ram:065b6f85    00              ??          00h
ram:065b6f86    00              ??          00h
ram:065b6f87    00              ??          00h
ram:065b6f88    00              ??          00h
ram:065b6f89    00              ??          00h
ram:065b6f8a    00              ??          00h
ram:065b6f8b    00              ??          00h
ram:065b6f8c    00              ??          00h
ram:065b6f8d    00              ??          00h
ram:065b6f8e    00              ??          00h
ram:065b6f8f    00              ??          00h
ram:065b6f90    00              ??          00h
ram:065b6f91    00              ??          00h
ram:065b6f92    00              ??          00h
ram:065b6f93    00              ??          00h
ram:065b6f94    00              ??          00h
ram:065b6f95    00              ??          00h
ram:065b6f96    00              ??          00h
ram:065b6f97    00              ??          00h
ram:065b6f98    00              ??          00h
ram:065b6f99    00              ??          00h
ram:065b6f9a    00              ??          00h
ram:065b6f9b    00              ??          00h
ram:065b6f9c    00              ??          00h
ram:065b6f9d    00              ??          00h
ram:065b6f9e    00              ??          00h
ram:065b6f9f    00              ??          00h
ram:065b6fa0    00              ??          00h
ram:065b6fa1    00              ??          00h
ram:065b6fa2    00              ??          00h
ram:065b6fa3    00              ??          00h
ram:065b6fa4    00              ??          00h
ram:065b6fa5    00              ??          00h
ram:065b6fa6    00              ??          00h
ram:065b6fa7    00              ??          00h
ram:065b6fa8    00              ??          00h
ram:065b6fa9    00              ??          00h
ram:065b6faa    00              ??          00h
ram:065b6fab    00              ??          00h
ram:065b6fac    00              ??          00h
ram:065b6fad    00              ??          00h
ram:065b6fae    00              ??          00h
ram:065b6faf    00              ??          00h
ram:065b6fb0    00              ??          00h
ram:065b6fb1    00              ??          00h
ram:065b6fb2    00              ??          00h
ram:065b6fb3    00              ??          00h
ram:065b6fb4    00              ??          00h
ram:065b6fb5    00              ??          00h
ram:065b6fb6    00              ??          00h
ram:065b6fb7    00              ??          00h
ram:065b6fb8    00              ??          00h
ram:065b6fb9    00              ??          00h
ram:065b6fba    00              ??          00h
ram:065b6fbb    00              ??          00h
ram:065b6fbc    00              ??          00h
ram:065b6fbd    00              ??          00h
ram:065b6fbe    00              ??          00h
ram:065b6fbf    00              ??          00h
ram:065b6fc0    00              ??          00h
ram:065b6fc1    00              ??          00h
ram:065b6fc2    00              ??          00h
ram:065b6fc3    00              ??          00h
ram:065b6fc4    00              ??          00h
ram:065b6fc5    00              ??          00h
ram:065b6fc6    00              ??          00h
ram:065b6fc7    00              ??          00h
ram:065b6fc8    00              ??          00h
ram:065b6fc9    00              ??          00h
ram:065b6fca    00              ??          00h
ram:065b6fcb    00              ??          00h
ram:065b6fcc    00              ??          00h
ram:065b6fcd    00              ??          00h
ram:065b6fce    00              ??          00h
ram:065b6fcf    00              ??          00h
ram:065b6fd0    00              ??          00h
ram:065b6fd1    00              ??          00h
ram:065b6fd2    00              ??          00h
ram:065b6fd3    00              ??          00h
ram:065b6fd4    00              ??          00h
ram:065b6fd5    00              ??          00h
ram:065b6fd6    00              ??          00h
ram:065b6fd7    00              ??          00h
ram:065b6fd8    00              ??          00h
ram:065b6fd9    00              ??          00h
ram:065b6fda    00              ??          00h
ram:065b6fdb    00              ??          00h
ram:065b6fdc    00              ??          00h
ram:065b6fdd    00              ??          00h
ram:065b6fde    00              ??          00h
ram:065b6fdf    00              ??          00h
ram:065b6fe0    00              ??          00h
ram:065b6fe1    00              ??          00h
ram:065b6fe2    00              ??          00h
ram:065b6fe3    00              ??          00h
ram:065b6fe4    00              ??          00h
ram:065b6fe5    00              ??          00h
ram:065b6fe6    00              ??          00h
ram:065b6fe7    00              ??          00h
ram:065b6fe8    00              ??          00h
ram:065b6fe9    00              ??          00h
ram:065b6fea    00              ??          00h
ram:065b6feb    00              ??          00h
ram:065b6fec    00              ??          00h
ram:065b6fed    00              ??          00h
ram:065b6fee    00              ??          00h
ram:065b6fef    00              ??          00h
ram:065b6ff0    00              ??          00h
ram:065b6ff1    00              ??          00h
ram:065b6ff2    00              ??          00h
ram:065b6ff3    00              ??          00h
ram:065b6ff4    00              ??          00h
ram:065b6ff5    00              ??          00h
ram:065b6ff6    00              ??          00h
ram:065b6ff7    00              ??          00h
ram:065b6ff8    00              ??          00h
ram:065b6ff9    00              ??          00h
ram:065b6ffa    00              ??          00h
ram:065b6ffb    00              ??          00h
ram:065b6ffc    00              ??          00h
ram:065b6ffd    00              ??          00h
ram:065b6ffe    00              ??          00h
ram:065b6fff    00              ??          00h
```
