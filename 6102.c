void fun()
{
  int entity_8 = 82;
  char entity_4[63] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'f', 63-1);
  entity_4[63-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_4);
}