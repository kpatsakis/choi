void fun()
{
  int entity_5 = 87;
  entity_5 = 37;
  char entity_2[54] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_9[71] = "";
  entity_9 = NULL;
  memset(entity_9, 'y', 71-1);
  entity_9[71-1]='';
  memset(entity_2, 'u', 54-1);
  entity_2[54-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  strcpy(entity_8, entity_2);
}