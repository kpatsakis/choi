void fun()
{
  int entity_0 = 9;
  char* entity_6;
  char entity_2[36] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_2, 'Y', 36-1);
  entity_2[36-1]='';
  strcpy(entity_6, entity_2);
}