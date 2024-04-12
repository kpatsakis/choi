void fun()
{
  char* entity_7;
  char entity_0[33] = "";
  char* entity_5;
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[0]='0';
  entity_5 = (char*)malloc(77*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'k', 33-1);
  entity_0[33-1]='0';
  memcpy(entity_7, entity_0, 33*sizeof(char));
}