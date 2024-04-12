void fun()
{
  int entity_4 = 16;
  int entity_3 = 53;
  entity_3 = 97;
  char entity_5[4] = "";
  entity_5 = NULL;
  memset(entity_5, 'E', 4-1);
  entity_5[4-1]='';
  entity_5[entity_3] = 'D';
}