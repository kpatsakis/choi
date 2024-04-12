void fun()
{
  int entity_5 = 55;
  char* entity_9;
  char entity_4[63] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_1;
  memset(entity_4, 'm', 63-1);
  entity_4[63-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[32-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memcpy(entity_0, entity_4, 63*sizeof(char));
}