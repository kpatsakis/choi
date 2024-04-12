void fun()
{
  int entity_4 = 70;
  char entity_0[62] = "";
  entity_0 = NULL;
  char entity_9[33] = "";
  entity_9 = NULL;
  memset(entity_0, 'o', 62-1);
  entity_0[62-1]='';
  memset(entity_9, 'Y', 33-1);
  entity_9[33-1]='';
  entity_9[entity_4] = 'U';
}