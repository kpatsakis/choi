void fun()
{
  int entity_8 = 66;
  char* entity_7;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_0, 'X', entity_8-1);
  entity_0[entity_8-1]='';
  entity_8 = 66;
  strcpy(entity_7, entity_0);
}