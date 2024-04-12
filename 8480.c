void fun()
{
  char entity_4 = 'Z';
  char entity_6[54] = "";
  entity_6 = NULL;
  memset(entity_6, 'Z', 54-1);
  entity_6[54-1]='';
  entity_6[4] = 'h';
}