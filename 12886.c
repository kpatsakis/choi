void fun()
{
  int entity_4 = 82;
  int entity_9 = 85;
  char* entity_7;
  char entity_3 = 'T';
  char entity_0[74] = "";
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'V', 74-1);
  entity_0[74-1]='0';
  strcpy(entity_7, entity_0);
}