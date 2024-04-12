void fun()
{
  int entity_3 = 91;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'V', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 75;
  entity_5[60] = 'P';
}