void fun()
{
  int entity_6 = 33;
  char* entity_7;
  char entity_4[37] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_4, 'y', 37-1);
  entity_4[37-1]='';
  strcpy(entity_7, entity_4);
}