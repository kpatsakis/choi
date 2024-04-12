void fun()
{
  int entity_6 = 34;
  char entity_7[77] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_7, 't', 77-1);
  entity_7[77-1]='';
  memcpy(entity_9, entity_7, 77*sizeof(char));
}