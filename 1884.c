void fun()
{
  int entity_1 = 0;
  int entity_5 = 21;
  char entity_7[29] = "";
  entity_7 = NULL;
  char entity_6[43] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 43-1);
  entity_6[43-1]='';
  memset(entity_7, 'u', 29-1);
  entity_7[29-1]='';
  entity_5 = 55;
  entity_6[entity_5] = 'f';
}