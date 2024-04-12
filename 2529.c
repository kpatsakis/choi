void fun()
{
  int entity_8 = 88;
  char* entity_3;
  char* entity_0;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'H', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[9-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  entity_8 = 38;
  memcpy(entity_9, entity_4, entity_8*sizeof(char));
}