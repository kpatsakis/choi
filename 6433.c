void fun()
{
  int entity_4 = 15;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_6;
  char* entity_9;
  memset(entity_8, 'e', entity_4-1);
  entity_8[entity_4-1]='';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  entity_9 = (char*)malloc(33*sizeof(char));
  entity_9[33-1]='';
  strcpy(entity_9, entity_8);
}