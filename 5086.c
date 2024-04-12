void fun()
{
  int entity_8 = 30;
  int entity_9 = 60;
  int entity_1 = 38;
  char* entity_5;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', entity_8-1);
  entity_6[entity_8-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  entity_8 = 25;
  strcpy(entity_5, entity_6);
}