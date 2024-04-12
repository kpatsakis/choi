void fun()
{
  int entity_2 = 81;
  char* entity_9;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_6 = 'Q';
  memset(entity_8, 'N', entity_2-1);
  entity_8[entity_2-1]='';
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  strcpy(entity_9, entity_8);
}