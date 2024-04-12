void fun()
{
  int entity_6 = 96;
  int entity_3 = 12;
  char* entity_1;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[6-1]='';
  memset(entity_4, 'n', entity_3-1);
  entity_4[entity_3-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  memcpy(entity_1, entity_4, entity_3*sizeof(char));
}