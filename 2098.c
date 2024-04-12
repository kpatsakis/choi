void fun()
{
  int entity_7 = 89;
  char entity_2[55] = "";
  entity_2 = NULL;
  char entity_3[26] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_2, 'a', 55-1);
  entity_2[55-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_3, 'c', 26-1);
  entity_3[26-1]='';
  memcpy(entity_8, entity_2, 55*sizeof(char));
}