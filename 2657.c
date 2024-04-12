void fun()
{
  int entity_6 = 82;
  char entity_4[68] = "";
  entity_4 = NULL;
  char entity_0[64] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'M', 64-1);
  entity_0[64-1]='';
  memset(entity_4, 'h', 68-1);
  entity_4[68-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_4);
}