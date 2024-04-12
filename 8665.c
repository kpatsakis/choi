void fun()
{
  int entity_1 = 13;
  entity_1 = 61;
  char* entity_9;
  char* entity_7;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_5, 'b', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[56-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memcpy(entity_7, entity_5, entity_1*sizeof(char));
}