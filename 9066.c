void fun()
{
  char entity_6[8] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 8-1);
  entity_6[8-1]='';
  entity_6[47] = 'e';
}