void fun()
{
  char* entity_2;
  char entity_1[62] = "";
  char* entity_8;
  char* entity_3;
  memset(entity_1, 'E', 62-1);
  entity_1[62-1]='0';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(9*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_3, entity_1, 62*sizeof(char));
}