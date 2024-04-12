void fun()
{
  int entity_6 = 89;
  char* entity_7;
  char entity_3[81] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_3, 'L', 81-1);
  entity_3[81-1]='';
  strcpy(entity_7, entity_3);
}