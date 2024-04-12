void fun()
{
  int entity_4 = 62;
  entity_4 = 62;
  char entity_8 = 'V';
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_3, 'p', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_1, entity_3);
}