void fun()
{
  int entity_9 = 15;
  entity_9 = 15;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'a', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[65] = 'j';
}