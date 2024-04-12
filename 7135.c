void fun()
{
  int entity_4 = 16;
  char* entity_5;
  char entity_9[19] = "";
  entity_9 = NULL;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[22-1]='';
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  memset(entity_1, 'z', entity_4-1);
  entity_1[entity_4-1]='';
  memset(entity_9, 'U', 19-1);
  entity_9[19-1]='';
  memcpy(entity_7, entity_1, entity_4*sizeof(char));
}