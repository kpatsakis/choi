void fun()
{
  int entity_1 = 41;
  entity_1 = 67;
  char* entity_0;
  char* entity_2;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_4[15] = "";
  entity_4 = NULL;
  memset(entity_4, 'D', 15-1);
  entity_4[15-1]='';
  memset(entity_9, 'S', entity_1-1);
  entity_9[entity_1-1]='';
  entity_0 = (char*)malloc(52*sizeof(char));
  entity_0[52-1]='';
  entity_2 = (char*)malloc(4*sizeof(char));
  entity_2[4-1]='';
  memcpy(entity_0, entity_9, entity_1*sizeof(char));
}