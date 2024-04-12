void fun()
{
  int entity_0 = 69;
  int entity_8 = 74;
  char* entity_9;
  char entity_1 = 'E';
  char* entity_6;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  memset(entity_2, 'P', entity_0-1);
  entity_2[entity_0-1]='';
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  entity_0 = 14;
  memcpy(entity_9, entity_2, entity_0*sizeof(char));
}