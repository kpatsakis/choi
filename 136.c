void fun()
{
  int entity_2 = 66;
  entity_2 = 97;
  char* entity_5;
  char* entity_0;
  char entity_6[48] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 48-1);
  entity_6[48-1]='';
  entity_0 = (char*)malloc(12*sizeof(char));
  entity_0[12-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  strcpy(entity_5, entity_6);
}