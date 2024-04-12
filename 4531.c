void fun()
{
  int entity_8 = 94;
  char* entity_7;
  char entity_3[60] = "";
  entity_3 = NULL;
  memset(entity_3, 'i', 60-1);
  entity_3[60-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_3);
}