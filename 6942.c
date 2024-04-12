void fun()
{
  int entity_4 = 97;
  char* entity_1;
  char* entity_8;
  char entity_9[77] = "";
  entity_9 = NULL;
  char entity_5 = 'm';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_9, 'm', 77-1);
  entity_9[77-1]='';
  memcpy(entity_8, entity_9, 77*sizeof(char));
}