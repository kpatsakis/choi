void fun()
{
  int entity_2 = 75;
  char* entity_3;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', entity_2-1);
  entity_9[entity_2-1]='';
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[64-1]='';
  strcpy(entity_3, entity_9);
}