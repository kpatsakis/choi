void fun()
{
  int entity_8 = 21;
  int entity_3 = 31;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'E', entity_3-1);
  entity_4[entity_3-1]='';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  strcpy(entity_2, entity_4);
}