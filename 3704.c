void fun()
{
  char entity_2[18] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', 18-1);
  entity_2[18-1]='';
  entity_2[19] = 'Z';
}