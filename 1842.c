void fun()
{
  int entity_7 = 99;
  char entity_3[70] = "";
  entity_3 = NULL;
  char entity_5[50] = "";
  entity_5 = NULL;
  memset(entity_5, 'W', 50-1);
  entity_5[50-1]='';
  memset(entity_3, 'G', 70-1);
  entity_3[70-1]='';
  entity_3[entity_7] = 'Y';
}