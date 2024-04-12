void fun()
{
  int entity_1 = 72;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_6[10] = "";
  entity_6 = NULL;
  memset(entity_9, 'f', entity_1-1);
  entity_9[entity_1-1]='';
  memset(entity_6, 'w', 10-1);
  entity_6[10-1]='';
  entity_9[7] = 'q';
}