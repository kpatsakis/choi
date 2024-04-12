void fun()
{
  int entity_8 = 63;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_2[63] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_3, 'J', 72-1);
  entity_3[72-1]='';
  memset(entity_2, 'r', 63-1);
  entity_2[63-1]='';
  strcpy(entity_7, entity_3);
}