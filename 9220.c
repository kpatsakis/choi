void fun()
{
  int entity_9 = 69;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_1;
  char* entity_7;
  char entity_2 = 'E';
  char* entity_8;
  memset(entity_0, 'D', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  memcpy(entity_1, entity_0, entity_9*sizeof(char));
}