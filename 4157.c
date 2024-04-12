void fun()
{
  char entity_2[53] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 53-1);
  entity_2[53-1]='';
  entity_2[44] = 'A';
}