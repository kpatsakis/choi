void fun()
{
  int entity_0 = 58;
  int entity_7 = 44;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(63*sizeof(char));
  entity_3[63-1]='';
  memset(entity_5, 'O', entity_7-1);
  entity_5[entity_7-1]='';
  memcpy(entity_3, entity_5, entity_7*sizeof(char));
}