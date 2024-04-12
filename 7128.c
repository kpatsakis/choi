void fun()
{
  int entity_0 = 2;
  char entity_3[60] = "";
  entity_3 = NULL;
  char entity_4[18] = "";
  entity_4 = NULL;
  memset(entity_4, 'R', 18-1);
  entity_4[18-1]='';
  memset(entity_3, 'v', 60-1);
  entity_3[60-1]='';
  entity_0 = 67;
  entity_4[entity_0] = 's';
}