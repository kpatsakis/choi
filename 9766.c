void fun()
{
  int entity_1 = 52;
  char entity_8 = 'Q';
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'm', entity_1-1);
  entity_4[entity_1-1]='';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  entity_1 = 80;
  memcpy(entity_6, entity_4, entity_1*sizeof(char));
}