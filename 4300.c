void fun()
{
  int entity_8 = 82;
  char* entity_3;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_7 = 'S';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[51-1]='';
  memset(entity_1, 'i', entity_8-1);
  entity_1[entity_8-1]='';
  strcpy(entity_3, entity_1);
}