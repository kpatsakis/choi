void fun()
{
  int entity_7 = 66;
  int entity_5 = 6;
  char entity_4 = 'B';
  char entity_6[entity_5] = "";
  char* entity_2;
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'F', entity_5-1);
  entity_6[entity_5-1]='0';
  entity_5 = 43;
  memcpy(entity_2, entity_6, entity_5*sizeof(char));
}