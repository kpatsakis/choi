void fun()
{
  int entity_3 = 36;
  int entity_2 = 92;
  char entity_4[33] = "";
  entity_4 = NULL;
  char* entity_1;
  char* entity_9;
  char* entity_7;
  memset(entity_4, 'l', 33-1);
  entity_4[33-1]='';
  entity_9 = (char*)malloc(6*sizeof(char));
  entity_9[6-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_1 = (char*)malloc(20*sizeof(char));
  entity_1[20-1]='';
  memcpy(entity_7, entity_4, 33*sizeof(char));
}