void fun()
{
  int entity_1 = 49;
  entity_1 = 49;
  char* entity_2;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memset(entity_4, 'J', entity_1-1);
  entity_4[entity_1-1]='';
  strcpy(entity_2, entity_4);
}