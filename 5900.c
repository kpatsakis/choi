void fun()
{
  int entity_4 = 83;
  int entity_1 = 7;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_5, 'L', 85-1);
  entity_5[85-1]='';
  entity_5[entity_4] = 'M';
}