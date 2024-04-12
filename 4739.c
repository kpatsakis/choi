void fun()
{
  int entity_5 = 94;
  int entity_4 = 75;
  char entity_6[83] = "";
  entity_6 = NULL;
  char entity_8[33] = "";
  entity_8 = NULL;
  memset(entity_6, 'G', 83-1);
  entity_6[83-1]='';
  memset(entity_8, 'G', 33-1);
  entity_8[33-1]='';
  entity_6[entity_5] = 'S';
}