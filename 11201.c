void fun()
{
  char entity_9 = 'G';
  char entity_0[6] = "";
  char entity_8[13] = "";
  char* entity_3;
  char* entity_1;
  memset(entity_8, 'n', 13-1);
  entity_8[13-1]='0';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[0]='0';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'w', 6-1);
  entity_0[6-1]='0';
  strcpy(entity_3, entity_8);
}