void fun()
{
  int entity_5 = 36;
  int entity_1 = 5;
  char* entity_9;
  char entity_3 = 'p';
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'I', entity_1-1);
  entity_8[entity_1-1]='';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[90-1]='';
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[55-1]='';
  memcpy(entity_7, entity_8, entity_1*sizeof(char));
}