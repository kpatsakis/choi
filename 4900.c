void fun()
{
  int entity_2 = 24;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 2;
  entity_9[63] = 'T';
}