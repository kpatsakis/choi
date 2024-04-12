void fun()
{
  int entity_4 = 63;
  int entity_2 = 31;
  char* entity_6;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_3 = 'r';
  memset(entity_7, 'w', entity_2-1);
  entity_7[entity_2-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  strcpy(entity_6, entity_7);
}