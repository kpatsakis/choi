void fun()
{
  int entity_3 = 71;
  entity_3 = 71;
  char* entity_2;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', entity_3-1);
  entity_8[entity_3-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  strcpy(entity_2, entity_8);
}