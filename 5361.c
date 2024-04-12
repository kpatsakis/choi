void fun()
{
  char entity_4[58] = "";
  entity_4 = NULL;
  memset(entity_4, 'q', 58-1);
  entity_4[58-1]='';
  entity_4[71] = 'S';
}