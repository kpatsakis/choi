void fun()
{
  int entity_3 = 96;
  char entity_2[15] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'B', 15-1);
  entity_2[15-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_2, 15*sizeof(char));
}