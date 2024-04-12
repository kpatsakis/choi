void fun()
{
  int entity_0 = 76;
  char* entity_6;
  char entity_1 = 'p';
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(100*sizeof(char));
  entity_6[100-1]='';
  memset(entity_3, 'T', entity_0-1);
  entity_3[entity_0-1]='';
  entity_0 = 30;
  strcpy(entity_6, entity_3);
}