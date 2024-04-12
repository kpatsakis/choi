void fun()
{
  int entity_7 = 84;
  char* entity_8;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'R', entity_7-1);
  entity_6[entity_7-1]='';
  entity_8 = (char*)malloc(54*sizeof(char));
  entity_8[54-1]='';
  entity_7 = 48;
  strcpy(entity_8, entity_6);
}