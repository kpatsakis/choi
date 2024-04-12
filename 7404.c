void fun()
{
  int entity_4 = 74;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char* entity_7;
  memset(entity_0, 'X', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  strcpy(entity_7, entity_0);
}