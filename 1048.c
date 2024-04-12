void fun()
{
  int entity_0 = 47;
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'W', entity_0-1);
  entity_1[entity_0-1]='';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  entity_0 = 98;
  strcpy(entity_7, entity_1);
}