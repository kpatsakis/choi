void fun()
{
  int entity_1 = 24;
  entity_1 = 30;
  char entity_2 = 'm';
  char entity_8[27] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_8, 'X', 27-1);
  entity_8[27-1]='';
  strcpy(entity_9, entity_8);
}