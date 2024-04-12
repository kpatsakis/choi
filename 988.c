void fun()
{
  int entity_9 = 23;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', entity_9-1);
  entity_3[entity_9-1]='';
  entity_9 = 6;
  entity_3[65] = 'O';
}