void fun()
{
  int entity_2 = 57;
  char* entity_5;
  char* entity_1;
  char* entity_9;
  char entity_6[33] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  memset(entity_6, 'U', 33-1);
  entity_6[33-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  memcpy(entity_5, entity_6, 33*sizeof(char));
}