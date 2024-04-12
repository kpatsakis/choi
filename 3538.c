void fun()
{
  int entity_5 = 59;
  int entity_4 = 31;
  char entity_6[3] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', 3-1);
  entity_6[3-1]='';
  entity_5 = 10;
  entity_6[entity_5] = 'p';
}