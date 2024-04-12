void fun()
{
  int entity_3 = 35;
  char* entity_4;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', entity_3-1);
  entity_6[entity_3-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  entity_3 = 1;
  strcpy(entity_4, entity_6);
}