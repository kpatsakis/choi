void fun()
{
  int entity_8 = 1;
  char* entity_2;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[45-1]='';
  memset(entity_4, 'q', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_2, entity_4);
}