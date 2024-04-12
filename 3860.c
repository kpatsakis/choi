void fun()
{
  int entity_5 = 85;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  memset(entity_3, 'Y', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[60] = 'J';
}