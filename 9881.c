void fun()
{
  int entity_8 = 81;
  int entity_5 = 53;
  entity_5 = 33;
  char* entity_6;
  char* entity_7;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_9 = 'j';
  memset(entity_2, 'L', entity_5-1);
  entity_2[entity_5-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memcpy(entity_6, entity_2, entity_5*sizeof(char));
}