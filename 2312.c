void fun()
{
  int entity_2 = 20;
  entity_2 = 20;
  char* entity_8;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_4, 'M', entity_2-1);
  entity_4[entity_2-1]='';
  strcpy(entity_8, entity_4);
}