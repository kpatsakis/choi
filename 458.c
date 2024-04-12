void fun()
{
  char entity_7[44] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', 44-1);
  entity_7[44-1]='';
  entity_7[58] = 's';
}