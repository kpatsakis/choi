void fun()
{
  int entity_5 = 84;
  entity_5 = 84;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'k', entity_5-1);
  entity_7[entity_5-1]='';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  strcpy(entity_3, entity_7);
}