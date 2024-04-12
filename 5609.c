void fun()
{
  int entity_8 = 7;
  entity_8 = 7;
  char* entity_2;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', entity_8-1);
  entity_7[entity_8-1]='';
  entity_2 = (char*)malloc(50*sizeof(char));
  entity_2[50-1]='';
  strcpy(entity_2, entity_7);
}