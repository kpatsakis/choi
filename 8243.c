void fun()
{
  int entity_9 = 83;
  entity_9 = 5;
  char* entity_1;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  memset(entity_5, 'i', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memcpy(entity_3, entity_5, entity_9*sizeof(char));
}