void fun()
{
  int entity_6 = 18;
  int entity_4 = 62;
  entity_6 = 23;
  char* entity_7;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  memset(entity_1, 'M', entity_6-1);
  entity_1[entity_6-1]='';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memcpy(entity_9, entity_1, entity_6*sizeof(char));
}