void fun()
{
  int entity_8 = 54;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'r', entity_8-1);
  entity_4[entity_8-1]='';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  strcpy(entity_3, entity_4);
}