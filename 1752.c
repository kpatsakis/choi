void fun()
{
  int entity_8 = 56;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_2[26] = "";
  entity_2 = NULL;
  memset(entity_2, 'p', 26-1);
  entity_2[26-1]='';
  memset(entity_3, 'r', entity_8-1);
  entity_3[entity_8-1]='';
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[55-1]='';
  memcpy(entity_7, entity_3, entity_8*sizeof(char));
}