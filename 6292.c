void fun()
{
  int entity_5 = 2;
  entity_5 = 4;
  char* entity_6;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_7, 'G', 94-1);
  entity_7[94-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  strcpy(entity_6, entity_7);
}