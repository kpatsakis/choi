void fun()
{
  int entity_2 = 82;
  int entity_9 = 62;
  entity_9 = 61;
  char entity_5 = 'J';
  char entity_8[83] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', 83-1);
  entity_8[83-1]='';
  entity_8[entity_9] = 'R';
}