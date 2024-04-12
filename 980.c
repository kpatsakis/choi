void fun()
{
  int entity_4 = 41;
  int entity_8 = 20;
  char* entity_6;
  char* entity_1;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  memset(entity_9, 'W', entity_4-1);
  entity_9[entity_4-1]='';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memcpy(entity_1, entity_9, entity_4*sizeof(char));
}