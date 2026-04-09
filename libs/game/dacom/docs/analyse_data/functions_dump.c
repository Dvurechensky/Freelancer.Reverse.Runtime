typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;

void * __thiscall FUN_065b1000(void *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    iVar3 = -1;
    pcVar2 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_065b5ece();
    *(char **)this = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  if (param_2 == (char *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    return this;
  }
  iVar3 = -1;
  pcVar2 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_065b5ece();
  *(char **)((int)this + 4) = pcVar2;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return this;
}



void __fastcall FUN_065b1080(undefined4 *param_1)

{
  free_delete();
  *param_1 = 0;
  free_delete();
  param_1[1] = 0;
  return;
}



void * __thiscall FUN_065b10b0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *(undefined1 *)((int)this + 4) = param_1._0_1_;
  iVar2 = FUN_065b5ece();
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)((int)this + 8) = iVar2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    pcVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)FUN_065b5ece();
    *(char **)this = pcVar3;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return this;
}



void __fastcall FUN_065b1110(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  free_delete();
  *param_1 = 0;
  piVar3 = *(int **)param_1[2];
  if (piVar3 != (int *)param_1[2]) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        FUN_065b1080((undefined4 *)piVar3[2]);
        free_delete();
      }
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      free_delete();
      param_1[3] = param_1[3] + -1;
      piVar3 = *(int **)param_1[2];
    } while (piVar3 != (int *)param_1[2]);
  }
  piVar3 = (int *)param_1[2];
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    free_delete();
    param_1[3] = param_1[3] + -1;
    piVar2 = piVar1;
  }
  free_delete();
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



undefined4 __thiscall FUN_065b11c0(void *this,char *param_1,char *param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  pvVar1 = (void *)FUN_065b5ece();
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_065b1000(pvVar1,param_1,param_2);
  }
  iVar3 = *(int *)((int)this + 8);
  piVar4 = *(int **)(iVar3 + 4);
  piVar2 = (int *)FUN_065b5ece();
  *piVar2 = iVar3;
  if (piVar4 == (int *)0x0) {
    piVar4 = piVar2;
  }
  piVar2[1] = (int)piVar4;
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = (int)pvVar1;
  }
  iVar3 = *(int *)((int)this + 0xc) + 1;
  *(int *)((int)this + 0xc) = iVar3;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __thiscall FUN_065b1300(void *this,undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint in_EAX;
  undefined4 uVar4;
  
  pcVar3 = _DAT_065b7030;
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = (*pcVar3)(*(undefined4 *)puVar2[2],param_1);
    if (in_EAX == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (*(int *)(puVar2[2] + 4) != 0) {
    uVar4 = (*_DAT_065b703c)(param_3,*(int *)(puVar2[2] + 4),param_2);
    param_3[param_2 + -1] = 0;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  *param_3 = 0;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __thiscall FUN_065b1380(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar4 = _DAT_065b7030;
  puVar2 = *(undefined4 **)((int)this + 8);
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 0;
    }
    iVar5 = (*pcVar4)(*(undefined4 *)puVar3[2],param_1);
    if (iVar5 == 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  if (*(char **)(puVar3[2] + 4) == (char *)0x0) {
    return 0;
  }
  uVar6 = 0xffffffff;
  pcVar7 = *(char **)(puVar3[2] + 4);
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  return ~uVar6 - 1;
}



undefined1 * __fastcall FUN_065b13e0(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  iVar1 = FUN_065b5ece();
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_065b1480(param_1,0);
  return param_1;
}



void __fastcall FUN_065b1420(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_065b14f0(param_1);
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    free_delete();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  free_delete();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



uint __thiscall FUN_065b1480(void *this,int param_1)

{
  uint uVar1;
  
  FUN_065b14f0((int)this);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = FUN_065b16f0(param_1);
    return uVar1;
  }
  return 1;
}



uint __thiscall FUN_065b14b0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  FUN_065b14f0((int)this);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_065b1760(param_1,param_2);
    return uVar1;
  }
  return 1;
}



void __fastcall FUN_065b14f0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (piVar1 != *(int **)(param_1 + 4)) {
    do {
      if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
        FUN_065b1110((undefined4 *)piVar1[2]);
        free_delete();
      }
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      free_delete();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      piVar1 = (int *)**(int **)(param_1 + 4);
    } while (piVar1 != *(int **)(param_1 + 4));
  }
  return;
}



undefined4 FUN_065b1560(undefined4 param_1)

