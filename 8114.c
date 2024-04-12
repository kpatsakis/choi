void fun()
{
  int entity_9 = 96;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'U', entity_9-1);
  entity_1[entity_9-1]='';
  entity_9 = 42;
  entity_1[14] = 'S';
}