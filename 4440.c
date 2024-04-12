void fun()
{
  int entity_2 = 74;
  char* entity_0;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char entity_1[26] = "";
  entity_1 = NULL;
  memset(entity_3, 'j', entity_2-1);
  entity_3[entity_2-1]='';
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[63-1]='';
  memset(entity_1, 's', 26-1);
  entity_1[26-1]='';
  strcpy(entity_0, entity_3);
}