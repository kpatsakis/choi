void fun()
{
  int entity_9 = 56;
  char* entity_1;
  char entity_6[77] = "";
  char* entity_5;
  memset(entity_6, 'x', 77-1);
  entity_6[77-1]='0';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[0]='0';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_6, 77*sizeof(char));
}