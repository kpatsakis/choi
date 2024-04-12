void fun()
{
  int entity_3 = 41;
  entity_3 = 66;
  char entity_6[44] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 44-1);
  entity_6[44-1]='';
  entity_6[entity_3] = 'h';
}