void fun()
{
  int entity_7 = 88;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_6 = 'P';
  char entity_5 = 'f';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_8, 'b', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_1, entity_8);
}