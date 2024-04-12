void fun()
{
  int entity_8 = 59;
  entity_8 = 59;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  memset(entity_0, 'W', entity_8-1);
  entity_0[entity_8-1]='';
  strcpy(entity_1, entity_0);
}