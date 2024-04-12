void fun()
{
  char entity_9[78] = "";
  char entity_0[78] = "";
  char* entity_5;
  memset(entity_9, 'a', 78-1);
  entity_9[78-1]='0';
  memset(entity_0, 'N', 78-1);
  entity_0[78-1]='0';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}