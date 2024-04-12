void fun()
{
  int entity_2 = 73;
  int entity_5 = 19;
  entity_5 = 58;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[12] = 'F';
}