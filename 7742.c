void fun()
{
  int entity_9 = 55;
  int entity_1 = 1;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_0;
  char* entity_8;
  char* entity_3;
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  entity_3 = (char*)malloc(49*sizeof(char));
  entity_3[49-1]='';
  memset(entity_5, 'E', entity_9-1);
  entity_5[entity_9-1]='';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[8-1]='';
  memcpy(entity_3, entity_5, entity_9*sizeof(char));
}