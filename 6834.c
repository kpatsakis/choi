void fun()
{
  int entity_8 = 76;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'l', entity_8-1);
  entity_2[entity_8-1]='';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  strcpy(entity_9, entity_2);
}