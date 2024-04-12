void fun()
{
  int entity_0 = 6;
  int entity_8 = 27;
  entity_8 = 28;
  char entity_1[74] = "";
  entity_1 = NULL;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[14-1]='';
  memset(entity_3, 'G', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_1, 'K', 74-1);
  entity_1[74-1]='';
  memcpy(entity_9, entity_3, entity_8*sizeof(char));
}