void fun()
{
  int entity_9 = 76;
  entity_9 = 27;
  char* entity_8;
  char* entity_1;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memset(entity_3, 'Z', entity_9-1);
  entity_3[entity_9-1]='';
  entity_1 = (char*)malloc(51*sizeof(char));
  entity_1[51-1]='';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  memcpy(entity_5, entity_3, entity_9*sizeof(char));
}