void fun()
{
  int entity_8 = 40;
  char* entity_3;
  char entity_9[18] = "";
  entity_9 = NULL;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(56*sizeof(char));
  entity_1[56-1]='';
  memset(entity_6, 'W', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_9, 'N', 18-1);
  entity_9[18-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memcpy(entity_3, entity_6, entity_8*sizeof(char));
}