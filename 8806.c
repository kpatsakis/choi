void fun()
{
  int entity_1 = 7;
  entity_1 = 93;
  char entity_9[14] = "";
  entity_9 = NULL;
  char entity_8[46] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 46-1);
  entity_8[46-1]='';
  memset(entity_9, 'T', 14-1);
  entity_9[14-1]='';
  entity_8[entity_1] = 'I';
}