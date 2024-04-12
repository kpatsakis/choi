void fun()
{
  int entity_8 = 70;
  entity_8 = 96;
  char entity_4[14] = "";
  entity_4 = NULL;
  char entity_9[32] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', 32-1);
  entity_9[32-1]='';
  memset(entity_4, 'm', 14-1);
  entity_4[14-1]='';
  entity_9[entity_8] = 'v';
}