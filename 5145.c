void fun()
{
  int entity_3 = 90;
  char entity_4[61] = "";
  entity_4 = NULL;
  char entity_1[64] = "";
  entity_1 = NULL;
  char entity_7 = 'u';
  char entity_5[76] = "";
  entity_5 = NULL;
  memset(entity_1, 'W', 64-1);
  entity_1[64-1]='';
  memset(entity_5, 'l', 76-1);
  entity_5[76-1]='';
  memset(entity_4, 'k', 61-1);
  entity_4[61-1]='';
  entity_1[entity_3] = 'w';
}