void fun()
{
  int entity_6 = 96;
  char* entity_4;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_3 = 'D';
  memset(entity_5, 'G', entity_6-1);
  entity_5[entity_6-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  entity_6 = 70;
  strcpy(entity_4, entity_5);
}