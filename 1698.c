void fun()
{
  int entity_9 = 92;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_5 = 'X';
  memset(entity_3, 'c', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[9] = 'a';
}