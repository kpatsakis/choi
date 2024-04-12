void fun()
{
  int entity_9 = 91;
  int entity_2 = 71;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 't', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[94] = 'c';
}