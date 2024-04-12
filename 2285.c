void fun()
{
  int entity_7 = 23;
  entity_7 = 23;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  memset(entity_1, 'E', entity_7-1);
  entity_1[entity_7-1]='';
  strcpy(entity_2, entity_1);
}