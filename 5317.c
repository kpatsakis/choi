void fun()
{
  int entity_5 = 54;
  char entity_4[92] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_4, 'P', 92-1);
  entity_4[92-1]='';
  entity_5 = 41;
  strcpy(entity_6, entity_4);
}