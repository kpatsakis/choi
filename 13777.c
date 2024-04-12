void fun()
{
  int entity_0 = 4;
  entity_0 = 4;
  char entity_2[entity_0] = "";
  char* entity_8;
  char* entity_7;
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[0]='0';
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'o', entity_0-1);
  entity_2[entity_0-1]='0';
  strcpy(entity_7, entity_2);
}