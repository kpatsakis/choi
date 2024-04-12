void fun()
{
  int entity_0 = 35;
  char entity_5[70] = "";
  entity_5 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_4 = 'h';
  char* entity_2;
  memset(entity_5, 'I', 70-1);
  entity_5[70-1]='';
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  memset(entity_6, 'I', entity_0-1);
  entity_6[entity_0-1]='';
  memcpy(entity_2, entity_6, entity_0*sizeof(char));
}