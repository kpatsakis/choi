void fun()
{
  char entity_7[90] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 90-1);
  entity_7[90-1]='';
  entity_7[75] = 'W';
}