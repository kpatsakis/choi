void fun()
{
  int entity_8 = 54;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  memset(entity_6, 'Q', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_4, entity_6);
}