void fun()
{
  int entity_3 = 16;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 55;
  entity_9[33] = 'M';
}