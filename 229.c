void fun()
{
  int entity_0 = 38;
  int entity_8 = 2;
  char* entity_4;
  char entity_3 = 'E';
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'b', entity_0-1);
  entity_2[entity_0-1]='';
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  strcpy(entity_4, entity_2);
}