void fun()
{
  int entity_1 = 25;
  char entity_5 = 'd';
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 26;
  entity_9[23] = 'N';
}