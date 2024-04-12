void fun()
{
  int entity_6 = 83;
  entity_6 = 83;
  char* entity_3;
  char* entity_7;
  char entity_9[entity_6] = "";
  char* entity_8;
  char entity_0[25] = "";
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'Z', 25-1);
  entity_0[25-1]='0';
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'R', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_3 = (char*)malloc(62*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}