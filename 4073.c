void fun()
{
  int entity_1 = 93;
  char* entity_9;
  char entity_2[16] = "";
  entity_2 = NULL;
  memset(entity_2, 'G', 16-1);
  entity_2[16-1]='';
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[77-1]='';
  strcpy(entity_9, entity_2);
}