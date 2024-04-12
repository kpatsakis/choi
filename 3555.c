void fun()
{
  int entity_5 = 56;
  entity_5 = 79;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[33] = 'F';
}