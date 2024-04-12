void fun()
{
  int entity_0 = 83;
  char entity_4 = 'S';
  char entity_7[36] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'x', 36-1);
  entity_7[36-1]='';
  entity_6 = (char*)malloc(51*sizeof(char));
  entity_6[51-1]='';
  strcpy(entity_6, entity_7);
}