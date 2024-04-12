void fun()
{
  int entity_9 = 17;
  entity_9 = 92;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'z', entity_9-1);
  entity_1[entity_9-1]='';
  entity_1[71] = 'Z';
}