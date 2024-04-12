void fun()
{
  int entity_2 = 43;
  char entity_6[10] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_7[23] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', 23-1);
  entity_7[23-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_6, 'm', 10-1);
  entity_6[10-1]='';
  strcpy(entity_4, entity_7);
}