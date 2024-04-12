void fun()
{
  char entity_9[38] = "";
  entity_9 = NULL;
  char entity_6[12] = "";
  entity_6 = NULL;
  char entity_5[13] = "";
  entity_5 = NULL;
  memset(entity_9, 'z', 38-1);
  entity_9[38-1]='';
  memset(entity_5, 'W', 13-1);
  entity_5[13-1]='';
  memset(entity_6, 'm', 12-1);
  entity_6[12-1]='';
  entity_6[42] = 'V';
}