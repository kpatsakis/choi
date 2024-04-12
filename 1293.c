void fun()
{
  int entity_3 = 15;
  char* entity_7;
  char entity_1[94] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(0*sizeof(char));
  entity_0[0-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_1, 'V', 94-1);
  entity_1[94-1]='';
  strcpy(entity_7, entity_1);
}