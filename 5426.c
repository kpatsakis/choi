void fun()
{
  int entity_5 = 4;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char entity_0 = 'q';
  char* entity_2;
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memset(entity_8, 'w', entity_5-1);
  entity_8[entity_5-1]='';
  strcpy(entity_2, entity_8);
}