void fun()
{
  int entity_7 = 23;
  entity_7 = 55;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'y', entity_7-1);
  entity_5[entity_7-1]='';
  entity_5[76] = 'j';
}