void fun()
{
  int entity_7 = 53;
  int entity_1 = 34;
  entity_1 = 34;
  char* entity_6;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'j', entity_1-1);
  entity_9[entity_1-1]='';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[67-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  strcpy(entity_6, entity_9);
}