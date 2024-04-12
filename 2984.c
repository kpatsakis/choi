void fun()
{
  int entity_4 = 81;
  entity_4 = 13;
  char* entity_7;
  char* entity_9;
  char entity_1[12] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_1, 'j', 12-1);
  entity_1[12-1]='';
  memcpy(entity_9, entity_1, 12*sizeof(char));
}