{
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __thiscall FUN_065b15c0(void *this,char *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar2 = _DAT_065b7030;
  puVar6 = *(undefined4 **)((int)this + 4);
  puVar1 = (undefined4 *)*puVar6;
  while ((puVar1 != puVar6 && (iVar3 = (*pcVar2)(*(undefined4 *)puVar1[2],param_1), iVar3 < 1))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  pvVar4 = (void *)FUN_065b5ece();
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = FUN_065b10b0(pvVar4,param_1);
  }
  puVar6 = (undefined4 *)puVar1[1];
  puVar5 = (undefined4 *)FUN_065b5ece();
  *puVar5 = puVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5[1] = puVar6;
  puVar1[1] = puVar5;
  *(undefined4 **)puVar5[1] = puVar5;
  if (puVar5 + 2 != (undefined4 *)0x0) {
    puVar5[2] = pvVar4;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return pvVar4;
}



int FUN_065b1650(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  bVar1 = true;
  iVar5 = 0;
  iVar3 = FUN_065b1f70(param_1);
  if (iVar3 != 100) {
    while (iVar3 != 0x65) {
      if (iVar3 == 0x66) {
        *(undefined1 *)(iVar5 + param_4) = 0;
        return 0x65;
      }
      if (iVar3 == param_2) break;
      if (param_3 + -1 <= iVar5 + 1 + param_1[0x104]) {
        iVar3 = 100;
        break;
      }
      if (!bVar1) {
        *(undefined1 *)(iVar5 + param_4) = 0x20;
        iVar5 = iVar5 + 1;
      }
      piVar4 = param_1 + 4;
      bVar1 = false;
      iVar3 = iVar5 - (int)piVar4;
      do {
        iVar2 = *piVar4;
        *(char *)(iVar3 + param_4 + (int)piVar4) = (char)iVar2;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar2 != '\0');
      iVar5 = iVar5 + param_1[0x104];
      iVar3 = FUN_065b1f70(param_1);
      if (iVar3 == 100) {
        *(undefined1 *)(iVar5 + param_4) = 0;
        return 100;
      }
    }
  }
  *(undefined1 *)(iVar5 + param_4) = 0;
  return iVar3;
}



uint FUN_065b16f0(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_418 [262];
  
  FUN_065b1b40(local_418);
  uVar1 = FUN_065b1b80(local_418,param_1);
  if ((char)uVar1 == '\0') {
    uVar2 = FUN_065b1b60(local_418);
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_065b17d0();
  uVar1 = FUN_065b1b60(local_418);
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar2);
}



uint FUN_065b1760(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_418 [262];
  
  FUN_065b1b40(local_418);
  uVar1 = FUN_065b1c30(local_418,param_1,param_2);
  if ((char)uVar1 == '\0') {
    uVar2 = FUN_065b1b60(local_418);
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_065b17d0();
  uVar1 = FUN_065b1b60(local_418);
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_065b17d0(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  void *this;
  char *pcVar8;
  char in_stack_00000404;
  char in_stack_00000508;
  int *in_stack_00001c24;
  
  FUN_065b5ee0();
  iVar4 = FUN_065b1f70(in_stack_00001c24);
  do {
    if (iVar4 == 0x66) {
      return 1;
    }
    switch(iVar4) {
    case 0:
      piVar5 = in_stack_00001c24 + 4;
      iVar4 = (int)&stack0x00000000 - (int)piVar5;
      do {
        iVar3 = *piVar5;
        *(char *)(iVar4 + (int)piVar5) = (char)iVar3;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar3 != '\0');
      iVar4 = FUN_065b1650();
      if (iVar4 == 4) {
        iVar4 = FUN_065b1650();
        if (iVar4 != 0x65) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        iVar4 = -1;
        pcVar8 = &stack0x0000060c;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (iVar4 == -2) {
          iVar4 = 0;
          do {
            pcVar8 = &stack0x00000000 + iVar4;
            (&stack0x00000c18)[iVar4] = *pcVar8;
            iVar4 = iVar4 + 1;
          } while (*pcVar8 != '\0');
        }
        else {
          (*_DAT_065b7040)();
        }
        FUN_065b11c0(*(void **)((int)this + 0xc),&stack0x00000c18,&stack0x0000181c);
      }
      else {
        if (iVar4 != 0x65) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return uVar7;
        }
        iVar4 = -1;
        pcVar8 = &stack0x0000060c;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (iVar4 == -2) {
          iVar4 = 0;
          do {
            pcVar8 = &stack0x00000000 + iVar4;
            (&stack0x00000c18)[iVar4] = *pcVar8;
            iVar4 = iVar4 + 1;
          } while (*pcVar8 != '\0');
          FUN_065b11c0(*(void **)((int)this + 0xc),&stack0x00000c18,(char *)0x0);
        }
        else {
          (*_DAT_065b7040)();
          FUN_065b11c0(*(void **)((int)this + 0xc),&stack0x00000c18,(char *)0x0);
        }
      }
      break;
    case 1:
      uVar7 = FUN_065b1f70(in_stack_00001c24);
      pcVar2 = _DAT_065b7044;
      if (uVar7 != 0) {
        return uVar7 & 0xffffff00;
      }
      piVar5 = in_stack_00001c24 + 4;
      (*_DAT_065b7044)();
      if ((in_stack_00000404 == '\0') && (in_stack_00000508 != '\\')) {
        (*pcVar2)();
        (*_DAT_065b7040)();
      }
      else {
        iVar4 = -(int)piVar5;
        do {
          iVar3 = *piVar5;
          (&stack0x00000c18 + iVar4)[(int)piVar5] = (char)iVar3;
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((char)iVar3 != '\0');
      }
      FUN_065b16f0(&stack0x00000c18);
      pcVar8 = (char *)in_stack_00001c24[2];
      if (pcVar8 < (char *)(in_stack_00001c24[1] + *in_stack_00001c24)) {
        in_stack_00001c24[3] = (int)*pcVar8;
        in_stack_00001c24[2] = (int)(pcVar8 + 1);
      }
      else {
        in_stack_00001c24[3] = -1;
      }
      break;
    case 2:
      iVar4 = FUN_065b1650();
      if (iVar4 == 3) {
        pvVar6 = FUN_065b15c0(this,&stack0x00000000);
        *(void **)((int)this + 0xc) = pvVar6;
      }
      else if (iVar4 != 0x65) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      break;
    default:
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    case 100:
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    case 0x65:
      break;
    }
    iVar4 = FUN_065b1f70(in_stack_00001c24);
  } while( true );
}



undefined4 * __fastcall FUN_065b1b40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_065b1ca0(param_1);
  return param_1;
}



void __fastcall FUN_065b1b60(undefined4 *param_1)

{
  free_delete();
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __thiscall FUN_065b1b80(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
                    // WARNING: Load size is inaccurate
  uVar4 = *this;
  free_delete();
  *(undefined4 *)this = 0;
  iVar2 = (*_DAT_065b7058)(param_1,0x65b8038,uVar4);
  pcVar1 = _DAT_065b7054;
  if (iVar2 == 0) {
    uVar6 = FUN_065b1ca0((undefined4 *)this);
    return uVar6 & 0xffffff00;
  }
  (*_DAT_065b7054)(iVar2,0,2);
  iVar3 = (*_DAT_065b7020)(iVar2);
  (*pcVar1)(iVar2,0,0);
  iVar5 = iVar3;
  uVar4 = FUN_065b5ece();
  *(undefined4 *)this = uVar4;
  iVar5 = (*_DAT_065b704c)(uVar4,1,iVar3,iVar2,iVar5);
  if (iVar5 != iVar3) {
                    // WARNING: Load size is inaccurate
    uVar4 = *this;
    free_delete();
    *(undefined4 *)this = 0;
    uVar6 = (*_DAT_065b7048)(iVar2,uVar4);
    return uVar6 & 0xffffff00;
  }
  *(int *)((int)this + 4) = iVar3;
  (*_DAT_065b7048)(iVar2);
  uVar4 = FUN_065b1ca0((undefined4 *)this);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



undefined4 __thiscall FUN_065b1c30(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  free_delete();
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)FUN_065b5ece();
  uVar3 = param_2 >> 2;
  *(undefined4 **)this = puVar1;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
                    // WARNING: Load size is inaccurate
  *(undefined4 *)((int)this + 8) = *this;
  *(uint *)((int)this + 4) = param_2;
  uVar2 = FUN_065b1ca0((undefined4 *)this);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



void __fastcall FUN_065b1c90(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x410) + 0x10 + param_1) = 0;
  return;
}



void __fastcall FUN_065b1ca0(undefined4 *param_1)

{
  param_1[0x104] = 0;
  param_1[3] = 10;
  param_1[2] = *param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __fastcall FUN_065b1cc0(int *param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = param_1[3];
  param_1[0x104] = 0;
  pcVar2 = _DAT_065b705c;
  do {
    _DAT_065b705c = pcVar2;
    switch(iVar3) {
    default:
      do {
        *(char *)((int)param_1 + param_1[0x104] + 0x10) = (char)param_1[3];
        pcVar1 = (char *)param_1[2];
        param_1[0x104] = param_1[0x104] + 1;
        if (pcVar1 < (char *)(param_1[1] + *param_1)) {
          param_1[3] = (int)*pcVar1;
          param_1[2] = (int)(pcVar1 + 1);
        }
        else {
          param_1[3] = -1;
        }
        iVar3 = (*pcVar2)(0x65b8048,param_1[3]);
      } while ((iVar3 == 0) && (param_1[3] != -1));
      FUN_065b1c90((int)param_1);
      iVar3 = (*_DAT_065b7030)(param_1 + 4,0x65b803c);
      return (bool)('\x01' - (iVar3 != 0));
    case 9:
    case 0xd:
    case 0x20:
      pcVar1 = (char *)param_1[2];
      if (pcVar1 < (char *)(param_1[1] + *param_1)) {
        param_1[3] = (int)*pcVar1;
        param_1[2] = (int)(pcVar1 + 1);
      }
      else {
        param_1[3] = -1;
      }
      break;
    case 10:
      *(char *)(param_1 + 4) = (char)param_1[3];
      param_1[0x104] = param_1[0x104] + 1;
      FUN_065b1c90((int)param_1);
      pcVar1 = (char *)param_1[2];
      if (pcVar1 < (char *)(param_1[1] + *param_1)) {
        param_1[3] = (int)*pcVar1;
        param_1[2] = (int)(pcVar1 + 1);
        return true;
      }
      param_1[3] = -1;
      return true;
    case 0x3b:
      while (pcVar1 = (char *)param_1[2], pcVar1 < (char *)(param_1[1] + *param_1)) {
        iVar3 = (int)*pcVar1;
        param_1[3] = iVar3;
        param_1[2] = (int)(pcVar1 + 1);
        if ((iVar3 == 10) || (iVar3 == -1)) goto LAB_065b1d30;
      }
      param_1[3] = -1;
LAB_065b1d30:
      param_1[0x104] = 0;
      break;
    case 0x3d:
      *(char *)(param_1 + 4) = (char)param_1[3];
      param_1[0x104] = param_1[0x104] + 1;
      FUN_065b1c90((int)param_1);
      pcVar1 = (char *)param_1[2];
      if (pcVar1 < (char *)(param_1[1] + *param_1)) {
        param_1[3] = (int)*pcVar1;
        param_1[2] = (int)(pcVar1 + 1);
        return true;
      }
      param_1[3] = -1;
      return true;
    case 0x5b:
      *(char *)(param_1 + 4) = (char)param_1[3];
      param_1[0x104] = param_1[0x104] + 1;
      FUN_065b1c90((int)param_1);
      pcVar1 = (char *)param_1[2];
      if (pcVar1 < (char *)(param_1[1] + *param_1)) {
        param_1[3] = (int)*pcVar1;
        param_1[2] = (int)(pcVar1 + 1);
        return true;
      }
      param_1[3] = -1;
      return true;
    case 0x5d:
      *(char *)(param_1 + 4) = (char)param_1[3];
      param_1[0x104] = param_1[0x104] + 1;
      FUN_065b1c90((int)param_1);
      pcVar1 = (char *)param_1[2];
      if (pcVar1 < (char *)(param_1[1] + *param_1)) {
        param_1[3] = (int)*pcVar1;
        param_1[2] = (int)(pcVar1 + 1);
        return true;
      }
      param_1[3] = -1;
      return true;
    case -1:
      return true;
    }
    iVar3 = param_1[3];
    pcVar2 = _DAT_065b705c;
  } while( true );
}



void __fastcall FUN_065b1f70(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_065b1cc0(param_1);
  param_1[0x105] = CONCAT31(extraout_var,bVar1);
  return;
}



undefined4 * __fastcall FUN_065b1f80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
                    // TEST COMMENT
  *(undefined1 *)(param_1 + 2) = uStack_18._3_1_;
  *(undefined1 *)((int)param_1 + 9) = uStack_18._3_1_;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar1 = FUN_065b5ece();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  param_1[4] = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(undefined4 *)param_1[4] = 0;
  *(undefined4 *)(param_1[4] + 8) = 0;
  uVar2 = FUN_065b40e0(param_1[4],0);
  param_1[3] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = uStack_18._3_1_;
  iVar1 = FUN_065b5ece();
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  param_1[8] = iVar1;
  param_1[9] = 0;
  *param_1 = 0x65b70cc;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x4d] = 0;
  piVar3 = FUN_065b46d0();
  FUN_065b21e0((int)param_1,piVar3,(char *)0x65b8074,0x80000000);
  (**(code **)(*piVar3 + 8))(piVar3);
  piVar3 = FUN_065b46a0();
  FUN_065b21e0((int)param_1,piVar3,(char *)0x65b8064,0x80000000);
  uStack_14 = 0x65b8064;
  uStack_8 = 0;
  uStack_18 = 0x14;
  puStack_10 = param_1;
  puStack_c = param_1 + 0xb;
  (**(code **)(*piVar3 + 0xc))(piVar3,&uStack_18,param_1 + 10);
  (**(code **)(*piVar3 + 8))(piVar3);
  return param_1;
}



undefined4 FUN_065b21e0(int param_1,int *param_2,char *param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int unaff_EBX;
  undefined4 *puVar9;
  undefined4 local_34 [2];
  undefined1 local_2c [4];
  undefined4 local_28;
  int *local_24;
  int *local_20;
  char *local_1c;
  uint local_18;
  char *local_14;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  pcVar7 = param_3;
  if ((param_2 == (int *)0x0) || (param_3 == (char *)0x0)) {
    return 0xfffffffe;
  }
  param_3 = (char *)_GetCRC32_DACOM_CRC__YAKPBD_Z(param_3);
  local_2c[0] = (undefined1)param_1;
  local_28 = FUN_065b3ce0((int *)0x0,0);
  local_24 = (int *)0x0;
  puVar3 = (uint *)FUN_065b3b20(local_10,&param_3,local_2c);
  piVar4 = (int *)FUN_065b3570((void *)(param_1 + 8),local_34,puVar3);
  iVar6 = *piVar4;
  FUN_065b3c80((int)local_c);
  FUN_065b3c80((int)local_2c);
  for (puVar2 = (undefined4 *)**(undefined4 **)(iVar6 + 0x14);
      (puVar2 != *(undefined4 **)(iVar6 + 0x14) && (param_4 < (uint)puVar2[4]));
      puVar2 = (undefined4 *)*puVar2) {
  }
  local_20 = (int *)0x0;
  local_1c = (char *)0x0;
  local_14 = (char *)0x0;
  local_18 = param_4;
  free_delete();
  iVar6 = -1;
  local_1c = (char *)0x0;
  pcVar8 = pcVar7;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_1c = (char *)FUN_065b5ece();
  pcVar8 = local_1c;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)(param_1 + 0x30);
  free_delete();
  local_14 = (char *)0x0;
  if (pcVar7 != (char *)0x0) {
    iVar6 = -1;
    pcVar8 = pcVar7;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_14 = (char *)FUN_065b5ece();
    pcVar8 = local_14;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  local_20 = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar9 = (undefined4 *)puVar2[1];
  puVar5 = (undefined4 *)FUN_065b5ece();
  *puVar5 = puVar2;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = puVar5;
  }
  puVar5[1] = puVar9;
  puVar2[1] = puVar5;
  *(undefined4 **)puVar5[1] = puVar5;
  FUN_065b4160(puVar5 + 2,(int *)&local_24);
  *(int *)(unaff_EBX + 0x18) = *(int *)(unaff_EBX + 0x18) + 1;
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
    local_24 = (int *)0x0;
  }
  local_1c = (char *)0x0;
  free_delete();
  local_20 = (int *)0x0;
  free_delete();
  return 0;
}



