void fun()
{
  int entity_8 = 61;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_5 = 'v';
  memset(entity_2, 'd', entity_8-1);
  entity_2[entity_8-1]='';
  entity_9 = (char*)malloc(70*sizeof(char));
  entity_9[70-1]='';
  entity_8 = 94;
  strcpy(entity_9, entity_2);
}