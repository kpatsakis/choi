void fun()
{
  int entity_6 = 72;
  char entity_4 = 'l';
  char entity_5[98] = "";
  entity_5 = NULL;
  memset(entity_5, 'b', 98-1);
  entity_5[98-1]='';
  entity_5[entity_6] = 'Y';
}