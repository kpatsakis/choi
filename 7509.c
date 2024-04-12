void fun()
{
  int entity_8 = 9;
  char entity_7[37] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_7, 'c', 37-1);
  entity_7[37-1]='';
  entity_8 = 52;
  strcpy(entity_3, entity_7);
}