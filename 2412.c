void fun()
{
  int entity_5 = 31;
  entity_5 = 27;
  char entity_7[18] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 18-1);
  entity_7[18-1]='';
  entity_7[entity_5] = 'M';
}