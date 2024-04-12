void fun()
{
  int entity_1 = 87;
  entity_1 = 87;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_7 = 'M';
  char* entity_3;
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memset(entity_9, 'W', entity_1-1);
  entity_9[entity_1-1]='';
  strcpy(entity_3, entity_9);
}