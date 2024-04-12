void fun()
{
  int entity_3 = 8;
  int entity_7 = 98;
  entity_3 = 1;
  char* entity_8;
  char* entity_2;
  char entity_5[entity_3] = "";
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'y', entity_3-1);
  entity_5[entity_3-1]='0';
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, entity_3*sizeof(char));
}