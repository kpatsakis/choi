void fun()
{
  int entity_8 = 53;
  char entity_2[23] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_2, 'd', 23-1);
  entity_2[23-1]='';
  strcpy(entity_1, entity_2);
}