void __fastcall FUN_065b2490(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  free_delete();
  param_1[1] = 0;
  free_delete();
  param_1[3] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_065b27e0(undefined4 param_1,undefined4 param_2)

{
  (*_DAT_065b7028)(param_1,0x2000,param_2,&stack0x0000000c);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_065b31a0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    (*_DAT_065b7004)(param_1);
    _DAT_065b8a34 = &LAB_065b30e0;
    FUN_065b5c40();
  }
  return 1;
}



undefined4 DACOM_Acquire(void)

{
  if ((DAT_065b8a38 & 1) == 0) {
    DAT_065b8a38 = DAT_065b8a38 | 1;
    FUN_065b1f80((undefined4 *)0x65b8a40);
    FUN_065b5f3b(&LAB_065b3210);
  }
  return 0x65b8a40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl
DACOM_GetDllVersion(undefined4 param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  int aiStack_170 [2];
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  uint uStack_160;
  undefined1 *puStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [220];
  uint *puStack_2c;
  uint *puStack_28;
  
  uStack_154 = param_1;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  uStack_158 = 0x65b3356;
  uStack_160 = (*_DAT_065b7000)();
  if (uStack_160 == 0) {
    return 0xffffffff;
  }
  puStack_15c = auStack_108;
  uStack_158 = 0x104;
  puStack_164 = (undefined1 *)0x65b3378;
  iVar1 = (*_DAT_065b7014)();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  puStack_164 = &stack0xfffffeb4;
  puStack_168 = auStack_114;
  aiStack_170[1] = 0x65b3398;
  iVar1 = GetFileVersionInfoSizeA();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  aiStack_170[0] = 0x65b33b1;
  aiStack_170[1] = iVar1;
  aiStack_170[1] = FUN_065b5ece();
  aiStack_170[0] = iVar1;
  iVar1 = GetFileVersionInfoA();
  if (iVar1 == 0) {
    free_delete();
    return 0xffffffff;
  }
  iVar1 = malloc_new();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  ppuVar2 = &puStack_168;
  piVar3 = aiStack_170;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (int)*ppuVar2;
    ppuVar2 = (undefined1 **)((int *)ppuVar2 + 1);
    piVar3 = piVar3 + 1;
  }
  free_delete();
  *param_2 = uStack_160 >> 0x10;
  *puStack_2c = uStack_160 & 0xffff;
  *puStack_28 = (uint)puStack_15c & 0xffff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int DACOM_GetVersion(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *in_stack_00002004;
  undefined4 *in_stack_00002008;
  undefined4 *in_stack_0000200c;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  
  FUN_065b5ee0();
  iVar1 = DACOM_GetDllVersion(0x65b83c4,in_stack_00002004,in_stack_00002008,in_stack_0000200c);
  if (-1 < iVar1) {
    uVar3 = *in_stack_0000200c;
    uVar4 = *in_stack_00002008;
    uVar8 = *in_stack_00002004;
    uVar7 = 0x65b839c;
    puVar6 = (undefined1 *)register0x00000010;
    uVar2 = FUN_065b27e0(&stack0x00000000,0x65b839c);
    (*_DAT_065b8a34)(0x100003,0x65b8094,0x65b8130,0x457,uVar2,puVar6,uVar7,uVar8,uVar4,uVar3);
    uVar5 = 0xad;
    uVar7 = 0xb;
    uVar2 = 1;
    uVar4 = 0x65b8374;
    uVar3 = FUN_065b27e0(&stack0x00000000,0x65b8374);
    (*_DAT_065b8a34)(0x100003,0x65b8094,0x65b8130,0x458,uVar3,register0x00000010,uVar4,uVar2,uVar7,
                     uVar5);
  }
  return iVar1;
}



void __thiscall FUN_065b3520(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  free_delete();
  param_2[3] = 0;
  free_delete();
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_1 = iVar1;
  return;
}



void __thiscall FUN_065b3570(void *this,undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  void *local_4;
  
  puVar4 = param_2;
  puVar1 = *(uint **)((int)this + 4);
  bVar6 = true;
  puVar2 = puVar1;
  puVar3 = (uint *)puVar1[1];
  while (puVar3 != *(uint **)((int)this + 8)) {
    bVar6 = *param_2 < puVar3[3];
    puVar2 = puVar3;
    if (bVar6) {
      puVar3 = (uint *)*puVar3;
    }
    else {
      puVar3 = (uint *)puVar3[2];
    }
  }
  local_4 = this;
  if (*(char *)((int)this + 0xc) == '\0') {
    param_2 = puVar2;
    if (bVar6) {
      if (puVar2 == (uint *)*puVar1) {
        puVar5 = (undefined4 *)FUN_065b3e90(this,&local_4,(int)puVar3,(int *)puVar2,puVar4);
        *param_1 = *puVar5;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_065b4100((int *)&param_2);
    }
    if (*puVar4 <= param_2[3]) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  puVar5 = (undefined4 *)FUN_065b3e90(this,&local_4,(int)puVar3,(int *)puVar2,puVar4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void __thiscall FUN_065b3630(void *this,undefined4 *param_1)

{
  *param_1 = **(undefined4 **)((int)this + 4);
  return;
}



void __thiscall FUN_065b3640(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *local_10;
  undefined4 *local_c;
  void *local_8;
  undefined4 local_4;
  
  piVar11 = param_2;
  local_8 = this;
  FUN_065b3e40((int *)&param_2);
  piVar10 = (int *)*piVar11;
  local_10 = piVar11;
  if (piVar10 == *(int **)((int)this + 8)) {
    piVar8 = (int *)piVar11[2];
  }
  else {
    piVar3 = (int *)piVar11[2];
    piVar8 = piVar10;
    if (piVar3 != *(int **)((int)this + 8)) {
      cVar1 = *(char *)(*piVar3 + 0x1d);
      local_10 = piVar3;
      piVar3 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x1d);
        local_10 = piVar3;
        piVar3 = (int *)*piVar3;
      }
      piVar8 = (int *)local_10[2];
      if (local_10 != piVar11) {
        piVar10[1] = (int)local_10;
        *local_10 = *piVar11;
        if (local_10 == (int *)piVar11[2]) {
          piVar8[1] = (int)local_10;
        }
        else {
          piVar8[1] = local_10[1];
          *(int **)local_10[1] = piVar8;
          local_10[2] = piVar11[2];
          *(int **)(piVar11[2] + 4) = local_10;
        }
        if (*(int **)(*(int *)((int)this + 4) + 4) == piVar11) {
          *(int **)(*(int *)((int)this + 4) + 4) = local_10;
        }
        else {
          piVar10 = (int *)piVar11[1];
          if ((int *)*piVar10 == piVar11) {
            *piVar10 = (int)local_10;
          }
          else {
            piVar10[2] = (int)local_10;
          }
        }
        local_10[1] = piVar11[1];
        iVar2 = local_10[7];
        *(char *)(local_10 + 7) = (char)piVar11[7];
        *(char *)(piVar11 + 7) = (char)iVar2;
        local_10 = piVar11;
        goto LAB_065b377f;
      }
    }
  }
  piVar8[1] = local_10[1];
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar11) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
  }
  else {
    piVar10 = (int *)piVar11[1];
    if ((int *)*piVar10 == piVar11) {
      *piVar10 = (int)piVar8;
    }
    else {
      piVar10[2] = (int)piVar8;
    }
  }
  piVar10 = *(int **)((int)this + 4);
  if ((int *)*piVar10 == piVar11) {
    if (piVar11[2] == *(int *)((int)this + 8)) {
      *piVar10 = piVar11[1];
    }
    else {
      cVar1 = *(char *)(*piVar8 + 0x1d);
      piVar3 = (int *)*piVar8;
      piVar6 = piVar8;
      while (piVar5 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar3 + 0x1d);
        piVar6 = piVar5;
      }
      *piVar10 = (int)piVar6;
    }
  }
  iVar2 = *(int *)((int)this + 4);
  if (*(int **)(iVar2 + 8) == piVar11) {
    if (*piVar11 == *(int *)((int)this + 8)) {
      *(int *)(iVar2 + 8) = piVar11[1];
    }
    else {
      cVar1 = *(char *)(piVar8[2] + 0x1d);
      piVar10 = (int *)piVar8[2];
      piVar11 = piVar8;
      while (piVar3 = piVar10, cVar1 == '\0') {
        piVar10 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar10 + 0x1d);
        piVar11 = piVar3;
      }
      *(int **)(iVar2 + 8) = piVar11;
    }
  }
