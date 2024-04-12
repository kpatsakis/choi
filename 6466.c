void fun()
{
  char entity_1[37] = "";
  entity_1 = NULL;
  char entity_6[67] = "";
  entity_6 = NULL;
  char entity_7[86] = "";
  entity_7 = NULL;
  memset(entity_1, 'Y', 37-1);
  entity_1[37-1]='';
  memset(entity_6, 'S', 67-1);
  entity_6[67-1]='';
  memset(entity_7, 'A', 86-1);
  entity_7[86-1]='';
  entity_1[37] = 'H';
}