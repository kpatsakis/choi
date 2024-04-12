void fun()
{
  int entity_8 = 49;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'J', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[21] = 'V';
}