LAB_065b377f:
  if ((char)local_10[7] == '\x01') {
    if (piVar8 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar8[7] != '\x01') break;
        piVar10 = *(int **)piVar8[1];
        if (piVar8 == piVar10) {
          piVar10 = (int *)((undefined4 *)piVar8[1])[2];
          if ((char)piVar10[7] == '\0') {
            *(undefined1 *)(piVar10 + 7) = 1;
            *(undefined1 *)(piVar8[1] + 0x1c) = 0;
            iVar2 = piVar8[1];
            piVar10 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar10;
            if (*piVar10 != *(int *)((int)this + 8)) {
              *(int *)(*piVar10 + 4) = iVar2;
            }
            piVar10[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar10;
            }
            else {
              piVar11 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar11) {
                *piVar11 = (int)piVar10;
              }
              else {
                piVar11[2] = (int)piVar10;
              }
            }
            *piVar10 = iVar2;
            *(int **)(iVar2 + 4) = piVar10;
            piVar10 = *(int **)(piVar8[1] + 8);
          }
          if ((*(char *)(*piVar10 + 0x1c) != '\x01') || (*(char *)(piVar10[2] + 0x1c) != '\x01')) {
            if (*(char *)(piVar10[2] + 0x1c) == '\x01') {
              *(undefined1 *)(*piVar10 + 0x1c) = 1;
              iVar2 = *piVar10;
              *(undefined1 *)(piVar10 + 7) = 0;
              *piVar10 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
                *(int **)(*(int *)(iVar2 + 8) + 4) = piVar10;
              }
              *(int *)(iVar2 + 4) = piVar10[1];
              if (piVar10 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
              }
              else {
                piVar11 = (int *)piVar10[1];
                if (piVar10 == (int *)piVar11[2]) {
                  piVar11[2] = iVar2;
                }
                else {
                  *piVar11 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar10;
              piVar10[1] = iVar2;
              piVar10 = *(int **)(piVar8[1] + 8);
            }
            *(undefined1 *)(piVar10 + 7) = *(undefined1 *)(piVar8[1] + 0x1c);
            *(undefined1 *)(piVar8[1] + 0x1c) = 1;
            *(undefined1 *)(piVar10[2] + 0x1c) = 1;
            piVar10 = (int *)piVar8[1];
            piVar11 = (int *)piVar10[2];
            piVar10[2] = *piVar11;
            if (*piVar11 != *(int *)((int)this + 8)) {
              *(int **)(*piVar11 + 4) = piVar10;
            }
            piVar11[1] = piVar10[1];
            if (piVar10 == (int *)*(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar11;
              *piVar11 = (int)piVar10;
            }
            else {
              piVar3 = (int *)piVar10[1];
              if (piVar10 == (int *)*piVar3) {
                *piVar3 = (int)piVar11;
                *piVar11 = (int)piVar10;
              }
              else {
                piVar3[2] = (int)piVar11;
                *piVar11 = (int)piVar10;
              }
            }
LAB_065b39f8:
            piVar10[1] = (int)piVar11;
            break;
          }
        }
        else {
          if ((char)piVar10[7] == '\0') {
            *(undefined1 *)(piVar10 + 7) = 1;
            *(undefined1 *)(piVar8[1] + 0x1c) = 0;
            piVar10 = (int *)piVar8[1];
            iVar2 = *piVar10;
            *piVar10 = *(int *)(iVar2 + 8);
            if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar10;
            }
            *(int *)(iVar2 + 4) = piVar10[1];
            if (piVar10 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
            }
            else {
              piVar11 = (int *)piVar10[1];
              if (piVar10 == (int *)piVar11[2]) {
                piVar11[2] = iVar2;
              }
              else {
                *piVar11 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar10;
            piVar10[1] = iVar2;
            piVar10 = *(int **)piVar8[1];
          }
          if ((*(char *)(piVar10[2] + 0x1c) != '\x01') || (*(char *)(*piVar10 + 0x1c) != '\x01')) {
            if (*(char *)(*piVar10 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar10[2] + 0x1c) = 1;
              piVar11 = (int *)piVar10[2];
              *(undefined1 *)(piVar10 + 7) = 0;
              piVar10[2] = *piVar11;
              if (*piVar11 != *(int *)((int)this + 8)) {
                *(int **)(*piVar11 + 4) = piVar10;
              }
              piVar11[1] = piVar10[1];
              if (piVar10 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int **)(*(int *)((int)this + 4) + 4) = piVar11;
              }
              else {
                piVar3 = (int *)piVar10[1];
                if (piVar10 == (int *)*piVar3) {
                  *piVar3 = (int)piVar11;
                }
                else {
                  piVar3[2] = (int)piVar11;
                }
              }
              *piVar11 = (int)piVar10;
              piVar10[1] = (int)piVar11;
              piVar10 = *(int **)piVar8[1];
            }
            *(undefined1 *)(piVar10 + 7) = *(undefined1 *)(piVar8[1] + 0x1c);
            *(undefined1 *)(piVar8[1] + 0x1c) = 1;
            *(undefined1 *)(*piVar10 + 0x1c) = 1;
            piVar10 = (int *)piVar8[1];
            piVar11 = (int *)*piVar10;
            *piVar10 = piVar11[2];
            if (piVar11[2] != *(int *)((int)this + 8)) {
              *(int **)(piVar11[2] + 4) = piVar10;
            }
            piVar11[1] = piVar10[1];
            if (piVar10 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar11;
            }
            else {
              puVar4 = (undefined4 *)piVar10[1];
              if (piVar10 == (int *)puVar4[2]) {
                puVar4[2] = piVar11;
              }
              else {
                *puVar4 = piVar11;
              }
            }
            piVar11[2] = (int)piVar10;
            goto LAB_065b39f8;
          }
        }
        *(undefined1 *)(piVar10 + 7) = 0;
        piVar8 = (int *)piVar8[1];
      } while (piVar8 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 7) = 1;
  }
  puVar4 = (undefined4 *)local_10[5];
  puVar7 = (undefined4 *)*puVar4;
  while (puVar7 != puVar4) {
    puVar9 = (undefined4 *)FUN_065b3d10(puVar7);
    puVar9 = (undefined4 *)*puVar9;
    local_c = puVar7;
    piVar10 = (int *)FUN_065b3aa0(&local_c,&local_4);
    piVar10 = (int *)*piVar10;
    *(int *)piVar10[1] = *piVar10;
    *(int *)(*piVar10 + 4) = piVar10[1];
    FUN_065b4210(piVar10 + 2);
    FUN_065b3e30();
    local_10[6] = local_10[6] + -1;
    puVar7 = puVar9;
  }
  free_delete();
  local_10[5] = 0;
  local_10[6] = 0;
  free_delete();
  *(int *)((int)local_8 + 0x10) = *(int *)((int)local_8 + 0x10) + -1;
  *param_1 = param_2;
  return;
}



void __thiscall FUN_065b3aa0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  *(undefined4 *)this = *puVar1;
  *param_1 = puVar1;
  return;
}



void * __thiscall FUN_065b3b20(void *this,undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  piVar5 = (int *)FUN_065b5ece();
  *piVar5 = (int)piVar5;
  piVar5[1] = (int)piVar5;
  *(int **)((int)this + 8) = piVar5;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = *(undefined4 **)(param_2 + 4);
  iVar2 = *piVar5;
  for (puVar3 = (undefined4 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
    piVar5 = *(int **)(iVar2 + 4);
    piVar6 = (int *)FUN_065b5ece();
    *piVar6 = iVar2;
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar6;
    }
    piVar6[1] = (int)piVar5;
    *(int **)(iVar2 + 4) = piVar6;
    piVar5 = piVar6 + 2;
    *(int **)piVar6[1] = piVar6;
    if (piVar5 != (int *)0x0) {
      piVar6[5] = 0;
      piVar6[3] = 0;
      piVar4 = (int *)puVar3[2];
      *piVar5 = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      piVar6[4] = puVar3[4];
      FUN_065b3c30(piVar5,(char *)puVar3[3]);
      FUN_065b3be0(piVar5,(char *)puVar3[5]);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  }
  return this;
}



void __thiscall FUN_065b3be0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  free_delete();
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != (char *)0x0) {
    iVar3 = -1;
    pcVar2 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_065b5ece();
    *(char **)((int)this + 0xc) = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



void __thiscall FUN_065b3c30(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  free_delete();
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 != (char *)0x0) {
    iVar3 = -1;
    pcVar2 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_065b5ece();
    *(char **)((int)this + 4) = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



void __fastcall FUN_065b3c80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_065b2490(piVar3 + 2);
    free_delete();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  free_delete();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void FUN_065b3ce0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_065b5ece();
  if (param_1 == (int *)0x0) {
    param_1 = piVar1;
  }
  *piVar1 = (int)param_1;
  if (param_2 != 0) {
    piVar1[1] = param_2;
    return;
  }
  piVar1[1] = (int)piVar1;
  return;
}



undefined4 __cdecl FUN_065b3d10(undefined4 param_1)

{
  return param_1;
}



void __thiscall FUN_065b3d20(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_4;
  
  if (param_1 != *(int **)((int)this + 8)) {
    do {
      FUN_065b3d20(this,(int *)param_1[2]);
      piVar1 = (int *)param_1[5];
      piVar2 = (int *)*param_1;
      piVar4 = (int *)*piVar1;
      while (piVar4 != piVar1) {
        puVar5 = (undefined4 *)FUN_065b3d10(piVar4);
        piVar3 = (int *)*puVar5;
        FUN_065b3dc0(param_1 + 4,&local_4,piVar4);
        piVar4 = piVar3;
      }
      free_delete();
      param_1[5] = 0;
      param_1[6] = 0;
      free_delete();
      param_1 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 8));
  }
  return;
}



