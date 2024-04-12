void fun()
{
  int entity_1 = 61;
  char* entity_7;
  char entity_3[42] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_3, 'K', 42-1);
  entity_3[42-1]='';
  strcpy(entity_7, entity_3);
}