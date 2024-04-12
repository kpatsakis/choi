void fun()
{
  int entity_1 = 78;
  char entity_3[94] = "";
  char entity_4[entity_1] = "";
  char* entity_0;
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'M', 94-1);
  entity_3[94-1]='0';
  memset(entity_4, 'w', entity_1-1);
  entity_4[entity_1-1]='0';
  strcpy(entity_0, entity_4);
}