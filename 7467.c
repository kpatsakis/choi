void fun()
{
  int entity_4 = 17;
  char entity_2 = 'l';
  char entity_1[98] = "";
  entity_1 = NULL;
  memset(entity_1, 'm', 98-1);
  entity_1[98-1]='';
  entity_4 = 76;
  entity_1[entity_4] = 'z';
}