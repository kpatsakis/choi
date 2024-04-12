void fun()
{
  char* entity_3;
  char entity_0[16] = "";
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'L', 16-1);
  entity_0[16-1]='0';
  entity_0[100] = 'v';
}