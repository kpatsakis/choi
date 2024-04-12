void fun()
{
  int entity_5 = 70;
  char* entity_7;
  char entity_3[95] = "";
  char entity_2[23] = "";
  memset(entity_2, 'l', 23-1);
  entity_2[23-1]='0';
  memset(entity_3, 'w', 95-1);
  entity_3[95-1]='0';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  entity_5 = 49;
  memcpy(entity_7, entity_2, 23*sizeof(char));
}