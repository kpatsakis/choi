void fun()
{
  int entity_7 = 57;
  int entity_8 = 13;
  int entity_1 = 34;
  char* entity_5;
  char* entity_6;
  char entity_4[11] = "";
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'F', 11-1);
  entity_4[11-1]='0';
  memcpy(entity_6, entity_4, 11*sizeof(char));
}