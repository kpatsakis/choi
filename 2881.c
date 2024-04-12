void fun()
{
  int entity_3 = 89;
  char* entity_5;
  char entity_7[77] = "";
  entity_7 = NULL;
  char entity_8 = 'O';
  char entity_1[94] = "";
  entity_1 = NULL;
  char entity_9[28] = "";
  entity_9 = NULL;
  memset(entity_7, 'q', 77-1);
  entity_7[77-1]='';
  memset(entity_9, 'b', 28-1);
  entity_9[28-1]='';
  memset(entity_1, 'n', 94-1);
  entity_1[94-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  entity_3 = 8;
  memcpy(entity_5, entity_7, 77*sizeof(char));
}