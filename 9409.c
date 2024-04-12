void fun()
{
  int entity_3 = 51;
  char* entity_5;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_1 = 'u';
  memset(entity_6, 'V', 9-1);
  entity_6[9-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  strcpy(entity_5, entity_6);
}