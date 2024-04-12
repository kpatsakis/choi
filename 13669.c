void fun()
{
  int entity_5 = 42;
  char entity_3[entity_5] = "";
  char* entity_0;
  char entity_2[74] = "";
  memset(entity_3, 'm', entity_5-1);
  entity_3[entity_5-1]='0';
  memset(entity_2, 'j', 74-1);
  entity_2[74-1]='0';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[0]='0';
  entity_5 = 34;
  strcpy(entity_0, entity_3);
}