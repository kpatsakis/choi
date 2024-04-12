void fun()
{
  int entity_0 = 28;
  char* entity_2;
  char* entity_1;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_4;
  char* entity_9;
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  memset(entity_8, 'M', entity_0-1);
  entity_8[entity_0-1]='';
  entity_9 = (char*)malloc(3*sizeof(char));
  entity_9[3-1]='';
  entity_1 = (char*)malloc(94*sizeof(char));
  entity_1[94-1]='';
  entity_0 = 76;
  memcpy(entity_9, entity_8, entity_0*sizeof(char));
}