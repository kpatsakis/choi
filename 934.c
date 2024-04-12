void fun()
{
  char* entity_9;
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_1 = 'B';
  memset(entity_7, 'd', 77-1);
  entity_7[77-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memcpy(entity_9, entity_7, 77*sizeof(char));
}