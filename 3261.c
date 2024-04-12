void fun()
{
  int entity_0 = 41;
  entity_0 = 41;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char entity_6 = 'a';
  char entity_2 = 'j';
  char* entity_1;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  memset(entity_8, 'h', entity_0-1);
  entity_8[entity_0-1]='';
  strcpy(entity_1, entity_8);
}