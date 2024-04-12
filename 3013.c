void fun()
{
  int entity_6 = 2;
  char* entity_0;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[63-1]='';
  memset(entity_3, 's', entity_6-1);
  entity_3[entity_6-1]='';
  entity_6 = 97;
  strcpy(entity_0, entity_3);
}