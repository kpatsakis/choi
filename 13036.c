void fun()
{
  int entity_1 = 10;
  char* entity_6;
  char entity_5[entity_1] = "";
  char entity_2 = 'j';
  char entity_7 = 'N';
  memset(entity_5, 'X', entity_1-1);
  entity_5[entity_1-1]='0';
  entity_6 = (char*)malloc(61*sizeof(char));
  entity_6[0]='0';
  entity_1 = 90;
  memcpy(entity_6, entity_5, entity_1*sizeof(char));
}