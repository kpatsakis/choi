void fun()
{
  int entity_6 = 28;
  char entity_4[50] = "";
  entity_4 = NULL;
  char entity_5[84] = "";
  entity_5 = NULL;
  memset(entity_4, 'D', 50-1);
  entity_4[50-1]='';
  memset(entity_5, 'n', 84-1);
  entity_5[84-1]='';
  entity_4[entity_6] = 'i';
}