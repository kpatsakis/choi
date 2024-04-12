void fun()
{
  int entity_4 = 30;
  entity_4 = 46;
  char* entity_1;
  char* entity_2;
  char entity_8[27] = "";
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'f', 27-1);
  entity_8[27-1]='0';
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_2, entity_8);
}