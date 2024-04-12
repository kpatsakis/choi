void fun()
{
  int entity_8 = 96;
  char entity_4[61] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_0 = 'O';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_4, 'I', 61-1);
  entity_4[61-1]='';
  entity_8 = 47;
  strcpy(entity_7, entity_4);
}