void fun()
{
  int entity_6 = 42;
  char entity_5 = 'e';
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 99;
  entity_3[52] = 'Z';
}