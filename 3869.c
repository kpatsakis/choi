void fun()
{
  int entity_5 = 87;
  char* entity_1;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_8[42] = "";
  entity_8 = NULL;
  memset(entity_7, 'S', entity_5-1);
  entity_7[entity_5-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memset(entity_8, 'Z', 42-1);
  entity_8[42-1]='';
  strcpy(entity_1, entity_7);
}