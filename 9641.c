void fun()
{
  int entity_3 = 51;
  char entity_8[77] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'c', 77-1);
  entity_8[77-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  strcpy(entity_6, entity_8);
}