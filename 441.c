void fun()
{
  int entity_9 = 67;
  char entity_4 = 'v';
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[48] = 't';
}