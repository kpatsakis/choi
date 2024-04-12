void fun()
{
  char entity_5[55] = "";
  entity_5 = NULL;
  memset(entity_5, 'u', 55-1);
  entity_5[55-1]='';
  entity_5[33] = 'T';
}