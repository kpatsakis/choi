void fun()
{
  int entity_8 = 42;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  memset(entity_4, 't', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_3, entity_4);
}