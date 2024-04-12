void fun()
{
  int entity_7 = 63;
  int entity_6 = 41;
  int entity_8 = 79;
  char entity_4[35] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_4, 'J', 35-1);
  entity_4[35-1]='';
  strcpy(entity_1, entity_4);
}