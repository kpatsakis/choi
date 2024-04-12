void fun()
{
  char entity_3[7] = "";
  entity_3 = NULL;
  memset(entity_3, 't', 7-1);
  entity_3[7-1]='';
  entity_3[33] = 'G';
}