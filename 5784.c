void fun()
{
  int entity_8 = 31;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'r', entity_8-1);
  entity_6[entity_8-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  entity_8 = 15;
  strcpy(entity_0, entity_6);
}