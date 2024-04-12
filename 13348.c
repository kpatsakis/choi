void fun()
{
  int entity_6 = 75;
  char entity_5[entity_6] = "";
  char entity_1 = 'G';
  char* entity_7;
  entity_7 = (char*)malloc(82*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'M', entity_6-1);
  entity_5[entity_6-1]='0';
  entity_6 = 35;
  memcpy(entity_7, entity_5, entity_6*sizeof(char));
}