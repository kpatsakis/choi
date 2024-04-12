void fun()
{
  int entity_2 = 48;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_6[59] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_5, 'F', entity_2-1);
  entity_5[entity_2-1]='';
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_6, 'M', 59-1);
  entity_6[59-1]='';
  entity_2 = 14;
  strcpy(entity_0, entity_5);
}