void fun()
{
  int entity_8 = 51;
  char* entity_2;
  char entity_4[30] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_4, 'G', 30-1);
  entity_4[30-1]='';
  entity_8 = 47;
  memcpy(entity_2, entity_4, 30*sizeof(char));
}