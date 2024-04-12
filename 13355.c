void fun()
{
  int entity_9 = 70;
  entity_9 = 18;
  char* entity_2;
  char entity_7[88] = "";
  char* entity_5;
  char entity_3[70] = "";
  char entity_1[39] = "";
  memset(entity_1, 'o', 39-1);
  entity_1[39-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'f', 70-1);
  entity_3[70-1]='0';
  memset(entity_7, 'u', 88-1);
  entity_7[88-1]='0';
  memcpy(entity_2, entity_7, 88*sizeof(char));
}