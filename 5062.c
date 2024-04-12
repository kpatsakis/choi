void fun()
{
  int entity_8 = 20;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'F', entity_8-1);
  entity_4[entity_8-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  entity_8 = 92;
  strcpy(entity_2, entity_4);
}