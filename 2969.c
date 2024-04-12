void fun()
{
  int entity_4 = 4;
  char* entity_1;
  char entity_3[93] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', 93-1);
  entity_3[93-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_3);
}