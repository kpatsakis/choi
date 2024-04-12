void fun()
{
  int entity_2 = 52;
  char entity_6[63] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'e', 63-1);
  entity_6[63-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_2 = 26;
  strcpy(entity_1, entity_6);
}