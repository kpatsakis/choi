void fun()
{
  int entity_3 = 98;
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_5 = 'K';
  char* entity_4;
  memset(entity_1, 'e', 24-1);
  entity_1[24-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_0, 'c', 38-1);
  entity_0[38-1]='';
  entity_3 = 75;
  strcpy(entity_4, entity_0);
}