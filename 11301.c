void fun()
{
  char* entity_1;
  char entity_0[7] = "";
  memset(entity_0, 'x', 7-1);
  entity_0[7-1]='0';
  entity_1 = (char*)malloc(77*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_0, 7*sizeof(char));
}