void fun()
{
  int entity_1 = 17;
  char* entity_8;
  char entity_6[75] = "";
  entity_6 = NULL;
  memset(entity_6, 'W', 75-1);
  entity_6[75-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  strcpy(entity_8, entity_6);
}