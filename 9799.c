void fun()
{
  int entity_2 = 37;
  entity_2 = 83;
  char* entity_6;
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', 1-1);
  entity_7[1-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  strcpy(entity_6, entity_7);
}