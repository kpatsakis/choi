void fun()
{
  int entity_5 = 41;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[51-1]='';
  memset(entity_3, 'e', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_4, entity_3);
}