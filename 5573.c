void fun()
{
  char entity_2[13] = "";
  entity_2 = NULL;
  char entity_4[17] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 17-1);
  entity_4[17-1]='';
  memset(entity_2, 'M', 13-1);
  entity_2[13-1]='';
  entity_4[14] = 'p';
}