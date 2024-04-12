void fun()
{
  int entity_1 = 84;
  entity_1 = 69;
  char* entity_3;
  char entity_8[58] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_8, 'Q', 58-1);
  entity_8[58-1]='';
  strcpy(entity_3, entity_8);
}