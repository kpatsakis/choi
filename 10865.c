void fun()
{
  char* entity_1;
  char* entity_9;
  char entity_8[81] = "";
  entity_1 = (char*)malloc(29*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'G', 81-1);
  entity_8[81-1]='0';
  entity_8[14] = 'K';
}