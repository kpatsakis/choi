void fun()
{
  int entity_4 = 98;
  entity_4 = 93;
  char* entity_2;
  char entity_7[65] = "";
  entity_7 = NULL;
  memset(entity_7, 'U', 65-1);
  entity_7[65-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  strcpy(entity_2, entity_7);
}