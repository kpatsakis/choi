void fun()
{
  char entity_2[49] = "";
  entity_2 = NULL;
  char entity_7[36] = "";
  entity_7 = NULL;
  memset(entity_2, 'a', 49-1);
  entity_2[49-1]='';
  memset(entity_7, 'T', 36-1);
  entity_7[36-1]='';
  entity_2[46] = 'E';
}