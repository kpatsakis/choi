void fun()
{
  char entity_2[36] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', 36-1);
  entity_2[36-1]='';
  entity_2[54] = 'S';
}