void fun()
{
  int entity_2 = 75;
  char* entity_5;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_8, 'u', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_5, entity_8);
}