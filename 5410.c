void fun()
{
  int entity_0 = 11;
  int entity_6 = 28;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memset(entity_8, 'm', entity_6-1);
  entity_8[entity_6-1]='';
  strcpy(entity_7, entity_8);
}