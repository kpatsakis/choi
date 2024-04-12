void fun()
{
  int entity_1 = 53;
  char* entity_6;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'i', entity_1-1);
  entity_3[entity_1-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  strcpy(entity_6, entity_3);
}