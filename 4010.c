void fun()
{
  int entity_0 = 49;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'q', entity_0-1);
  entity_3[entity_0-1]='';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  memcpy(entity_2, entity_3, entity_0*sizeof(char));
}