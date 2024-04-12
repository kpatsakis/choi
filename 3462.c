void fun()
{
  int entity_6 = 2;
  char* entity_7;
  char entity_1[88] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_1, 'V', 88-1);
  entity_1[88-1]='';
  strcpy(entity_7, entity_1);
}