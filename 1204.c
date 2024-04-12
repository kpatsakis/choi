void fun()
{
  int entity_8 = 41;
  char* entity_3;
  char entity_2[73] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_2, 'G', 73-1);
  entity_2[73-1]='';
  memcpy(entity_3, entity_2, 73*sizeof(char));
}