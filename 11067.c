void fun()
{
  int entity_0 = 48;
  int entity_1 = 72;
  char entity_2[100] = "";
  char* entity_7;
  char* entity_6;
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'p', 100-1);
  entity_2[100-1]='0';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_6, entity_2);
}