void fun()
{
  char entity_2[13] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', 13-1);
  entity_2[13-1]='';
  entity_2[14] = 'W';
}