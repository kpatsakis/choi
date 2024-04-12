void fun()
{
  char entity_1 = 'K';
  char entity_2[17] = "";
  entity_2 = NULL;
  memset(entity_2, 'Z', 17-1);
  entity_2[17-1]='';
  entity_2[56] = 'W';
}