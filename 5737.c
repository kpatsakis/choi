void fun()
{
  int entity_6 = 85;
  int entity_2 = 9;
  char* entity_8;
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_5 = 'x';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_3, 'u', 23-1);
  entity_3[23-1]='';
  strcpy(entity_8, entity_3);
}