void fun()
{
  int entity_7 = 64;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[47-1]='';
  memset(entity_2, 'J', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_8, entity_2);
}