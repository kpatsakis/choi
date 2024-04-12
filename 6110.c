void fun()
{
  int entity_2 = 72;
  char* entity_7;
  char entity_4[29] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_4, 'l', 29-1);
  entity_4[29-1]='';
  strcpy(entity_7, entity_4);
}