void fun()
{
  int entity_3 = 87;
  char* entity_2;
  char entity_4[84] = "";
  entity_4 = NULL;
  memset(entity_4, 't', 84-1);
  entity_4[84-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  strcpy(entity_2, entity_4);
}