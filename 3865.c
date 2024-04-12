void fun()
{
  int entity_6 = 33;
  char entity_3[23] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_3, 'm', 23-1);
  entity_3[23-1]='';
  strcpy(entity_0, entity_3);
}