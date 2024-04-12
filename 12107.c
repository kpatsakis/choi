void fun()
{
  int entity_0 = 99;
  int entity_2 = 23;
  char entity_7[entity_0] = "";
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 's', entity_0-1);
  entity_7[entity_0-1]='0';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}