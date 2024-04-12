void fun()
{
  int entity_3 = 61;
  char* entity_2;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_7[76] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[77-1]='';
  memset(entity_6, 'G', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_7, 'z', 76-1);
  entity_7[76-1]='';
  entity_3 = 33;
  strcpy(entity_2, entity_6);
}