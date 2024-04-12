void fun()
{
  int entity_8 = 96;
  entity_8 = 43;
  char* entity_5;
  char* entity_4;
  char entity_2[88] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_2, 'P', 88-1);
  entity_2[88-1]='';
  strcpy(entity_4, entity_2);
}