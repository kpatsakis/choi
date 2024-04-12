void fun()
{
  int entity_4 = 92;
  char entity_7[7] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'W', 7-1);
  entity_7[7-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_7, 7*sizeof(char));
}