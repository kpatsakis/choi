void fun()
{
  int entity_7 = 23;
  int entity_1 = 22;
  char* entity_8;
  char entity_4[76] = "";
  entity_4 = NULL;
  char entity_9[2] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 2-1);
  entity_9[2-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_4, 'w', 76-1);
  entity_4[76-1]='';
  strcpy(entity_8, entity_9);
}