void fun()
{
  int entity_6 = 19;
  entity_6 = 70;
  char entity_3 = 'X';
  char entity_9[77] = "";
  char* entity_0;
  memset(entity_9, 'M', 77-1);
  entity_9[77-1]='0';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 77*sizeof(char));
}