void fun()
{
  int entity_7 = 84;
  entity_7 = 84;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[16-1]='';
  memset(entity_5, 'D', entity_7-1);
  entity_5[entity_7-1]='';
  strcpy(entity_8, entity_5);
}