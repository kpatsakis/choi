void fun()
{
  int entity_6 = 88;
  entity_6 = 88;
  char* entity_7;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(36*sizeof(char));
  entity_7[36-1]='';
  memset(entity_1, 'h', entity_6-1);
  entity_1[entity_6-1]='';
  strcpy(entity_7, entity_1);
}