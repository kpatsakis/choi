void fun()
{
  int entity_8 = 83;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_4;
  char* entity_0;
  memset(entity_7, 'o', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  entity_8 = 89;
  strcpy(entity_0, entity_7);
}