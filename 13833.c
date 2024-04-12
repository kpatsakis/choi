void fun()
{
  int entity_6 = 52;
  entity_6 = 4;
  char entity_7[87] = "";
  char entity_9[14] = "";
  char* entity_3;
  memset(entity_9, 'Q', 14-1);
  entity_9[14-1]='0';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'C', 87-1);
  entity_7[87-1]='0';
  memcpy(entity_3, entity_7, 87*sizeof(char));
}