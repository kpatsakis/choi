void fun()
{
  int entity_1 = 30;
  entity_1 = 30;
  char* entity_5;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', entity_1-1);
  entity_6[entity_1-1]='';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  strcpy(entity_5, entity_6);
}