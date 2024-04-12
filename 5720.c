void fun()
{
  int entity_2 = 38;
  entity_2 = 50;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char entity_0[33] = "";
  entity_0 = NULL;
  memset(entity_0, 'C', 33-1);
  entity_0[33-1]='';
  memset(entity_9, 'I', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[12] = 'B';
}