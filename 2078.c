void fun()
{
  int entity_8 = 8;
  char* entity_1;
  char entity_4[14] = "";
  entity_4 = NULL;
  char entity_9[82] = "";
  entity_9 = NULL;
  memset(entity_4, 'a', 14-1);
  entity_4[14-1]='';
  memset(entity_9, 'u', 82-1);
  entity_9[82-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_4);
}