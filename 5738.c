void fun()
{
  int entity_7 = 26;
  entity_7 = 54;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'e', entity_7-1);
  entity_1[entity_7-1]='';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memcpy(entity_0, entity_1, entity_7*sizeof(char));
}