void fun()
{
  int entity_0 = 84;
  char entity_2[63] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'k', 63-1);
  entity_2[63-1]='';
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  memcpy(entity_8, entity_2, 63*sizeof(char));
}