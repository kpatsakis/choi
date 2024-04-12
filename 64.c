void fun()
{
  int entity_4 = 89;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  memset(entity_8, 'm', entity_4-1);
  entity_8[entity_4-1]='';
  entity_4 = 54;
  strcpy(entity_7, entity_8);
}