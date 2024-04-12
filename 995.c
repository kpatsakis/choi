void fun()
{
  int entity_1 = 65;
  char entity_3[44] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 44-1);
  entity_3[44-1]='';
  entity_1 = 71;
  entity_3[entity_1] = 'H';
}