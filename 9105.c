void fun()
{
  int entity_8 = 85;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'v', entity_8-1);
  entity_3[entity_8-1]='';
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[1-1]='';
  strcpy(entity_9, entity_3);
}