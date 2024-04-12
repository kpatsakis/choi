void fun()
{
  int entity_4 = 96;
  entity_4 = 42;
  char* entity_3;
  char entity_8[82] = "";
  entity_8 = NULL;
  char entity_9 = 'h';
  char entity_6[70] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_8, 'n', 82-1);
  entity_8[82-1]='';
  memset(entity_6, 'k', 70-1);
  entity_6[70-1]='';
  strcpy(entity_3, entity_8);
}