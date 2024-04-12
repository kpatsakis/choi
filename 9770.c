void fun()
{
  int entity_7 = 40;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'J', entity_7-1);
  entity_8[entity_7-1]='';
  entity_8[60] = 'H';
}