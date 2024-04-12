void fun()
{
  char entity_7[41] = "";
  entity_7 = NULL;
  memset(entity_7, 'g', 41-1);
  entity_7[41-1]='';
  entity_7[81] = 'b';
}