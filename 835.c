void fun()
{
  int entity_2 = 18;
  char entity_1[60] = "";
  entity_1 = NULL;
  memset(entity_1, 'r', 60-1);
  entity_1[60-1]='';
  entity_1[97] = 'n';
}