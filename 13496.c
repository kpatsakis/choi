void fun()
{
  int entity_6 = 12;
  int entity_1 = 48;
  entity_1 = 97;
  char entity_5 = 'O';
  char* entity_3;
  char entity_9[35] = "";
  memset(entity_9, 'f', 35-1);
  entity_9[35-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, 35*sizeof(char));
}