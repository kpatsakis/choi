void fun()
{
  int entity_8 = 83;
  entity_8 = 65;
  char* entity_6;
  char entity_1[87] = "";
  entity_1 = NULL;
  memset(entity_1, 'v', 87-1);
  entity_1[87-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  strcpy(entity_6, entity_1);
}