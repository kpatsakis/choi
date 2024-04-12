void fun()
{
  int entity_1 = 63;
  char entity_9[11] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_9, 'x', 11-1);
  entity_9[11-1]='';
  entity_4 = (char*)malloc(77*sizeof(char));
  entity_4[77-1]='';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  memset(entity_7, 'O', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 73;
  memcpy(entity_4, entity_7, entity_1*sizeof(char));
}