void fun()
{
  int entity_8 = 35;
  char* entity_2;
  char entity_4[33] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_4, 'F', 33-1);
  entity_4[33-1]='';
  entity_8 = 97;
  memcpy(entity_2, entity_4, 33*sizeof(char));
}