void fun()
{
  int entity_8 = 95;
  char entity_1 = 'U';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  memset(entity_3, 'r', entity_8-1);
  entity_3[entity_8-1]='';
  memcpy(entity_5, entity_3, entity_8*sizeof(char));
}