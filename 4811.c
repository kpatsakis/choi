void fun()
{
  int entity_7 = 43;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_3, 'R', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_8, entity_3, entity_7*sizeof(char));
}