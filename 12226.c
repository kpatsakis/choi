void fun()
{
  int entity_4 = 27;
  int entity_0 = 75;
  char entity_3[entity_0] = "";
  char* entity_7;
  char* entity_2;
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'f', entity_0-1);
  entity_3[entity_0-1]='0';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_7, entity_3);
}