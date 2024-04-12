void fun()
{
  int entity_6 = 40;
  char entity_8[76] = "";
  entity_8 = NULL;
  memset(entity_8, 'm', 76-1);
  entity_8[76-1]='';
  entity_8[entity_6] = 'I';
}