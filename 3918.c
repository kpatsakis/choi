void fun()
{
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_8 = 'H';
  memset(entity_2, 'm', 87-1);
  entity_2[87-1]='';
  entity_2[15] = 'c';
}