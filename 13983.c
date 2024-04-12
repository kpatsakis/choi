void fun()
{
  int entity_6 = 95;
  char* entity_1;
  char entity_8[entity_6] = "";
  char* entity_2;
  memset(entity_8, 'C', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_2 = (char*)malloc(41*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[0]='0';
  entity_6 = 5;
  memcpy(entity_1, entity_8, entity_6*sizeof(char));
}