void fun()
{
  char entity_2[56] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', 56-1);
  entity_2[56-1]='';
  entity_2[55] = 'A';
}