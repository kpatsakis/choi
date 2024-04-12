void fun()
{
  int entity_9 = 93;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_1;
  char* entity_3;
  char* entity_0;
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  memset(entity_6, 'h', entity_9-1);
  entity_6[entity_9-1]='';
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  memcpy(entity_1, entity_6, entity_9*sizeof(char));
}