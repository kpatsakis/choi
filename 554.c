void fun()
{
  int entity_7 = 89;
  char* entity_4;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_3 = 'G';
  memset(entity_6, 'J', entity_7-1);
  entity_6[entity_7-1]='';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  strcpy(entity_4, entity_6);
}