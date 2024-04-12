void fun()
{
  int entity_7 = 85;
  char* entity_5;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'E', entity_7-1);
  entity_4[entity_7-1]='';
  entity_5 = (char*)malloc(16*sizeof(char));
  entity_5[16-1]='';
  strcpy(entity_5, entity_4);
}