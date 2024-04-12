void fun()
{
  int entity_3 = 65;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_8[67] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[72-1]='';
  memset(entity_7, 't', entity_3-1);
  entity_7[entity_3-1]='';
  memset(entity_8, 'E', 67-1);
  entity_8[67-1]='';
  strcpy(entity_0, entity_7);
}