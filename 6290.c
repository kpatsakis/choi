void fun()
{
  int entity_8 = 35;
  int entity_1 = 57;
  entity_8 = 99;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', entity_8-1);
  entity_9[entity_8-1]='';
  entity_9[83] = 'J';
}