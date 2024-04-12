void fun()
{
  int entity_3 = 49;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[15] = 'P';
}