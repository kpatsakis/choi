void fun()
{
  int entity_6 = 53;
  char entity_3 = 'X';
  char entity_4[14] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 14-1);
  entity_4[14-1]='';
  entity_4[entity_6] = 'e';
}