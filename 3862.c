void fun()
{
  int entity_3 = 18;
  entity_3 = 18;
  char* entity_7;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  memset(entity_4, 'b', entity_3-1);
  entity_4[entity_3-1]='';
  strcpy(entity_7, entity_4);
}