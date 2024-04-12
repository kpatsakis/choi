void fun()
{
  int entity_8 = 70;
  entity_8 = 86;
  char entity_0 = 'n';
  char* entity_5;
  char entity_2 = 'g';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'u', entity_8-1);
  entity_3[entity_8-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memcpy(entity_5, entity_3, entity_8*sizeof(char));
}