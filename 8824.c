void fun()
{
  int entity_1 = 97;
  int entity_7 = 76;
  entity_7 = 76;
  char* entity_4;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  memset(entity_6, 'e', entity_7-1);
  entity_6[entity_7-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  strcpy(entity_4, entity_6);
}