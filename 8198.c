void fun()
{
  int entity_4 = 2;
  int entity_6 = 16;
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', 4-1);
  entity_5[4-1]='';
  entity_5[entity_6] = 'M';
}