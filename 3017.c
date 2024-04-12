void fun()
{
  int entity_8 = 25;
  int entity_3 = 27;
  char entity_4[76] = "";
  entity_4 = NULL;
  memset(entity_4, 'h', 76-1);
  entity_4[76-1]='';
  entity_4[entity_8] = 'd';
}