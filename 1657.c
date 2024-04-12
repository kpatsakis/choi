void fun()
{
  int entity_6 = 86;
  char* entity_0;
  char entity_7[80] = "";
  entity_7 = NULL;
  char entity_8 = 'N';
  memset(entity_7, 'w', 80-1);
  entity_7[80-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  entity_6 = 89;
  strcpy(entity_0, entity_7);
}