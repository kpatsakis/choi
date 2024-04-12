void fun()
{
  int entity_5 = 90;
  char entity_6[49] = "";
  entity_6 = NULL;
  char entity_4[49] = "";
  entity_4 = NULL;
  char entity_0[33] = "";
  entity_0 = NULL;
  memset(entity_4, 'u', 49-1);
  entity_4[49-1]='';
  memset(entity_0, 'N', 33-1);
  entity_0[33-1]='';
  memset(entity_6, 'T', 49-1);
  entity_6[49-1]='';
  entity_0[entity_5] = 'Q';
}