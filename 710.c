void fun()
{
  int entity_6 = 87;
  entity_6 = 62;
  char* entity_0;
  char entity_8 = 'M';
  char entity_2[63] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 63-1);
  entity_2[63-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  strcpy(entity_0, entity_2);
}