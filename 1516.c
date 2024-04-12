void fun()
{
  int entity_2 = 82;
  int entity_3 = 54;
  char* entity_7;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  memset(entity_5, 'K', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 24;
  entity_5[31] = 'w';
}