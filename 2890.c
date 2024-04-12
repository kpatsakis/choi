void fun()
{
  int entity_0 = 62;
  entity_0 = 62;
  char* entity_3;
  char entity_8 = 'G';
  char entity_4 = 'y';
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'N', entity_0-1);
  entity_7[entity_0-1]='';
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  strcpy(entity_3, entity_7);
}