void fun()
{
  int entity_5 = 14;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'W', entity_5-1);
  entity_7[entity_5-1]='';
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  strcpy(entity_4, entity_7);
}