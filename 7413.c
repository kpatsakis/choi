void fun()
{
  int entity_6 = 7;
  entity_6 = 7;
  char* entity_8;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[64-1]='';
  memset(entity_2, 'b', entity_6-1);
  entity_2[entity_6-1]='';
  strcpy(entity_8, entity_2);
}