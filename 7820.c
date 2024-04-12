void fun()
{
  char entity_8[46] = "";
  entity_8 = NULL;
  char entity_4[3] = "";
  entity_4 = NULL;
  char entity_0[64] = "";
  entity_0 = NULL;
  memset(entity_0, 't', 64-1);
  entity_0[64-1]='';
  memset(entity_4, 'i', 3-1);
  entity_4[3-1]='';
  memset(entity_8, 'a', 46-1);
  entity_8[46-1]='';
  entity_8[7] = 'x';
}