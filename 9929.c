void fun()
{
  char entity_2[33] = "";
  entity_2 = NULL;
  char entity_6[26] = "";
  entity_6 = NULL;
  memset(entity_2, 'P', 33-1);
  entity_2[33-1]='';
  memset(entity_6, 'Z', 26-1);
  entity_6[26-1]='';
  entity_6[47] = 'I';
}