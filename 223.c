void fun()
{
  int entity_6 = 13;
  entity_6 = 13;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'r', entity_6-1);
  entity_8[entity_6-1]='';
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[44-1]='';
  strcpy(entity_7, entity_8);
}