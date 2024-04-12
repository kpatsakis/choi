void fun()
{
  int entity_3 = 32;
  char entity_4[29] = "";
  char* entity_7;
  char* entity_1;
  char* entity_6;
  char entity_9[62] = "";
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'j', 62-1);
  entity_9[62-1]='0';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[0]='0';
  memset(entity_4, 'V', 29-1);
  entity_4[29-1]='0';
  strcpy(entity_6, entity_9);
}