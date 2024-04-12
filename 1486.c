void fun()
{
  int entity_8 = 98;
  char entity_3[52] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5[48] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', 48-1);
  entity_5[48-1]='';
  memset(entity_3, 'O', 52-1);
  entity_3[52-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_5);
}