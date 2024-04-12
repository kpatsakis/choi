void fun()
{
  int entity_0 = 20;
  int entity_4 = 86;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_7, 'b', entity_4-1);
  entity_7[entity_4-1]='';
  strcpy(entity_2, entity_7);
}