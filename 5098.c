void fun()
{
  int entity_1 = 31;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'j', entity_1-1);
  entity_6[entity_1-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  entity_1 = 85;
  strcpy(entity_7, entity_6);
}