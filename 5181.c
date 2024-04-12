void fun()
{
  int entity_8 = 33;
  char entity_3[38] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_7[81] = "";
  entity_7 = NULL;
  memset(entity_3, 's', 38-1);
  entity_3[38-1]='';
  memset(entity_7, 'K', 81-1);
  entity_7[81-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_8 = 92;
  strcpy(entity_9, entity_3);
}