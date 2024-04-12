void fun()
{
  int entity_4 = 48;
  char entity_7 = 'I';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_2, 'c', entity_4-1);
  entity_2[entity_4-1]='';
  strcpy(entity_0, entity_2);
}