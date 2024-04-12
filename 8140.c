void fun()
{
  int entity_8 = 20;
  char entity_4[19] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_5;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  memset(entity_4, 'H', 19-1);
  entity_4[19-1]='';
  strcpy(entity_3, entity_4);
}