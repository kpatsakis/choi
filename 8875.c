void fun()
{
  int entity_4 = 51;
  char entity_5[98] = "";
  entity_5 = NULL;
  char entity_6[83] = "";
  entity_6 = NULL;
  memset(entity_5, 'S', 98-1);
  entity_5[98-1]='';
  memset(entity_6, 'y', 83-1);
  entity_6[83-1]='';
  entity_5[entity_4] = 'b';
}