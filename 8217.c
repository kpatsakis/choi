void fun()
{
  int entity_9 = 52;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'K', entity_9-1);
  entity_7[entity_9-1]='';
  entity_7[3] = 'u';
}