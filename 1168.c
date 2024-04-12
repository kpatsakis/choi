void fun()
{
  char entity_2[61] = "";
  entity_2 = NULL;
  char entity_9[69] = "";
  entity_9 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  memset(entity_2, 't', 61-1);
  entity_2[61-1]='';
  memset(entity_9, 'i', 69-1);
  entity_9[69-1]='';
  memset(entity_3, 'u', 72-1);
  entity_3[72-1]='';
  entity_2[27] = 'p';
}