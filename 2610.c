void fun()
{
  int entity_9 = 7;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'H', entity_9-1);
  entity_1[entity_9-1]='';
  entity_1[68] = 'K';
}