void fun()
{
  char entity_2[23] = "";
  entity_2 = NULL;
  char entity_0 = 'a';
  char entity_9[13] = "";
  entity_9 = NULL;
  char entity_7 = 'Y';
  memset(entity_9, 'v', 13-1);
  entity_9[13-1]='';
  memset(entity_2, 'd', 23-1);
  entity_2[23-1]='';
  entity_2[74] = 'E';
}