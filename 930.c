void fun()
{
  int entity_5 = 28;
  char* entity_4;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[49-1]='';
  memset(entity_6, 'o', entity_5-1);
  entity_6[entity_5-1]='';
  strcpy(entity_4, entity_6);
}