void fun()
{
  char entity_1[27] = "";
  entity_1 = NULL;
  memset(entity_1, 'S', 27-1);
  entity_1[27-1]='';
  entity_1[59] = 'S';
}