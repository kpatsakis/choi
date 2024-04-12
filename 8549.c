void fun()
{
  char entity_6[37] = "";
  entity_6 = NULL;
  char entity_2[12] = "";
  entity_2 = NULL;
  char entity_7[12] = "";
  entity_7 = NULL;
  memset(entity_2, 'P', 12-1);
  entity_2[12-1]='';
  memset(entity_7, 'w', 12-1);
  entity_7[12-1]='';
  memset(entity_6, 'w', 37-1);
  entity_6[37-1]='';
  entity_7[62] = 'W';
}