void fun()
{
  int entity_2 = 41;
  char* entity_9;
  char* entity_7;
  char* entity_1;
  char entity_3[24] = "";
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'd', 24-1);
  entity_3[24-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_7, entity_3, 24*sizeof(char));
}