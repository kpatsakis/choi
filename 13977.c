void fun()
{
  int entity_6 = 66;
  char entity_8[47] = "";
  char entity_1[entity_6] = "";
  char* entity_5;
  memset(entity_8, 'i', 47-1);
  entity_8[47-1]='0';
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[0]='0';
  memset(entity_1, 'f', entity_6-1);
  entity_1[entity_6-1]='0';
  entity_6 = 68;
  memcpy(entity_5, entity_1, entity_6*sizeof(char));
}