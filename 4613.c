void fun()
{
  char* entity_9;
  char entity_2[100] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(77*sizeof(char));
  entity_9[77-1]='';
  memset(entity_2, 'Z', 100-1);
  entity_2[100-1]='';
  memcpy(entity_9, entity_2, 100*sizeof(char));
}