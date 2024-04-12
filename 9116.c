void fun()
{
  int entity_8 = 91;
  int entity_0 = 17;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[9-1]='';
  memset(entity_5, 'e', entity_8-1);
  entity_5[entity_8-1]='';
  strcpy(entity_3, entity_5);
}