void fun()
{
  int entity_8 = 78;
  int entity_3 = 12;
  char* entity_2;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_5, 'l', entity_8-1);
  entity_5[entity_8-1]='';
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[27-1]='';
  strcpy(entity_2, entity_5);
}