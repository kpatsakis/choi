void fun()
{
  int entity_1 = 96;
  char* entity_4;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', entity_1-1);
  entity_3[entity_1-1]='';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  entity_1 = 1;
  strcpy(entity_4, entity_3);
}