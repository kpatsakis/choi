void fun()
{
  int entity_1 = 56;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_7, 'd', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_0, entity_7);
}