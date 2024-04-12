void fun()
{
  int entity_2 = 42;
  int entity_8 = 67;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  memset(entity_1, 't', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_3, entity_1);
}