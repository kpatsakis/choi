void fun()
{
  int entity_3 = 3;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'H', entity_3-1);
  entity_2[entity_3-1]='';
  entity_4 = (char*)malloc(23*sizeof(char));
  entity_4[23-1]='';
  strcpy(entity_4, entity_2);
}