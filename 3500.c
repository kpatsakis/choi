void fun()
{
  int entity_7 = 89;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_8;
  memset(entity_4, 's', entity_7-1);
  entity_4[entity_7-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[14-1]='';
  strcpy(entity_0, entity_4);
}