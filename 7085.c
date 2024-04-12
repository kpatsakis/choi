void fun()
{
  int entity_6 = 29;
  char entity_1[8] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'k', 8-1);
  entity_1[8-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_1);
}