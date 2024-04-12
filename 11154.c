void fun()
{
  char entity_1 = 'T';
  char entity_4 = 'E';
  char* entity_0;
  char entity_8[41] = "";
  memset(entity_8, 'm', 41-1);
  entity_8[41-1]='0';
  entity_0 = (char*)malloc(77*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 41*sizeof(char));
}