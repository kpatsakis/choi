void fun()
{
  char entity_2[65] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 65-1);
  entity_2[65-1]='';
  entity_2[72] = 'S';
}