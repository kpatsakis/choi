void fun()
{
  int entity_2 = 97;
  entity_2 = 95;
  char entity_0 = 'R';
  char* entity_1;
  char entity_8[entity_2] = "";
  char* entity_3;
  entity_1 = (char*)malloc(52*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'n', entity_2-1);
  entity_8[entity_2-1]='0';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_1, entity_8, entity_2*sizeof(char));
}