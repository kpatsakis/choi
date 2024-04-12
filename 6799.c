void fun()
{
  char entity_2[51] = "";
  entity_2 = NULL;
  char entity_5 = 'A';
  memset(entity_2, 'S', 51-1);
  entity_2[51-1]='';
  entity_2[17] = 'p';
}