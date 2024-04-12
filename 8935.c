void fun()
{
  int entity_6 = 52;
  entity_6 = 52;
  char* entity_1;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', entity_6-1);
  entity_4[entity_6-1]='';
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  strcpy(entity_1, entity_4);
}