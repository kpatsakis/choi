void fun()
{
  int entity_0 = 43;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[27-1]='';
  memset(entity_7, 'Q', entity_0-1);
  entity_7[entity_0-1]='';
  entity_0 = 85;
  strcpy(entity_2, entity_7);
}