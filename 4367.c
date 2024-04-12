void fun()
{
  int entity_0 = 89;
  entity_0 = 89;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memset(entity_2, 'Q', entity_0-1);
  entity_2[entity_0-1]='';
  strcpy(entity_6, entity_2);
}