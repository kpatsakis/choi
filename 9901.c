void fun()
{
  char entity_5[18] = "";
  entity_5 = NULL;
  char entity_6[72] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 72-1);
  entity_6[72-1]='';
  memset(entity_5, 'N', 18-1);
  entity_5[18-1]='';
  entity_5[26] = 'l';
}