void fun()
{
  int entity_1 = 75;
  char entity_8[53] = "";
  entity_8 = NULL;
  char entity_6[27] = "";
  entity_6 = NULL;
  char entity_4[29] = "";
  entity_4 = NULL;
  char entity_5[93] = "";
  entity_5 = NULL;
  memset(entity_6, 'G', 27-1);
  entity_6[27-1]='';
  memset(entity_5, 'X', 93-1);
  entity_5[93-1]='';
  memset(entity_8, 'W', 53-1);
  entity_8[53-1]='';
  memset(entity_4, 'i', 29-1);
  entity_4[29-1]='';
  entity_4[entity_1] = 'f';
}