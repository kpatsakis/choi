void fun()
{
  int entity_4 = 46;
  int entity_8 = 45;
  char* entity_0;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(93*sizeof(char));
  entity_0[93-1]='';
  memset(entity_2, 't', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 64;
  strcpy(entity_0, entity_2);
}