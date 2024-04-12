void fun()
{
  int entity_9 = 3;
  char entity_0 = 'f';
  char entity_7 = 'j';
  char entity_3[23] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_3, 'L', 23-1);
  entity_3[23-1]='';
  entity_9 = 83;
  strcpy(entity_6, entity_3);
}