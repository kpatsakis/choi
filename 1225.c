void fun()
{
  int entity_3 = 68;
  entity_3 = 68;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  memset(entity_8, 'M', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_7, entity_8);
}