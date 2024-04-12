void fun()
{
  int entity_6 = 97;
  char entity_2 = 'R';
  char entity_4[20] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_4, 'Q', 20-1);
  entity_4[20-1]='';
  strcpy(entity_8, entity_4);
}