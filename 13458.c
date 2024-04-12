void fun()
{
  int entity_4 = 12;
  int entity_6 = 32;
  char* entity_3;
  char entity_7 = 'm';
  char entity_5[entity_4] = "";
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'F', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_4 = 90;
  memcpy(entity_3, entity_5, entity_4*sizeof(char));
}