void fun()
{
  int entity_0 = 1;
  int entity_7 = 80;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  memset(entity_8, 't', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 91;
  strcpy(entity_1, entity_8);
}