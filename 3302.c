void fun()
{
  int entity_4 = 43;
  char entity_5[98] = "";
  entity_5 = NULL;
  memset(entity_5, 'e', 98-1);
  entity_5[98-1]='';
  entity_4 = 79;
  entity_5[entity_4] = 'H';
}