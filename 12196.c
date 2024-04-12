void fun()
{
  int entity_8 = 52;
  char* entity_4;
  char entity_2[entity_8] = "";
  char* entity_5;
  char entity_0 = 'o';
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'U', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_4 = (char*)malloc(70*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_5, entity_2, entity_8*sizeof(char));
}