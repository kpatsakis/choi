void fun()
{
  char entity_0[22] = "";
  entity_0 = NULL;
  char entity_2[52] = "";
  entity_2 = NULL;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_2, 'o', 52-1);
  entity_2[52-1]='';
  memset(entity_0, 'e', 22-1);
  entity_0[22-1]='';
  memset(entity_9, 'v', 34-1);
  entity_9[34-1]='';
  entity_9[33] = 'e';
}