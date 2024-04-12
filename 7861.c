void fun()
{
  int entity_4 = 59;
  char* entity_7;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[76-1]='';
  memset(entity_1, 'Z', entity_4-1);
  entity_1[entity_4-1]='';
  strcpy(entity_7, entity_1);
}