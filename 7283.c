void fun()
{
  int entity_8 = 26;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', entity_8-1);
  entity_9[entity_8-1]='';
  entity_9[31] = 'g';
}