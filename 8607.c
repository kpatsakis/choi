void fun()
{
  int entity_7 = 9;
  entity_7 = 28;
  char entity_6[60] = "";
  entity_6 = NULL;
  char entity_4[76] = "";
  entity_4 = NULL;
  memset(entity_6, 'N', 60-1);
  entity_6[60-1]='';
  memset(entity_4, 'g', 76-1);
  entity_4[76-1]='';
  entity_6[entity_7] = 'M';
}