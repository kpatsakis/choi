void fun()
{
  int entity_5 = 20;
  char entity_6[10] = "";
  entity_6 = NULL;
  char entity_3 = 'l';
  memset(entity_6, 'E', 10-1);
  entity_6[10-1]='';
  entity_6[entity_5] = 't';
}