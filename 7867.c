void fun()
{
  int entity_6 = 51;
  char entity_1 = 'M';
  char* entity_4;
  char entity_8[7] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_8, 'f', 7-1);
  entity_8[7-1]='';
  strcpy(entity_4, entity_8);
}