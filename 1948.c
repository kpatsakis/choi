void fun()
{
  int entity_3 = 83;
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_7, 'H', 85-1);
  entity_7[85-1]='';
  entity_3 = 76;
  strcpy(entity_2, entity_7);
}