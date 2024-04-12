void fun()
{
  int entity_7 = 49;
  int entity_6 = 1;
  char* entity_2;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', entity_6-1);
  entity_8[entity_6-1]='';
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  strcpy(entity_2, entity_8);
}