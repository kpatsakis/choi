void fun()
{
  char entity_3[3] = "";
  entity_3 = NULL;
  char entity_9 = 'b';
  memset(entity_3, 'y', 3-1);
  entity_3[3-1]='';
  entity_3[26] = 's';
}