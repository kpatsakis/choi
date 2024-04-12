void fun()
{
  char entity_1[63] = "";
  entity_1 = NULL;
  char entity_9 = 'E';
  memset(entity_1, 'Z', 63-1);
  entity_1[63-1]='';
  entity_1[34] = 'A';
}