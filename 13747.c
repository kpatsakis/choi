void fun()
{
  int entity_7 = 76;
  entity_7 = 67;
  char entity_4[68] = "";
  char* entity_8;
  char entity_2 = 'm';
  char* entity_9;
  char entity_6[18] = "";
  memset(entity_4, 'o', 68-1);
  entity_4[68-1]='0';
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'j', 18-1);
  entity_6[18-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_4, 68*sizeof(char));
}