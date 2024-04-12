void fun()
{
  int entity_3 = 62;
  int entity_6 = 19;
  char* entity_5;
  char entity_9[74] = "";
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'g', 74-1);
  entity_9[74-1]='0';
  strcpy(entity_5, entity_9);
}