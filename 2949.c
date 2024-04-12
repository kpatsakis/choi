void fun()
{
  int entity_1 = 18;
  entity_1 = 49;
  char entity_5[60] = "";
  entity_5 = NULL;
  char entity_2 = 'V';
  memset(entity_5, 'H', 60-1);
  entity_5[60-1]='';
  entity_5[entity_1] = 'F';
}