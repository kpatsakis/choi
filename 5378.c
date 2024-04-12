void fun()
{
  int entity_8 = 89;
  char* entity_7;
  char entity_1[57] = "";
  entity_1 = NULL;
  memset(entity_1, 'c', 57-1);
  entity_1[57-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_1);
}