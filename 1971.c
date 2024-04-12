void fun()
{
  int entity_7 = 6;
  int entity_5 = 93;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_0 = 'u';
  memset(entity_3, 'Z', entity_7-1);
  entity_3[entity_7-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  strcpy(entity_8, entity_3);
}