void __thiscall FUN_065b3dc0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_2[2] = 0;
  }
  param_2[4] = 0;
  free_delete();
  param_2[3] = 0;
  free_delete();
  param_2[5] = 0;
  free_delete();
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  *param_1 = iVar1;
  return;
}



void FUN_065b3e30(void)

{
  free_delete();
  return;
}



void __fastcall FUN_065b3e40(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(*param_1 + 8);
  if (*(char *)((int)piVar2 + 0x1d) != '\0') {
    iVar4 = *(int *)(*param_1 + 4);
    if (*param_1 == *(int *)(iVar4 + 8)) {
      do {
        *param_1 = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*param_1 == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar4) {
      *param_1 = iVar4;
    }
    return;
  }
  cVar1 = *(char *)(*piVar2 + 0x1d);
  piVar3 = (int *)*piVar2;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x1d);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  *param_1 = (int)piVar2;
  return;
}



void __thiscall FUN_065b3e90(void *this,undefined4 *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)FUN_065b5ece();
  piVar3[1] = (int)param_3;
  *(undefined1 *)(piVar3 + 7) = 0;
  *(undefined1 *)((int)piVar3 + 0x1d) = 0;
  *piVar3 = *(int *)((int)this + 8);
  piVar3[2] = *(int *)((int)this + 8);
  FUN_065b4260(piVar3 + 3,param_4);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  if (((param_3 == *(int **)((int)this + 4)) || (param_2 != *(int *)((int)this + 8))) ||
     (*param_4 < (uint)param_3[3])) {
    *param_3 = (int)piVar3;
    piVar4 = *(int **)((int)this + 4);
    if (param_3 == piVar4) {
      piVar4[1] = (int)piVar3;
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
    else if (param_3 == (int *)*piVar4) {
      *piVar4 = (int)piVar3;
    }
  }
  else {
    param_3[2] = (int)piVar3;
    if (param_3 == *(int **)(*(int *)((int)this + 4) + 8)) {
      *(int **)(*(int *)((int)this + 4) + 8) = piVar3;
    }
  }
  piVar4 = piVar3;
  if (piVar3 != *(int **)(*(int *)((int)this + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if ((char)piVar5[7] != '\0') break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar1 = ((undefined4 *)piVar5[1])[2];
        if (*(char *)(iVar1 + 0x1c) == '\0') {
          *(undefined1 *)(piVar5 + 7) = 1;
          *(undefined1 *)(iVar1 + 0x1c) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x1c) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != *(int *)((int)this + 8)) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x1c) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x1c) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != *(int *)((int)this + 8)) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
            *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar2 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_065b40b3:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if ((char)piVar6[7] != '\0') {
          if (piVar4 == (int *)*piVar5) {
            iVar1 = *piVar5;
            *piVar5 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != *(int *)((int)this + 8)) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar5;
            }
            *(int *)(iVar1 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
              }
              else {
                *piVar4 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar5;
            piVar5[1] = iVar1;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x1c) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x1c) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != *(int *)((int)this + 8)) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)((int)this + 4) + 4)) {
            *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_065b40b3;
        }
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(piVar6 + 7) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x1c) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)((int)this + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x1c) = 1;
  *param_1 = piVar3;
  return;
}



void FUN_065b40e0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_065b5ece();
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined1 *)(iVar1 + 0x1c) = param_2;
  *(undefined1 *)(iVar1 + 0x1d) = 0;
  return;
}



void __fastcall FUN_065b4100(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (((char)piVar4[7] == '\0') && (*(int **)(piVar4[1] + 4) == piVar4)) {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) != '\0') {
    piVar4 = (int *)piVar4[1];
    if (*param_1 == *piVar4) {
      do {
        *param_1 = (int)piVar4;
        piVar4 = (int *)piVar4[1];
      } while (*param_1 == *piVar4);
    }
    *param_1 = (int)piVar4;
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
  iVar3 = *(int *)(iVar2 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
    iVar2 = iVar3;
    iVar3 = *(int *)(iVar3 + 8);
  }
  *param_1 = iVar2;
  return;
}



void __cdecl FUN_065b4160(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 != (int *)0x0) {
    param_1[3] = 0;
    param_1[1] = 0;
    piVar2 = (int *)*param_2;
    *param_1 = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    param_1[2] = param_2[2];
    pcVar5 = (char *)param_2[1];
    free_delete();
    param_1[1] = 0;
    if (pcVar5 != (char *)0x0) {
      iVar4 = -1;
      pcVar3 = pcVar5;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_065b5ece();
      param_1[1] = (int)pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    pcVar5 = (char *)param_2[3];
    free_delete();
    param_1[3] = 0;
    if (pcVar5 != (char *)0x0) {
      iVar4 = -1;
      pcVar3 = pcVar5;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = (char *)FUN_065b5ece();
      param_1[3] = (int)pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}



void __cdecl FUN_065b4210(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  free_delete();
  param_1[1] = 0;
  free_delete();
  param_1[3] = 0;
  return;
}



void __cdecl FUN_065b4260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    piVar5 = (int *)FUN_065b5ece();
    *piVar5 = (int)piVar5;
    piVar5[1] = (int)piVar5;
    param_1[2] = piVar5;
    param_1[3] = 0;
    puVar1 = (undefined4 *)param_2[2];
    iVar2 = *piVar5;
    for (puVar3 = (undefined4 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
      piVar5 = *(int **)(iVar2 + 4);
      piVar6 = (int *)FUN_065b5ece();
      *piVar6 = iVar2;
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar6;
      }
      piVar6[1] = (int)piVar5;
      *(int **)(iVar2 + 4) = piVar6;
      piVar5 = piVar6 + 2;
      *(int **)piVar6[1] = piVar6;
      if (piVar5 != (int *)0x0) {
        piVar6[5] = 0;
        piVar6[3] = 0;
        piVar4 = (int *)puVar3[2];
        *piVar5 = (int)piVar4;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        piVar6[4] = puVar3[4];
        FUN_065b3c30(piVar5,(char *)puVar3[3]);
        FUN_065b3be0(piVar5,(char *)puVar3[5]);
      }
      param_1[3] = param_1[3] + 1;
    }
  }
  return;
}



void * __thiscall FUN_065b4320(void *this,byte param_1)

{
  int *piVar1;
  
                    // WARNING: Load size is inaccurate
  piVar1 = *this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  free_delete();
  *(undefined4 *)((int)this + 4) = 0;
  free_delete();
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    free_delete();
  }
  return this;
}



uint __cdecl _GetCRC32_DACOM_CRC__YAKPBD_Z(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = uVar3 >> 8 ^
            *(uint *)(((uint)*(byte *)(cVar2 + 0x65b8930) ^ uVar3 & 0xff) * 4 + 0x65b8530);
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return ~uVar3;
}



undefined4 __cdecl _GetCRC32_DACOM_CRC__YAKPBD0_Z(int param_1,int param_2)

{
  if (param_1 != param_2) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return 0;
}



uint __cdecl _GetContinuedCRC32_DACOM_CRC__YAKKPBD_Z(uint param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  if (param_2 != (char *)0x0) {
    uVar3 = ~param_1;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      uVar3 = uVar3 >> 8 ^
              *(uint *)(((uint)*(byte *)(cVar2 + 0x65b8930) ^ uVar3 & 0xff) * 4 + 0x65b8530);
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
    param_1 = ~uVar3;
  }
  return param_1;
}



void __cdecl _GetContinuedCRC32_DACOM_CRC__YAKKD_Z(uint param_1,char param_2)

