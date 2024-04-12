void fun()
{
  int entity_8 = 38;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'r', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 8;
  entity_9[28] = 'c';
}