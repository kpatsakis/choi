void fun()
{
  int entity_2 = 85;
  int entity_1 = 32;
  char* entity_4;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'e', entity_1-1);
  entity_6[entity_1-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  strcpy(entity_4, entity_6);
}