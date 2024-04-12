void fun()
{
  char entity_1[13] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 13-1);
  entity_1[13-1]='';
  entity_1[6] = 'e';
}