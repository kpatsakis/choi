void fun()
{
  int entity_9 = 75;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_2 = 'I';
  memset(entity_6, 'N', entity_9-1);
  entity_6[entity_9-1]='';
  entity_6[31] = 'h';
}