void fun()
{
  int entity_8 = 44;
  char entity_1[81] = "";
  entity_1 = NULL;
  char entity_6 = 'C';
  memset(entity_1, 'm', 81-1);
  entity_1[81-1]='';
  entity_1[entity_8] = 'X';
}