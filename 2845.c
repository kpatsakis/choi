void fun()
{
  int entity_3 = 66;
  char entity_1[23] = "";
  entity_1 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_1, 'Q', 23-1);
  entity_1[23-1]='';
  strcpy(entity_8, entity_1);
}