{
  FUN_065b6190(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _CompareStringsI_DACOM_CRC__YAHPBD0_Z(void)

{
                    // WARNING: Could not recover jumptable at 0x065b43c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b7030)();
  return;
}



undefined1 LogStream_NoOp(void)

{
  return 0;
}



void _FlushToDisk_LogStream__YAXXZ(void)

{
  return;
}



int __fastcall FUN_065b43f0(int param_1)

{
  FUN_065b13e0((undefined1 *)(param_1 + 8));
  return param_1;
}



undefined4 FUN_065b45c0(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    puVar2 = (undefined4 *)*puVar1;
    while( true ) {
      if (puVar2 == puVar1) {
        return 1;
      }
      iVar3 = (**(code **)*param_2)
                        (param_2,-(uint)(param_1 != 4) & param_1,*(undefined4 *)puVar2[2],0,param_3)
      ;
      if (iVar3 == 0) break;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  return 0;
}



undefined4 FUN_065b4620(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((param_2 != (undefined4 *)0x0) && (param_3 != 0)) &&
     (iVar3 = FUN_065b1560(param_3), iVar3 != 0)) {
    puVar1 = *(undefined4 **)(iVar3 + 8);
    puVar2 = (undefined4 *)*puVar1;
    while( true ) {
      if (puVar2 == puVar1) {
        return 1;
      }
      iVar3 = (**(code **)*param_2)
                        (param_2,-(uint)(param_1 != 4) & param_1,*(undefined4 *)puVar2[2],
                         ((undefined4 *)puVar2[2])[1],param_4);
      if (iVar3 == 0) break;
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  return 0;
}



undefined4 * FUN_065b46a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_065b5ece();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    puVar1[2] = 0x65b8064;
    *puVar1 = 0x65b70f8;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_065b46d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_065b5ece();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    puVar1[2] = 0x65b8074;
    *puVar1 = 0x65b7108;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * __cdecl FUN_065b4b60(int param_1,uint *param_2)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_2;
  iVar5 = 0;
  *param_2 = 1;
  iVar4 = _DAT_065b8b78;
  if (param_1 == 0) {
    pcVar2 = (char *)0x0;
  }
  else {
    if (9 < _DAT_065b8b78) {
      return (char *)0x0;
    }
    iVar5 = _DAT_065b8b78 + 0x14;
    _DAT_065b8b78 = _DAT_065b8b78 + 1;
    pcVar2 = (char *)FUN_065b5340(iVar5);
    iVar5 = iVar4;
  }
  pcVar3 = (char *)FUN_065b4c80((uint *)&param_2);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  if (pcVar2 != (char *)0x0) {
    FUN_065b5400(pcVar2,(int)pcVar3);
    pcVar3 = pcVar2;
  }
  while( true ) {
    if (((uint)param_2 & 1) == 0) {
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    *puVar1 = *puVar1 | (uint)param_2 & 4;
    if ((*_DAT_065b8b80 != '|') && (*_DAT_065b8b80 != '\n')) break;
    _DAT_065b8b80 = _DAT_065b8b80 + 1;
    iVar4 = FUN_065b4c80((uint *)&param_2);
    if (iVar4 == 0) {
      return (char *)0x0;
    }
    FUN_065b5400(pcVar3,iVar4);
  }
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 0x1e;
  }
  iVar5 = FUN_065b5340(iVar5);
  FUN_065b5400(pcVar3,iVar5);
  for (pcVar2 = pcVar3; pcVar2 != (char *)0x0; pcVar2 = FUN_065b5a00(pcVar2)) {
    FUN_065b5460(pcVar2,iVar5);
  }
  if (param_1 != 0) {
    if (*_DAT_065b8b80 != ')') {
      _DAT_065b8b80 = _DAT_065b8b80 + 1;
      return (char *)0x0;
    }
    _DAT_065b8b80 = _DAT_065b8b80 + 1;
    return pcVar3;
  }
  if (*_DAT_065b8b80 != '\0') {
    return (char *)0x0;
  }
  return pcVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_065b4c80(uint *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  puVar1 = param_1;
  *param_1 = 0;
  uVar3 = FUN_065b5340(6);
  cVar2 = *_DAT_065b8b80;
  pcVar6 = (char *)0x0;
  if (cVar2 != '\0') {
    do {
      pcVar4 = pcVar6;
      if (((cVar2 == ')') || (cVar2 == '\n')) || (cVar2 == '|')) break;
      pcVar4 = FUN_065b4d20((uint *)&param_1);
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      uVar5 = *puVar1 | (uint)param_1 & 1;
      *puVar1 = uVar5;
      if (pcVar6 == (char *)0x0) {
        *puVar1 = (uint)param_1 & 4 | uVar5;
      }
      else {
        FUN_065b5400(pcVar6,(int)pcVar4);
      }
      cVar2 = *_DAT_065b8b80;
      pcVar6 = pcVar4;
    } while (cVar2 != '\0');
    if (pcVar4 != (char *)0x0) {
      return uVar3;
    }
  }
  FUN_065b5340(9);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * __cdecl FUN_065b4d20(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_4;
  
  pcVar2 = (char *)FUN_065b4e90(&local_4);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *_DAT_065b8b80;
    if (((cVar1 != '*') && (cVar1 != '+')) && (cVar1 != '?')) {
      *param_1 = local_4;
      return pcVar2;
    }
    if (((local_4 & 1) != 0) || (cVar1 == '?')) {
      *param_1 = (-(uint)(cVar1 != '+') & 3) + 1;
      if (cVar1 == '*') {
        if ((local_4 & 2) == 0) {
          FUN_065b53b0(6,pcVar2);
          iVar3 = FUN_065b5340(7);
          FUN_065b5460(pcVar2,iVar3);
          FUN_065b5460(pcVar2,(int)pcVar2);
          iVar3 = FUN_065b5340(6);
          FUN_065b5400(pcVar2,iVar3);
          iVar3 = FUN_065b5340(9);
          FUN_065b5400(pcVar2,iVar3);
        }
        else {
          FUN_065b53b0(10,pcVar2);
        }
      }
      else if (cVar1 == '+') {
        if ((local_4 & 2) == 0) {
          pcVar4 = (char *)FUN_065b5340(6);
          FUN_065b5400(pcVar2,(int)pcVar4);
          pcVar6 = pcVar2;
          pcVar5 = (char *)FUN_065b5340(7);
          FUN_065b5400(pcVar5,(int)pcVar6);
          iVar3 = FUN_065b5340(6);
          FUN_065b5400(pcVar4,iVar3);
          iVar3 = FUN_065b5340(9);
          FUN_065b5400(pcVar2,iVar3);
        }
        else {
          FUN_065b53b0(0xb,pcVar2);
        }
      }
      else if (cVar1 == '?') {
        FUN_065b53b0(6,pcVar2);
        iVar3 = FUN_065b5340(6);
        FUN_065b5400(pcVar2,iVar3);
        iVar3 = FUN_065b5340(9);
        FUN_065b5400(pcVar2,iVar3);
        FUN_065b5460(pcVar2,iVar3);
      }
      _DAT_065b8b80 = _DAT_065b8b80 + 1;
      cVar1 = *_DAT_065b8b80;
      if (((cVar1 != '*') && (cVar1 != '+')) && (cVar1 != '?')) {
        return pcVar2;
      }
    }
  }
  return (char *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_065b4e90(uint *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  
  puVar1 = param_1;
  *param_1 = 0;
  pbVar3 = _DAT_065b8b80 + 1;
  switch(*_DAT_065b8b80) {
  case 0:
  case 10:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x3f:
  case 0x7c:
    break;
  default:
switchD_065b4ebe_caseD_1:
    _DAT_065b8b80 = pbVar3 + -1;
    iVar6 = FUN_065b5340(8);
    pbVar3 = _DAT_065b8b80;
    _DAT_065b8b80 = (byte *)0x0;
LAB_065b50fe:
    do {
      pbVar9 = _DAT_065b8b80;
      bVar10 = *pbVar3;
      _DAT_065b8b80 = pbVar3 + 1;
      switch(*_DAT_065b8b80) {
      default:
        FUN_065b5380(bVar10);
        pbVar3 = _DAT_065b8b80;
        break;
      case 0x2a:
      case 0x2b:
      case 0x3f:
        pbVar2 = pbVar9;
        if (pbVar9 != (byte *)0x0) goto LAB_065b517b;
      case 0:
      case 10:
      case 0x24:
      case 0x28:
      case 0x29:
      case 0x2e:
      case 0x5b:
      case 0x5e:
      case 0x7c:
        FUN_065b5380(bVar10);
        pbVar2 = _DAT_065b8b80;
LAB_065b517b:
        _DAT_065b8b80 = pbVar2;
        FUN_065b5380(0);
        uVar4 = *puVar1;
        *puVar1 = uVar4 | 1;
        if (pbVar9 == (byte *)0x0) {
          *puVar1 = uVar4 | 3;
        }
        return iVar6;
      case 0x5c:
        goto switchD_065b5116_caseD_5c;
      }
    } while( true );
  case 0x24:
    _DAT_065b8b80 = pbVar3;
    iVar6 = FUN_065b5340(2);
    return iVar6;
  case 0x28:
    _DAT_065b8b80 = pbVar3;
    pcVar5 = FUN_065b4b60(1,(uint *)&param_1);
    pbVar3 = _DAT_065b8b80;
    if (pcVar5 != (char *)0x0) {
      *puVar1 = *puVar1 | (uint)param_1 & 5;
      return (int)pcVar5;
    }
    break;
  case 0x2e:
    _DAT_065b8b80 = pbVar3;
    iVar6 = FUN_065b5340(3);
    *puVar1 = *puVar1 | 3;
    return iVar6;
  case 0x5b:
    if (*pbVar3 == 0x5e) {
      _DAT_065b8b80 = pbVar3;
      iVar6 = FUN_065b5340(5);
      _DAT_065b8b80 = _DAT_065b8b80 + 1;
    }
    else {
      _DAT_065b8b80 = pbVar3;
      iVar6 = FUN_065b5340(4);
    }
    bVar10 = *_DAT_065b8b80;
    if ((bVar10 == 0x5d) || (bVar10 == 0x2d)) {
      _DAT_065b8b80 = _DAT_065b8b80 + 1;
      FUN_065b5380(bVar10);
    }
    bVar10 = *_DAT_065b8b80;
    while( true ) {
      if ((bVar10 == 0) || (bVar10 == 0x5d)) {
        FUN_065b5380(0);
        if (*_DAT_065b8b80 == 0x5d) {
          _DAT_065b8b80 = _DAT_065b8b80 + 1;
          *puVar1 = *puVar1 | 3;
          return iVar6;
        }
        return 0;
      }
      pbVar3 = _DAT_065b8b80 + 1;
      if (bVar10 == 0x2d) break;
      if (bVar10 != 0x5c) goto LAB_065b5029;
      _DAT_065b8b80 = _DAT_065b8b80 + 2;
      pbVar9 = _DAT_065b8b80;
      switch(*pbVar3) {
      case 0x2d:
        goto switchD_065b4fd3_caseD_2d;
      default:
        goto switchD_065b4fd3_caseD_2e;
      case 0x5c:
        bVar10 = 0x5c;
        pbVar3 = _DAT_065b8b80;
        break;
      case 100:
        iVar8 = 0x30;
        do {
          FUN_065b5380((char)iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x3a);
        goto switchD_065b4fd3_caseD_2e;
      case 0x6e:
        bVar10 = 10;
        pbVar3 = _DAT_065b8b80;
        break;
      case 0x72:
        bVar10 = 0xd;
        pbVar3 = _DAT_065b8b80;
        break;
      case 0x73:
        FUN_065b5380(0x20);
        FUN_065b5380(9);
        FUN_065b5380(10);
        FUN_065b5380(0xd);
        goto switchD_065b4fd3_caseD_2e;
      case 0x74:
        bVar10 = 9;
        pbVar3 = _DAT_065b8b80;
      }
LAB_065b5029:
      _DAT_065b8b80 = pbVar3;
      FUN_065b5380(bVar10);
switchD_065b4fd3_caseD_2e:
      bVar10 = *_DAT_065b8b80;
    }
    bVar10 = *pbVar3;
    pbVar9 = pbVar3;
    if ((bVar10 == 0x5d) || (bVar10 == 0)) {
switchD_065b4fd3_caseD_2d:
      _DAT_065b8b80 = pbVar9;
      bVar10 = 0x2d;
      pbVar3 = _DAT_065b8b80;
      goto LAB_065b5029;
    }
    uVar4 = (uint)bVar10;
    uVar7 = _DAT_065b8b80[-1] + 1;
    if (uVar7 <= uVar4 + 1) {
      _DAT_065b8b80 = pbVar3;
      if (uVar7 <= uVar4) {
        do {
          FUN_065b5380((char)uVar7);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 <= (int)uVar4);
      }
      _DAT_065b8b80 = _DAT_065b8b80 + 1;
      goto switchD_065b4fd3_caseD_2e;
    }
    break;
  case 0x5c:
    bVar10 = *pbVar3;
    pbVar3 = _DAT_065b8b80 + 2;
    if (bVar10 != 0) {
      _DAT_065b8b80 = pbVar3;
      if (bVar10 == 0x3c) {
        iVar6 = FUN_065b5340(0xc);
        return iVar6;
      }
      if (bVar10 == 0x3e) {
        iVar6 = FUN_065b5340(0xd);
        return iVar6;
      }
      goto switchD_065b4ebe_caseD_1;
    }
    break;
  case 0x5e:
    _DAT_065b8b80 = pbVar3;
    iVar6 = FUN_065b5340(1);
    return iVar6;
  }
  _DAT_065b8b80 = pbVar3;
  return 0;
switchD_065b5116_caseD_5c:
  FUN_065b5380(bVar10);
  bVar10 = _DAT_065b8b80[1];
  pbVar3 = _DAT_065b8b80 + 1;
  pbVar2 = _DAT_065b8b80;
  if (((bVar10 == 0) || (bVar10 == 0x3c)) || (bVar10 == 0x3e)) goto LAB_065b517b;
  goto LAB_065b50fe;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 * FUN_065b5340(undefined1 param_1)

{
  undefined1 *puVar1;
  
  if (_DAT_065b8b88 == (undefined1 *)0x65b8b84) {
    _DAT_065b8b8c = _DAT_065b8b8c + 3;
    return (undefined1 *)0x65b8b84;
  }
  *_DAT_065b8b88 = param_1;
  puVar1 = _DAT_065b8b88;
  _DAT_065b8b88[1] = 0;
  _DAT_065b8b88[2] = 0;
  _DAT_065b8b88 = _DAT_065b8b88 + 3;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_065b5380(undefined1 param_1)

{
  if (_DAT_065b8b88 != (undefined1 *)0x65b8b84) {
    *_DAT_065b8b88 = param_1;
    _DAT_065b8b88 = _DAT_065b8b88 + 1;
    return;
  }
  _DAT_065b8b8c = _DAT_065b8b8c + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_065b53b0(undefined1 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (_DAT_065b8b88 == (undefined1 *)0x65b8b84) {
    _DAT_065b8b8c = _DAT_065b8b8c + 3;
    return;
  }
  puVar4 = _DAT_065b8b88 + 3;
  bVar2 = param_2 < _DAT_065b8b88;
  puVar3 = _DAT_065b8b88;
  _DAT_065b8b88 = puVar4;
  if (bVar2) {
    do {
      puVar1 = puVar3 + -1;
      puVar3 = puVar3 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar1;
    } while (param_2 < puVar3);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void __cdecl FUN_065b5400(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x65b8b84) {
    pcVar1 = FUN_065b5a00(param_1);
    while (pcVar1 != (char *)0x0) {
      pcVar2 = FUN_065b5a00(pcVar1);
      param_1 = pcVar1;
      pcVar1 = pcVar2;
    }
    if (*param_1 == '\a') {
      param_1[2] = (char)((int)param_1 - param_2);
      param_1[1] = (char)((uint)((int)param_1 - param_2) >> 8);
      return;
    }
    param_1[2] = (char)(param_2 - (int)param_1);
    param_1[1] = (char)((uint)(param_2 - (int)param_1) >> 8);
  }
  return;
}



void __cdecl FUN_065b5460(char *param_1,int param_2)

{
  if (((param_1 != (char *)0x0) && (param_1 != (char *)0x65b8b84)) && (*param_1 == '\x06')) {
    FUN_065b5400(param_1 + 3,param_2);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_065b5490(undefined4 *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar2 = _DAT_065b705c;
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (char *)0x0)) &&
     (*(char *)(param_1 + 0x17) == -100)) {
    if ((char *)param_1[0x15] == (char *)0x0) {
LAB_065b54fc:
      _DAT_065b8b98 = param_2;
      if (*(char *)((int)param_1 + 0x51) != '\0') {
        uVar5 = FUN_065b5580(param_1,param_2);
        return uVar5;
      }
      if (*(char *)(param_1 + 0x14) == '\0') {
        while (iVar3 = FUN_065b5580(param_1,param_2), iVar3 == 0) {
          cVar1 = *param_2;
          param_2 = param_2 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
        }
      }
      else {
        iVar3 = (*pcVar2)(param_2,(int)*(char *)(param_1 + 0x14));
        if (iVar3 == 0) {
          return 0;
        }
        while (iVar4 = FUN_065b5580(param_1,iVar3), iVar4 == 0) {
          iVar3 = (*pcVar2)(iVar3 + 1,(int)*(char *)(param_1 + 0x14));
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
    for (iVar3 = (*_DAT_065b705c)(param_2,(int)*(char *)param_1[0x15]); iVar3 != 0;
        iVar3 = (*pcVar2)(iVar3 + 1,(int)*(char *)param_1[0x15])) {
      iVar4 = (*_DAT_065b7064)(iVar3,param_1[0x15],param_1[0x16]);
      if (iVar4 == 0) {
        if (iVar3 == 0) {
          return 0;
        }
        goto LAB_065b54fc;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_065b5580(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  _DAT_065b8b7c = param_2;
  puVar1 = param_1 + 10;
  _DAT_065b8b90 = param_1;
  iVar4 = 10;
  puVar2 = param_1;
  puVar3 = puVar1;
  _DAT_065b8b94 = puVar1;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_065b55f0((char *)((int)param_1 + 0x5d));
  if (iVar4 != 0) {
    *param_1 = param_2;
    *puVar1 = _DAT_065b8b7c;
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_065b55f0(char *param_1)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  
  pcVar2 = _DAT_065b705c;
  if (param_1 == (char *)0x0) {
switchD_065b5629_caseD_e:
    return 0;
  }
  do {
    pcVar4 = FUN_065b5a00(param_1);
    pcVar10 = _DAT_065b8b7c;
    pcVar3 = _DAT_065b707c;
    switch(*param_1) {
    case '\0':
      goto switchD_065b5629_caseD_0;
    case '\x01':
      if (_DAT_065b8b7c != _DAT_065b8b98) {
        return 0;
      }
      break;
    case '\x02':
      if (*_DAT_065b8b7c != '\0') {
        return 0;
      }
      break;
    case '\x03':
      bVar11 = *_DAT_065b8b7c == '\0';
      goto LAB_065b5756;
    case '\x04':
      if (*_DAT_065b8b7c == '\0') {
        return 0;
      }
      iVar5 = (*pcVar2)(param_1 + 3,(int)*_DAT_065b8b7c);
      bVar11 = iVar5 == 0;
LAB_065b5756:
      if (bVar11) {
        return 0;
      }
      _DAT_065b8b7c = _DAT_065b8b7c + 1;
      break;
    case '\x05':
      if (*_DAT_065b8b7c == '\0') {
        return 0;
      }
      iVar5 = (*pcVar2)(param_1 + 3,(int)*_DAT_065b8b7c);
      if (iVar5 != 0) {
        return 0;
      }
      _DAT_065b8b7c = _DAT_065b8b7c + 1;
      break;
    case '\x06':
      if (*pcVar4 == '\x06') goto LAB_065b5809;
      pcVar4 = param_1 + 3;
      break;
    case '\a':
    case '\t':
      break;
    case '\b':
      if (param_1[3] != *_DAT_065b8b7c) {
        return 0;
      }
      uVar7 = 0xffffffff;
      pcVar10 = param_1 + 3;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar8 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar8 != '\0');
      iVar5 = ~uVar7 - 1;
      if ((1 < iVar5) && (iVar6 = (*_DAT_065b7064)(param_1 + 3,_DAT_065b8b7c,iVar5), iVar6 != 0)) {
        return 0;
      }
      _DAT_065b8b7c = _DAT_065b8b7c + iVar5;
      break;
    case '\n':
    case '\v':
      cVar8 = '\0';
      if (*pcVar4 == '\b') {
        cVar8 = pcVar4[3];
      }
      cVar1 = *param_1;
      iVar5 = FUN_065b5910(param_1 + 3);
      while( true ) {
        if (iVar5 < (int)(uint)(cVar1 != '\n')) {
          return 0;
        }
        if (((cVar8 == '\0') || (*_DAT_065b8b7c == cVar8)) &&
           (iVar6 = FUN_065b55f0(pcVar4), iVar6 != 0)) break;
        iVar5 = iVar5 + -1;
        _DAT_065b8b7c = pcVar10 + iVar5;
      }
      return 1;
    case '\f':
      iVar5 = (*_DAT_065b707c)((int)*_DAT_065b8b7c);
      if ((iVar5 == 0) && (*_DAT_065b8b7c != '_')) {
        return 0;
      }
      if (_DAT_065b8b98 < _DAT_065b8b7c) {
        iVar5 = (*pcVar3)((int)_DAT_065b8b7c[-1]);
        if (iVar5 != 0) {
          return 0;
        }
        cVar8 = _DAT_065b8b7c[-1];
        goto joined_r0x065b56d9;
      }
      break;
    case '\r':
      iVar5 = (*_DAT_065b707c)((int)*_DAT_065b8b7c);
      if (iVar5 != 0) {
        return 0;
      }
      cVar8 = *_DAT_065b8b7c;
joined_r0x065b56d9:
      if (cVar8 == '_') {
        return 0;
      }
      break;
    default:
      goto switchD_065b5629_caseD_e;
    case '\x15':
    case '\x16':
    case '\x17':
    case '\x18':
    case '\x19':
    case '\x1a':
    case '\x1b':
    case '\x1c':
    case '\x1d':
      iVar9 = *param_1 + -0x14;
      iVar6 = FUN_065b55f0(pcVar4);
      iVar5 = _DAT_065b8b90;
      if (iVar6 == 0) {
        return 0;
      }
      goto LAB_065b57d2;
    case '\x1f':
    case ' ':
    case '!':
    case '\"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
      iVar9 = *param_1 + -0x1e;
      iVar6 = FUN_065b55f0(pcVar4);
      iVar5 = _DAT_065b8b94;
      if (iVar6 == 0) {
        return 0;
      }
LAB_065b57d2:
      if (*(int *)(iVar5 + iVar9 * 4) == 0) {
        *(char **)(iVar5 + iVar9 * 4) = pcVar10;
      }
      goto switchD_065b5629_caseD_0;
    }
    param_1 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
  } while( true );
LAB_065b5809:
  while (pcVar10 = _DAT_065b8b7c, iVar5 = FUN_065b55f0(param_1 + 3), iVar5 == 0) {
    _DAT_065b8b7c = pcVar10;
    param_1 = FUN_065b5a00(param_1);
    if (param_1 == (char *)0x0) {
      return 0;
    }
    if (*param_1 != '\x06') {
      return 0;
    }
  }
switchD_065b5629_caseD_0:
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_065b5910(undefined1 *param_1)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  pcVar3 = _DAT_065b705c;
  pcVar8 = param_1 + 3;
  iVar7 = 0;
  pcVar6 = _DAT_065b8b7c;
  switch(*param_1) {
  case 3:
    uVar5 = 0xffffffff;
    pcVar8 = _DAT_065b8b7c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    _DAT_065b8b7c = _DAT_065b8b7c + (~uVar5 - 1);
    return ~uVar5 - 1;
  case 4:
    if (*_DAT_065b8b7c != '\0') {
      while (iVar4 = (*pcVar3)(pcVar8,(int)*pcVar6), iVar4 != 0) {
        pcVar1 = pcVar6 + 1;
        iVar7 = iVar7 + 1;
        pcVar6 = pcVar6 + 1;
        if (*pcVar1 == '\0') {
          _DAT_065b8b7c = pcVar6;
          return iVar7;
        }
      }
    }
    break;
  case 5:
    if (*_DAT_065b8b7c != '\0') {
      while (iVar4 = (*pcVar3)(pcVar8,(int)*pcVar6), iVar4 == 0) {
        pcVar1 = pcVar6 + 1;
        iVar7 = iVar7 + 1;
        pcVar6 = pcVar6 + 1;
        if (*pcVar1 == '\0') {
          _DAT_065b8b7c = pcVar6;
          return iVar7;
        }
      }
    }
    break;
  default:
    iVar7 = 0;
    break;
  case 8:
    if (*pcVar8 == *_DAT_065b8b7c) {
      do {
        pcVar6 = _DAT_065b8b7c + 1;
        iVar7 = iVar7 + 1;
        _DAT_065b8b7c = _DAT_065b8b7c + 1;
      } while (*pcVar8 == *pcVar6);
      return iVar7;
    }
  }
  _DAT_065b8b7c = pcVar6;
  return iVar7;
}



char * __cdecl FUN_065b5a00(char *param_1)

{
  int iVar1;
  
  if (param_1 == (char *)0x65b8b84) {
    return (char *)0x0;
  }
  iVar1 = (uint)(byte)param_1[1] * 0x100 + (uint)(byte)param_1[2];
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  if (*param_1 == '\a') {
    return param_1 + -iVar1;
  }
  return param_1 + iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_065b5a50(undefined4 *param_1)

{
  *param_1 = 0x65b718c;
  if (param_1[2] != 0) {
    (*_DAT_065b7084)(param_1[2]);
  }
  FUN_065b5aa0((int)param_1);
  return;
}



void __fastcall FUN_065b5a80(int param_1)

{
  undefined4 uVar1;
  
  FUN_065b5aa0(param_1);
  uVar1 = FUN_065b5ece();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



void __fastcall FUN_065b5aa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    free_delete();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void FUN_065b5c40(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_065b5ece();
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 1;
    piVar1[2] = 0x65b83fc;
    *piVar1 = 0x65b71ac;
    piVar2 = (int *)DACOM_Acquire();
    (**(code **)(*piVar2 + 0x10))(piVar2,piVar1,0x65b83fc,0x40000000);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



uint __cdecl stricmp(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  
  do {
    bVar2 = *(byte *)(*param_1 + 0x65b8428);
    bVar3 = bVar2 < *(byte *)(*param_2 + 0x65b8428);
    if (bVar2 != *(byte *)(*param_2 + 0x65b8428)) {
LAB_065b5ea5:
      return CONCAT31((int3)(-(uint)bVar3 >> 8),1);
    }
    if (bVar2 == 0) break;
    pbVar1 = param_2 + 1;
    bVar2 = *(byte *)(param_1[1] + 0x65b8428);
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    bVar3 = bVar2 < *(byte *)(*pbVar1 + 0x65b8428);
    if (bVar2 != *(byte *)(*pbVar1 + 0x65b8428)) goto LAB_065b5ea5;
  } while (bVar2 != 0);
  return (uint)bVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void malloc_new(void)

{
                    // WARNING: Could not recover jumptable at 0x065b5eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b709c)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetFileVersionInfoA(void)

{
                    // WARNING: Could not recover jumptable at 0x065b5eb6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b70a0)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetFileVersionInfoSizeA(void)

{
                    // WARNING: Could not recover jumptable at 0x065b5ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b70a4)();
  return;
}



void free_delete(void)

{
  FUN_065b5f54();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_065b5ece(void)

{
                    // WARNING: Could not recover jumptable at 0x065b5ece. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b7038)();
  return;
}



// WARNING: Unable to track spacebase fully for stack

void FUN_065b5ee0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  if (0xfff < in_EAX) {
    do {
      puVar1 = puVar1 + -0x1000;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_065b5f0f(undefined4 param_1)

{
  if (_DAT_065b8bac == -1) {
    (*_DAT_065b7088)(param_1);
    return;
  }
  FUN_065b60a2();
  return;
}



int __cdecl FUN_065b5f3b(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_065b5f0f(param_1);
  return (iVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_065b5f54(void)

{
                    // WARNING: Could not recover jumptable at 0x065b5f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b7084)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_065b5f5a(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    if (0 < _DAT_065b8b9c) {
      _DAT_065b8b9c = _DAT_065b8b9c + -1;
      goto LAB_065b5f70;
    }
LAB_065b5f98:
    uVar1 = 0;
  }
  else {
LAB_065b5f70:
    _DAT_065b8ba0 = *_DAT_065b7050;
    if (param_2 == 1) {
      _DAT_065b8bac = (undefined4 *)(*_DAT_065b7060)(0x80);
      if (_DAT_065b8bac == (undefined4 *)0x0) goto LAB_065b5f98;
      *_DAT_065b8bac = 0;
      _DAT_065b8ba8 = _DAT_065b8bac;
      FUN_065b60a8();
      _DAT_065b8b9c = _DAT_065b8b9c + 1;
    }
    else if ((param_2 == 0) &&
            (puVar2 = _DAT_065b8bac, puVar3 = _DAT_065b8ba8, _DAT_065b8bac != (undefined4 *)0x0)) {
      while (puVar3 = puVar3 + -1, puVar2 <= puVar3) {
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)();
          puVar2 = _DAT_065b8bac;
        }
      }
      (*_DAT_065b7084)(puVar2);
      _DAT_065b8bac = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_065b6005(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = _DAT_065b8b9c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_065b604d;
    if ((_DAT_065b8ba4 != (code *)0x0) &&
       (iVar2 = (*_DAT_065b8ba4)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_065b5f5a(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_065b604d:
  iVar2 = FUN_065b31a0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_065b5f5a(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_065b5f5a(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (_DAT_065b8ba4 != (code *)0x0) {
      iVar2 = (*_DAT_065b8ba4)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_065b60a2(void)

{
                    // WARNING: Could not recover jumptable at 0x065b60a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b7078)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_065b60a8(void)

{
                    // WARNING: Could not recover jumptable at 0x065b60a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_065b7034)();
  return;
}



undefined4 __cdecl FUN_065b60b0(int param_1,int param_2)

{
  if (param_1 != param_2) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return 0;
}



uint __cdecl FUN_065b60f0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = uVar3 >> 8 ^
            *(uint *)(((uint)*(byte *)(cVar2 + 0x65b8930) ^ uVar3 & 0xff) * 4 + 0x65b8530);
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return ~uVar3;
}



uint __cdecl FUN_065b6140(uint param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  if (param_2 != (char *)0x0) {
    uVar3 = ~param_1;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      uVar3 = uVar3 >> 8 ^
              *(uint *)(((uint)*(byte *)(cVar2 + 0x65b8930) ^ uVar3 & 0xff) * 4 + 0x65b8530);
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
    param_1 = ~uVar3;
  }
  return param_1;
}



uint __cdecl FUN_065b6190(uint param_1,char param_2)

{
  return ~(*(uint *)(((uint)*(byte *)(param_2 + 0x65b8930) ^ ~param_1 & 0xff) * 4 + 0x65b8530) ^
          ~param_1 >> 8);
}


