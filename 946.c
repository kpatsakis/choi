void fun()
{
  int entity_1 = 5;
  char* entity_7;
  char entity_8[21] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', 21-1);
  entity_8[21-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_8);
}