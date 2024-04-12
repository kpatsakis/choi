void fun()
{
  int entity_1 = 97;
  int entity_7 = 6;
  char* entity_4;
  char entity_0[54] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'V', 54-1);
  entity_0[54-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  strcpy(entity_6, entity_0);
}