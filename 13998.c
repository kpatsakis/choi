void fun()
{
  int entity_5 = 80;
  entity_5 = 18;
  char entity_2[entity_5] = "";
  char* entity_1;
  char entity_3[44] = "";
  memset(entity_2, 'O', entity_5-1);
  entity_2[entity_5-1]='0';
  memset(entity_3, 't', 44-1);
  entity_3[44-1]='0';
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_2, entity_5*sizeof(char));
}