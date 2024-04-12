void fun()
{
  char entity_4[79] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 79-1);
  entity_4[79-1]='';
  entity_4[89] = 'W';
}