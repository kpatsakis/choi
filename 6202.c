void fun()
{
  int entity_5 = 43;
  char* entity_6;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_3 = 'e';
  entity_6 = (char*)malloc(42*sizeof(char));
  entity_6[42-1]='';
  memset(entity_1, 'O', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_6, entity_1, entity_5*sizeof(char));
}