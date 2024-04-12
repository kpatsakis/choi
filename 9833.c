void fun()
{
  int entity_8 = 59;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'y', entity_8-1);
  entity_0[entity_8-1]='';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[8-1]='';
  strcpy(entity_2, entity_0);
}