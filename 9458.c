void fun()
{
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', 20-1);
  entity_4[20-1]='';
  entity_4[43] = 'y';
}