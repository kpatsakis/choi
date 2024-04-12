void fun()
{
  int entity_9 = 85;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'm', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[74] = 'C';
}