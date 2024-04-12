void fun()
{
  int entity_2 = 17;
  char* entity_7;
  char entity_8[entity_2] = "";
  char* entity_4;
  entity_4 = (char*)malloc(82*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'P', entity_2-1);
  entity_8[entity_2-1]='0';
  entity_7 = (char*)malloc(68*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_4, entity_8);
}