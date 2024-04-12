void fun()
{
  char entity_2 = 'j';
  char entity_5[55] = "";
  entity_5 = NULL;
  memset(entity_5, 's', 55-1);
  entity_5[55-1]='';
  entity_5[40] = 'T';
}