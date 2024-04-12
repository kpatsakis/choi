void fun()
{
  int entity_5 = 26;
  char entity_3[32] = "";
  char entity_9[69] = "";
  char entity_8[77] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'Y', 69-1);
  entity_9[69-1]='0';
  memset(entity_8, 'A', 77-1);
  entity_8[77-1]='0';
  memset(entity_3, 'P', 32-1);
  entity_3[32-1]='0';
  memcpy(entity_2, entity_8, 77*sizeof(char));
}