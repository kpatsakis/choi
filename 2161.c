void fun()
{
  int entity_7 = 91;
  int entity_3 = 65;
  char entity_1[67] = "";
  entity_1 = NULL;
  char entity_6[38] = "";
  entity_6 = NULL;
  memset(entity_1, 'O', 67-1);
  entity_1[67-1]='';
  memset(entity_6, 'N', 38-1);
  entity_6[38-1]='';
  entity_1[entity_7] = 'M';
}