void fun()
{
  int entity_5 = 15;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_9[61] = "";
  entity_9 = NULL;
  memset(entity_9, 'l', 61-1);
  entity_9[61-1]='';
  memset(entity_6, 'Q', entity_5-1);
  entity_6[entity_5-1]='';
  entity_6[83] = 'R';
}