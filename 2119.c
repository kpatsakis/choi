void fun()
{
  int entity_7 = 37;
  entity_7 = 1;
  char entity_5[5] = "";
  entity_5 = NULL;
  memset(entity_5, 'V', 5-1);
  entity_5[5-1]='';
  entity_5[entity_7] = 'q';
}