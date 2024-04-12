void fun()
{
  int entity_4 = 23;
  entity_4 = 23;
  char* entity_6;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[39-1]='';
  memset(entity_7, 'z', entity_4-1);
  entity_7[entity_4-1]='';
  strcpy(entity_6, entity_7);
}