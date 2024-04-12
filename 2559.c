void fun()
{
  int entity_1 = 11;
  int entity_8 = 76;
  char* entity_6;
  char entity_2[4] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_2, 'F', 4-1);
  entity_2[4-1]='';
  strcpy(entity_6, entity_2);
}