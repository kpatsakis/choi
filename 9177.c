void fun()
{
  int entity_4 = 14;
  int entity_0 = 56;
  char* entity_1;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', entity_0-1);
  entity_7[entity_0-1]='';
  entity_1 = (char*)malloc(15*sizeof(char));
  entity_1[15-1]='';
  strcpy(entity_1, entity_7);
}