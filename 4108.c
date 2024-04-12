void fun()
{
  int entity_4 = 49;
  entity_4 = 14;
  char entity_1 = 'j';
  char entity_0[62] = "";
  entity_0 = NULL;
  char* entity_6;
  char* entity_2;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_0, 'k', 62-1);
  entity_0[62-1]='';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  strcpy(entity_6, entity_0);
}