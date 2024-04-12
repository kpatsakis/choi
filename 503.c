void fun()
{
  int entity_8 = 38;
  entity_8 = 6;
  char entity_9[29] = "";
  entity_9 = NULL;
  char entity_1[96] = "";
  entity_1 = NULL;
  memset(entity_1, 'n', 96-1);
  entity_1[96-1]='';
  memset(entity_9, 'N', 29-1);
  entity_9[29-1]='';
  entity_9[entity_8] = 'U';
}