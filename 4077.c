void fun()
{
  int entity_6 = 30;
  char* entity_1;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[83-1]='';
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='';
  strcpy(entity_1, entity_0);
}