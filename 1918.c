void fun()
{
  int entity_2 = 6;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_3 = 'q';
  entity_9 = (char*)malloc(57*sizeof(char));
  entity_9[57-1]='';
  memset(entity_8, 'u', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_9, entity_8);
}