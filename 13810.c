void fun()
{
  int entity_2 = 48;
  entity_2 = 96;
  char entity_4[entity_2] = "";
  char* entity_5;
  char* entity_0;
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'Y', entity_2-1);
  entity_4[entity_2-1]='0';
  memcpy(entity_0, entity_4, entity_2*sizeof(char));
}